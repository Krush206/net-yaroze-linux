/* Alias analysis for GNU C
   Copyright (C) 1997, 1998 Free Software Foundation, Inc.
   Contributed by John Carr (jfc@mit.edu).

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "expr.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "flags.h"
#include "toplev.h"

static rtx canon_rtx			PROTO((rtx));
static int rtx_equal_for_memref_p	PROTO((rtx, rtx));
static rtx find_symbolic_term		PROTO((rtx));
static int memrefs_conflict_p		PROTO((int, rtx, int, rtx,
					       HOST_WIDE_INT));
static void record_set			PROTO((rtx, rtx));
static rtx find_base_term		PROTO((rtx));
static int base_alias_check		PROTO((rtx, rtx));
static rtx find_base_value		PROTO((rtx));

/* Set up all info needed to perform alias analysis on memory references.  */

#define SIZE_FOR_MODE(X) (GET_MODE_SIZE (GET_MODE (X)))

/* Perform a basic sanity check.  Namely, that there are	
   no alias sets if we're not doing strict aliasing.  This helps     
   to catch bugs whereby someone uses PUT_CODE, but doesn't clear
   MEM_ALIAS_SET, or where a MEM is allocated in some way other
   than by the use of gen_rtx_MEM, and the MEM_ALIAS_SET is not
   cleared.  */			
#ifdef ENABLE_CHECKING	
#define CHECK_ALIAS_SETS_FOR_CONSISTENCY(MEM1, MEM2)	\
  (!flag_strict_aliasing				\
   && (MEM_ALIAS_SET (MEM1) || MEM_ALIAS_SET (MEM2))	\
   ? (abort (), 0) : 0)
#else 
#define CHECK_ALIAS_SETS_FOR_CONSISTENCY(MEM1, MEM2) ((void)0)
#endif

/* Returns nonzero if MEM1 and MEM2 do not alias because they are in
   different alias sets.  */
#define DIFFERENT_ALIAS_SETS_P(MEM1, MEM2)		\
  (CHECK_ALIAS_SETS_FOR_CONSISTENCY(MEM1, MEM2),	\
   MEM_ALIAS_SET (MEM1) && MEM_ALIAS_SET (MEM2)		\
   && MEM_ALIAS_SET (MEM1) != MEM_ALIAS_SET (MEM2))

/* Cap the number of passes we make over the insns propagating alias
   information through set chains.

   10 is a completely arbitrary choice.  */
#define MAX_ALIAS_LOOP_PASSES 10
   
/* reg_base_value[N] gives an address to which register N is related.
   If all sets after the first add or subtract to the current value
   or otherwise modify it so it does not point to a different top level
   object, reg_base_value[N] is equal to the address part of the source
   of the first set.

   A base address can be an ADDRESS, SYMBOL_REF, or LABEL_REF.  ADDRESS
   expressions represent certain special values: function arguments and
   the stack, frame, and argument pointers.  The contents of an address
   expression are not used (but they are descriptive for debugging);
   only the address and mode matter.  Pointer equality, not rtx_equal_p,
   determines whether two ADDRESS expressions refer to the same base
   address.  The mode determines whether it is a function argument or
   other special value. */

rtx *reg_base_value;
rtx *new_reg_base_value;
unsigned int reg_base_value_size;	/* size of reg_base_value array */
#define REG_BASE_VALUE(X) \
	(REGNO (X) < reg_base_value_size ? reg_base_value[REGNO (X)] : 0)

/* Vector of known invariant relationships between registers.  Set in
   loop unrolling.  Indexed by register number, if nonzero the value
   is an expression describing this register in terms of another.

   The length of this array is REG_BASE_VALUE_SIZE.

   Because this array contains only pseudo registers it has no effect
   after reload.  */
static rtx *alias_invariant;

/* Vector indexed by N giving the initial (unchanging) value known
   for pseudo-register N.  */
rtx *reg_known_value;

/* Indicates number of valid entries in reg_known_value.  */
static int reg_known_value_size;

/* Vector recording for each reg_known_value whether it is due to a
   REG_EQUIV note.  Future passes (viz., reload) may replace the
   pseudo with the equivalent expression and so we account for the
   dependences that would be introduced if that happens. */
/* ??? This is a problem only on the Convex.  The REG_EQUIV notes created in
   assign_parms mention the arg pointer, and there are explicit insns in the
   RTL that modify the arg pointer.  Thus we must ensure that such insns don't
   get scheduled across each other because that would invalidate the REG_EQUIV
   notes.  One could argue that the REG_EQUIV notes are wrong, but solving
   the problem in the scheduler will likely give better code, so we do it
   here.  */
char *reg_known_equiv_p;

/* True when scanning insns from the start of the rtl to the
   NOTE_INSN_FUNCTION_BEG note.  */

static int copying_arguments;

/* Inside SRC, the source of a SET, find a base address.  */

static rtx
find_base_value (src)
     register rtx src;
{
  switch (GET_CODE (src))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      return src;

    case REG:
      /* At the start of a function argument registers have known base
	 values which may be lost later.  Returning an ADDRESS
	 expression here allows optimization based on argument values
	 even when the argument registers are used for other purposes.  */
      if (REGNO (src) < FIRST_PSEUDO_REGISTER && copying_arguments)
	return new_reg_base_value[REGNO (src)];

      /* If a pseudo has a known base value, return it.  Do not do this
	 for hard regs since it can result in a circular dependency
	 chain for registers which have values at function entry.

	 The test above is not sufficient because the scheduler may move
	 a copy out of an arg reg past the NOTE_INSN_FUNCTION_BEGIN.  */
      if (REGNO (src) >= FIRST_PSEUDO_REGISTER
	  && REGNO (src) < reg_base_value_size
	  && reg_base_value[REGNO (src)])
	return reg_base_value[REGNO (src)];

      return src;

    case MEM:
      /* Check for an argument passed in memory.  Only record in the
	 copying-arguments block; it is too hard to track changes
	 otherwise.  */
      if (copying_arguments
	  && (XEXP (src, 0) == arg_pointer_rtx
	      || (GET_CODE (XEXP (src, 0)) == PLUS
		  && XEXP (XEXP (src, 0), 0) == arg_pointer_rtx)))
	return gen_rtx_ADDRESS (VOIDmode, src);
      return 0;

    case CONST:
      src = XEXP (src, 0);
      if (GET_CODE (src) != PLUS && GET_CODE (src) != MINUS)
	break;
      /* fall through */

    case PLUS:
    case MINUS:
      {
	rtx temp, src_0 = XEXP (src, 0), src_1 = XEXP (src, 1);

	/* If either operand is a REG, then see if we already have
	   a known value for it.  */
	if (GET_CODE (src_0) == REG)
	  {
	    temp = find_base_value (src_0);
	    if (temp)
	      src_0 = temp;
	  }

	if (GET_CODE (src_1) == REG)
	  {
	    temp = find_base_value (src_1);
	    if (temp)
	      src_1 = temp;
	  }

	/* Guess which operand is the base address.

	   If either operand is a symbol, then it is the base.  If
	   either operand is a CONST_INT, then the other is the base.  */

	if (GET_CODE (src_1) == CONST_INT
	    || GET_CODE (src_0) == SYMBOL_REF
	    || GET_CODE (src_0) == LABEL_REF
	    || GET_CODE (src_0) == CONST)
	  return find_base_value (src_0);

	if (GET_CODE (src_0) == CONST_INT
	    || GET_CODE (src_1) == SYMBOL_REF
	    || GET_CODE (src_1) == LABEL_REF
	    || GET_CODE (src_1) == CONST)
	  return find_base_value (src_1);

	/* This might not be necessary anymore. 

	   If either operand is a REG that is a known pointer, then it
	   is the base.  */
	if (GET_CODE (src_0) == REG && REGNO_POINTER_FLAG (REGNO (src_0)))
	  return find_base_value (src_0);

	if (GET_CODE (src_1) == REG && REGNO_POINTER_FLAG (REGNO (src_1)))
	  return find_base_value (src_1);

	return 0;
      }

    case LO_SUM:
      /* The standard form is (lo_sum reg sym) so look only at the
	 second operand.  */
      return find_base_value (XEXP (src, 1));

    case AND:
      /* If the second operand is constant set the base
	 address to the first operand. */
      if (GET_CODE (XEXP (src, 1)) == CONST_INT && INTVAL (XEXP (src, 1)) != 0)
	return find_base_value (XEXP (src, 0));
      return 0;

    case ZERO_EXTEND:
    case SIGN_EXTEND:	/* used for NT/Alpha pointers */
    case HIGH:
      return find_base_value (XEXP (src, 0));

    default:
      break;
    }

  return 0;
}

/* Called from init_alias_analysis indirectly through note_stores.  */

/* while scanning insns to find base values, reg_seen[N] is nonzero if
   register N has been set in this function.  */
static char *reg_seen;

/* Addresses which are known not to alias anything else are identified
   by a unique integer.  */
static int unique_id;

static void
record_set (dest, set)
     rtx dest, set;
{
  register int regno;
  rtx src;

  if (GET_CODE (dest) != REG)
    return;

  regno = REGNO (dest);

  if (set)
    {
      /* A CLOBBER wipes out any old value but does not prevent a previously
	 unset register from acquiring a base address (i.e. reg_seen is not
	 set).  */
      if (GET_CODE (set) == CLOBBER)
	{
	  new_reg_base_value[regno] = 0;
	  return;
	}
      src = SET_SRC (set);
    }
  else
    {
      if (reg_seen[regno])
	{
	  new_reg_base_value[regno] = 0;
	  return;
	}
      reg_seen[regno] = 1;
      new_reg_base_value[regno] = gen_rtx_ADDRESS (Pmode,
						   GEN_INT (unique_id++));
      return;
    }

  /* This is not the first set.  If the new value is not related to the
     old value, forget the base value. Note that the following code is
     not detected:
     extern int x, y;  int *p = &x; p += (&y-&x);
     ANSI C does not allow computing the difference of addresses
     of distinct top level objects.  */
  if (new_reg_base_value[regno])
    switch (GET_CODE (src))
      {
      case LO_SUM:
      case PLUS:
      case MINUS:
	if (XEXP (src, 0) != dest && XEXP (src, 1) != dest)
	  new_reg_base_value[regno] = 0;
	break;
      case AND:
	if (XEXP (src, 0) != dest || GET_CODE (XEXP (src, 1)) != CONST_INT)
	  new_reg_base_value[regno] = 0;
	break;
      default:
	new_reg_base_value[regno] = 0;
	break;
      }
  /* If this is the first set of a register, record the value.  */
  else if ((regno >= FIRST_PSEUDO_REGISTER || ! fixed_regs[regno])
	   && ! reg_seen[regno] && new_reg_base_value[regno] == 0)
    new_reg_base_value[regno] = find_base_value (src);

  reg_seen[regno] = 1;
}

/* Called from loop optimization when a new pseudo-register is created.  */
void
record_base_value (regno, val, invariant)
     int regno;
     rtx val;
     int invariant;
{
  if (regno >= reg_base_value_size)
    return;

  /* If INVARIANT is true then this value also describes an invariant
     relationship which can be used to deduce that two registers with
     unknown values are different.  */
  if (invariant && alias_invariant)
    alias_invariant[regno] = val;

  if (GET_CODE (val) == REG)
    {
      if (REGNO (val) < reg_base_value_size)
	{
	  reg_base_value[regno] = reg_base_value[REGNO (val)];
	}
      return;
    }
  reg_base_value[regno] = find_base_value (val);
}

static rtx
canon_rtx (x)
     rtx x;
{
  /* Recursively look for equivalences.  */
  if (GET_CODE (x) == REG && REGNO (x) >= FIRST_PSEUDO_REGISTER
      && REGNO (x) < reg_known_value_size)
    return reg_known_value[REGNO (x)] == x
      ? x : canon_rtx (reg_known_value[REGNO (x)]);
  else if (GET_CODE (x) == PLUS)
    {
      rtx x0 = canon_rtx (XEXP (x, 0));
      rtx x1 = canon_rtx (XEXP (x, 1));

      if (x0 != XEXP (x, 0) || x1 != XEXP (x, 1))
	{
	  /* We can tolerate LO_SUMs being offset here; these
	     rtl are used for nothing other than comparisons.  */
	  if (GET_CODE (x0) == CONST_INT)
	    return plus_constant_for_output (x1, INTVAL (x0));
	  else if (GET_CODE (x1) == CONST_INT)
	    return plus_constant_for_output (x0, INTVAL (x1));
	  return gen_rtx_PLUS (GET_MODE (x), x0, x1);
	}
    }
  /* This gives us much better alias analysis when called from
     the loop optimizer.   Note we want to leave the original
     MEM alone, but need to return the canonicalized MEM with
     all the flags with their original values.  */
  else if (GET_CODE (x) == MEM)
    {
      rtx addr = canon_rtx (XEXP (x, 0));
      if (addr != XEXP (x, 0))
	{
	  rtx new = gen_rtx_MEM (GET_MODE (x), addr);
	  MEM_VOLATILE_P (new) = MEM_VOLATILE_P (x);
	  RTX_UNCHANGING_P (new) = RTX_UNCHANGING_P (x);
	  MEM_IN_STRUCT_P (new) = MEM_IN_STRUCT_P (x);
	  MEM_ALIAS_SET (new) = MEM_ALIAS_SET (x);
	  x = new;
	}
    }
  return x;
}

/* Return 1 if X and Y are identical-looking rtx's.

   We use the data in reg_known_value above to see if two registers with
   different numbers are, in fact, equivalent.  */

static int
rtx_equal_for_memref_p (x, y)
     rtx x, y;
{
  register int i;
  register int j;
  register enum rtx_code code;
  register char *fmt;

  if (x == 0 && y == 0)
    return 1;
  if (x == 0 || y == 0)
    return 0;
  x = canon_rtx (x);
  y = canon_rtx (y);

  if (x == y)
    return 1;

  code = GET_CODE (x);
  /* Rtx's of different codes cannot be equal.  */
  if (code != GET_CODE (y))
    return 0;

  /* (MULT:SI x y) and (MULT:HI x y) are NOT equivalent.
     (REG:SI x) and (REG:HI x) are NOT equivalent.  */

  if (GET_MODE (x) != GET_MODE (y))
    return 0;

  /* REG, LABEL_REF, and SYMBOL_REF can be compared nonrecursively.  */

  if (code == REG)
    return REGNO (x) == REGNO (y);
  if (code == LABEL_REF)
    return XEXP (x, 0) == XEXP (y, 0);
  if (code == SYMBOL_REF)
    return XSTR (x, 0) == XSTR (y, 0);
  if (code == CONST_INT)
    return INTVAL (x) == INTVAL (y);
  if (code == ADDRESSOF)
    return REGNO (XEXP (x, 0)) == REGNO (XEXP (y, 0)) && XINT (x, 1) == XINT (y, 1);

  /* For commutative operations, the RTX match if the operand match in any
     order.  Also handle the simple binary and unary cases without a loop.  */
  if (code == EQ || code == NE || GET_RTX_CLASS (code) == 'c')
    return ((rtx_equal_for_memref_p (XEXP (x, 0), XEXP (y, 0))
	     && rtx_equal_for_memref_p (XEXP (x, 1), XEXP (y, 1)))
	    || (rtx_equal_for_memref_p (XEXP (x, 0), XEXP (y, 1))
		&& rtx_equal_for_memref_p (XEXP (x, 1), XEXP (y, 0))));
  else if (GET_RTX_CLASS (code) == '<' || GET_RTX_CLASS (code) == '2')
    return (rtx_equal_for_memref_p (XEXP (x, 0), XEXP (y, 0))
	    && rtx_equal_for_memref_p (XEXP (x, 1), XEXP (y, 1)));
  else if (GET_RTX_CLASS (code) == '1')
    return rtx_equal_for_memref_p (XEXP (x, 0), XEXP (y, 0));

  /* Compare the elements.  If any pair of corresponding elements
     fail to match, return 0 for the whole things.

     Limit cases to types which actually appear in addresses.  */

  fmt = GET_RTX_FORMAT (code);
  for (i = GET_RTX_LENGTH (code) - 1; i >= 0; i--)
    {
      switch (fmt[i])
	{
	case 'i':
	  if (XINT (x, i) != XINT (y, i))
	    return 0;
	  break;

	case 'E':
	  /* Two vectors must have the same length.  */
	  if (XVECLEN (x, i) != XVECLEN (y, i))
	    return 0;

	  /* And the corresponding elements must match.  */
	  for (j = 0; j < XVECLEN (x, i); j++)
	    if (rtx_equal_for_memref_p (XVECEXP (x, i, j), XVECEXP (y, i, j)) == 0)
	      return 0;
	  break;

	case 'e':
	  if (rtx_equal_for_memref_p (XEXP (x, i), XEXP (y, i)) == 0)
	    return 0;
	  break;

	/* This can happen for an asm which clobbers memory.  */
	case '0':
	  break;

	  /* It is believed that rtx's at this level will never
	     contain anything but integers and other rtx's,
	     except for within LABEL_REFs and SYMBOL_REFs.  */
	default:
	  abort ();
	}
    }
  return 1;
}

/* Given an rtx X, find a SYMBOL_REF or LABEL_REF within
   X and return it, or return 0 if none found.  */

static rtx
find_symbolic_term (x)
     rtx x;
{
  register int i;
  register enum rtx_code code;
  register char *fmt;

  code = GET_CODE (x);
  if (code == SYMBOL_REF || code == LABEL_REF)
    return x;
  if (GET_RTX_CLASS (code) == 'o')
    return 0;

  fmt = GET_RTX_FORMAT (code);
  for (i = GET_RTX_LENGTH (code) - 1; i >= 0; i--)
    {
      rtx t;

      if (fmt[i] == 'e')
	{
	  t = find_symbolic_term (XEXP (x, i));
	  if (t != 0)
	    return t;
	}
      else if (fmt[i] == 'E')
	break;
    }
  return 0;
}

static rtx
find_base_term (x)
     register rtx x;
{
  switch (GET_CODE (x))
    {
    case REG:
      return REG_BASE_VALUE (x);

    case ZERO_EXTEND:
    case SIGN_EXTEND:	/* Used for Alpha/NT pointers */
    case HIGH:
    case PRE_INC:
    case PRE_DEC:
    case POST_INC:
    case POST_DEC:
      return find_base_term (XEXP (x, 0));

    case CONST:
      x = XEXP (x, 0);
      if (GET_CODE (x) != PLUS && GET_CODE (x) != MINUS)
	return 0;
      /* fall through */
    case LO_SUM:
    case PLUS:
    case MINUS:
      {
	rtx tmp = find_base_term (XEXP (x, 0));
	if (tmp)
	  return tmp;
	return find_base_term (XEXP (x, 1));
      }

    case AND:
      if (GET_CODE (XEXP (x, 0)) == REG && GET_CODE (XEXP (x, 1)) == CONST_INT)
	return REG_BASE_VALUE (XEXP (x, 0));
      return 0;

    case SYMBOL_REF:
    case LABEL_REF:
      return x;

    default:
      return 0;
    }
}

/* Return 0 if the addresses X and Y are known to point to different
   objects, 1 if they might be pointers to the same object.  */

static int
base_alias_check (x, y)
     rtx x, y;
{
  rtx x_base = find_base_term (x);
  rtx y_base = find_base_term (y);

  /* If the address itself has no known base see if a known equivalent
     value has one.  If either address still has no known base, nothing
     is known about aliasing.  */
  if (x_base == 0)
    {
      rtx x_c;
      if (! flag_expensive_optimizations || (x_c = canon_rtx (x)) == x)
	return 1;
      x_base = find_base_term (x_c);
      if (x_base == 0)
	return 1;
    }

  if (y_base == 0)
    {
      rtx y_c;
      if (! flag_expensive_optimizations || (y_c = canon_rtx (y)) == y)
	return 1;
      y_base = find_base_term (y_c);
      if (y_base == 0)
	return 1;
    }

  /* If the base addresses are equal nothing is known about aliasing.  */
  if (rtx_equal_p (x_base, y_base))
    return 1;

  /* The base addresses of the read and write are different
     expressions.  If they are both symbols and they are not accessed
     via AND, there is no conflict.  */
  /* XXX: We can bring knowledge of object alignment and offset into 
     play here.  For example, on alpha, "char a, b;" can alias one
     another, though "char a; long b;" cannot.  Similarly, offsets
     into strutures may be brought into play.  Given "char a, b[40];",
     a and b[1] may overlap, but a and b[20] do not.  */
  if (GET_CODE (x_base) != ADDRESS && GET_CODE (y_base) != ADDRESS)
    {
      return GET_CODE (x) == AND || GET_CODE (y) == AND;
    }

  /* If one address is a stack reference there can be no alias:
     stack references using different base registers do not alias,
     a stack reference can not alias a parameter, and a stack reference
     can not alias a global.  */
  if ((GET_CODE (x_base) == ADDRESS && GET_MODE (x_base) == Pmode)
      || (GET_CODE (y_base) == ADDRESS && GET_MODE (y_base) == Pmode))
    return 0;

  if (! flag_argument_noalias)
    return 1;

  if (flag_argument_noalias > 1)
    return 0;

  /* Weak noalias assertion (arguments are distinct, but may match globals). */
  return ! (GET_MODE (x_base) == VOIDmode && GET_MODE (y_base) == VOIDmode);
}

/* Return nonzero if X and Y (memory addresses) could reference the
   same location in memory.  C is an offset accumulator.  When
   C is nonzero, we are testing aliases between X and Y + C.
   XSIZE is the size in bytes of the X reference,
   similarly YSIZE is the size in bytes for Y.

   If XSIZE or YSIZE is zero, we do not know the amount of memory being
   referenced (the reference was BLKmode), so make the most pessimistic
   assumptions.

   If XSIZE or YSIZE is negative, we may access memory outside the object
   being referenced as a side effect.  This can happen when using AND to
   align memory references, as is done on the Alpha.

   Nice to notice that varying addresses cannot conflict with fp if no
   local variables had their addresses taken, but that's too hard now.  */


static int
memrefs_conflict_p (xsize, x, ysize, y, c)
     register rtx x, y;
     int xsize, ysize;
     HOST_WIDE_INT c;
{
  if (GET_CODE (x) == HIGH)
    x = XEXP (x, 0);
  else if (GET_CODE (x) == LO_SUM)
    x = XEXP (x, 1);
  else
    x = canon_rtx (x);
  if (GET_CODE (y) == HIGH)
    y = XEXP (y, 0);
  else if (GET_CODE (y) == LO_SUM)
    y = XEXP (y, 1);
  else
    y = canon_rtx (y);

  if (rtx_equal_for_memref_p (x, y))
    {
      if (xsize <= 0 || ysize <= 0)
	return 1;
      if (c >= 0 && xsize > c)
	return 1;
      if (c < 0 && ysize+c > 0)
	return 1;
      return 0;
    }

  /* This code used to check for conflicts involving stack references and
     globals but the base address alias code now handles these cases.  */

  if (GET_CODE (x) == PLUS)
    {
      /* The fact that X is canonicalized means that this
	 PLUS rtx is canonicalized.  */
      rtx x0 = XEXP (x, 0);
      rtx x1 = XEXP (x, 1);

      if (GET_CODE (y) == PLUS)
	{
	  /* The fact that Y is canonicalized means that this
	     PLUS rtx is canonicalized.  */
	  rtx y0 = XEXP (y, 0);
	  rtx y1 = XEXP (y, 1);

	  if (rtx_equal_for_memref_p (x1, y1))
	    return memrefs_conflict_p (xsize, x0, ysize, y0, c);
	  if (rtx_equal_for_memref_p (x0, y0))
	    return memrefs_conflict_p (xsize, x1, ysize, y1, c);
	  if (GET_CODE (x1) == CONST_INT)
	    if (GET_CODE (y1) == CONST_INT)
	      return memrefs_conflict_p (xsize, x0, ysize, y0,
					 c - INTVAL (x1) + INTVAL (y1));
	    else
	      return memrefs_conflict_p (xsize, x0, ysize, y, c - INTVAL (x1));
	  else if (GET_CODE (y1) == CONST_INT)
	    return memrefs_conflict_p (xsize, x, ysize, y0, c + INTVAL (y1));

	  return 1;
	}
      else if (GET_CODE (x1) == CONST_INT)
	return memrefs_conflict_p (xsize, x0, ysize, y, c - INTVAL (x1));
    }
  else if (GET_CODE (y) == PLUS)
    {
      /* The fact that Y is canonicalized means that this
	 PLUS rtx is canonicalized.  */
      rtx y0 = XEXP (y, 0);
      rtx y1 = XEXP (y, 1);

      if (GET_CODE (y1) == CONST_INT)
	return memrefs_conflict_p (xsize, x, ysize, y0, c + INTVAL (y1));
      else
	return 1;
    }

  if (GET_CODE (x) == GET_CODE (y))
    switch (GET_CODE (x))
      {
      case MULT:
	{
	  /* Handle cases where we expect the second operands to be the
	     same, and check only whether the first operand would conflict
	     or not.  */
	  rtx x0, y0;
	  rtx x1 = canon_rtx (XEXP (x, 1));
	  rtx y1 = canon_rtx (XEXP (y, 1));
	  if (! rtx_equal_for_memref_p (x1, y1))
	    return 1;
	  x0 = canon_rtx (XEXP (x, 0));
	  y0 = canon_rtx (XEXP (y, 0));
	  if (rtx_equal_for_memref_p (x0, y0))
	    return (xsize == 0 || ysize == 0
		    || (c >= 0 && xsize > c) || (c < 0 && ysize+c > 0));

	  /* Can't properly adjust our sizes.  */
	  if (GET_CODE (x1) != CONST_INT)
	    return 1;
	  xsize /= INTVAL (x1);
	  ysize /= INTVAL (x1);
	  c /= INTVAL (x1);
	  return memrefs_conflict_p (xsize, x0, ysize, y0, c);
	}

      case REG:
	/* Are these registers known not to be equal?  */
	if (alias_invariant)
	  {
	    int r_x = REGNO (x), r_y = REGNO (y);
	    rtx i_x, i_y;	/* invariant relationships of X and Y */

	    i_x = r_x >= reg_base_value_size ? 0 : alias_invariant[r_x];
	    i_y = r_y >= reg_base_value_size ? 0 : alias_invariant[r_y];

	    if (i_x == 0 && i_y == 0)
	      break;

	    if (! memrefs_conflict_p (xsize, i_x ? i_x : x,
				      ysize, i_y ? i_y : y, c))
	      return 0;
	  }
	break;

      default:
	break;
      }

  /* Treat an access through an AND (e.g. a subword access on an Alpha)
     as an access with indeterminate size.
     ??? Could instead convert an n byte reference at (and x y) to an
     n-y byte reference at (plus x y). */
  if (GET_CODE (x) == AND && GET_CODE (XEXP (x, 1)) == CONST_INT)
    return memrefs_conflict_p (-1, XEXP (x, 0), ysize, y, c);
  if (GET_CODE (y) == AND && GET_CODE (XEXP (y, 1)) == CONST_INT)
    {
      /* XXX: If we are indexing far enough into the array/structure, we
	 may yet be able to determine that we can not overlap.  But we 
	 also need to that we are far enough from the end not to overlap
	 a following reference, so we do nothing for now.  */
      return memrefs_conflict_p (xsize, x, -1, XEXP (y, 0), c);
    }

  if (CONSTANT_P (x))
    {
      if (GET_CODE (x) == CONST_INT && GET_CODE (y) == CONST_INT)
	{
	  c += (INTVAL (y) - INTVAL (x));
	  return (xsize <= 0 || ysize <= 0
		  || (c >= 0 && xsize > c) || (c < 0 && ysize+c > 0));
	}

      if (GET_CODE (x) == CONST)
	{
	  if (GET_CODE (y) == CONST)
	    return memrefs_conflict_p (xsize, canon_rtx (XEXP (x, 0)),
				       ysize, canon_rtx (XEXP (y, 0)), c);
	  else
	    return memrefs_conflict_p (xsize, canon_rtx (XEXP (x, 0)),
				       ysize, y, c);
	}
      if (GET_CODE (y) == CONST)
	return memrefs_conflict_p (xsize, x, ysize,
				   canon_rtx (XEXP (y, 0)), c);

      if (CONSTANT_P (y))
	return (xsize < 0 || ysize < 0
		|| (rtx_equal_for_memref_p (x, y)
		    && (xsize == 0 || ysize == 0
		        || (c >= 0 && xsize > c) || (c < 0 && ysize+c > 0))));

      return 1;
    }
  return 1;
}

/* Functions to compute memory dependencies.

   Since we process the insns in execution order, we can build tables
   to keep track of what registers are fixed (and not aliased), what registers
   are varying in known ways, and what registers are varying in unknown
   ways.

   If both memory references are volatile, then there must always be a
   dependence between the two references, since their order can not be
   changed.  A volatile and non-volatile reference can be interchanged
   though. 

   A MEM_IN_STRUCT reference at a non-QImode non-AND varying address can never
   conflict with a non-MEM_IN_STRUCT reference at a fixed address.   We must
   allow QImode aliasing because the ANSI C standard allows character
   pointers to alias anything.  We are assuming that characters are
   always QImode here.  We also must allow AND addresses, because they may
   generate accesses outside the object being referenced.  This is used to
   generate aligned addresses from unaligned addresses, for instance, the
   alpha storeqi_unaligned pattern.  */

/* Read dependence: X is read after read in MEM takes place.  There can
   only be a dependence here if both reads are volatile.  */

int
read_dependence (mem, x)
     rtx mem;
     rtx x;
{
  return MEM_VOLATILE_P (x) && MEM_VOLATILE_P (mem);
}

/* True dependence: X is read after store in MEM takes place.  */

int
true_dependence (mem, mem_mode, x, varies)
     rtx mem;
     enum machine_mode mem_mode;
     rtx x;
     int (*varies) PROTO((rtx));
{
  register rtx x_addr, mem_addr;

  if (MEM_VOLATILE_P (x) && MEM_VOLATILE_P (mem))
    return 1;

  if (DIFFERENT_ALIAS_SETS_P (x, mem))
    return 0;

  /* If X is an unchanging read, then it can't possibly conflict with any
     non-unchanging store.  It may conflict with an unchanging write though,
     because there may be a single store to this address to initialize it.
     Just fall through to the code below to resolve the case where we have
     both an unchanging read and an unchanging write.  This won't handle all
     cases optimally, but the possible performance loss should be
     negligible.  */
  if (RTX_UNCHANGING_P (x) && ! RTX_UNCHANGING_P (mem))
    return 0;

  if (! base_alias_check (XEXP (x, 0), XEXP (mem, 0)))
    return 0;

  x_addr = canon_rtx (XEXP (x, 0));
  mem_addr = canon_rtx (XEXP (mem, 0));

  if (mem_mode == VOIDmode)
    mem_mode = GET_MODE (mem);

  if (! memrefs_conflict_p (GET_MODE_SIZE (mem_mode), mem_addr,
			    SIZE_FOR_MODE (x), x_addr, 0))
    return 0;

  /* If both references are struct references, or both are not, nothing
     is known about aliasing.

     If either reference is QImode or BLKmode, ANSI C permits aliasing.

     If both addresses are constant, or both are not, nothing is known
     about aliasing.  */
  if (MEM_IN_STRUCT_P (x) == MEM_IN_STRUCT_P (mem)
      || mem_mode == QImode || mem_mode == BLKmode
      || GET_MODE (x) == QImode || GET_MODE (x) == BLKmode
      || GET_CODE (x_addr) == AND || GET_CODE (mem_addr) == AND
      || varies (x_addr) == varies (mem_addr))
    return 1;

  /* One memory reference is to a constant address, one is not.
     One is to a structure, the other is not.

     If either memory reference is a variable structure the other is a
     fixed scalar and there is no aliasing.  */

  /* Disabled by default for egcs 1.1.x as alias analysis isn't good
     enough yet to discover all cases where this doesn't apply.  */
  if (flag_structure_noalias)
    {
      if ((MEM_IN_STRUCT_P (mem) && varies (mem_addr))
	  || (MEM_IN_STRUCT_P (x) && varies (x_addr)))
	return 0;
    }

  return 1;
}

/* Anti dependence: X is written after read in MEM takes place.  */

int
anti_dependence (mem, x)
     rtx mem;
     rtx x;
{
  rtx x_addr, mem_addr;

  if (MEM_VOLATILE_P (x) && MEM_VOLATILE_P (mem))
    return 1;

  /* If MEM is an unchanging read, then it can't possibly conflict with
     the store to X, because there is at most one store to MEM, and it must
     have occurred somewhere before MEM.  */
  if (RTX_UNCHANGING_P (mem))
    return 0;

  if (! base_alias_check (XEXP (x, 0), XEXP (mem, 0)))
    return 0;

  x = canon_rtx (x);
  mem = canon_rtx (mem);

  if (DIFFERENT_ALIAS_SETS_P (x, mem))
    return 0;

  x_addr = XEXP (x, 0);
  mem_addr = XEXP (mem, 0);

  return (memrefs_conflict_p (SIZE_FOR_MODE (mem), mem_addr,
			      SIZE_FOR_MODE (x), x_addr, 0)
	  && ! (MEM_IN_STRUCT_P (mem) && rtx_addr_varies_p (mem)
		&& GET_MODE (mem) != QImode
		&& GET_CODE (mem_addr) != AND
		&& ! MEM_IN_STRUCT_P (x) && ! rtx_addr_varies_p (x))
	  && ! (MEM_IN_STRUCT_P (x) && rtx_addr_varies_p (x)
		&& GET_MODE (x) != QImode
		&& GET_CODE (x_addr) != AND
		&& ! MEM_IN_STRUCT_P (mem) && ! rtx_addr_varies_p (mem)));
}

/* Output dependence: X is written after store in MEM takes place.  */

int
output_dependence (mem, x)
     register rtx mem;
     register rtx x;
{
  if (MEM_VOLATILE_P (x) && MEM_VOLATILE_P (mem))
    return 1;

  if (! base_alias_check (XEXP (x, 0), XEXP (mem, 0)))
    return 0;

  x = canon_rtx (x);
  mem = canon_rtx (mem);

  if (DIFFERENT_ALIAS_SETS_P (x, mem))
    return 0;

  return (memrefs_conflict_p (SIZE_FOR_MODE (mem), XEXP (mem, 0),
			      SIZE_FOR_MODE (x), XEXP (x, 0), 0)
	  && ! (MEM_IN_STRUCT_P (mem) && rtx_addr_varies_p (mem)
		&& GET_MODE (mem) != QImode
		&& GET_CODE (XEXP (mem, 0)) != AND
		&& ! MEM_IN_STRUCT_P (x) && ! rtx_addr_varies_p (x))
	  && ! (MEM_IN_STRUCT_P (x) && rtx_addr_varies_p (x)
		&& GET_MODE (x) != QImode
		&& GET_CODE (XEXP (x, 0)) != AND
		&& ! MEM_IN_STRUCT_P (mem) && ! rtx_addr_varies_p (mem)));
}


static HARD_REG_SET argument_registers;

void
init_alias_once ()
{
  register int i;

#ifndef OUTGOING_REGNO
#define OUTGOING_REGNO(N) N
#endif
  for (i = 0; i < FIRST_PSEUDO_REGISTER; i++)
    /* Check whether this register can hold an incoming pointer
       argument.  FUNCTION_ARG_REGNO_P tests outgoing register
       numbers, so translate if necessary due to register windows. */
    if (FUNCTION_ARG_REGNO_P (OUTGOING_REGNO (i))
	&& HARD_REGNO_MODE_OK (i, Pmode))
      SET_HARD_REG_BIT (argument_registers, i);
}

void
init_alias_analysis ()
{
  int maxreg = max_reg_num ();
  int changed, pass;
  register int i;
  register rtx insn;

  reg_known_value_size = maxreg;

  reg_known_value
    = (rtx *) oballoc ((maxreg - FIRST_PSEUDO_REGISTER) * sizeof (rtx))
    - FIRST_PSEUDO_REGISTER;
  reg_known_equiv_p =
    oballoc (maxreg - FIRST_PSEUDO_REGISTER) - FIRST_PSEUDO_REGISTER;
  bzero ((char *) (reg_known_value + FIRST_PSEUDO_REGISTER),
	 (maxreg-FIRST_PSEUDO_REGISTER) * sizeof (rtx));
  bzero (reg_known_equiv_p + FIRST_PSEUDO_REGISTER,
	 (maxreg - FIRST_PSEUDO_REGISTER) * sizeof (char));

  /* Overallocate reg_base_value to allow some growth during loop
     optimization.  Loop unrolling can create a large number of
     registers.  */
  reg_base_value_size = maxreg * 2;
  reg_base_value = (rtx *)oballoc (reg_base_value_size * sizeof (rtx));
  new_reg_base_value = (rtx *)alloca (reg_base_value_size * sizeof (rtx));
  reg_seen = (char *)alloca (reg_base_value_size);
  bzero ((char *) reg_base_value, reg_base_value_size * sizeof (rtx));
  if (! reload_completed && flag_unroll_loops)
    {
      alias_invariant = (rtx *)xrealloc (alias_invariant,
					 reg_base_value_size * sizeof (rtx));
      bzero ((char *)alias_invariant, reg_base_value_size * sizeof (rtx));
    }
    

  /* The basic idea is that each pass through this loop will use the
     "constant" information from the previous pass to propagate alias
     information through another level of assignments.

     This could get expensive if the assignment chains are long.  Maybe
     we should throttle the number of iterations, possibly based on
     the optimization level or flag_expensive_optimizations.

     We could propagate more information in the first pass by making use
     of REG_N_SETS to determine immediately that the alias information
     for a pseudo is "constant".

     A program with an uninitialized variable can cause an infinite loop
     here.  Instead of doing a full dataflow analysis to detect such problems
     we just cap the number of iterations for the loop.

     The state of the arrays for the set chain in question does not matter
     since the program has undefined behavior.  */

  pass = 0;
  do
    {
      /* Assume nothing will change this iteration of the loop.  */
      changed = 0;

      /* We want to assign the same IDs each iteration of this loop, so
	 start counting from zero each iteration of the loop.  */
      unique_id = 0;

      /* We're at the start of the funtion each iteration through the
	 loop, so we're copying arguments.  */
      copying_arguments = 1;

      /* Wipe the potential alias information clean for this pass.  */
      bzero ((char *) new_reg_base_value, reg_base_value_size * sizeof (rtx));

      /* Wipe the reg_seen array clean.  */
      bzero ((char *) reg_seen, reg_base_value_size);

      /* Mark all hard registers which may contain an address.
	 The stack, frame and argument pointers may contain an address.
	 An argument register which can hold a Pmode value may contain
	 an address even if it is not in BASE_REGS.

	 The address expression is VOIDmode for an argument and
	 Pmode for other registers.  */

      for (i = 0; i < FIRST_PSEUDO_REGISTER; i++)
	if (TEST_HARD_REG_BIT (argument_registers, i))
	  new_reg_base_value[i] = gen_rtx_ADDRESS (VOIDmode,
						   gen_rtx_REG (Pmode, i));

      new_reg_base_value[STACK_POINTER_REGNUM]
	= gen_rtx_ADDRESS (Pmode, stack_pointer_rtx);
      new_reg_base_value[ARG_POINTER_REGNUM]
	= gen_rtx_ADDRESS (Pmode, arg_pointer_rtx);
      new_reg_base_value[FRAME_POINTER_REGNUM]
	= gen_rtx_ADDRESS (Pmode, frame_pointer_rtx);
#if HARD_FRAME_POINTER_REGNUM != FRAME_POINTER_REGNUM
      new_reg_base_value[HARD_FRAME_POINTER_REGNUM]
	= gen_rtx_ADDRESS (Pmode, hard_frame_pointer_rtx);
#endif
      if (struct_value_incoming_rtx
	  && GET_CODE (struct_value_incoming_rtx) == REG)
	new_reg_base_value[REGNO (struct_value_incoming_rtx)]
	  = gen_rtx_ADDRESS (Pmode, struct_value_incoming_rtx);

      if (static_chain_rtx
	  && GET_CODE (static_chain_rtx) == REG)
	new_reg_base_value[REGNO (static_chain_rtx)]
	  = gen_rtx_ADDRESS (Pmode, static_chain_rtx);

      /* Walk the insns adding values to the new_reg_base_value array.  */
      for (insn = get_insns (); insn; insn = NEXT_INSN (insn))
	{
	  if (GET_RTX_CLASS (GET_CODE (insn)) == 'i')
	    {
	      rtx note, set;
	      /* If this insn has a noalias note, process it,  Otherwise,
	         scan for sets.  A simple set will have no side effects
	         which could change the base value of any other register. */

	      if (GET_CODE (PATTERN (insn)) == SET
		  && (find_reg_note (insn, REG_NOALIAS, NULL_RTX)))
		record_set (SET_DEST (PATTERN (insn)), NULL_RTX);
	      else
		note_stores (PATTERN (insn), record_set);

	      set = single_set (insn);

	      if (set != 0
		  && GET_CODE (SET_DEST (set)) == REG
		  && REGNO (SET_DEST (set)) >= FIRST_PSEUDO_REGISTER
		  && (((note = find_reg_note (insn, REG_EQUAL, 0)) != 0
		       && REG_N_SETS (REGNO (SET_DEST (set))) == 1)
		      || (note = find_reg_note (insn, REG_EQUIV, NULL_RTX)) != 0)
		  && GET_CODE (XEXP (note, 0)) != EXPR_LIST
		  && ! reg_overlap_mentioned_p (SET_DEST (set), XEXP (note, 0)))
		{
		  int regno = REGNO (SET_DEST (set));
		  reg_known_value[regno] = XEXP (note, 0);
		  reg_known_equiv_p[regno] = REG_NOTE_KIND (note) == REG_EQUIV;
		}
	    }
	  else if (GET_CODE (insn) == NOTE
		   && NOTE_LINE_NUMBER (insn) == NOTE_INSN_FUNCTION_BEG)
	    copying_arguments = 0;
	}

      /* Now propagate values from new_reg_base_value to reg_base_value.  */
      for (i = 0; i < reg_base_value_size; i++)
	{
	  if (new_reg_base_value[i]
	      && new_reg_base_value[i] != reg_base_value[i]
	      && ! rtx_equal_p (new_reg_base_value[i], reg_base_value[i]))
	    {
	      reg_base_value[i] = new_reg_base_value[i];
	      changed = 1;
	    }
	}
    }
  while (changed && ++pass < MAX_ALIAS_LOOP_PASSES);

  /* Fill in the remaining entries.  */
  for (i = FIRST_PSEUDO_REGISTER; i < maxreg; i++)
    if (reg_known_value[i] == 0)
      reg_known_value[i] = regno_reg_rtx[i];

  /* Simplify the reg_base_value array so that no register refers to
     another register, except to special registers indirectly through
     ADDRESS expressions.

     In theory this loop can take as long as O(registers^2), but unless
     there are very long dependency chains it will run in close to linear
     time.

     This loop may not be needed any longer now that the main loop does
     a better job at propagating alias information.  */
  pass = 0;
  do
    {
      changed = 0;
      pass++;
      for (i = 0; i < reg_base_value_size; i++)
	{
	  rtx base = reg_base_value[i];
	  if (base && GET_CODE (base) == REG)
	    {
	      int base_regno = REGNO (base);
	      if (base_regno == i)		/* register set from itself */
		reg_base_value[i] = 0;
	      else
		reg_base_value[i] = reg_base_value[base_regno];
	      changed = 1;
	    }
	}
    }
  while (changed && pass < MAX_ALIAS_LOOP_PASSES);

  new_reg_base_value = 0;
  reg_seen = 0;
}

void
end_alias_analysis ()
{
  reg_known_value = 0;
  reg_base_value = 0;
  reg_base_value_size = 0;
  if (alias_invariant)
    {
      free ((char *)alias_invariant);
      alias_invariant = 0;
    }
}
