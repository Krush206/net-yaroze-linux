/* Simulator header for cgen parallel support.
   Copyright (C) 1999 Free Software Foundation, Inc.
   Contributed by Cygnus Solutions.

This file is part of the GNU instruction set simulator.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#ifndef CGEN_PAR_H
#define CGEN_PAR_H

/* Kinds of writes stored on the write queue.  */
enum cgen_write_queue_kind {
  CGEN_BI_WRITE, CGEN_QI_WRITE, CGEN_SI_WRITE, CGEN_SF_WRITE,
  CGEN_PC_WRITE,
  CGEN_FN_SI_WRITE, CGEN_FN_DI_WRITE, CGEN_FN_DF_WRITE,
  CGEN_MEM_QI_WRITE, CGEN_MEM_HI_WRITE, CGEN_MEM_SI_WRITE,
  CGEN_NUM_WRITE_KINDS
};

/* Element of the write queue.  */
typedef struct {
  enum cgen_write_queue_kind kind; /* Used to select union member below.  */
  union {
    struct {
      BI  *target;
      BI   value;
    } bi_write;
    struct {
      UQI *target;
      QI   value;
    } qi_write;
    struct {
      SI *target;
      SI  value;
    } si_write;
    struct {
      SI *target;
      SF  value;
    } sf_write;
    struct {
      USI value;
    } pc_write;
    struct {
      UINT regno;
      SI   value;
      void (*function)(SIM_CPU *, UINT, USI);
    } fn_si_write;
    struct {
      UINT regno;
      DI   value;
      void (*function)(SIM_CPU *, UINT, DI);
    } fn_di_write;
    struct {
      UINT regno;
      DI   value;
      void (*function)(SIM_CPU *, UINT, DI);
    } fn_df_write;
    struct {
      SI   address;
      QI   value;
    } mem_qi_write;
    struct {
      SI   address;
      HI   value;
    } mem_hi_write;
    struct {
      SI   address;
      SI   value;
    } mem_si_write;
  } kinds;
} CGEN_WRITE_QUEUE_ELEMENT;

#define CGEN_WRITE_QUEUE_ELEMENT_KIND(element) ((element)->kind)

extern void cgen_write_queue_element_execute (
  SIM_CPU *, CGEN_WRITE_QUEUE_ELEMENT *
);

/* Instance of the queue for parallel write-after support.  */
/* FIXME: Should be dynamic?  */
#define CGEN_WRITE_QUEUE_SIZE (4 * 4) /* 4 writes x 4 insns -- for now.  */

typedef struct {
  int index;
  CGEN_WRITE_QUEUE_ELEMENT q[CGEN_WRITE_QUEUE_SIZE];
} CGEN_WRITE_QUEUE;

#define CGEN_WRITE_QUEUE_CLEAR(queue)       ((queue)->index = 0)
#define CGEN_WRITE_QUEUE_INDEX(queue)       ((queue)->index)
#define CGEN_WRITE_QUEUE_ELEMENT(queue, ix) (&(queue)->q[(ix)])

#define CGEN_WRITE_QUEUE_NEXT(queue) (   \
  (queue)->index < CGEN_WRITE_QUEUE_SIZE \
    ? &(queue)->q[(queue)->index++]      \
    : cgen_write_queue_overflow (queue)  \
)

extern CGEN_WRITE_QUEUE_ELEMENT *cgen_write_queue_overflow (CGEN_WRITE_QUEUE *);

/* Functions for queuing writes.  Used by semantic code.  */
extern void sim_queue_bi_write (SIM_CPU *, BI *, BI);
extern void sim_queue_qi_write (SIM_CPU *, UQI *, UQI);
extern void sim_queue_si_write (SIM_CPU *, SI *, SI);
extern void sim_queue_sf_write (SIM_CPU *, SI *, SF);

extern void sim_queue_pc_write (SIM_CPU *, USI);

extern void sim_queue_fn_si_write (SIM_CPU *, void (*)(SIM_CPU *, UINT, USI), UINT, SI);
extern void sim_queue_fn_di_write (SIM_CPU *, void (*)(SIM_CPU *, UINT, DI), UINT, DI);
extern void sim_queue_fn_df_write (SIM_CPU *, void (*)(SIM_CPU *, UINT, DI), UINT, DF);

extern void sim_queue_mem_qi_write (SIM_CPU *, SI, QI);
extern void sim_queue_mem_hi_write (SIM_CPU *, SI, HI);
extern void sim_queue_mem_si_write (SIM_CPU *, SI, SI);

#endif /* CGEN_PAR_H */
