/* "mipspsx.h"

 ORIGINAL:
   Definitions of target machine for GNU compiler.  Little endian MIPS
   version without GOFAST floating point library.
   Copyright (C) 1994 Free Software Foundation, Inc.

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

/* This is a little endian version of ecoff.h.  */

#define TARGET_ENDIAN_DEFAULT 0
#define PREFERRED_DEBUGGING_TYPE DBX_DEBUG

#define MACHINE_TYPE	"SCE PlayStation"

#include "mips/ecoff.h"

#ifdef	INIT_TARGET_OPTABS
#undef	INIT_TARGET_OPTABS
#endif
#ifdef	US_SOFTWARE_GOFAST
#undef	US_SOFTWARE_GOFAST
#endif
#ifdef	GOFAST_CLEAR_NEG_FLOAT_OPTAB
#undef	GOFAST_CLEAR_NEG_FLOAT_OPTAB
#endif
#ifdef	GOFAST_RENAME_LIBCALLS
#undef	GOFAST_RENAME_LIBCALLS
#endif

#undef CPP_PREDEFINES
#define CPP_PREDEFINES "-Dmips -DMIPSEL -DR3000 -D_mips -D_MIPSEL -D_R3000 -D__PSX__"

#ifdef	STARTFILE_SPEC
#undef	STARTFILE_SPEC
#endif
#define	STARTFILE_SPEC "-lps %s"

#ifdef	LIB_SPEC
#undef	LIB_SPEC
#endif
#define	LIB_SPEC "-lps"

#ifdef	LIBGCC_SPEC
#undef	LIBGCC_SPEC
#endif
#define	LIBGCC_SPEC "%{!shared:}"
