# Generated automatically from Makefile.in by configure.
# Makefile for GNU C compiler.
#   Copyright (C) 1987, 88, 90-96, 1997 Free Software Foundation, Inc.

#This file is part of GNU CC.

#GNU CC is free software; you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation; either version 2, or (at your option)
#any later version.

#GNU CC is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.

#You should have received a copy of the GNU General Public License
#along with GNU CC; see the file COPYING.  If not, write to
#the Free Software Foundation, 59 Temple Place - Suite 330,
#Boston MA 02111-1307, USA.

# The targets for external use include:
# all, doc, proto, install, install-cross, install-cross-rest,
# uninstall, TAGS, mostlyclean, clean, distclean, maintainer-clean,
# stage1, stage2, stage3, stage4.

# Suppress smart makes who think they know how to automake Yacc files
.y.c:

# Directory where sources are, from where we are.
srcdir = .

# Variables that exist for you to override.
# See below for how to change them for certain systems.

# List of language subdirectories.
# This is overridden by configure.
SUBDIRS = cp objc

# Selection of languages to be made.
# This is overridden by configure.
LANGUAGES = c

# Selection of languages to be made during stage1 build.
# This is overridden by configure.
BOOT_LANGUAGES = c 

ALLOCA =
ALLOCA_FLAGS =
ALLOCA_FINISH = true

# Various ways of specifying flags for compilations:  
# CFLAGS is for the user to override to, e.g., do a bootstrap with -O2.
# BOOT_CFLAGS is the value of CFLAGS to pass
# to the stage2 and stage3 compilations
# XCFLAGS is used for most compilations but not when using the GCC just built.
# TCFLAGS is used for compilations with the GCC just built.
XCFLAGS = --std=gnu89
TCFLAGS =
CFLAGS = -g
BOOT_CFLAGS = -O $(CFLAGS)
# These exists to be overridden by the x-* and t-* files, respectively.
X_CFLAGS =
T_CFLAGS =

X_CPPFLAGS =
T_CPPFLAGS =

host = i686-linux-gnu

CC = $(host)-gcc
BISON = bison
BISONFLAGS =
LEX = flex
LEXFLAGS =
AR = $(host)-ar
AR_FLAGS = rc
LN = ln -s
DLLTOOL = dlltool
SHELL = /bin/sh
# on sysV, define this as cp.
INSTALL = /usr/bin/install -c
# These permit overriding just for certain files.
INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA = $(INSTALL)
MAKEINFO = makeinfo
MAKEINFOFLAGS =
TEXI2DVI = texi2dvi
# For GNUmake: let us decide what gets passed to recursive makes.
MAKEOVERRIDES =


# Define this as & to perform parallel make on a Sequent.
# Note that this has some bugs, and it seems currently necessary 
# to compile all the gen* files first by hand to avoid erroneous results.
P =

# How to invoke ranlib.
RANLIB = $(host)-ranlib
# Test to use to see whether ranlib exists on the system.
RANLIB_TEST = [ -f /usr/bin/$(host)-ranlib -o -f /bin/$(host_alias)-ranlib ]

# Compiler to use for compiling libgcc1.a.
# OLDCC should not be the GNU C compiler,
# since that would compile typical libgcc1.a functions such as mulsi3
# into infinite recursions.
OLDCC = $(host)-gcc

# CFLAGS for use with OLDCC, for compiling libgcc1.a.
# NOTE: -O does not work on some Unix systems!
CCLIBFLAGS = -O

# Version of ar to use when compiling libgcc1.a.
OLDAR = $(host)-ar
OLDAR_FLAGS = qc

# Target to use when installing include directory.  Either
# install-headers-tar or install-headers-cpio.
INSTALL_HEADERS_DIR = install-headers-tar

# Header files that are made available under the same name
# to programs compiled with GCC.
USER_H = $(srcdir)/ginclude/stdarg.h $(srcdir)/ginclude/stddef.h \
    $(srcdir)/ginclude/varargs.h $(srcdir)/ginclude/va-alpha.h \
    $(srcdir)/ginclude/va-h8300.h $(srcdir)/ginclude/va-i860.h \
    $(srcdir)/ginclude/va-i960.h $(srcdir)/ginclude/va-mips.h \
    $(srcdir)/ginclude/va-m88k.h $(srcdir)/ginclude/va-mn10200.h \
    $(srcdir)/ginclude/va-mn10300.h $(srcdir)/ginclude/va-pa.h \
    $(srcdir)/ginclude/va-pyr.h $(srcdir)/ginclude/va-sparc.h \
    $(srcdir)/ginclude/va-clipper.h $(srcdir)/ginclude/va-spur.h \
    $(srcdir)/ginclude/va-m32r.h $(srcdir)/ginclude/va-sh.h \
    $(srcdir)/ginclude/va-v850.h $(srcdir)/ginclude/va-arc.h \
    $(srcdir)/ginclude/iso646.h $(srcdir)/ginclude/va-ppc.h \
    $(srcdir)/ginclude/proto.h $(EXTRA_HEADERS) \
    $(LANG_EXTRA_HEADERS)

# Target to use whe installing assert.h.  Some systems may
# want to set this empty.
INSTALL_ASSERT_H = install-assert-h

# The GCC to use for compiling libgcc2.a, enquire, and libgcc1-test.
# Usually the one we just built.
# Don't use this as a dependency--use $(GCC_PASSES) or $(GCC_PARTS).
GCC_FOR_TARGET = ./xgcc -B./

# This is used instead of ALL_CFLAGS when compiling with GCC_FOR_TARGET.
# It omits XCFLAGS, and specifies -B./.
# It also specifies -I./include to find, e.g., stddef.h.
GCC_CFLAGS=$(INTERNAL_CFLAGS) $(X_CFLAGS) $(T_CFLAGS) $(CFLAGS) -I./include $(TCFLAGS)

# Special flags for compiling enquire.
# We disable optimization to make floating point more reliable.
ENQUIRE_CFLAGS = -DNO_MEM -DNO_LONG_DOUBLE_IO -O0
ENQUIRE_LDFLAGS = $(LDFLAGS)

# Sed command to transform gcc to installed name.  Overwritten by configure.
program_transform_name = -e s,x,x,
program_transform_cross_name = -e s,^,$(target_alias)-,

# Tools to use when building a cross-compiler.
# These are used because `configure' appends `cross-make'
# to the makefile when making a cross-compiler.

TARGET_TOOLPREFIX = $(tooldir)/bin/
AR_FOR_TARGET = $(TARGET_TOOLPREFIX)ar
AR_FOR_TARGET_FLAGS = rc
RANLIB_FOR_TARGET = $(TARGET_TOOLPREFIX)ranlib
RANLIB_TEST_FOR_TARGET = [ -f $(TARGET_TOOLPREFIX)ranlib ]

# Dir to search for system headers.  Overridden by cross-make.
SYSTEM_HEADER_DIR = /usr/include

# Control whether to run fixproto.
STMP_FIXPROTO = stmp-fixproto

# Test to see whether <float.h> exists in the system header files,
# and is not derived from GCC.
FLOAT_H_TEST = \
  [ -f $(SYSTEM_HEADER_DIR)/float.h ] && \
  if grep 'ifndef _FLOAT_H___' $(SYSTEM_HEADER_DIR)/float.h >/dev/null; \
  then false; \
  else :; fi

# Test to see whether <limits.h> exists in the system header files.
LIMITS_H_TEST = [ -f $(SYSTEM_HEADER_DIR)/limits.h ]

# There may be a premade insn-attrtab.c for this machine.
# (You could rebuild it with genattrtab as usual, but it takes a long time.)
# PREMADE_ATTRTAB is the file name of the file to use.
# PREMADE_ATTRTAB_MD is the md file it corresponds to.
PREMADE_ATTRTAB_MD = Makefile  # Guaranteed not to cmp equal to md.
PREMADE_ATTRTAB = 

target=mips-sony-psx
target_alias=psx
xmake_file= ./config/x-linux
tmake_file= ./config/mips/t-mipspsx
out_file=$(srcdir)/config/mips/mips.c
out_object_file=mips.o
md_file=$(srcdir)/config/mips/mips.md
tm_file= $(srcdir)/config/mips/mipspsx.h
build_xm_file= $(srcdir)/config/i386/xm-linux.h
host_xm_file= $(srcdir)/config/auto-config.h $(srcdir)/config/i386/xm-linux.h
lang_specs_files= ./cp/lang-specs.h
lang_options_files= ./cp/lang-options.h
GCC_THREAD_FILE=single
version=2.8.0
mainversion=`sed -e 's/.*\"\([0-9]*\.[0-9]*\).*/\1/' < $(srcdir)/version.c`

# Common prefix for installation directories.
# NOTE: This directory must exist when you start installation.
prefix = /usr
# Directory in which to put localized header files. On the systems with
# gcc as the native cc, `local_prefix' may not be `prefix' which is
# `/usr'.
# NOTE: local_prefix *should not* default from prefix.
local_prefix = /usr/local
# Directory in which to put host dependent programs and libraries
exec_prefix = ${local_prefix}/psx
# Directory in which to put the executable for the command `gcc'
bindir = ${exec_prefix}/bin
# Directory in which to put the directories used by the compiler.
libdir = ${exec_prefix}/lib
# Directory in which the compiler finds executables, libraries, etc.
libsubdir = $(libdir)/gcc
# Directory in which the compiler finds g++ includes.
gxx_include_dir= ${prefix}/include/g++
# Directory in which the old g++ header files may be found.
old_gxx_include_dir= $(libdir)/g++-include
# Directory to search for site-specific includes.
includedir = $(local_prefix)/include
# assertdir is overridden in cross-make.
# (But this currently agrees with what is in cross-make.)
assertdir = $(tooldir)/include
# where the info files go
infodir = ${prefix}/info
# Extension (if any) to put in installed man-page filename.
manext = .1
objext = .o
exeext = 

# Directory in which to put man pages.
mandir = ${prefix}/man/man1
# Directory in which to find other cross-compilation tools and headers.
# Used in install-cross.
tooldir = $(exec_prefix)
# Dir for temp files.
tmpdir = /tmp

# Additional system libraries to link with.
CLIB=

# Change this to a null string if obstacks are installed in the
# system library.
OBSTACK=obstack.o

# Specify the rule for actually making libgcc.a,
LIBGCC = libgcc.a
# and the rule for installing it.
INSTALL_LIBGCC = install-libgcc

# Specify the rule for actually making libgcc1.a.
# The value may be empty; that means to do absolutely nothing
# with or for libgcc1.a.
LIBGCC1 = libgcc1.a

# Specify the rule for making libgcc1.a for a cross-compiler.
# The default rule assumes that libgcc1.a is supplied by the user.
CROSS_LIBGCC1 = libgcc1.cross

# Specify the rule for actually making libgcc2.a.
LIBGCC2 = libgcc2.a

# Options to use when compiling libgcc2.a.
# -g1 causes output of debug info only for file-scope entities.
# we use this here because that should be enough, and also
# so that -g1 will be tested.
LIBGCC2_DEBUG_CFLAGS = -g1
LIBGCC2_CFLAGS = -O2 $(LIBGCC2_INCLUDES) $(GCC_CFLAGS) $(TARGET_LIBGCC2_CFLAGS) $(LIBGCC2_DEBUG_CFLAGS) -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED -fexceptions

# Additional options to use when compiling libgcc2.a.
# Some targets override this to -Iinclude
LIBGCC2_INCLUDES =

# Additional target-dependent options for compiling libgcc2.a.
TARGET_LIBGCC2_CFLAGS = 

# Things which must be built before building libgcc2.a.
# Some targets override this to stmp-int-hdrs
LIBGCC2_DEPS =

# Enquire target (This is a variable so that a target can choose not to
# build it.)
ENQUIRE = enquire

# libgcc1-test target (must also be overridable for a target)
LIBGCC1_TEST = libgcc1-test

# List of extra executables that should be compiled for this target machine
# that are used for compiling from source code to object code.
# The rules for compiling them should be in the t-* file for the machine.
EXTRA_PASSES =

# Like EXTRA_PASSES, but these are used when linking.
EXTRA_PROGRAMS = 

# List of extra object files that should be compiled for this target machine.
# The rules for compiling them should be in the t-* file for the machine.
EXTRA_PARTS = 

# List of extra object files that should be compiled and linked with
# compiler proper (cc1, cc1obj, cc1plus).
EXTRA_OBJS =  

# List of extra object files that should be compiled and linked with
# the gcc driver.
EXTRA_GCC_OBJS =

# List of additional header files to install.
# Often this is edited directly by `configure'.
EXTRA_HEADERS =

# Set this to `ld' to enable use of collect2.
USE_COLLECT2 = 
MAYBE_USE_COLLECT2 = 
# It is convenient for configure to add the assignment at the beginning,
# so don't override it here.

# List of extra C and assembler files to add to libgcc1.a.
# Assembler files should have names ending in `.asm'.
LIB1FUNCS_EXTRA = 

# List of extra C and assembler files to add to libgcc2.a.
# Assembler files should have names ending in `.asm'.
LIB2FUNCS_EXTRA = 

# Default float.h source to use for cross-compiler.
# This is overridden by configure.
CROSS_FLOAT_H=$(srcdir)/config/float-i64.h

# Program to convert libraries.
LIBCONVERT = 

# Control whether header files are installed.
INSTALL_HEADERS=install-headers

# Options for tar when copying trees.  So HPUX can override it.
TAROUTOPTS = xpBf

# Select which version of fixincludes to use (I.E. regular versus SVR4)
# This value is overridden directly by configure.
FIXINCLUDES = fixincludes

# Additional directories of header files to run fixincludes on.
# These should be directories searched automatically by default
# just as /usr/include is.
# *Do not* use this for directories that happen to contain 
# header files, but are not searched automatically by default.
# On most systems, this is empty.
OTHER_FIXINCLUDES_DIRS=

# A list of all the language-specific executables.
# This is overridden by configure.
COMPILERS = cc1$(exeext)  cc1plus$(exeext) cc1obj$(exeext)

# List of things which should already be built whenever we try to use xgcc
# to compile anything (without linking).
GCC_PASSES=xgcc cc1 cpp $(EXTRA_PASSES)

# List of things which should already be built whenever we try to use xgcc
# to link anything.
GCC_PARTS=$(GCC_PASSES) $(LIBGCC) $(EXTRA_PROGRAMS) $(USE_COLLECT2) $(EXTRA_PARTS)

# Directory to link to, when using the target `maketest'.
DIR = ../gcc

# Guaranteed to not exist when not passing md through cpp.
# This value is overridden directly by configure.
MD_FILE = md-cpp-not-used

# Flags to use when cross-building GCC.
# Prefix to apply to names of object files when using them
# to run on the machine we are compiling on.
HOST_PREFIX=
# Prefix to apply to names of object files when compiling them
# to run on the machine we are compiling on.
# The default for this variable is chosen to keep these rules 
# out of the way of the other rules for compiling the same source files.
HOST_PREFIX_1=loser-
HOST_CC=$(CC)
HOST_CFLAGS=$(ALL_CFLAGS)
HOST_CLIB=$(CLIB)
HOST_LDFLAGS=$(LDFLAGS)
HOST_CPPFLAGS=$(ALL_CPPFLAGS)
HOST_ALLOCA=$(ALLOCA)
HOST_MALLOC=$(MALLOC)
HOST_OBSTACK=$(OBSTACK)

# Actual name to use when installing a native compiler.
GCC_INSTALL_NAME = `t='$(program_transform_name)'; echo gcc | sed $$t`

# Actual name to use when installing a cross-compiler.
GCC_CROSS_NAME = `t='$(program_transform_cross_name)'; echo gcc | sed $$t`

# Choose the real default target.
ALL=all.internal

# Choose the real install target.
INSTALL_TARGET=install-normal

# Source for float.h.  Overridden by cross-make.
FLOAT_H=float.h-nat

# Extra symbols for fixproto to define when parsing headers.
FIXPROTO_DEFINES = 

# Extra flags to use when compiling crt{begin,end}.o.
CRTSTUFF_T_CFLAGS = 

# Extra flags to use when compiling [m]crt0.o.
CRT0STUFF_T_CFLAGS = 

# "t" or nothing, for building multilibbed versions of, say, crtbegin.o.
T =

# End of variables for you to override.

# Definition of `all' is here so that new rules inserted by sed
# do not specify the default target.
# The real definition is under `all.internal' (for native compilers)
# or `all.cross' (for cross compilers).
all: all.indirect

# This tells GNU Make version 3 not to put all variables in the environment.
.NOEXPORT:

# sed inserts variable overrides after the following line.
####target overrides

# t-mipspsx (ORIGINAL: t-ecoff)
CONFIG2_H	= $(srcdir)/config/mips/ecoff.h

# We have a premade insn-attrtab.c to save the hour it takes to run genattrtab.
# PREMADE_ATTRTAB = $(srcdir)/config/mips/mips-at.c
# PREMADE_ATTRTAB_MD = $(srcdir)/config/mips/mips-at.md

# Suppress building libgcc1.a, since the MIPS compiler port is complete
# and does not need anything from libgcc1.a.
LIBGCC1 =
CROSS_LIBGCC1 =

# We must build libgcc2.a with -G 0, in case the user wants to link
# without the $gp register.
LIBGCC2_CFLAGS = -O2 $(LIBGCC2_INCLUDES) $(GCC_CFLAGS) -g1 -G 0

# These are really part of libgcc1, but this will cause them to be
# built correctly, so... [taken from t-sparclite]
LIB2FUNCS_EXTRA = fp-bit.c dp-bit.c

dp-bit.c: $(srcdir)/config/fp-bit.c
	echo '#ifdef __MIPSEL__' > dp-bit.c
	echo '#define FLOAT_BIT_ORDER_MISMATCH' >> dp-bit.c
	echo '#endif' >> dp-bit.c
#	echo '#define US_SOFTWARE_GOFAST' >> dp-bit.c
	cat $(srcdir)/config/fp-bit.c >> dp-bit.c

fp-bit.c: $(srcdir)/config/fp-bit.c
	echo '#define FLOAT' > fp-bit.c
	echo '#ifdef __MIPSEL__' >> fp-bit.c
	echo '#define FLOAT_BIT_ORDER_MISMATCH' >> fp-bit.c
	echo '#endif' >> fp-bit.c
#	echo '#define US_SOFTWARE_GOFAST' >> fp-bit.c
	cat $(srcdir)/config/fp-bit.c >> fp-bit.c

# Build the libraries for both hard and soft floating point

MULTILIB_OPTIONS = #msoft-float
MULTILIB_DIRNAMES = #soft-float
MULTILIB_MATCHES =

LIBGCC = #stmp-multilib
INSTALL_LIBGCC = #install-multilib

# Add additional dependencies to recompile selected modules whenever the
# tm.h file changes.  The files compiled are:
#
#	gcc.c		(*_SPEC changes)
#	toplev.c	(new switches + assembly output changes)
#	sdbout.c	(debug format changes)
#	dbxout.c	(debug format changes)
#	dwarfout.c	(debug format changes)
#	final.c		(assembly output changes)
#	varasm.c	(assembly output changes)
#	cse.c		(cost functions)
#	insn-output.c	(possible ifdef changes in tm.h)
#	regclass.c	(fixed/call used register changes)
#	cccp.c		(new preprocessor macros, -v version #)
#	explow.c	(GO_IF_LEGITIMATE_ADDRESS)
#	recog.c		(GO_IF_LEGITIMATE_ADDRESS)
#	reload.c	(GO_IF_LEGITIMATE_ADDRESS)

gcc.o: $(CONFIG2_H)
toplev.o: $(CONFIG2_H)
sdbout.o: $(CONFIG2_H)
dbxout.o: $(CONFIG2_H)
dwarfout.o: $(CONFIG2_H)
final.o: $(CONFIG2_H)
varasm.o: $(CONFIG2_H)
cse.o: $(CONFIG2_H)
insn-output.o: $(CONFIG2_H)
regclass.o: $(CONFIG2_H)
cccp.o: $(CONFIG2_H)
explow.o: $(CONFIG2_H)
recog.o: $(CONFIG2_H)
reload.o: $(CONFIG2_H)

####host overrides

# Don't run fixproto
STMP_FIXPROTO =

# Don't install "assert.h" in gcc. We use the one in glibc.
INSTALL_ASSERT_H =

####cross overrides
CROSS=-DCROSS_COMPILE

# Build libgcc1.a for a cross-compiler.
# By default this expects the user to provide libgcc1.a,
# and gives up immediately if the user has not done so.
LIBGCC1 = $(CROSS_LIBGCC1)

# Specify tools and options for manipulating libraries for the target machine.
AR = $(AR_FOR_TARGET)
AR_FLAGS = $(AR_FOR_TARGET_FLAGS)
OLDAR = $(AR_FOR_TARGET)
OLDAR_FLAGS = $(AR_FOR_TARGET_FLAGS)
RANLIB = $(RANLIB_FOR_TARGET)
RANLIB_TEST = $(RANLIB_TEST_FOR_TARGET)

# Dir to search for system headers.  Normally /usr/include.
SYSTEM_HEADER_DIR = $(tooldir)/include

# Don't try to compile the things we can't compile.
ALL = all.cross

# Use cross-compiler version of float.h.
FLOAT_H = $(CROSS_FLOAT_H)

# Don't install assert.h in /usr/local/include.
assertdir = $(tooldir)/include

####build overrides

#
# Now figure out from those variables how to compile and link.

all.indirect: $(ALL)

# IN_GCC tells obstack.h that we are using gcc's <stddef.h> file.
# ??? IN_GCC should be obsolete now.
INTERNAL_CFLAGS = $(CROSS) -DIN_GCC 

# This is the variable actually used when we compile.
ALL_CFLAGS = $(INTERNAL_CFLAGS) $(X_CFLAGS) $(T_CFLAGS) $(CFLAGS) $(XCFLAGS) \
	-DHAVE_CONFIG_H

# Likewise.
ALL_CPPFLAGS = $(CPPFLAGS) $(X_CPPFLAGS) $(T_CPPFLAGS)

# Even if ALLOCA is set, don't use it if compiling with GCC.
USE_ALLOCA= ` case "${CC}" in "${OLDCC}") echo "${ALLOCA}" ;; esac `
USE_HOST_ALLOCA= ` case "${HOST_CC}"@"${HOST_ALLOCA}" in "${OLDCC}"@?*) echo ${HOST_PREFIX}${HOST_ALLOCA} ;; esac `
USE_HOST_MALLOC= ` case "${HOST_MALLOC}" in ?*) echo ${HOST_PREFIX}${HOST_MALLOC} ;; esac `
USE_HOST_OBSTACK= ` case "${HOST_OBSTACK}" in ?*) echo ${HOST_PREFIX}${HOST_OBSTACK} ;; esac `

# Dependency on obstack, alloca, malloc or whatever library facilities
# are not installed in the system libraries.
# We don't use USE_ALLOCA because backquote expansion doesn't work in deps.
LIBDEPS= $(OBSTACK) $(ALLOCA) $(MALLOC)

# Likewise, for use in the tools that must run on this machine
# even if we are cross-building GCC.
# We don't use USE_ALLOCA because backquote expansion doesn't work in deps.
HOST_LIBDEPS= $(HOST_PREFIX)$(HOST_OBSTACK) $(HOST_PREFIX)$(HOST_ALLOCA) $(HOST_PREFIX)$(HOST_MALLOC)

# How to link with both our special library facilities
# and the system's installed libraries.
LIBS = $(OBSTACK) $(USE_ALLOCA) $(MALLOC) $(CLIB)

# Likewise, for use in the tools that must run on this machine
# even if we are cross-building GCC.
HOST_LIBS = $(USE_HOST_OBSTACK) $(USE_HOST_ALLOCA) $(USE_HOST_MALLOC)  \
	    $(HOST_CLIB)

HOST_RTL = $(HOST_PREFIX)rtl.o
HOST_RTLANAL = $(HOST_PREFIX)rtlanal.o
HOST_PRINT = $(HOST_PREFIX)print-rtl.o

# Specify the directories to be searched for header files.
# Both . and srcdir are used, in that order,
# so that tm.h and config.h will be found in the compilation
# subdirectory rather than in the source directory.
INCLUDES = -I. -I$(srcdir) -I$(srcdir)/config

# Always use -I$(srcdir)/config when compiling.
.c.o:
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $<

# This tells GNU make version 3 not to export all the variables
# defined in this file into the environment.
.NOEXPORT:
#
# Support for additional languages (other than c and objc).
# ??? objc can be supported this way too (leave for later).

# These next lines are overridden by configure.
LANG_MAKEFILES =  ./cp/Make-lang.in ./cp/Makefile.in ./objc/Make-lang.in ./objc/Makefile.in
LANG_STAGESTUFF =  g++$(exeext) g++-cross$(exeext) cc1plus$(exeext) 
LANG_DIFF_EXCLUDES =  -x cp/parse.c -x cp/parse.h 
LANG_LIB2FUNCS =  cplib2.txt 
LANG_EXTRA_HEADERS =  $(CXX_EXTRA_HEADERS) 

# Flags to pass to recursive makes.
# CC is set by configure.  Hosts without symlinks need special handling
# because we need CC="stage1/xgcc -Bstage1/" to work in the language
# subdirectories.
# ??? The choices here will need some experimenting with.
FLAGS_TO_PASS = \
	"AR_FLAGS=$(AR_FLAGS)" \
	"AR_FOR_TARGET=$(AR_FOR_TARGET)" \
	"BISON=$(BISON)" \
	"BISONFLAGS=$(BISONFLAGS)" \
	"CC=$(CC)" \
	"CFLAGS=$(CFLAGS)" \
	"CLIB=$(CLIB)" \
	"GCC_FOR_TARGET=$(GCC_FOR_TARGET)" \
	"LDFLAGS=$(LDFLAGS)" \
	"LEX=$(LEX)" \
	"LEXFLAGS=$(LEXFLAGS)" \
	"LN=$(LN)" \
	"MAKEINFO=$(MAKEINFO)" \
	"MAKEINFOFLAGS=$(MAKEINFOFLAGS)" \
	"RANLIB_FOR_TARGET=$(RANLIB_FOR_TARGET)" \
	"RANLIB_TEST_FOR_TARGET=$(RANLIB_TEST_FOR_TARGET)" \
	"SHELL=$(SHELL)" \
	"STAGE_PREFIX=$(STAGE_PREFIX)" \
	"exeext=$(exeext)" \
	"objext=$(objext)" \
	"exec_prefix=$(exec_prefix)" \
	"prefix=$(prefix)" \
	"tooldir=$(tooldir)" \
	"bindir=$(bindir)" \
	"libsubdir=$(libsubdir)"
#
# Lists of files for various purposes.

# Language-specific object files for C and Objective C.
C_AND_OBJC_OBJS = c-lex.o c-pragma.o c-decl.o c-typeck.o c-convert.o \
  c-aux-info.o c-common.o c-iterate.o 

# Language-specific object files for C.
C_OBJS = c-parse.o c-lang.o $(C_AND_OBJC_OBJS)

# Files specific to the C interpreter bytecode compiler(s).
BC_OBJS = bc-emit.o bc-optab.o

# Bytecode header files constructed at build time; vmsconfig.com wants this.
BC_ALL = bc-arity.h bc-opcode.h bc-opname.h

# Language-independent object files.
OBJS = toplev.o version.o tree.o print-tree.o stor-layout.o fold-const.o \
 function.o stmt.o except.o expr.o calls.o expmed.o explow.o optabs.o \
 varasm.o rtl.o print-rtl.o rtlanal.o emit-rtl.o real.o \
 dbxout.o sdbout.o dwarfout.o dwarf2out.o xcoffout.o bitmap.o \
 integrate.o jump.o cse.o loop.o unroll.o flow.o stupid.o combine.o \
 regclass.o local-alloc.o global.o reload.o reload1.o caller-save.o \
 insn-peep.o reorg.o sched.o final.o recog.o reg-stack.o \
 insn-opinit.o insn-recog.o insn-extract.o insn-output.o insn-emit.o \
 profile.o insn-attrtab.o $(out_object_file) getpwd.o convert.o $(EXTRA_OBJS)

# GEN files are listed separately, so they can be built before doing parallel
#  makes for cc1 or cc1plus.  Otherwise sequent parallel make attempts to load
#  them before rtl.o is compiled.
GEN= genemit genoutput genrecog genextract genflags gencodes genconfig genpeep

CCCP=cccp
# Uncomment this line if you want to use cppmain (w/cpplib) as cpp.
#CCCP=cppmain

# Files to be copied away after each stage in building.
STAGESTUFF = *$(objext) insn-flags.h insn-config.h insn-codes.h \
 insn-output.c insn-recog.c insn-emit.c insn-extract.c insn-peep.c \
 insn-attr.h insn-attrtab.c insn-opinit.c \
 stamp-flags stamp-config stamp-codes stamp-mlib \
 stamp-output stamp-recog stamp-emit stamp-extract stamp-peep \
 stamp-attr stamp-attrtab stamp-opinit stamp-proto stamp-crt stamp-crtS stamp-crt0 \
 genemit$(exeext) genoutput$(exeext) genrecog$(exeext) genextract$(exeext) \
 genflags$(exeext) gencodes$(exeext) genconfig$(exeext) genpeep$(exeext) \
 genattrtab$(exeext) genattr$(exeext) genopinit$(exeext) \
 $(BC_ALL) \
 stamp-bcarity stamp-bcopcode stamp-bcopname \
 bi-arity$(exeext) bi-opcode$(exeext) bi-opname$(exeext) \
 xgcc$(exeext) cc1$(exeext) cpp$(exeext) $(EXTRA_PASSES) \
 $(EXTRA_PARTS) $(EXTRA_PROGRAMS) gcc-cross$(exeext) \
 $(CCCP)$(exeext) cc1obj$(exeext) enquire$(exeext) \
 protoize$(exeext) unprotoize$(exeext) \
 specs collect2$(exeext) $(USE_COLLECT2) underscore.c \
 gcov$(exeext) *.bp \
 *.greg *.lreg *.combine *.flow *.cse *.jump *.rtl *.tree *.loop \
 *.dbr *.jump2 *.sched *.cse2 *.sched2 *.stack \
 *.[si] \
 $(LANG_STAGESTUFF)

# Members of libgcc1.a.
LIB1FUNCS = _mulsi3 _udivsi3 _divsi3 _umodsi3 _modsi3 \
   _lshrsi3 _ashrsi3 _ashlsi3 \
   _divdf3 _muldf3 _negdf2 _adddf3 _subdf3 \
   _fixdfsi _fixsfsi _floatsidf _floatsisf _truncdfsf2 _extendsfdf2 \
   _addsf3 _negsf2 _subsf3 _mulsf3 _divsf3 \
   _eqdf2 _nedf2 _gtdf2 _gedf2 _ltdf2 _ledf2 \
   _eqsf2 _nesf2 _gtsf2 _gesf2 _ltsf2 _lesf2

# Library members defined in libgcc2.c.
LIB2FUNCS = _muldi3 _divdi3 _moddi3 _udivdi3 _umoddi3 _negdi2 \
     _lshrdi3 _ashldi3 _ashrdi3 _ffsdi2 \
    _udiv_w_sdiv _udivmoddi4 _cmpdi2 _ucmpdi2 _floatdidf _floatdisf \
    _fixunsdfsi _fixunssfsi _fixunsdfdi _fixdfdi _fixunssfdi _fixsfdi \
    _fixxfdi _fixunsxfdi _floatdixf _fixunsxfsi \
    _fixtfdi _fixunstfdi _floatditf \
    __gcc_bcmp _varargs __dummy _eprintf _op_new _op_vnew _new_handler \
    _op_delete _op_vdel _bb _shtab _clear_cache _trampoline __main _exit \
    _ctors _eh _eh_compat _pure

# The files that "belong" in CONFIG_H are deliberately omitted
# because having them there would not be useful in actual practice.
# All they would do is cause complete recompilation every time
# one of the machine description files is edited.
# That may or may not be what one wants to do.
# If it is, rm *.o is an easy way to do it.
# CONFIG_H = $(host_xm_file) $(tm_file)
CONFIG_H =
RTL_H = rtl.h rtl.def gansidecl.h machmode.h machmode.def
TREE_H = tree.h real.h tree.def gansidecl.h machmode.h machmode.def
BYTECODE_H = bytecode.h bc-emit.h bc-optab.h
BASIC_BLOCK_H = basic-block.h bitmap.h
DEMANGLE_H = demangle.h gansidecl.h
RECOG_H = recog.h gansidecl.h
#
# Language makefile fragments.

# The following targets define the interface between us and the languages.
#
# all.build, all.cross, start.encap, rest.encap,
# info, dvi,
# install-normal, install-common, install-info, install-man,
# uninstall, distdir,
# mostlyclean, clean, distclean, extraclean, maintainer-clean,
# stage1, stage2, stage3, stage4
#
# Each language is linked in with a series of hooks (since we can't use `::'
# targets).  The name of each hooked is "lang.${target_name}" (eg: lang.info).
# Configure computes and adds these here.

####language hooks

lang.all.build:  c++.all.build objc.all.build
lang.all.cross:  c++.all.cross objc.all.cross
lang.start.encap:  c++.start.encap objc.start.encap
lang.rest.encap:  c++.rest.encap objc.rest.encap
lang.info:  c++.info objc.info
lang.dvi:  c++.dvi objc.dvi
lang.install-normal:  c++.install-normal objc.install-normal
lang.install-common:  c++.install-common objc.install-common
lang.install-info:  c++.install-info objc.install-info
lang.install-man:  c++.install-man objc.install-man
lang.uninstall:  c++.uninstall objc.uninstall
lang.distdir:  c++.distdir objc.distdir
lang.mostlyclean:  c++.mostlyclean objc.mostlyclean
lang.clean:  c++.clean objc.clean
lang.distclean:  c++.distclean objc.distclean
lang.extraclean:  c++.extraclean objc.extraclean
lang.maintainer-clean:  c++.maintainer-clean objc.maintainer-clean
lang.stage1:  c++.stage1 objc.stage1
lang.stage2:  c++.stage2 objc.stage2
lang.stage3:  c++.stage3 objc.stage3
lang.stage4:  c++.stage4 objc.stage4

# sed inserts language fragments after the following line.
####language fragments

# Top level makefile fragment for GNU C++.
#   Copyright (C) 1994, 1995, 1997 Free Software Foundation, Inc.

#This file is part of GNU CC.

#GNU CC is free software; you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation; either version 2, or (at your option)
#any later version.

#GNU CC is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.

#You should have received a copy of the GNU General Public License
#along with GNU CC; see the file COPYING.  If not, write to
#the Free Software Foundation, 59 Temple Place - Suite 330,
#Boston, MA 02111-1307, USA.

# This file provides the language dependent support in the main Makefile.
# Each language makefile fragment must provide the following targets:
#
# foo.all.build, foo.all.cross, foo.start.encap, foo.rest.encap,
# foo.info, foo.dvi,
# foo.install-normal, foo.install-common, foo.install-info, foo.install-man,
# foo.uninstall, foo.distdir,
# foo.mostlyclean, foo.clean, foo.distclean, foo.extraclean,
# foo.maintainer-clean, foo.stage1, foo.stage2, foo.stage3, foo.stage4
#
# where `foo' is the name of the language.
#
# It should also provide rules for:
#
# - making any compiler driver (eg: g++)
# - the compiler proper (eg: cc1plus)
# - define the names for selecting the language in LANGUAGES.
#
# Extra flags to pass to recursive makes.
CXX_FLAGS_TO_PASS = \
	"CXX_FOR_BUILD=$(CXX_FOR_BUILD)" \
	"CXXFLAGS=$(CXXFLAGS)" \
	"CXX_FOR_TARGET=$(CXX_FOR_TARGET)"

# Actual names to use when installing a native compiler.
CXX_INSTALL_NAME = `t='$(program_transform_name)'; echo c++ | sed $$t`
GXX_INSTALL_NAME = `t='$(program_transform_name)'; echo g++ | sed $$t`

# Actual names to use when installing a cross-compiler.
CXX_CROSS_NAME = `t='$(program_transform_cross_name)'; echo c++ | sed $$t`
GXX_CROSS_NAME = `t='$(program_transform_cross_name)'; echo g++ | sed $$t`

# The name to use for the demangler program.
DEMANGLER_PROG = c++filt

# Extra headers to install.
CXX_EXTRA_HEADERS = $(srcdir)/cp/inc/typeinfo $(srcdir)/cp/inc/exception \
	$(srcdir)/cp/inc/new $(srcdir)/cp/inc/new.h

# Extra code to include in libgcc2.
CXX_LIB2FUNCS = tinfo.o tinfo2.o new.o new1.o new2.o exception.o
CXX_LIB2SRCS = $(srcdir)/cp/new.cc $(srcdir)/cp/new1.cc $(srcdir)/cp/new2.cc \
	$(srcdir)/cp/exception.cc $(srcdir)/cp/tinfo.cc \
	$(srcdir)/cp/tinfo2.cc $(srcdir)/cp/tinfo.h
#
# Define the names for selecting c++ in LANGUAGES.
# Note that it would be nice to move the dependency on g++
# into the C++ rule, but that needs a little bit of work
# to do the right thing within all.cross.
C++ c++: cc1plus

# Tell GNU make to ignore these if they exist.
.PHONY: C++ c++

g++.c: $(srcdir)/gcc.c
	-rm -f $@
	$(LN) $(srcdir)/gcc.c $@

g++spec.o: $(srcdir)/cp/g++spec.c
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $(srcdir)/cp/g++spec.c

# N.B.: This is a copy of the gcc.o rule, with -DLANG_SPECIFIC_DRIVER added.
# It'd be nice if we could find an easier way to do this---rather than have
# to track changes to the toplevel gcc Makefile as well.
# We depend on g++.c last, to make it obvious where it came from.
g++.o: $(CONFIG_H) multilib.h config.status $(lang_specs_files) g++.c
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
	$(DRIVER_DEFINES) \
	-DLANG_SPECIFIC_DRIVER \
  -c g++.c

# Create the compiler driver for g++.
g++$(exeext): g++.o g++spec.o version.o choose-temp.o pexecute.o prefix.o $(LIBDEPS) $(EXTRA_GCC_OBJS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ g++.o g++spec.o prefix.o \
	  version.o choose-temp.o pexecute.o $(EXTRA_GCC_OBJS) $(LIBS)

# Create a version of the g++ driver which calls the cross-compiler.
g++-cross$(exeext): g++$(exeext)
	-rm -f g++-cross$(exeext)
	cp g++$(exeext) g++-cross$(exeext)

cxxmain.o: cplus-dem.c demangle.h
	rm -f cxxmain.c
	$(LN) $(srcdir)/cplus-dem.c cxxmain.c
	$(CC) -c -DMAIN $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
	  -DVERSION=\"$(version)\" cxxmain.c
	rm -f cxxmain.c

$(DEMANGLER_PROG): cxxmain.o underscore.o getopt.o getopt1.o $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) $(LIBS) -o $@ \
	  cxxmain.o underscore.o getopt.o getopt1.o

CXX_SRCS = $(srcdir)/cp/call.c $(srcdir)/cp/decl2.c \
 $(srcdir)/cp/except.c $(srcdir)/cp/input.c $(srcdir)/cp/pt.c \
 $(srcdir)/cp/spew.c $(srcdir)/cp/xref.c $(srcdir)/cp/class.c \
 $(srcdir)/cp/expr.c $(srcdir)/cp/lex.c \
 $(srcdir)/cp/ptree.c $(srcdir)/cp/tree.c $(srcdir)/cp/cvt.c \
 $(srcdir)/cp/errfn.c $(srcdir)/cp/rtti.c $(srcdir)/cp/method.c \
 $(srcdir)/cp/search.c $(srcdir)/cp/typeck.c $(srcdir)/cp/decl.c \
 $(srcdir)/cp/error.c $(srcdir)/cp/friend.c $(srcdir)/cp/init.c \
 $(srcdir)/cp/parse.y $(srcdir)/cp/sig.c $(srcdir)/cp/typeck2.c \
 $(srcdir)/cp/repo.c

cc1plus: $(P) $(CXX_SRCS) $(LIBDEPS) stamp-objlist c-common.o c-pragma.o
	cd cp; $(MAKE) $(FLAGS_TO_PASS) $(CXX_FLAGS_TO_PASS) ../cc1plus
#
# Build hooks:

c++.all.build: g++$(exeext) $(DEMANGLER_PROG)
c++.all.cross: g++-cross$(exeext) $(DEMANGLER_PROG)
c++.start.encap: g++$(exeext)
c++.rest.encap: $(DEMANGLER_PROG)

c++.info:
c++.dvi:

# C++ language-support library pieces for libgcc.
tinfo.o: cc1plus $(srcdir)/cp/tinfo.cc
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) \
	  -c $(srcdir)/cp/tinfo.cc
tinfo2.o: cc1plus $(srcdir)/cp/tinfo2.cc
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) \
	  -c $(srcdir)/cp/tinfo2.cc
exception.o: cc1plus $(srcdir)/cp/exception.cc
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) \
	  -c -fexceptions $(srcdir)/cp/exception.cc
new.o: cc1plus $(srcdir)/cp/new.cc
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) \
	  -c $(srcdir)/cp/new.cc
new1.o: cc1plus $(srcdir)/cp/new1.cc
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) \
	  -c $(srcdir)/cp/new1.cc
new2.o: cc1plus $(srcdir)/cp/new2.cc
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) \
	  -c $(srcdir)/cp/new2.cc

# We want to update cplib2.txt if any of the source files change...
cplib2.txt: $(CXX_LIB2SRCS) $(CXX_EXTRA_HEADERS) cplib2.ready
	case " $(LANGUAGES) " in \
	*" "[cC]"++ "*) \
	  echo $(CXX_LIB2FUNCS) > cplib2.new;; \
	*) \
	  echo "" > cplib2.new;; \
	esac
	mv -f cplib2.new cplib2.txt 

# Or if it would be different.
cplib2.ready: $(GCC_PASSES) $(LANGUAGES) $(LIBGCC2_DEPS) stmp-int-hdrs
	@if [ -r cplib2.txt ]; then \
	  case " $(LANGUAGES) " in \
	  *" "[cC]"++ "*) \
	    echo $(CXX_LIB2FUNCS) > cplib2.new;; \
	  *) \
	    echo "" > cplib2.new;; \
	  esac; \
	  if cmp -s cplib2.new cplib2.txt; then true; else \
	    touch cplib2.ready; \
	  fi; \
	  rm -f cplib2.new; \
	else true ; \
	fi
	@if [ -f cplib2.ready ]; then true; else \
	  touch cplib2.ready; \
	fi
#
# Install hooks:
# cc1plus is installed elsewhere as part of $(COMPILERS).

# Nothing to do here.
c++.install-normal:

# Install the driver program as $(target)-g++
# and also as either g++ (if native) or $(tooldir)/bin/g++.
c++.install-common:
	-if [ -f cc1plus$(exeext) ] ; then \
	  if [ -f g++-cross$(exeext) ] ; then \
	    rm -f $(bindir)/$(GXX_CROSS_NAME)$(exeext); \
	    $(INSTALL_PROGRAM) g++-cross$(exeext) $(bindir)/$(GXX_CROSS_NAME)$(exeext); \
	    chmod a+x $(bindir)/$(GXX_CROSS_NAME)$(exeext); \
	    rm -f $(bindir)/$(CXX_CROSS_NAME)$(exeext); \
	    ln $(bindir)/$(GXX_CROSS_NAME)$(exeext) $(bindir)/$(CXX_CROSS_NAME)$(exeext) \
	      > /dev/null 2>&1 \
	      || cp $(bindir)/$(GXX_CROSS_NAME)$(exeext) $(bindir)/$(CXX_CROSS_NAME)$(exeext) ; \
	  else \
	    rm -f $(bindir)/$(GXX_INSTALL_NAME)$(exeext); \
	    $(INSTALL_PROGRAM) g++$(exeext) $(bindir)/$(GXX_INSTALL_NAME)$(exeext); \
	    chmod a+x $(bindir)/$(GXX_INSTALL_NAME)$(exeext); \
	    rm -f $(bindir)/$(CXX_INSTALL_NAME)$(exeext); \
	    ln $(bindir)/$(GXX_INSTALL_NAME)$(exeext) $(bindir)/$(CXX_INSTALL_NAME)$(exeext) \
	      > /dev/null 2>&1 \
	      || cp $(bindir)/$(GXX_INSTALL_NAME)$(exeext) $(bindir)/$(CXX_INSTALL_NAME)$(exeext) ; \
	  fi ; \
	fi

c++.install-info:

c++.install-man: $(srcdir)/cp/g++.1
	-if [ -f cc1plus$(exeext) ] ; then \
	  if [ -f g++-cross$(exeext) ] ; then \
	    rm -f $(mandir)/$(GXX_CROSS_NAME)$(manext); \
	    $(INSTALL_DATA) $(srcdir)/cp/g++.1 $(mandir)/$(GXX_CROSS_NAME)$(manext); \
	    chmod a-x $(mandir)/$(GXX_CROSS_NAME)$(manext); \
	  else \
	    rm -f $(mandir)/$(GXX_INSTALL_NAME)$(manext); \
	    $(INSTALL_DATA) $(srcdir)/cp/g++.1 $(mandir)/$(GXX_INSTALL_NAME)$(manext); \
	    chmod a-x $(mandir)/$(GXX_INSTALL_NAME)$(manext); \
	  fi; \
	else true; fi

c++.uninstall:
	-rm -rf $(bindir)/$(CXX_INSTALL_NAME)$(exeext)
	-rm -rf $(bindir)/$(CXX_CROSS_NAME)$(exeext)
	-rm -rf $(bindir)/$(GXX_INSTALL_NAME)$(exeext)
	-rm -rf $(bindir)/$(GXX_CROSS_NAME)$(exeext)
	-rm -rf $(mandir)/$(GXX_INSTALL_NAME)$(manext)
	-rm -rf $(mandir)/$(GXX_CROSS_NAME)$(manext)
#
# Clean hooks:
# A lot of the ancillary files are deleted by the main makefile.
# We just have to delete files specific to us.

c++.mostlyclean:
	-rm -f cp/*$(objext) $(DEMANGLER_PROG)
c++.clean:
	-rm -f cplib2.txt cplib2.ready
c++.distclean:
	-rm -f cp/config.status cp/Makefile
	-rm -f cp/parse.output
	-rm -f g++.c
c++.extraclean:
c++.maintainer-clean:
	-rm -f cp/parse.c cp/parse.h
#
# Stage hooks:
# The main makefile has already created stage?/cp.

c++.stage1: stage1-start
	-mv cp/*$(objext) stage1/cp
c++.stage2: stage2-start
	-mv cp/*$(objext) stage2/cp
c++.stage3: stage3-start
	-mv cp/*$(objext) stage3/cp
c++.stage4: stage4-start
	-mv cp/*$(objext) stage4/cp
#
# Maintenance hooks:

# This target creates the files that can be rebuilt, but go in the
# distribution anyway.  It then copies the files to the distdir directory.
c++.distdir:
	mkdir tmp/cp
	mkdir tmp/cp/inc
	cd cp ; $(MAKE) $(FLAGS_TO_PASS) $(CXX_FLAGS_TO_PASS) parse.c hash.h
	cd cp; \
	for file in *[0-9a-zA-Z+]; do \
	  ln $$file ../tmp/cp >/dev/null 2>&1 || cp $$file ../tmp/cp; \
	done
	cd cp/inc; \
	for file in *[0-9a-zA-Z+]; do \
	  ln $$file ../../tmp/cp/inc >/dev/null 2>&1 \
	   || cp $$file ../../tmp/cp/inc; \
	done
# Top level makefile fragment for GNU Objective-C
#   Copyright (C) 1997 Free Software Foundation, Inc.

#This file is part of GNU CC.

#GNU CC is free software; you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation; either version 2, or (at your option)
#any later version.

#GNU CC is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.

#You should have received a copy of the GNU General Public License
#along with GNU CC; see the file COPYING.  If not, write to
#the Free Software Foundation, 59 Temple Place - Suite 330,
#Boston, MA 02111-1307, USA.

# This file provides the language dependent support in the main Makefile.
# Each language makefile fragment must provide the following targets:
#
# foo.all.build, foo.all.cross, foo.start.encap, foo.rest.encap,
# foo.info, foo.dvi,
# foo.install-normal, foo.install-common, foo.install-info, foo.install-man,
# foo.uninstall, foo.distdir,
# foo.mostlyclean, foo.clean, foo.distclean, foo.extraclean,
# foo.maintainer-clean, foo.stage1, foo.stage2, foo.stage3, foo.stage4
#
# where `foo' is the name of the language.
#
# It should also provide rules for:
#
# - making any compiler driver (eg: g++)
# - the compiler proper (eg: cc1plus)
# - define the names for selecting the language in LANGUAGES.
#
# Extra flags to pass to recursive makes.
OBJC_FLAGS_TO_PASS = \
	"OBJC_FOR_BUILD=$(OBJC_FOR_BUILD)" \
	"OBJCFLAGS=$(OBJCFLAGS)" \
	"OBJC_FOR_TARGET=$(OBJC_FOR_TARGET)" \

# Actual names to use when installing a native compiler.
#OBJC_INSTALL_NAME = `t='$(program_transform_name)'; echo c++ | sed $$t`

# Actual names to use when installing a cross-compiler.
#OBJC_CROSS_NAME = `t='$(program_transform_cross_name)'; echo c++ | sed $$t`

#
# Define the names for selecting Objective-C in LANGUAGES.
OBJC objc: cc1obj objc-runtime
OBJECTIVE-C objective-c: cc1obj objc-runtime

# Tell GNU make to ignore these if they exist.
.PHONY: objective-c objc ObjC

# The Objective C thread file
OBJC_THREAD_FILE=thr-$(GCC_THREAD_FILE)

# Language-specific object files for Objective C.
OBJC_OBJS = objc-parse.o objc-act.o $(C_AND_OBJC_OBJS)

cc1obj: $(P) $(OBJC_OBJS) $(OBJS) $(BC_OBJS) $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ $(OBJC_OBJS) $(OBJS) \
		$(BC_OBJS) $(LIBS)

# Objective C language specific files.

objc-parse.o : $(srcdir)/objc/objc-parse.c \
   $(CONFIG_H) $(TREE_H) \
   $(srcdir)/c-lex.h $(srcdir)/c-tree.h $(srcdir)/input.h \
   $(srcdir)/flags.h $(srcdir)/output.h $(srcdir)/objc/objc-act.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -I$(srcdir)/objc \
	-c $(srcdir)/objc/objc-parse.c

$(srcdir)/objc/objc-parse.c : $(srcdir)/objc/objc-parse.y
	cd $(srcdir)/objc; \
	$(BISON) $(BISONFLAGS) objc-parse.y -o objc-parse.c

$(srcdir)/objc/objc-parse.y: $(srcdir)/c-parse.in
	echo '/*WARNING: This file is automatically generated!*/' >tmp-objc-prs.y
	sed -e "/^ifc$$/,/^end ifc$$/d" \
	  -e "/^ifobjc$$/d" -e "/^end ifobjc$$/d" \
	  $(srcdir)/c-parse.in >>tmp-objc-prs.y
	$(srcdir)/move-if-change tmp-objc-prs.y $(srcdir)/objc/objc-parse.y

objc-act.o : $(srcdir)/objc/objc-act.c \
   $(CONFIG_H) $(TREE_H) $(RTL_H) \
   $(srcdir)/c-tree.h $(srcdir)/c-lex.h \
   $(srcdir)/flags.h $(srcdir)/objc/objc-act.h $(srcdir)/input.h \
   $(srcdir)/function.h $(srcdir)/output.h $(srcdir)/c-parse.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -I$(srcdir)/objc \
	-c $(srcdir)/objc/objc-act.c

objc-runtime: objc-headers libobjc.a

# copy objc header files into build directory
objc-headers: stmp-fixinc
	if [ -d include ]; then true; else mkdir include; fi
	cd objc; \
	if [ -f Makefile ]; then \
	  $(MAKE) copy-headers \
	  tooldir=$(tooldir) \
	  AR="$(AR)" AR_FLAGS="$(AR_FLAGS)" \
	  GCC_FOR_TARGET="../xgcc -B../" \
	  GCC_CFLAGS="$(GCC_CFLAGS)" incinstalldir=../include; \
	fi
	touch objc-headers

# Objective C runtime library specific files.

OBJC_O = objc/hash.o objc/sarray.o \
	objc/class.o objc/sendmsg.o \
	objc/init.o objc/archive.o \
	objc/encoding.o objc/selector.o \
	objc/objects.o objc/misc.o \
	objc/NXConstStr.o objc/Object.o \
	objc/Protocol.o objc/nil_method.o \
	objc/thr.o objc/linking.o \
	objc/$(OBJC_THREAD_FILE).o

objc/hash.o: $(srcdir)/objc/hash.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/hash.c -o $@
objc/sarray.o: $(srcdir)/objc/sarray.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/sarray.c -o $@
objc/class.o: $(srcdir)/objc/class.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/class.c -o $@
objc/sendmsg.o: $(srcdir)/objc/sendmsg.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) -Iobjc \
	-c $(srcdir)/objc/sendmsg.c -o $@
objc/init.o: $(srcdir)/objc/init.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/init.c -o $@
objc/archive.o: $(srcdir)/objc/archive.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/archive.c -o $@
objc/encoding.o: $(srcdir)/objc/encoding.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/encoding.c -o $@
objc/selector.o: $(srcdir)/objc/selector.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/selector.c -o $@
objc/objects.o: $(srcdir)/objc/objects.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/objects.c -o $@
objc/misc.o: $(srcdir)/objc/misc.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/misc.c -o $@
objc/NXConstStr.o: $(srcdir)/objc/NXConstStr.m $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-fgnu-runtime -c $(srcdir)/objc/NXConstStr.m -o $@
objc/Object.o: $(srcdir)/objc/Object.m $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-fgnu-runtime -c $(srcdir)/objc/Object.m -o $@
objc/Protocol.o: $(srcdir)/objc/Protocol.m $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-fgnu-runtime -c $(srcdir)/objc/Protocol.m -o $@
objc/thr.o: $(srcdir)/objc/thr.h $(srcdir)/objc/thr.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/thr.c -o $@
objc/$(OBJC_THREAD_FILE).o: $(srcdir)/objc/$(OBJC_THREAD_FILE).c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/$(OBJC_THREAD_FILE).c -o $@
objc/nil_method.o: $(srcdir)/objc/nil_method.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/nil_method.c -o $@
objc/linking.o: $(srcdir)/objc/linking.m $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-fgnu-runtime -c $(srcdir)/objc/linking.m -o $@

objc/libobjc_entry.o: $(srcdir)/objc/libobjc_entry.c $(GCC_PASSES)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) \
	-c $(srcdir)/objc/libobjc_entry.c -o $@

# Build the Objective C runtime library.
libobjc.a: cc1obj specs stmp-int-hdrs libgcc2.ready \
 $(USE_COLLECT2) $(EXTRA_PARTS) objc/runtime-info.h $(OBJC_O)
	-rm -f libobjc.a
	$(AR) $(AR_FLAGS) libobjc.a $(OBJC_O)
	-if $(RANLIB_TEST) ; then $(RANLIB) libobjc.a; else true; fi

libobjc_s.a: libobjc.a
	mv libobjc.a libobjc_s.a

# Create a relocatable DLL
libobjc.dll: libobjc_s.a objc/libobjc_entry.o
	$(GCC_FOR_TARGET) -mdll -Wl,--base-file -Wl,libobjc.base \
		-o libobjc.dll libobjc_s.a \
		objc/libobjc_entry.o -lkernel32
	$(DLLTOOL) --dllname libobjc.dll --def $(srcdir)/objc/libobjc.def \
		--base-file libobjc.base --output-exp libobjc.exp
	$(GCC_FOR_TARGET) -mdll -Wl,--base-file libobjc.base libobjc.exp \
		-o libobjc.dll libobjc_s.a \
		objc/libobjc_entry.o -lkernel32
	$(DLLTOOL) --dllname libobjc.dll --def $(srcdir)/objc/libobjc.def \
		--base-file libobjc.base --output-exp libobjc.exp
	$(GCC_FOR_TARGET) libobjc.exp -mdll \
		-o libobjc.dll libobjc_s.a \
		objc/libobjc_entry.o -lkernel32
	$(DLLTOOL) --dllname libobjc.dll --def $(srcdir)/objc/libobjc.def \
		--output-lib libobjc.a

# Platform generated information needed by ObjC runtime
objc/runtime-info.h: cc1obj
	echo "" > emptyfile
	echo "/* This file is automatically generated */" >$@
	./cc1obj -print-objc-runtime-info emptyfile >>$@

#
# Build hooks:

objc.all.build:
objc.all.cross:
objc.start.encap:
objc.rest.encap:

objc.info:
objc.dvi:

#
# Install hooks:
# cc1obj is installed elsewhere as part of $(COMPILERS).

objc.install-normal: installdirs
	-if [ -f libobjc.a ] ; then \
	  rm -f $(libsubdir)/libobjc.a; \
	  $(INSTALL_DATA) libobjc.a $(libsubdir)/libobjc.a; \
	  if $(RANLIB_TEST) ; then \
	    (cd $(libsubdir); $(RANLIB) libobjc.a); else true; fi; \
	  chmod a-x $(libsubdir)/libobjc.a; \
	else true; fi
	-if [ -f libobjc_s.a ] ; then \
	  rm -f $(libsubdir)/libobjc_s.a; \
	  $(INSTALL_DATA) libobjc_s.a $(libsubdir)/libobjc_s.a; \
	  if $(RANLIB_TEST) ; then \
	    (cd $(libsubdir); $(RANLIB) libobjc_s.a); else true; fi; \
	  chmod a-x $(libsubdir)/libobjc_s.a; \
	else true; fi
	-if [ -f libobjc.dll ] ; then \
	  rm -f $(bindir)/libobjc.dll; \
	  $(INSTALL_DATA) libobjc.dll $(bindir)/libobjc.dll; \
	else true; fi

objc.install-common:

objc.install-info:

objc.install-man:

objc.uninstall:
#
# Clean hooks:
# A lot of the ancillary files are deleted by the main makefile.
# We just have to delete files specific to us.
objc.mostlyclean:
	-rm -f tmp-objc-prs.y
	-rm -f objc/*$(objext) objc/xforward objc/fflags
	-rm -f objc/runtime-info.h
	-rm -f libobjc.a libobjc_s.a libobjc.dll
	-rm -f libobjc.base libobjc.exp
objc.clean: objc.mostlyclean
	-rm -rf objc-headers
objc.distclean:
	-rm -f objc/Makefile objc/Make-host objc/Make-target
	-rm -f objc/config.status objc/config.cache
	-rm -f objc-parse.output
objc.extraclean:
objc.maintainer-clean:
	-rm -f objc/objc-parse.y
	-rm -f objc/objc-parse.c objc/objc-parse.output

#
# Stage hooks:

objc.stage1:
	-mv objc/*$(objext) stage1/objc
	-mv cc1obj$(exeext) stage1
	-mv libobjc.a stage1
objc.stage2:
	-mv objc/*$(objext) stage2/objc
	-mv cc1obj$(exeext) stage2
	-mv libobjc.a stage2
objc.stage3:
	-mv objc/*$(objext) stage3/objc
	-mv cc1obj$(exeext) stage3
	-mv libobjc.a stage3
objc.stage4:
	-mv objc/*$(objext) stage4/objc
	-mv cc1obj$(exeext) stage4
	-mv libobjc.a stage4

#
# Maintenance hooks:

# This target creates the files that can be rebuilt, but go in the
# distribution anyway.  It then copies the files to the distdir directory.
objc.distdir:
	mkdir tmp/objc
	cd objc ; $(MAKE) $(FLAGS_TO_PASS) objc-parse.c
	cd objc; \
	for file in *[0-9a-zA-Z+]; do \
	  ln $$file ../tmp/objc >/dev/null 2>&1 || cp $$file ../tmp/objc; \
	done

# End of language makefile fragments.
#
# Avoid a lot of time thinking about remaking Makefile.in and *.def.
.SUFFIXES: .in .def

Makefile: $(srcdir)/Makefile.in config.status $(srcdir)/version.c \
   $(xmake_file) $(tmake_file) $(LANG_MAKEFILES)
	$(SHELL) $(srcdir)/configure.frag $(srcdir) "$(SUBDIRS)" \
		"$(xmake_file)" "$(tmake_file)"
	cp config.status config.run
	$(SHELL) config.run
	rm -f config.run

$(srcdir)/configure: $(srcdir)/configure.in
	cd $(srcdir); autoconf

# cstamp-h.in controls rebuilding of config.in.
# It is named cstamp-h.in and not stamp-h.in so the mostlyclean rule doesn't
# delete it.  A stamp file is needed as autoheader won't update the file if
# nothing has changed.
# It remains in the source directory and is part of the distribution.
# This follows what is done in shellutils, fileutils, etc.
# "echo timestamp" is used instead of touch to be consistent with other
# packages that use autoconf (??? perhaps also to avoid problems with patch?).
# ??? Newer versions have a maintainer mode that may be useful here.
$(srcdir)/config.in: $(srcdir)/cstamp-h.in
$(srcdir)/cstamp-h.in: $(srcdir)/configure.in $(srcdir)/acconfig.h
	cd $(srcdir) && autoheader
	echo timestamp > $(srcdir)/cstamp-h.in
auto-config.h: cstamp-h ; @true
cstamp-h: config.in config.status
	CONFIG_HEADERS=auto-config.h:config.in $(SHELL) config.status

# Really, really stupid make features, such as SUN's KEEP_STATE, may force
# a target to build even if it is up-to-date.  So we must verify that
# config.status does not exist before failing.
config.status: configure version.c
	@if [ ! -f config.status ] ; then \
	  echo You must configure gcc.  Look at the INSTALL file for details.; \
	  false; \
	else \
	  $(SHELL) config.status --recheck; \
	fi

all.internal: start.encap rest.encap
# This is what to compile if making a cross-compiler.
# Note that we can compile enquire using the cross-compiler just built,
# although we can't run it on this machine.
all.cross: native gcc-cross specs stmp-headers $(LIBGCC) $(STMP_FIXPROTO) \
	$(LIBGCC1_TEST) $(EXTRA_PARTS) lang.all.cross
# This is what to compile if making gcc with a cross-compiler.
all.build: native xgcc $(EXTRA_PARTS) lang.all.build
# This is what must be made before installing GCC and converting libraries.
start.encap: native xgcc specs $(LIBGCC1) xlimits.h lang.start.encap
# These can't be made until after GCC can run.
rest.encap: stmp-headers $(LIBGCC) $(STMP_FIXPROTO) $(EXTRA_PARTS) lang.rest.encap
# This is what is made with the host's compiler
# whether making a cross compiler or not.
native: config.status auto-config.h cpp $(LANGUAGES) \
	$(EXTRA_PASSES) $(EXTRA_PROGRAMS) $(USE_COLLECT2)

# Define the names for selecting languages in LANGUAGES.
C c: cc1
PROTO: proto

# Tell GNU make these are phony targets.
.PHONY: C c PROTO proto

# On the target machine, finish building a cross compiler.
# This does the things that can't be done on the host machine.
rest.cross: $(LIBGCC) gfloat.h specs

# Verify that it works to compile and link libgcc1-test.
# If it does, then there are sufficient replacements for libgcc1.a.
libgcc1-test: libgcc1-test.o native $(GCC_PARTS)
	@echo "Testing libgcc1.  Ignore linker warning messages."
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) libgcc1-test.o -o libgcc1-test \
	  -nostartfiles -nostdlib `$(GCC_FOR_TARGET) --print-libgcc-file-name`
libgcc1-test.o: libgcc1-test.c native xgcc
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(ALL_CPPFLAGS) -c $(srcdir)/libgcc1-test.c

# Recompile all the language-independent object files.
# This is used only if the user explicitly asks for it.
compilations: ${OBJS}

# Create a list of the language-independent object files so the language
# subdirectories needn't mention their names explicitly.
stamp-objlist: $(OBJS) $(BC_OBJS)
	echo " $(OBJS) $(BC_OBJS)" | sed -e 's, \([a-z0-9]\), ../\1,g' -e 's/\.o/$(objext)/g' >stamp-objlist

# We call this executable `xgcc' rather than `gcc'
# to avoid confusion if the current directory is in the path
# and CC is `gcc'.  It is renamed to `gcc' when it is installed.
xgcc: gcc.o version.o choose-temp.o pexecute.o prefix.o version.o \
   $(LIBDEPS) $(EXTRA_GCC_OBJS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ gcc.o prefix.o version.o \
	  choose-temp.o pexecute.o $(EXTRA_GCC_OBJS) $(LIBS)

# Dump a specs file to make -B./ read these specs over installed ones.
specs: xgcc
	$(GCC_FOR_TARGET) -dumpspecs > tmp-specs
	mv tmp-specs specs

# We do want to create an executable named `xgcc', so we can use it to
# compile libgcc2.a.
# Also create gcc-cross, so that install-common will install properly.
gcc-cross: xgcc
	cp xgcc$(exeext) gcc-cross$(exeext)

cc1: $(P) $(C_OBJS) $(OBJS) $(BC_OBJS) $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ $(C_OBJS) $(OBJS) $(BC_OBJS) $(LIBS)

# Copy float.h from its source.
gfloat.h: $(FLOAT_H)
	-rm -f gfloat.h
	cp $(FLOAT_H) gfloat.h

# Create float.h source for the native machine.
# Make it empty if we can use the system float.h without changes.
float.h-nat: enquire
	-./enquire -f > tmp-float.h
	grep '#define [^_]' tmp-float.h >/dev/null || true > tmp-float.h
	mv tmp-float.h float.h-nat

# Create a dummy float.h source for a cross-compiler.
# ??? This isn't used anymore.  Should we create config/float-unkn.h
# and make that the default float_format in configure?
float.h-cross:
	echo "#ifndef	__GCC_FLOAT_NOT_NEEDED" > t-float.h-cross
	echo "#error float.h values not known for cross-compiler" >> t-float.h-cross
	echo "#endif" >> t-float.h-cross
	mv t-float.h-cross float.h-cross

# Used to compile enquire with standard cc, but have forgotten why.
# Let's try with GCC.
enquire: enquire.o $(GCC_PARTS)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(ENQUIRE_LDFLAGS) enquire.o -o $@
enquire.o: $(srcdir)/enquire.c $(GCC_PASSES) stmp-int-hdrs
	rm -f include/float.h
	if $(FLOAT_H_TEST); then \
	  SYS_FLOAT_H_WRAP=1; \
	else :; \
	  SYS_FLOAT_H_WRAP=0; \
	fi; \
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(ALL_CPPFLAGS) $(ENQUIRE_CFLAGS) \
	  -DSYS_FLOAT_H_WRAP=$$SYS_FLOAT_H_WRAP \
	  -I. -c $(srcdir)/enquire.c

# Build the version of limits.h that we will install.
xlimits.h: glimits.h limitx.h limity.h
	if $(LIMITS_H_TEST) ; then \
	  cat $(srcdir)/limitx.h $(srcdir)/glimits.h $(srcdir)/limity.h > tmp-xlimits.h; \
	else \
	  cat $(srcdir)/glimits.h > tmp-xlimits.h; \
	fi
	mv tmp-xlimits.h xlimits.h
#
# Build libgcc.a.
# This is done in two parts because some functions, in libgcc1.c,
# must be compiled with something other than GCC,
# while the rest, in libgcc2.c, must be compiled with xgcc.
# That means we can't do libgcc2.c until after xgcc, cc1, etc.

# Use this as value of LIBGCC1 to cause conversion to GNU library format.
# LIBCONVERT should put its output in libgcc1.conv.
libgcc1.conv: libgcc1.a
	$(LIBCONVERT) libgcc1.a libgcc1.conv

# Use this as value of LIBGCC1 to inhibit use of libgcc1.c entirely.
# Make an empty file instead.
libgcc1.null: $(GCC_PASSES)
	echo "__foo () {}" > dummy.c
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) -c dummy.c
	$(OLDAR) $(OLDAR_FLAGS) libgcc1.null dummy$(objext)
	rm -f dummy$(objext) dummy.c

# This is $(LIBGCC1) for a cross-compiler.
# We have no automatic way of building libgcc1.a, 
# so it's up to the installer to find a way to do that.
# This rule deliberately does not depend on libgcc1.a
# so that it will fail if the installer hasn't provided it.
libgcc1.cross:
	mv libgcc1.a libgcc1.cross || (echo You must find a way to make libgcc1.a; false)

# Compile the library of arithmetic subroutines with the native compiler.
# Don't compile it with GCC!
# (That would cause most arithmetic functions to call themselves.)
#
# NOTE: If you modify these rules substantially, please be sure to
# check at least config/i386/t-sco5 and possibly other makefile
# fragments.
libgcc1.a: libgcc1.c $(CONFIG_H) $(LIB1FUNCS_EXTRA) config.status
	-rm -f tmplibgcc1.a
# Actually build it in tmplibgcc1.a, then rename at end,
# so that libgcc1.a itself remains nonexistent if compilation is aborted.
# -e causes any failing command to make this rule fail.
# -e doesn't work in certain shells, so we test $$? as well.
# lynx has a broken ar, it always complains when the initial library is
# empty, thus this command works only if we don't do -e
# There is a trailing backslash (\) deleted from the following line.
#	set -e;
	for name in $(LIB1FUNCS); \
	do \
	  echo $${name}; \
	  rm -f $${name}$(objext); \
	  $(OLDCC) -DIN_LIBGCC1 $(CCLIBFLAGS) $(INCLUDES) -c -DL$${name} $(srcdir)/libgcc1.c; \
	  if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	  mv libgcc1$(objext) $${name}$(objext); \
	  $(OLDAR) $(OLDAR_FLAGS) tmplibgcc1.a $${name}$(objext); \
	  rm -f $${name}$(objext); \
	done
# Some shells crash when a loop has no items.
# So make sure there is always at least one--`..'.
# Then ignore it.
# We don't use -e here because there are if statements
# that should not make the command give up when the if condition is false.
# Instead, we test for failure after each command where it matters.
	for file in .. $(LIB1FUNCS_EXTRA); \
	do \
	  if [ x$${file} != x.. ]; then \
	    name=`echo $${file} | sed -e 's/[.][cS]$$//' -e 's/[.]asm$$//'`; \
	    echo $${name}; \
	    if [ $${name}.asm = $${file} ]; then \
	      cp $${file} $${name}.s || exit 1; file=$${name}.s; \
	    else true; fi; \
	    $(OLDCC) -DIN_LIBGCC1 $(CCLIBFLAGS) $(INCLUDES) -c $${file}; \
	    if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	    $(OLDAR) $(OLDAR_FLAGS) tmplibgcc1.a $${name}$(objext); \
	    if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	    rm -f $${name}.s $${name}$(objext); \
	  else true; \
	  fi; \
	done
	-if $(RANLIB_TEST) ; then $(RANLIB) tmplibgcc1.a; else true; fi
	mv tmplibgcc1.a libgcc1.a

# Build libgcc1.a from assembler source.  LIB1ASMFUNCS is the list of
# functions.  LIB1ASMSRC is the name of the source file in the config
# subdirectory.
libgcc1-asm.a: libgcc2.ready config.status $(srcdir)/config/$(LIB1ASMSRC)
	-rm -f tmplibgcc1.a libgcc1.S
	cp $(srcdir)/config/$(LIB1ASMSRC) libgcc1.S
# Actually build it in tmplibgcc1.a, then rename at end,
# so that libgcc1-asm.a itself remains nonexistent if compilation is aborted.
# -e causes any failing command to make this rule fail.
# -e doesn't work in certain shells, so we test $$? as well.
# lynx has a broken ar, it always complains when the initial library is
# empty, thus this command works only if we don't do -e
# There is a trailing backslash (\) deleted from the following line.
#	set -e;
	for name in $(LIB1ASMFUNCS); \
	do \
	  echo $${name}; \
	  $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c -DL$${name} libgcc1.S; \
	  if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	  mv libgcc1$(objext) $${name}$(objext); \
	  $(AR) $(AR_FLAGS) tmplibgcc1.a $${name}$(objext); \
	  rm -f $${name}$(objext); \
	done
	-rm -f libgcc1.S
	mv tmplibgcc1.a libgcc1-asm.a

# Generate assembly versions of the functions required for libgcc1.
# You'll still need to massage the code by hand (possibly hacking
# underscores and local labels) but this will get you started.
libgcc1.S: libgcc1.c $(CONFIG_H) config.status
	-rm -f libgcc1.S
	touch libgcc1.S
	for name in $(LIB1FUNCS); \
	do \
	  echo $${name}; \
	  $(OLDCC) -DIN_LIBGCC1 $(CCLIBFLAGS) $(INCLUDES) -S -DL$${name} $(srcdir)/libgcc1.c; \
	  if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	  echo '#ifdef ' L$${name} >> libgcc1.S; \
	  cat  libgcc1.s >> libgcc1.S; \
	  echo '#endif /*' L$${name} '*/' >> libgcc1.S; \
	  echo "" >> libgcc1.S; \
	done

# Compiling libgcc2.a requires making sure that cc1, etc. have been compiled.
# But recompiling cc1 should not force recompilation of libgcc2.a.
# If you want to force recompilation, delete libgcc2.a.
libgcc2.ready: $(GCC_PASSES) $(LIBGCC2_DEPS) stmp-int-hdrs
	-if [ -f libgcc2.ready ] ; then \
		true; \
	else \
		touch libgcc2.ready; \
	fi

LIB2ADD = $(srcdir)/frame.c $(LIB2FUNCS_EXTRA) $(LANG_LIB2FUNCS)
libgcc2.a: libgcc2.c libgcc2.ready $(CONFIG_H) $(LIB2ADD) \
   machmode.h longlong.h frame.h gansidecl.h gbl-ctors.h config.status
# Actually build it in tmplibgcc2.a, then rename at end,
# so that libgcc2.a itself remains nonexistent if compilation is aborted.
	-rm -f tmplibgcc2.a
# -e causes any failing command to make this rule fail.
# -e doesn't work in certain shells, so we test $$? as well.
# lynx has a broken ar, it always complains when the initial library is
# empty, thus this command works only if we don't do -e
# There is a trailing backslash (\) deleted from the following line.
#	set -e;
	for name in $(LIB2FUNCS); \
	do \
	  echo $${name}; \
	  $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c -DL$${name} \
	      $(srcdir)/libgcc2.c -o $${name}$(objext); \
	  if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	  $(AR) $(AR_FLAGS) tmplibgcc2.a $${name}$(objext); \
	  rm -f $${name}$(objext); \
	done
# Some shells crash when a loop has no items.
# So make sure there is always at least one--`..'.
# Then ignore it.
# We don't use -e here because there are if statements
# that should not make the command give up when the if condition is false.
# Instead, we test for failure after each command where it matters.
	for file in $(LIB2ADD); do \
	  name=`echo $${file} | sed -e 's/[.][cSo]$$//' -e 's/[.]asm$$//' -e 's/[.]txt$$//'`; \
	  oname=` echo $${name} | sed -e 's,.*/,,'`; \
	  if [ $${name}.txt = $${file} ]; then \
	    for f in .. `cat $${file}`; do if [ x$${f} != x.. ]; then \
	      $(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
		AR="$(AR)" AR_FLAGS="$(AR_FLAGS)" CC="$(CC)" \
		CFLAGS="$(CFLAGS)" HOST_PREFIX="$(HOST_PREFIX)" \
		HOST_PREFIX_1="$(HOST_PREFIX_1)" \
		LANGUAGES="$(LANGUAGES)" \
		LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS)" $${f}; \
	      if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	      $(AR) $(AR_FLAGS) tmplibgcc2.a $${f}; \
	      rm -f $${f}; \
	    else true; \
	    fi; done; \
	  else \
	    echo $${name}; \
	    if [ $${name}.asm = $${file} ]; then \
	      cp $${file} $${name}.s || exit 1; file=$${name}.s; \
	    else true; fi; \
	    $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c $${file}; \
	    if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	    $(AR) $(AR_FLAGS) tmplibgcc2.a $${oname}$(objext); \
	    rm -f $${name}.s $${oname}$(objext); \
	  fi; \
	done
	mv tmplibgcc2.a libgcc2.a
# These lines were deleted from above the mv command
# because ranlibing libgcc.a itself should suffice.
#	-if [ x${HPUX_GAS} = x ] ; then \
#	  if $(RANLIB_TEST) ; then $(RANLIB) tmplibgcc2.a; else true; fi; \
#	else true; fi

# Combine the various libraries into a single library, libgcc.a.
libgcc.a: $(LIBGCC1) $(LIBGCC2)
	-rm -rf tmplibgcc.a libgcc.a tmpcopy
	mkdir tmpcopy
	-if [ x$(LIBGCC1) != x ];			\
	then (cd tmpcopy; $(AR) x ../$(LIBGCC1));	\
	else true;					\
	fi
# Some versions of ar (specifically the one in RISC/os 5.x), create an
# unwritable table of contents file, and then print an error message when
# the second ar command tries to overwrite this file.  To avoid the error
# message from ar, we make sure all files are writable.
	-(cd tmpcopy; chmod +w * > /dev/null 2>&1)
	(cd tmpcopy; $(AR) x ../$(LIBGCC2))
	(cd tmpcopy; $(AR) $(AR_FLAGS) ../tmplibgcc.a *$(objext))
	rm -rf tmpcopy
	-if $(RANLIB_TEST) ; then $(RANLIB) tmplibgcc.a; else true; fi
# Actually build it in tmplibgcc.a, then rename at end,
# so that libgcc.a itself remains nonexistent if compilation is aborted.
	mv tmplibgcc.a libgcc.a

# Use the genmultilib shell script to generate the information the gcc
# driver program needs to select the library directory based on the
# switches.
multilib.h: stamp-mlib; @true
stamp-mlib: $(srcdir)/genmultilib Makefile
	$(SHELL) $(srcdir)/genmultilib \
	  "$(MULTILIB_OPTIONS)" \
	  "$(MULTILIB_DIRNAMES)" \
	  "$(MULTILIB_MATCHES)" \
	  "$(MULTILIB_EXCEPTIONS)" \
	  "$(MULTILIB_EXTRA_OPTS)" > tmp-mlib.h
	$(srcdir)/move-if-change tmp-mlib.h multilib.h
	touch stamp-mlib

# Build multiple copies of libgcc.a, one for each target switch.
stmp-multilib: $(LIBGCC1) libgcc2.c libgcc2.ready $(CONFIG_H) \
   frame.h gansidecl.h \
   $(LIB2ADD) machmode.h longlong.h gbl-ctors.h config.status
	for i in `$(GCC_FOR_TARGET) --print-multi-lib`; do \
	  dir=`echo $$i | sed -e 's/;.*$$//'`; \
	  flags=`echo $$i | sed -e 's/^[^;]*;//' -e 's/@/ -/g'`; \
	  $(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	    AR="$(AR)" AR_FLAGS="$(AR_FLAGS)" CC="$(CC)" CFLAGS="$(CFLAGS)" \
	    RANLIB="$(RANLIB)" RANLIB_TEST="$(RANLIB_TEST)" \
	    LANGUAGES="$(LANGUAGES)" \
	    HOST_PREFIX="$(HOST_PREFIX)" HOST_PREFIX_1="$(HOST_PREFIX_1)" \
	    LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) $${flags}" \
	    MULTILIB_CFLAGS="$${flags}" \
	    LIBGCC1="$(LIBGCC1)" LIBGCC2="$(LIBGCC2)" \
	    dir="$${dir}" stmp-multilib-sub; \
	  if [ $$? -eq 0 ] ; then true; else exit 1; fi; \
	done
	touch stmp-multilib

# Subroutine of stmp-multilib so make -n works.
stmp-multilib-sub:
	rm -f $(LIBGCC2)
	if [ -d $(dir) ]; then \
	  cd $(dir); \
	  rm -f libgcc.a $(EXTRA_MULTILIB_PARTS); \
	else true; \
	fi
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR="$(AR)" AR_FLAGS="$(AR_FLAGS)" CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  HOST_PREFIX="$(HOST_PREFIX)" HOST_PREFIX_1="$(HOST_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS)" $(LIBGCC2)
	if [ x$(LIBGCC1) != xlibgcc1-asm.a ]; \
	then true; \
	else rm -f $(LIBGCC1); \
	fi
	if [ x$(LIBGCC1) != xlibgcc1-asm.a ]; \
	then true; \
	else \
	  $(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	    AR="$(AR)" AR_FLAGS="$(AR_FLAGS)" CC="$(CC)" CFLAGS="$(CFLAGS)" \
	    HOST_PREFIX="$(HOST_PREFIX)" HOST_PREFIX_1="$(HOST_PREFIX_1)" \
	    LANGUAGES="$(LANGUAGES)" \
	    LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS)" $(LIBGCC1); \
	fi
	rm -rf tmplibgcc.a tmpcopy
	mkdir tmpcopy
	if [ x$(LIBGCC1) != x ]; \
	then (cd tmpcopy; $(AR) x ../$(LIBGCC1)); \
	else true; \
	fi
	(cd tmpcopy; $(AR) x ../$(LIBGCC2))
	(cd tmpcopy; $(AR) $(AR_FLAGS) ../tmplibgcc.a *$(objext))
	rm -rf libgcc2.a tmpcopy
	if $(RANLIB_TEST) ; then $(RANLIB) tmplibgcc.a; else true; fi
	if [ -d $(dir) ]; then true; else mkdir $(dir); fi
	mv tmplibgcc.a $(dir)/libgcc.a
	for f in .. $(EXTRA_MULTILIB_PARTS); do if [ x$${f} != x.. ]; then \
	  $(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	    AR="$(AR)" AR_FLAGS="$(AR_FLAGS)" CC="$(CC)" CFLAGS="$(CFLAGS)" \
	    HOST_PREFIX="$(HOST_PREFIX)" HOST_PREFIX_1="$(HOST_PREFIX_1)" \
	    LANGUAGES="$(LANGUAGES)" \
	    MULTILIB_CFLAGS="$(MULTILIB_CFLAGS)" T="t" t$${f}; \
	  mv t$${f} $(dir)/$${f}; \
	else true; \
	fi; done

# Compile two additional files that are linked with every program
# linked using GCC on systems using COFF or ELF, for the sake of C++
# constructors.
$(T)crtbegin.o: crtstuff.c $(GCC_PASSES) $(CONFIG_H) \
  defaults.h frame.h gbl-ctors.h
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) $(MULTILIB_CFLAGS) -g0 \
	  -finhibit-size-directive -fno-inline-functions -fno-exceptions $(CRTSTUFF_T_CFLAGS) \
	  -c $(srcdir)/crtstuff.c -DCRT_BEGIN -o $(T)crtbegin$(objext)

$(T)crtend.o: crtstuff.c $(GCC_PASSES) $(CONFIG_H) \
  defaults.h frame.h gbl-ctors.h
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) $(MULTILIB_CFLAGS) -g0 \
	  -finhibit-size-directive -fno-inline-functions -fno-exceptions $(CRTSTUFF_T_CFLAGS) \
	  -c $(srcdir)/crtstuff.c -DCRT_END -o $(T)crtend$(objext)

# On some systems we also want to install versions of these files
# compiled using PIC for use in shared libraries.
crtbeginS.o crtendS.o: stamp-crtS ; @true

stamp-crtS: crtstuff.c $(GCC_PASSES) $(CONFIG_H) \
  defaults.h frame.h gbl-ctors.h
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) $(CRTSTUFF_T_CFLAGS_S) \
	  -DCRT_BEGIN -finhibit-size-directive -fno-inline-functions \
	  -g0 -c $(srcdir)/crtstuff.c 
	mv crtstuff$(objext) crtbeginS$(objext)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(INCLUDES) $(CRTSTUFF_T_CFLAGS_S) \
	  -DCRT_END -finhibit-size-directive -fno-inline-functions \
	  -g0 -c $(srcdir)/crtstuff.c -o crtendS$(objext)
	touch stamp-crtS

# Compile the start modules crt0.o and mcrt0.o that are linked with every program
crt0.o: stamp-crt0 ; @true
mcrt0.o: stamp-crt0; @true

stamp-crt0:	$(CRT0_S) $(MCRT0_S) $(GCC_PASSES) $(CONFIG_H)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(CRT0STUFF_T_CFLAGS) \
	  -o crt0.o -c $(CRT0_S)
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(CRT0STUFF_T_CFLAGS) \
	  -o mcrt0.o -c $(MCRT0_S)
	touch stamp-crt0
#
# Compiling object files from source files.

# Note that dependencies on obstack.h are not written
# because that file is not part of GCC.

# C language specific files.

c-parse.o : $(srcdir)/c-parse.c $(CONFIG_H) $(TREE_H) c-lex.h \
    $(srcdir)/c-parse.h c-tree.h input.h flags.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c $(srcdir)/c-parse.c
$(srcdir)/c-parse.h: $(srcdir)/c-parse.c
$(srcdir)/c-parse.c: $(srcdir)/c-parse.y
	cd $(srcdir); $(BISON) $(BISONFLAGS) -d c-parse.y -o c-parse.c
$(srcdir)/c-parse.y: c-parse.in
	echo '/*WARNING: This file is automatically generated!*/' >tmp-c-parse.y
	sed -e "/^ifobjc$$/,/^end ifobjc$$/d" \
	  -e "/^ifc$$/d" -e "/^end ifc$$/d" \
	  $(srcdir)/c-parse.in >>tmp-c-parse.y
	$(srcdir)/move-if-change tmp-c-parse.y $(srcdir)/c-parse.y

$(srcdir)/c-gperf.h: c-parse.gperf
	gperf -p -j1 -i 1 -g -o -t -G -N is_reserved_word -k1,3,$$ \
	   $(srcdir)/c-parse.gperf >tmp-gperf.h
	 $(srcdir)/move-if-change tmp-gperf.h $(srcdir)/c-gperf.h

c-decl.o : c-decl.c $(CONFIG_H) $(TREE_H) c-tree.h c-lex.h flags.h output.h
c-typeck.o : c-typeck.c $(CONFIG_H) $(TREE_H) c-tree.h flags.h output.h
c-lang.o : c-lang.c $(CONFIG_H) $(TREE_H)
c-lex.o : c-lex.c $(CONFIG_H) $(TREE_H) c-lex.h c-tree.h $(srcdir)/c-parse.h \
    input.h flags.h $(srcdir)/c-gperf.h c-pragma.h
c-aux-info.o : c-aux-info.c  $(CONFIG_H) $(TREE_H) c-tree.h flags.h
c-convert.o : c-convert.c $(CONFIG_H) $(TREE_H) flags.h
c-pragma.o: c-pragma.c $(CONFIG_H) $(TREE_H) except.h function.h \
    defaults.h c-pragma.h
c-iterate.o: c-iterate.c $(CONFIG_H) $(TREE_H) $(RTL_H) c-tree.h flags.h

# To make a configuration always use collect2, set USE_COLLECT2 to ld.
ld: collect2
	rm -f ld$(exeext)
	ln collect2$(exeext) ld$(exeext) > /dev/null 2>&1 \
	   || cp collect2$(exeext) ld$(exeext)

collect2 : collect2.o cplus-dem.o underscore.o version.o \
	choose-temp.o $(LIBDEPS)
# Don't try modifying collect2 (aka ld) in place--it might be linking this.
	-rm -f collect2$(exeext)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ collect2.o \
	  cplus-dem.o underscore.o version.o choose-temp.o $(LIBS)

collect2.o : collect2.c $(CONFIG_H) gansidecl.h gstab.h obstack.h $(DEMANGLE_H)
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES)  \
	-DTARGET_MACHINE=\"$(target_alias)\" $(MAYBE_USE_COLLECT2) \
	-c `echo $(srcdir)/collect2.c | sed 's,^\./,,'`

cplus-dem.o: cplus-dem.c $(DEMANGLE_H)

underscore.c: stamp-under ; @true

stamp-under: $(GCC_PASSES)
	echo "int xxy_us_dummy;" >tmp-dum.c
	$(GCC_FOR_TARGET) -S tmp-dum.c
	echo '/*WARNING: This file is automatically generated!*/' >tmp-under.c
	if grep _xxy_us_dummy tmp-dum.s > /dev/null ; then \
	  echo "int prepends_underscore = 1;" >>tmp-under.c; \
	else \
	  echo "int prepends_underscore = 0;" >>tmp-under.c; \
	fi
	$(srcdir)/move-if-change tmp-under.c underscore.c
	-rm -f tmp-dum.c tmp-dum.s
	touch stamp-under

# A file used by all variants of C.

c-common.o : c-common.c $(CONFIG_H) $(TREE_H) c-tree.h c-lex.h flags.h

# Language-independent files.

DRIVER_DEFINES = \
  -DSTANDARD_STARTFILE_PREFIX=\"$(libdir)/\" \
  -DSTANDARD_EXEC_PREFIX=\"$(libdir)/gcc/\" \
  -DDEFAULT_TARGET_VERSION=\"$(version)\" \
  -DDEFAULT_TARGET_MACHINE=\"$(target_alias)\" \
  -DTOOLDIR_BASE_PREFIX=\"$(exec_prefix)/\"
gcc.o: gcc.c $(CONFIG_H) gansidecl.h multilib.h Makefile $(lang_specs_files)
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
  $(DRIVER_DEFINES) \
  -c `echo $(srcdir)/gcc.c | sed 's,^\./,,'`

dumpvers: dumpvers.c

version.o: version.c
obstack.o: obstack.c $(CONFIG_H)
choose-temp.o: choose-temp.c $(CONFIG_H) gansidecl.h
pexecute.o: pexecute.c $(CONFIG_H) gansidecl.h
prefix.o: prefix.c $(CONFIG_H) gansidecl.h Makefile
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
	-DPREFIX=\"$(prefix)\" \
	  -c `echo $(srcdir)/prefix.c | sed 's,^\./,,'`

convert.o: convert.c $(CONFIG_H) $(TREE_H) flags.h convert.h

tree.o : tree.c $(CONFIG_H) $(TREE_H) flags.h function.h
print-tree.o : print-tree.c $(CONFIG_H) $(TREE_H)
stor-layout.o : stor-layout.c $(CONFIG_H) $(TREE_H) flags.h function.h
fold-const.o : fold-const.c $(CONFIG_H) $(TREE_H) flags.h 
toplev.o : toplev.c $(CONFIG_H) $(TREE_H) $(RTL_H) bytecode.h bc-emit.h \
   flags.h input.h insn-attr.h xcoffout.h defaults.h output.h \
   $(lang_options_files)
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) \
	  -DTARGET_NAME=\"$(target_alias)\" \
	  -c `echo $(srcdir)/toplev.c | sed 's,^\./,,'`

rtl.o : rtl.c $(CONFIG_H) $(RTL_H)

print-rtl.o : print-rtl.c $(CONFIG_H) $(RTL_H)
rtlanal.o : rtlanal.c $(CONFIG_H) $(RTL_H)

varasm.o : varasm.c $(CONFIG_H) $(TREE_H) $(RTL_H) flags.h function.h \
   defaults.h insn-codes.h expr.h hard-reg-set.h regs.h xcoffout.h \
   output.h bytecode.h c-pragma.h
function.o : function.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h function.h  \
   insn-flags.h insn-codes.h expr.h regs.h hard-reg-set.h insn-config.h \
   $(RECOG_H) output.h bytecode.h bc-emit.h
stmt.o : stmt.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h function.h  \
   insn-flags.h insn-config.h insn-codes.h hard-reg-set.h expr.h except.h \
   loop.h $(RECOG_H) bytecode.h bc-typecd.h bc-typecd.def bc-opcode.h \
   bc-optab.h bc-emit.h
except.o : except.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h function.h  \
   insn-flags.h insn-codes.h expr.h regs.h hard-reg-set.h insn-config.h \
   $(RECOG_H) output.h except.h
expr.o : expr.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h function.h regs.h \
   insn-flags.h insn-codes.h expr.h insn-config.h $(RECOG_H) output.h \
   typeclass.h bytecode.h bc-opcode.h bc-typecd.h bc-typecd.def bc-optab.h \
   bc-emit.h modemap.def hard-reg-set.h
calls.o : calls.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h expr.h insn-codes.h \
   insn-flags.h regs.h
expmed.o : expmed.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h  \
   insn-flags.h insn-config.h insn-codes.h expr.h $(RECOG_H) real.h
explow.o : explow.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h hard-reg-set.h \
   insn-config.h expr.h $(RECOG_H) insn-flags.h insn-codes.h
optabs.o : optabs.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h  \
   insn-flags.h insn-config.h insn-codes.h expr.h $(RECOG_H) reload.h
dbxout.o : dbxout.c $(CONFIG_H) $(TREE_H) $(RTL_H) flags.h regs.h \
   insn-config.h reload.h gstab.h xcoffout.h defaults.h output.h
sdbout.o : sdbout.c $(CONFIG_H) $(TREE_H) $(RTL_H) flags.h except.h \
   function.h expr.h output.h hard-reg-set.h regs.h defaults.h real.h \
   insn-config.h bytecode.h obstack.h xcoffout.h c-pragma.h
dwarfout.o : dwarfout.c $(CONFIG_H) $(TREE_H) $(RTL_H) dwarf.h flags.h \
   insn-config.h reload.h output.h defaults.h
dwarf2out.o : dwarf2out.c $(CONFIG_H) $(TREE_H) $(RTL_H) dwarf2.h flags.h \
   insn-config.h reload.h output.h defaults.h hard-reg-set.h regs.h expr.h
xcoffout.o : xcoffout.c $(CONFIG_H) $(TREE_H) $(RTL_H) xcoffout.h flags.h
emit-rtl.o : emit-rtl.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h except.h \
   function.h regs.h insn-config.h $(RECOG_H) real.h expr.h obstack.h \
   bytecode.h bc-opcode.h bc-typecd.h bc-typecd.def bc-optab.h bc-emit.h \
   bc-opname.h
real.o : real.c $(CONFIG_H) $(TREE_H)
getpwd.o : getpwd.c $(CONFIG_H)

integrate.o : integrate.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h integrate.h \
   insn-flags.h insn-config.h insn-codes.h expr.h real.h regs.h function.h \
   bytecode.h output.h $(RECOG_H) except.h

jump.o : jump.c $(CONFIG_H) $(RTL_H) flags.h hard-reg-set.h regs.h \
   insn-config.h insn-flags.h $(RECOG_H) expr.h real.h except.h
stupid.o : stupid.c $(CONFIG_H) $(RTL_H) regs.h hard-reg-set.h flags.h

cse.o : cse.c $(CONFIG_H) $(RTL_H) regs.h hard-reg-set.h flags.h real.h \
   insn-config.h $(RECOG_H) expr.h
profile.o : profile.c $(CONFIG_H) $(RTL_H) flags.h insn-flags.h gcov-io.h \
   $(TREE_H) output.h regs.h
loop.o : loop.c $(CONFIG_H) $(RTL_H) flags.h loop.h insn-config.h \
   insn-flags.h insn-codes.h regs.h hard-reg-set.h $(RECOG_H) expr.h real.h
unroll.o : unroll.c $(CONFIG_H) $(RTL_H) insn-config.h integrate.h regs.h \
   $(RECOG_H) flags.h expr.h loop.h
flow.o : flow.c $(CONFIG_H) $(RTL_H) flags.h insn-config.h \
   $(BASIC_BLOCK_H) regs.h hard-reg-set.h output.h
combine.o : combine.c $(CONFIG_H) $(RTL_H) flags.h  \
   insn-config.h insn-flags.h insn-codes.h insn-attr.h regs.h expr.h \
   $(BASIC_BLOCK_H) $(RECOG_H) real.h hard-reg-set.h
regclass.o : regclass.c $(CONFIG_H) $(RTL_H) hard-reg-set.h flags.h \
   $(BASIC_BLOCK_H) regs.h insn-config.h $(RECOG_H) reload.h real.h bytecode.h
local-alloc.o : local-alloc.c $(CONFIG_H) $(RTL_H) flags.h $(BASIC_BLOCK_H) \
   regs.h hard-reg-set.h insn-config.h $(RECOG_H) output.h
bitmap.o : bitmap.c $(CONFIG_H) $(RTL_H) flags.h $(BASIC_BLOCK_H) regs.h
global.o : global.c $(CONFIG_H) $(RTL_H) flags.h  \
   $(BASIC_BLOCK_H) regs.h hard-reg-set.h insn-config.h output.h

reload.o : reload.c $(CONFIG_H) $(RTL_H) flags.h output.h expr.h\
   reload.h $(RECOG_H) hard-reg-set.h insn-config.h insn-codes.h regs.h real.h
reload1.o : reload1.c $(CONFIG_H) $(RTL_H) real.h flags.h expr.h \
   reload.h regs.h hard-reg-set.h insn-config.h insn-flags.h insn-codes.h \
   $(BASIC_BLOCK_H) $(RECOG_H) output.h
caller-save.o : caller-save.c $(CONFIG_H) $(RTL_H) flags.h \
   regs.h hard-reg-set.h insn-codes.h insn-config.h $(BASIC_BLOCK_H) $(RECOG_H) \
   reload.h expr.h
reorg.o : reorg.c $(CONFIG_H) $(RTL_H) conditions.h hard-reg-set.h \
   $(BASIC_BLOCK_H) regs.h insn-config.h insn-attr.h insn-flags.h $(RECOG_H) \
   flags.h output.h
sched.o : $(SCHED_PREFIX)sched.c $(CONFIG_H) $(RTL_H) $(BASIC_BLOCK_H) regs.h hard-reg-set.h \
   flags.h insn-config.h insn-attr.h
final.o : final.c $(CONFIG_H) $(RTL_H) $(TREE_H) flags.h regs.h \
   $(RECOG_H) conditions.h insn-config.h insn-attr.h except.h real.h output.h \
   hard-reg-set.h insn-flags.h insn-codes.h gstab.h xcoffout.h defaults.h
recog.o : recog.c $(CONFIG_H) $(RTL_H)  \
   regs.h $(RECOG_H) hard-reg-set.h flags.h insn-config.h insn-attr.h \
   insn-flags.h insn-codes.h real.h
reg-stack.o : reg-stack.c $(CONFIG_H) $(RTL_H) $(TREE_H) \
   regs.h hard-reg-set.h flags.h insn-config.h insn-flags.h

$(out_object_file): $(out_file) $(CONFIG_H) $(TREE_H) \
   $(RTL_H) regs.h hard-reg-set.h real.h insn-config.h conditions.h \
   insn-flags.h output.h insn-attr.h insn-codes.h
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $(out_file)

# Build auxiliary files that support ecoff format.
mips-tfile: mips-tfile.o version.o $(LIBDEPS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ mips-tfile.o version.o $(LIBS)

mips-tfile.o : mips-tfile.c $(CONFIG_H) $(RTL_H)

mips-tdump: mips-tdump.o version.o $(LIBDEPS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ mips-tdump.o version.o $(LIBS)

mips-tdump.o : mips-tdump.c $(CONFIG_H) $(RTL_H)

# Build file to support OSF/rose half-pic format.
halfpic.o: halfpic.c $(CONFIG_H) $(RTL_H) $(TREE_H)

# Normally this target is not used; but it is used if you
# define ALLOCA=alloca.o.  In that case, you must get a suitable alloca.c
# from the GNU Emacs distribution.
alloca.o:	alloca.c
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $(ALLOCA_FLAGS) \
	  -c `echo $(srcdir)/alloca.c | sed 's,^\./,,'`
	$(ALLOCA_FINISH)
#
# Generate header and source files from the machine description, 
# and compile them.

.PRECIOUS: insn-config.h insn-flags.h insn-codes.h \
  insn-emit.c insn-recog.c insn-extract.c insn-output.c insn-peep.c \
  insn-attr.h insn-attrtab.c

# The following pair of rules has this effect:
# genconfig is run only if the md has changed since genconfig was last run;
# but the file insn-config.h is touched only when its contents actually change.

# Each of the other insn-* files is handled by a similar pair of rules.

# This causes an anomaly in the results of make -n
# because insn-* is older than stamp-*
# and thus make -n thinks that insn-* will be updated
# and force recompilation of things that depend on it.
# We use move-if-change precisely to avoid such recompilation.
# But there is no way to teach make -n that it will be avoided.

# Each of the insn-*.[ch] rules has a semicolon at the end,
# for otherwise the system Make on SunOS 4.1 never tries
# to recompile insn-*.o.  To avoid problems and extra noise from
# versions of make which don't like empty commands (nothing after the
# trailing `;'), we call true for each.

insn-config.h: stamp-config ; @true
stamp-config : $(md_file) genconfig $(srcdir)/move-if-change
	./genconfig $(md_file) > tmp-config.h
	$(srcdir)/move-if-change tmp-config.h insn-config.h
	touch stamp-config

insn-flags.h: stamp-flags ; @true
stamp-flags : $(md_file) genflags $(srcdir)/move-if-change
	./genflags $(md_file) > tmp-flags.h
	$(srcdir)/move-if-change tmp-flags.h insn-flags.h
	touch stamp-flags

insn-codes.h: stamp-codes ; @true
stamp-codes : $(md_file) gencodes $(srcdir)/move-if-change
	./gencodes $(md_file) > tmp-codes.h
	$(srcdir)/move-if-change tmp-codes.h insn-codes.h
	touch stamp-codes

insn-emit.o : insn-emit.c $(CONFIG_H) $(RTL_H) expr.h real.h output.h \
  insn-config.h insn-flags.h insn-codes.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c insn-emit.c

insn-emit.c: stamp-emit ; @true
stamp-emit : $(md_file) genemit $(srcdir)/move-if-change
	./genemit $(md_file) > tmp-emit.c
	$(srcdir)/move-if-change tmp-emit.c insn-emit.c
	touch stamp-emit

insn-recog.o : insn-recog.c $(CONFIG_H) $(RTL_H) insn-config.h $(RECOG_H) \
  real.h output.h flags.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c insn-recog.c

insn-recog.c: stamp-recog ; @true
stamp-recog : $(md_file) genrecog $(srcdir)/move-if-change
	./genrecog $(md_file) > tmp-recog.c
	$(srcdir)/move-if-change tmp-recog.c insn-recog.c
	touch stamp-recog

insn-opinit.o : insn-opinit.c $(CONFIG_H) $(RTL_H) insn-codes.h insn-flags.h \
  insn-config.h flags.h $(RECOG_H) expr.h reload.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c insn-opinit.c

insn-opinit.c: stamp-opinit ; @true
stamp-opinit : $(md_file) genopinit $(srcdir)/move-if-change
	./genopinit $(md_file) > tmp-opinit.c
	$(srcdir)/move-if-change tmp-opinit.c insn-opinit.c
	touch stamp-opinit

insn-extract.o : insn-extract.c $(CONFIG_H) $(RTL_H)
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c insn-extract.c

insn-extract.c: stamp-extract ; @true
stamp-extract : $(md_file) genextract $(srcdir)/move-if-change
	./genextract $(md_file) > tmp-extract.c
	$(srcdir)/move-if-change tmp-extract.c insn-extract.c
	touch stamp-extract

insn-peep.o : insn-peep.c $(CONFIG_H) $(RTL_H) regs.h output.h real.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c insn-peep.c

insn-peep.c: stamp-peep ; @true
stamp-peep : $(md_file) genpeep $(srcdir)/move-if-change
	./genpeep $(md_file) > tmp-peep.c
	$(srcdir)/move-if-change tmp-peep.c insn-peep.c
	touch stamp-peep

insn-attrtab.o : insn-attrtab.c $(CONFIG_H) $(RTL_H) regs.h real.h output.h \
     insn-attr.h insn-config.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c insn-attrtab.c

insn-attr.h: stamp-attr ; @true
stamp-attr : $(md_file) genattr $(srcdir)/move-if-change
	./genattr $(md_file) > tmp-attr.h
	$(srcdir)/move-if-change tmp-attr.h insn-attr.h
	touch stamp-attr

insn-attrtab.c: stamp-attrtab ; @true
stamp-attrtab : $(md_file) genattrtab $(srcdir)/move-if-change
	if cmp -s $(PREMADE_ATTRTAB_MD) $(md_file);	\
	then					\
	  echo Using $(PREMADE_ATTRTAB);	\
	  cp $(PREMADE_ATTRTAB) tmp-attrtab.c;	\
	else					\
	  ./genattrtab $(md_file) > tmp-attrtab.c;	\
	fi
	$(srcdir)/move-if-change tmp-attrtab.c insn-attrtab.c
	touch stamp-attrtab

insn-output.o : insn-output.c $(CONFIG_H) $(RTL_H) regs.h real.h conditions.h \
    hard-reg-set.h insn-config.h insn-flags.h insn-attr.h output.h $(RECOG_H) \
    insn-codes.h
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c insn-output.c

insn-output.c: stamp-output ; @true
stamp-output : $(md_file) genoutput $(srcdir)/move-if-change
	./genoutput $(md_file) > tmp-output.c
	$(srcdir)/move-if-change tmp-output.c insn-output.c
	touch stamp-output
#
# Compile the programs that generate insn-* from the machine description.
# They are compiled with $(HOST_CC), and associated libraries,
# since they need to run on this machine
# even if GCC is being compiled to run on some other machine.

# $(CONFIG_H) is omitted from the deps of the gen*.o
# because these programs don't really depend on anything 
# about the target machine.  They do depend on config.h itself,
# since that describes the host machine.

# Pass the md file through cpp if the target requests it.
$(MD_FILE): $(MD_DEPS)
	rm -f $@
	$(MD_CPP) $(MD_CPPFLAGS) $(md_file) | sed 's/^# /; /g' > tmp-$@
	mv tmp-$@ $@

genconfig : genconfig.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	  genconfig.o $(HOST_RTL) $(HOST_LIBS)

genconfig.o : genconfig.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genconfig.c

genflags : genflags.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genflags.o $(HOST_RTL) $(HOST_LIBS)

genflags.o : genflags.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genflags.c

gencodes : gencodes.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 gencodes.o $(HOST_RTL) $(HOST_LIBS)

gencodes.o : gencodes.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/gencodes.c

genemit : genemit.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genemit.o $(HOST_RTL) $(HOST_LIBS)

genemit.o : genemit.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genemit.c

genopinit : genopinit.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genopinit.o $(HOST_RTL) $(HOST_LIBS)

genopinit.o : genopinit.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genopinit.c

genrecog : genrecog.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genrecog.o $(HOST_RTL) $(HOST_LIBS)

genrecog.o : genrecog.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genrecog.c

genextract : genextract.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genextract.o $(HOST_RTL) $(HOST_LIBS)

genextract.o : genextract.c $(RTL_H) $(build_xm_file) insn-config.h
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genextract.c

genpeep : genpeep.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genpeep.o $(HOST_RTL) $(HOST_LIBS)

genpeep.o : genpeep.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genpeep.c

genattr : genattr.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genattr.o $(HOST_RTL) $(HOST_LIBS)

genattr.o : genattr.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genattr.c

genattrtab : genattrtab.o $(HOST_RTL) $(HOST_PRINT) $(HOST_RTLANAL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genattrtab.o $(HOST_RTL) $(HOST_PRINT) $(HOST_RTLANAL) $(HOST_LIBS)

genattrtab.o : genattrtab.c $(RTL_H)  $(build_xm_file) insn-config.h
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genattrtab.c

genoutput : genoutput.o $(HOST_RTL) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 genoutput.o $(HOST_RTL) $(HOST_LIBS)

genoutput.o : genoutput.c $(RTL_H) $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/genoutput.c
#
# Compile the libraries to be used by gen*.
# If we are not cross-building, gen* use the same .o's that cc1 will use,
# and HOST_PREFIX_1 is `foobar', just to ensure these rules don't conflict
# with the rules for rtl.o, alloca.o, etc.
$(HOST_PREFIX_1)rtl.o: $(srcdir)/rtl.c $(CONFIG_H) $(RTL_H)
	rm -f $(HOST_PREFIX)rtl.c
	sed -e 's/config[.]h/hconfig.h/' $(srcdir)/rtl.c > $(HOST_PREFIX)rtl.c
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(HOST_PREFIX)rtl.c

$(HOST_PREFIX_1)print-rtl.o: $(srcdir)/print-rtl.c $(CONFIG_H) $(RTL_H)
	rm -f $(HOST_PREFIX)print-rtl.c
	sed -e 's/config[.]h/hconfig.h/' $(srcdir)/print-rtl.c > $(HOST_PREFIX)print-rtl.c
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(HOST_PREFIX)print-rtl.c

$(HOST_PREFIX_1)rtlanal.o: $(srcdir)/rtlanal.c $(CONFIG_H) $(RTL_H)
	rm -f $(HOST_PREFIX)rtlanal.c
	sed -e 's/config[.]h/hconfig.h/' $(srcdir)/rtlanal.c > $(HOST_PREFIX)rtlanal.c
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(HOST_PREFIX)rtlanal.c

$(HOST_PREFIX_1)alloca.o: alloca.c
	rm -f $(HOST_PREFIX)alloca.c
	cp $(srcdir)/alloca.c $(HOST_PREFIX)alloca.c
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(HOST_PREFIX)alloca.c

$(HOST_PREFIX_1)obstack.o: obstack.c
	rm -f $(HOST_PREFIX)obstack.c
	sed -e 's/config[.]h/hconfig.h/' $(srcdir)/obstack.c > $(HOST_PREFIX)obstack.c
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(HOST_PREFIX)obstack.c

$(HOST_PREFIX_1)malloc.o: malloc.c
	rm -f $(HOST_PREFIX)malloc.c
	sed -e 's/config[.]h/hconfig.h/' $(srcdir)/malloc.c > $(HOST_PREFIX)malloc.c
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(HOST_PREFIX)malloc.c

# This satisfies the dependency that we get if you cross-compile a compiler
# that does not need to compile alloca, malloc or whatever.
$(HOST_PREFIX_1): 
	touch $(HOST_PREFIX_1)
#
# Remake bytecode files.
BI_OBJ=bi-parser.o bi-lexer.o bi-reverse.o

bc-emit.o : bc-emit.c $(CONFIG_H) $(RTL_H) real.h $(BYTECODE_H) \
   bc-arity.h bc-opcode.h bc-typecd.h bc-typecd.def bi-run.h bytetypes.h
bc-optab.o : bc-optab.c $(CONFIG_H) $(REAL_H) $(BYTECODE_H) \
   bc-opcode.h bc-typecd.h bc-typecd.def

bi-arity: bi-arity.o $(BI_OBJ) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 bi-arity.o $(BI_OBJ) $(HOST_LIBS)
bi-opcode: bi-opcode.o $(BI_OBJ) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 bi-opcode.o $(BI_OBJ) $(HOST_LIBS)
bi-opname: bi-opname.o $(BI_OBJ) $(HOST_LIBDEPS)
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	 bi-opname.o $(BI_OBJ) $(HOST_LIBS)

$(srcdir)/bi-parser.h: $(srcdir)/bi-parser.c
$(srcdir)/bi-parser.c: $(srcdir)/bi-parser.y
	cd $(srcdir); $(BISON) $(BISONFLAGS) -d bi-parser.y -o bi-parser.c

bi-parser.o: $(srcdir)/bi-parser.c bi-defs.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) \
	   $(srcdir)/bi-parser.c
bi-lexer.o: bi-lexer.c $(srcdir)/bi-parser.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) \
	   $(srcdir)/bi-lexer.c
bi-arity.o: bi-arity.c bi-defs.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) \
	   $(srcdir)/bi-arity.c
bi-opcode.o: bi-opcode.c bi-defs.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) \
	   $(srcdir)/bi-opcode.c
bi-opname.o: bi-opname.c bi-defs.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) \
	   $(srcdir)/bi-opname.c
bi-reverse.o: bi-reverse.c bi-defs.h
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) \
	   $(srcdir)/bi-reverse.c

bc-arity.h: stamp-bcarity ; @true
stamp-bcarity : $(srcdir)/bytecode.def bi-arity $(srcdir)/move-if-change
	./bi-arity < $(srcdir)/bytecode.def >tmp-bc-arity.h
	$(srcdir)/move-if-change tmp-bc-arity.h bc-arity.h
	touch stamp-bcarity

bc-opcode.h: stamp-bcopcode ; @true
stamp-bcopcode : $(srcdir)/bytecode.def bi-opcode $(srcdir)/move-if-change
	./bi-opcode < $(srcdir)/bytecode.def >tmp-bcopcd.h
	$(srcdir)/move-if-change tmp-bcopcd.h bc-opcode.h
	touch stamp-bcopcode

bc-opname.h: stamp-bcopname ; @true
stamp-bcopname : $(srcdir)/bytecode.def bi-opname $(srcdir)/move-if-change
	./bi-opname < $(srcdir)/bytecode.def >tmp-bcopnm.h
	$(srcdir)/move-if-change tmp-bcopnm.h bc-opname.h
	touch stamp-bcopname

bytecode.mostlyclean:
	-rm -f bc-arity.h bc-opcode.h bc-opname.h

bytecode.distclean bytecode.clean:	bytecode.mostlyclean
	-rm -f bi-arity bi-opcode bi-opname bi-lexer

bytecode.maintainer-clean: bytecode.clean
	-rm -f bi-parser.c bi-parser.h

#
# Remake cpp and protoize.

# Making the preprocessor
cpp: $(CCCP)
	-rm -f cpp$(exeext)
	ln $(CCCP)$(exeext) cpp$(exeext) > /dev/null 2>&1 \
	 || cp $(CCCP)$(exeext) cpp$(exeext)
cccp: cccp.o cexp.o version.o prefix.o $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ cccp.o cexp.o prefix.o \
	  version.o $(LIBS)
cexp.o: $(srcdir)/cexp.c $(CONFIG_H)
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) -c $(srcdir)/cexp.c
$(srcdir)/cexp.c: $(srcdir)/cexp.y
	cd $(srcdir); $(BISON) -o cexp.c cexp.y

cccp.o: cccp.c $(CONFIG_H) pcp.h version.c config.status
# The reason we use $(libdir)/g++-include rather than using libsubdir
# is for compatibility with the current version of libg++.
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
	  -DGCC_INCLUDE_DIR=\"$(libsubdir)/include\" \
	  -DGPLUSPLUS_INCLUDE_DIR=\"$(gxx_include_dir)\" \
	  -DOLD_GPLUSPLUS_INCLUDE_DIR=\"$(old_gxx_include_dir)\" \
	  -DLOCAL_INCLUDE_DIR=\"$(includedir)\" \
	  -DCROSS_INCLUDE_DIR=\"$(libsubdir)/sys-include\" \
	  -DTOOL_INCLUDE_DIR=\"$(tooldir)/include\" \
	  -c `echo $(srcdir)/cccp.c | sed 's,^\./,,'`

cppmain: cppmain.o cpplib.o cpphash.o cppalloc.o cpperror.o cppexp.o \
  prefix.o version.o $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ cppmain.o cpplib.o cpphash.o \
	  cppalloc.o cpperror.o cppexp.o prefix.o version.o $(LIBS)

cppmain.o: cppmain.c $(CONFIG_H) cpplib.h

cpplib.o: cpplib.c $(CONFIG_H) cpplib.h cpphash.h config.status
	$(CC) $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
	  -DGCC_INCLUDE_DIR=\"$(libsubdir)/include\" \
	  -DGPLUSPLUS_INCLUDE_DIR=\"$(gxx_include_dir)\" \
	  -DOLD_GPLUSPLUS_INCLUDE_DIR=\"$(old_gxx_include_dir)\" \
	  -DLOCAL_INCLUDE_DIR=\"$(includedir)\" \
	  -DCROSS_INCLUDE_DIR=\"$(libsubdir)/sys-include\" \
	  -DTOOL_INCLUDE_DIR=\"$(tooldir)/include\" \
	  -c `echo $(srcdir)/cpplib.c | sed 's,^\./,,'`

cpperror.o: cpperror.c $(CONFIG_H) cpplib.h

cppexp.o: cppexp.c $(CONFIG_H) cpplib.h

cpphash.o: cpphash.c cpplib.h cpphash.h

cppalloc.o: cppalloc.c $(CONFIG_H)

# Note for the stamp targets, we run the program `true' instead of
# having an empty command (nothing following the semicolon).

proto: config.status protoize unprotoize SYSCALLS.c.X

protoize: protoize.o getopt.o getopt1.o getpwd.o version.o \
    pexecute.o choose-temp.o $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ \
	  protoize.o getopt.o getopt1.o getpwd.o version.o \
	  pexecute.o choose-temp.o $(LIBS)
protoize.o: stamp-proto ; @true

unprotoize: unprotoize.o getopt.o getopt1.o getpwd.o version.o \
    pexecute.o choose-temp.o $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ \
	  unprotoize.o getopt.o getopt1.o getpwd.o version.o \
	  pexecute.o choose-temp.o $(LIBS)
unprotoize.o:	stamp-proto ; @true

stamp-proto: protoize.c getopt.h $(CONFIG_H)
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
          -DGCC_INCLUDE_DIR=\"$(libsubdir)/include\" \
	  -DGPLUSPLUS_INCLUDE_DIR=\"$(gxx_include_dir)\" \
          -DCROSS_INCLUDE_DIR=\"$(libsubdir)/sys-include\" \
	  -DTOOL_INCLUDE_DIR=\"$(tooldir)/include\" \
	  -DLOCAL_INCLUDE_DIR=\"$(includedir)\" \
	  -DSTD_PROTO_DIR=\"$(libsubdir)\" \
	  -DUNPROTOIZE $(srcdir)/protoize.c
	mv protoize$(objext) unprotoize$(objext)
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
          -DGCC_INCLUDE_DIR=\"$(libsubdir)/include\" \
	  -DGPLUSPLUS_INCLUDE_DIR=\"$(gxx_include_dir)\" \
          -DCROSS_INCLUDE_DIR=\"$(libsubdir)/sys-include\" \
	  -DTOOL_INCLUDE_DIR=\"$(tooldir)/include\" \
	  -DLOCAL_INCLUDE_DIR=\"$(includedir)\" \
	  -DSTD_PROTO_DIR=\"$(libsubdir)\" \
	  $(srcdir)/protoize.c
	touch stamp-proto

getopt.o: getopt.c getopt.h
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $(srcdir)/getopt.c
getopt1.o: getopt1.c getopt.h
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $(srcdir)/getopt1.c

# This info describes the target machine, so compile with GCC just built.
SYSCALLS.c.X: $(srcdir)/sys-types.h $(srcdir)/sys-protos.h $(GCC_PASSES) \
   stmp-int-hdrs
	-rm -f SYSCALLS.c tmp-SYSCALLS.s
	cat $(srcdir)/sys-types.h $(srcdir)/sys-protos.h > SYSCALLS.c
	$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) \
	  -aux-info $@ -S -o tmp-SYSCALLS.s SYSCALLS.c
	-rm -f SYSCALLS.c tmp-SYSCALLS.s


test-protoize-simple: ./protoize ./unprotoize $(GCC_PASSES)
	-rm -f tmp-proto.[cso]
	cp $(srcdir)/protoize.c tmp-proto.c
	chmod u+w tmp-proto.c
	./protoize -N -B ./ -x getopt.h -c "-B./ -Wall -Wwrite-strings \
	  $(CFLAGS) $(INCLUDES) \
	  -DGCC_INCLUDE_DIR=0 \
	  -DGPLUSPLUS_INCLUDE_DIR=0 \
	  -DCROSS_INCLUDE_DIR=0 \
	  -DTOOL_INCLUDE_DIR=0 \
	  -DSTD_PROTO_DIR=0" tmp-proto.c
	@echo '**********' Expect 400 lines of differences.
	-diff $(srcdir)/protoize.c tmp-proto.c > tmp-proto.diff
	-wc -l tmp-proto.diff
	./unprotoize -N -x getopt.h -c "-B./ -Wall -Wwrite-strings \
	  $(CFLAGS) $(INCLUDES) \
	  -DGCC_INCLUDE_DIR=0 \
	  -DGPLUSPLUS_INCLUDE_DIR=0 \
	  -DCROSS_INCLUDE_DIR=0 \
	  -DTOOL_INCLUDE_DIR=0 \
	  -DSTD_PROTO_DIR=0" tmp-proto.c
	@echo Expect zero differences.
	diff $(srcdir)/protoize.c tmp-proto.c | cat
	-rm -f tmp-proto.[cs] tmp-proto$(objext)

gcov.o: gcov.c gcov-io.h

gcov: gcov.o $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) gcov.o $(LIBS) -o $@
#
# Build the include directory.  The stamp files are stmp-* rather than
# stamp-* so that mostlyclean does not force the include directory to
# be rebuilt.

# Build the include directory except for float.h (which depends upon
# enquire).
stmp-int-hdrs: stmp-fixinc $(USER_H) xlimits.h
# Copy in the headers provided with gcc.
# The sed command gets just the last file name component;
# this is necessary because VPATH could add a dirname.
# Using basename would be simpler, but some systems don't have it.
# The touch command is here to workaround an AIX/Linux NFS bug.
	for file in .. $(USER_H); do \
	  if [ X$$file != X.. ]; then \
	    realfile=`echo $$file | sed -e 's|.*/\([^/]*\)$$|\1|'`; \
	    touch include/$$realfile; \
	    rm -f include/$$realfile; \
	    cp $$file include; \
	    chmod a+r include/$$realfile; \
	  fi; \
	done
	rm -f include/limits.h
	cp xlimits.h include/limits.h
	chmod a+r include/limits.h
# Install the README
	rm -f include/README
	cp $(srcdir)/README-fixinc include/README
	chmod a+r include/README
	touch stmp-int-hdrs

# Build the complete include directory, including float.h.
stmp-headers: stmp-int-hdrs gfloat.h
	rm -f include/float.h
	if [ -s gfloat.h ]; then \
	  cp gfloat.h include/float.h && \
	  chmod a+r include/float.h; \
	else :; fi
	touch stmp-headers

# Build fixed copies of system files.
stmp-fixinc: $(FIXINCLUDES) gsyslimits.h
	rm -rf include
	mkdir include
	if [ x$(FIXINCLUDES) != xMakefile.in ]; \
	then \
	  for dir in $(SYSTEM_HEADER_DIR) $(OTHER_FIXINCLUDES_DIRS); do \
	    if [ -d $$dir ]; \
	    then \
	      $(SHELL) $(srcdir)/$(FIXINCLUDES) include $$dir; \
	    else true; fi; \
	  done; \
	else true; \
	fi
	rm -f include/syslimits.h
	if [ -f include/limits.h ]; then \
	  mv include/limits.h include/syslimits.h; \
	else \
	  cp $(srcdir)/gsyslimits.h include/syslimits.h; \
	fi
	chmod a+r include/syslimits.h
	touch stmp-fixinc

# Files related to the fixproto script.

deduced.h: $(GCC_PASSES) $(srcdir)/scan-types.sh stmp-int-hdrs
	CC="$(GCC_FOR_TARGET) $(GCC_CFLAGS) $(ALL_CPPFLAGS) -I. -I$(srcdir) -Iinclude -I${SYSTEM_HEADER_DIR}"; \
	  export CC; \
	  $(SHELL) $(srcdir)/scan-types.sh "$(srcdir)" >tmp-deduced.h
	mv tmp-deduced.h deduced.h

gen-protos: gen-protos.o scan.o cppalloc.o $(HOST_LIBDEPS)
	${HOST_CC} $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ \
	  gen-protos.o scan.o cppalloc.o $(HOST_LIBS)

gen-protos.o: gen-protos.c scan.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/gen-protos.c

scan.o: scan.c scan.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/scan.c

xsys-protos.h: $(GCC_PASSES) $(srcdir)/sys-protos.h deduced.h gen-protos Makefile
	cat deduced.h $(srcdir)/sys-protos.h > tmp-fixtmp.c
	mv tmp-fixtmp.c fixtmp.c
	$(GCC_FOR_TARGET) fixtmp.c -w -U__SIZE_TYPE__ -U__PTRDIFF_TYPE__ -U__WCHAR_TYPE__ -E \
	  | sed -e 's/	/ /g' -e 's/ *(/ (/g' -e 's/ [ ]*/ /g' -e 's/( )/()/' \
	  | ./gen-protos >xsys-protos.hT
	mv xsys-protos.hT xsys-protos.h
	rm -rf fixtmp.c

fix-header: fix-header.o scan-decls.o scan.o xsys-protos.h $(HOST_LIBDEPS) \
   cpplib.o cpphash.o cppalloc.o cppexp.o cpperror.o prefix.o version.o
	$(HOST_CC) $(HOST_CFLAGS) $(HOST_LDFLAGS) -o $@ fix-header.o \
	   scan-decls.o scan.o cpplib.o cpphash.o cppalloc.o prefix.o \
	   version.o cppexp.o $(HOST_LIBS)

fix-header.o: fix-header.c obstack.h scan.h xsys-protos.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/fix-header.c

scan-decls.o: scan-decls.c scan.h cpplib.h $(build_xm_file)
	$(HOST_CC) -c $(HOST_CFLAGS) $(HOST_CPPFLAGS) $(INCLUDES) $(srcdir)/scan-decls.c

# stmp-fixproto depends on this, not on fix-header directly.
# The idea is to make sure fix-header gets built,
# but not rerun fixproto after each stage
# just because fix-header's mtime has changed.
fixhdr.ready: fix-header
	-if [ -f fixhdr.ready ] ; then \
		true; \
	else \
		touch fixhdr.ready; \
	fi

# stmp-headers is to make sure fixincludes has already finished.
# The if statement is so that we don't run fixproto a second time
# if it has already been run on the files in `include'.
stmp-fixproto: fixhdr.ready fixproto stmp-headers
	@echo "Various warnings and error messages from fixproto are normal"
	-if [ -d include ] ; then true; else mkdir include; fi
	-if [ -f include/fixed ] ; then true; \
	else \
	  : This line works around a 'make' bug in BSDI 1.1.; \
	  FIXPROTO_DEFINES="$(FIXPROTO_DEFINES)"; export FIXPROTO_DEFINES; \
	  $(SHELL) ${srcdir}/fixproto include include $(SYSTEM_HEADER_DIR); \
	  touch include/fixed; \
	fi
	touch stmp-fixproto
#
# Remake the info files.

doc: info
info: $(srcdir)/cpp.info $(srcdir)/gcc.info lang.info

$(srcdir)/cpp.info: cpp.texi
	cd $(srcdir); $(MAKEINFO) $(MAKEINFOFLAGS) cpp.texi

$(srcdir)/gcc.info: gcc.texi extend.texi install.texi invoke.texi \
		md.texi rtl.texi tm.texi gcov.texi
	cd $(srcdir); $(MAKEINFO) $(MAKEINFOFLAGS) gcc.texi

dvi: $(srcdir)/gcc.dvi $(srcdir)/cpp.dvi lang.dvi

# This works with GNU Make's default rule.
$(srcdir)/gcc.dvi: gcc.texi extend.texi install.texi invoke.texi \
		md.texi rtl.texi tm.texi gcov.texi
	$(TEXI2DVI) $<

# This works with GNU Make's default rule.
$(srcdir)/cpp.dvi: cpp.texi
	$(TEXI2DVI) $<

$(srcdir)/INSTALL: install1.texi install.texi
	cd $(srcdir); $(MAKEINFO) -D INSTALLONLY --no-header \
		--no-split install1.texi -o INSTALL
#
# Deletion of files made during compilation.
# There are four levels of this:
#   `mostlyclean', `clean', `distclean' and `maintainer-clean'.
# `mostlyclean' is useful while working on a particular type of machine.
# It deletes most, but not all, of the files made by compilation.
# It does not delete libgcc.a or its parts, so it won't have to be recompiled.
# `clean' deletes everything made by running `make all'.
# `distclean' also deletes the files made by config.
# `maintainer-clean' also deletes everything that could be regenerated
# automatically, except for `configure'.
# We remove as much from the language subdirectories as we can
# (less duplicated code).


mostlyclean: bytecode.mostlyclean lang.mostlyclean
	-rm -f $(STAGESTUFF)
# Delete the temporary source copies for cross compilation.
	-rm -f $(HOST_PREFIX_1)rtl.c $(HOST_PREFIX_1)rtlanal.c
	-rm -f $(HOST_PREFIX_1)alloca.c $(HOST_PREFIX_1)malloc.c
	-rm -f $(HOST_PREFIX_1)obstack.c 
# Delete the temp files made in the course of building libgcc.a.
	-rm -f tmplibgcc* tmpcopy xlimits.h libgcc1-test
	for name in $(LIB1FUNCS); do rm -f $${name}.c; done
# Delete other temporary files.
	-rm -f tmp-float.h tmp-gcc.xtar.gz
	-rm -f tmp-foo1 tmp-foo2 tmp-proto.* tmp-unproto.1 tmp-SYSCALLS.s
	-rm -f tmp-c-parse.y tmp-gperf.h
	-rm -f tmp-specs t-float.h-cross tmp-xlimits.h
	-rm -f tmp-fixtmp.c xsys-protos.hT
# Delete the stamp files.
	-rm -f stamp-* tmp-*
	-rm -f */stamp-* */tmp-*
# Delete debugging dump files.
	-rm -f *.greg *.lreg *.combine *.flow *.cse *.jump *.rtl *.tree *.loop
	-rm -f *.dbr *.jump2 *.sched *.cse2 *.sched2 *.stack *.addressof
	-rm -f */*.greg */*.lreg */*.combine */*.flow */*.cse */*.jump */*.rtl
	-rm -f */*.tree */*.loop */*.dbr */*.jump2 */*.sched */*.cse2
	-rm -f */*.sched2 */*.stack
# Delete some files made during installation.
	-rm -f specs gfloat.h float.h-* enquire SYSCALLS.c.X SYSCALLS.c
	-rm -f collect collect2 mips-tfile mips-tdump alloca.s
# Delete files generated for fixproto
	-rm -rf fix-header xsys-protos.h deduced.h tmp-deduced.h \
	  gen-protos fixproto.list fixtmp.* fixhdr.ready
# Delete unwanted output files from TeX.
	-rm -f *.toc *.log *.vr *.fn *.cp *.tp *.ky *.pg
	-rm -f */*.toc */*.log */*.vr */*.fn */*.cp */*.tp */*.ky */*.pg
# Delete sorted indices we don't actually use.
	-rm -f gcc.vrs gcc.kys gcc.tps gcc.pgs gcc.fns
# Delete core dumps.
	-rm -f core */core
	-rm -f *.bp */*.bp

# Delete all files made by compilation
# that don't exist in the distribution.
clean: mostlyclean bytecode.clean lang.clean
# It may not be quite desirable to delete unprotoize.c here,
# but the spec for `make clean' requires it.
# Using unprotoize.c is not quite right in the first place, 
# but what better way is there?
	-rm -f libgcc.a libgcc1.a libgcc1-asm.a libgcc2.a libgcc2.ready
	-rm -f libgcc1.null
	-rm -f *.dvi
	-rm -f */*.dvi
	-if [ -f md.pre-cpp ]; then \
	  rm -f md ; \
	fi
# Delete the include directory.
	-rm -rf stmp-* include
	-rm -f */stmp-*
# Delete files used by the "multilib" facility (including libgcc subdirs).
	-rm -f multilib.h tmpmultilib*
	-if [ "x$(MULTILIB_DIRNAMES)" != x ] ; then \
	  rm -rf $(MULTILIB_DIRNAMES); \
	else if [ "x$(MULTILIB_OPTIONS)" != x ] ; then \
	  rm -rf `echo $(MULTILIB_OPTIONS) | sed -e 's/\// /g'`; \
	fi ; fi

# Delete all files that users would normally create
# while building and installing GCC.
distclean: clean bytecode.distclean lang.distclean
	-rm -f tm.h config.h auto-config.h tconfig.h hconfig.h md cstamp-h
	-rm -f config.status config.run config.cache config.bak
	-rm -f Make-lang Make-hooks Make-host Make-target
	-rm -f Makefile specs.h options.h *.oaux
	-rm -fr stage1 stage2 stage3 stage4
	-rm -f */stage1 */stage2 */stage3 */stage4 */include
	-rm -f c-parse.output
	-rm -f *.asm
	-rm -f float.h

# Delete anything likely to be found in the source directory
# that shouldn't be in the distribution.
extraclean: distclean lang.extraclean
	-rm -rf =* ./"#"* *~* config/=* config/"#"* config/*~*
	-rm -f patch* *.orig *.rej config/patch* config/*.orig config/*.rej
	-rm -f config/*/=* config/*/"#"* config/*/*~*
	-rm -f config/*/*.orig config/*/*.rej
	-rm -f *.dvi *.ps *.oaux *.d *.[zZ] *.gz
	-rm -f *.tar *.xtar *diff *.diff.* *.tar.* *.xtar.* *diffs
	-rm -f *lose config/*lose config/*/*lose
	-rm -f *.s *.s[0-9] *.i install1.texi config/ChangeLog
	-rm -f */=* */"#"* */*~*
	-rm -f */patch* */*.orig */*.rej
	-rm -f */*.dvi */*.oaux */*.d */*.[zZ] */*.gz
	-rm -f */*.tar */*.xtar */*diff */*.diff.* */*.tar.* */*.xtar.* */*diffs
	-rm -f */*lose */*.s */*.s[0-9] */*.i

# Get rid of every file that's generated from some other file, except for `configure'.
# Most of these files ARE PRESENT in the GCC distribution.
maintainer-clean:
	@echo 'This command is intended for maintainers to use; it'
	@echo 'deletes files that may need special tools to rebuild.'
	$(MAKE) distclean bytecode.maintainer-clean lang.maintainer-clean
	-rm -f c-parse.y c-gperf.h
	-rm -f c-parse.c c-parse.h c-parse.output
	-rm -f cexp.c cexp.output TAGS 
	-rm -f cpp.info* cpp.??s cpp.*aux
	-rm -f gcc.info* gcc.??s gcc.*aux
#
# Entry points `install' and `uninstall'.
# Also use `install-collect2' to install collect2 when the config files don't.

# The semicolon is to prevent the install.sh -> install default rule
# from doing anything.  Having it run true helps avoid problems and
# noise from versions of make which don't like to have null commands.
install: $(INSTALL_TARGET) ; @true

# Copy the compiler files into directories where they will be run.
# Install the driver last so that the window when things are
# broken is small.
install-normal: install-common $(INSTALL_HEADERS) $(INSTALL_LIBGCC) \
    install-man install-info lang.install-normal install-driver

# Do nothing while making gcc with a cross-compiler. The person who
# makes gcc for the target machine has to know how to put a complete
# gcc together by hand.
install-build: force
	@echo You have to install gcc on your target machine by hand.

# Run this on the target machine
# to finish installation of cross compiler.
install-cross-rest: install-float-h-cross

# Install float.h for cross compiler.
# Run this on the target machine!
install-float-h-cross: installdirs
#	if [ -f enquire ] ; then true; else false; fi
# Note: don't use -.  We should fail right away if enquire was not made.
	./enquire -f > $(tmpdir)/float.h
	-rm -f $(libsubdir)/include/float.h
	$(INSTALL_DATA) $(tmpdir)/float.h $(libsubdir)/include/float.h
	-rm -f $(tmpdir)/float.h
	chmod a-x $(libsubdir)/include/float.h

# Create the installation directories.
installdirs:
	-if [ -d $(prefix) ] ; then true ; else mkdir $(prefix) ; chmod a+rx $(prefix) ; fi
	-if [ -d $(exec_prefix) ] ; then true ; else mkdir $(exec_prefix) ; chmod a+rx $(exec_prefix) ; fi
	-if [ -d $(libdir) ] ; then true ; else mkdir $(libdir) ; chmod a+rx $(libdir) ; fi
	-if [ -d $(libdir)/gcc ] ; then true ; else mkdir $(libdir)/gcc ; chmod a+rx $(libdir)/gcc ; fi
# This dir isn't currently searched by cpp.
#	-if [ -d $(libdir)/gcc/include ] ; then true ; else mkdir $(libdir)/gcc/include ; chmod a+rx $(libdir)/gcc/include ; fi
	-if [ -d $(libdir)/gcc ] ; then true ; else mkdir $(libdir)/gcc ; chmod a+rx $(libdir)/gcc ; fi
	-if [ -d $(bindir) ] ; then true ; else mkdir $(bindir) ; chmod a+rx $(bindir) ; fi
	-if [ -d $(includedir) ] ; then true ; else mkdir $(includedir) ; chmod a+rx $(includedir) ; fi
	-if [ -d $(tooldir) ] ; then true ; else mkdir $(tooldir) ; chmod a+rx $(tooldir) ; fi
	-if [ -d $(assertdir) ] ; then true ; else mkdir $(assertdir) ; chmod a+rx $(assertdir) ; fi
	-if [ -d $(infodir) ] ; then true ; else mkdir $(infodir) ; chmod a+rx $(infodir) ; fi
# We don't use mkdir -p to create the parents of mandir,
# because some systems don't support it.
# Instead, we use this technique to create the immediate parent of mandir.
	-parent=`echo $(mandir)|sed -e 's@/[^/]*$$@@'`; \
	if [ -d $$parent ] ; then true ; else mkdir $$parent ; chmod a+rx $$parent ; fi
	-if [ -d $(mandir) ] ; then true ; else mkdir $(mandir) ; chmod a+rx $(mandir) ; fi

# Install the compiler executables built during cross compilation.
install-common: native installdirs $(EXTRA_PARTS) lang.install-common
	for file in $(COMPILERS); do \
	  if [ -f $$file ] ; then \
	    rm -f $(libsubdir)/$$file; \
	    $(INSTALL_PROGRAM) $$file $(libsubdir)/$$file; \
	  else true; \
	  fi; \
	done
	for file in $(EXTRA_PASSES) $(EXTRA_PROGRAMS) $(USE_COLLECT2) ..; do \
	  if [ x"$$file" != x.. ]; then \
	    rm -f $(libsubdir)/$$file; \
	    $(INSTALL_PROGRAM) $$file $(libsubdir)/$$file; \
	  else true; fi; \
	done
	for file in $(EXTRA_PARTS) ..; do \
	  if [ x"$$file" != x.. ]; then \
	    rm -f $(libsubdir)/$$file; \
	    $(INSTALL_DATA) $$file $(libsubdir)/$$file; \
	    chmod a-x $(libsubdir)/$$file; \
	  else true; fi; \
	done
# Don't mess with specs if it doesn't exist yet.
	-if [ -f specs ] ; then \
	  rm -f $(libsubdir)/specs; \
	  $(INSTALL_DATA) specs $(libsubdir)/specs; \
	  chmod a-x $(libsubdir)/specs; \
	fi
# Install protoize if it was compiled.
	-if [ -f protoize$(exeext) ]; \
	then \
	    rm -f $(bindir)/protoize$(exeext); \
	    $(INSTALL_PROGRAM) protoize$(exeext) $(bindir)/protoize$(exeext); \
	    rm -f $(bindir)/unprotoize$(exeext); \
	    $(INSTALL_PROGRAM) unprotoize$(exeext) $(bindir)/unprotoize$(exeext); \
	    rm -f $(libsubdir)/SYSCALLS.c.X; \
	    $(INSTALL_DATA) SYSCALLS.c.X $(libsubdir)/SYSCALLS.c.X; \
	    chmod a-x $(libsubdir)/SYSCALLS.c.X; \
	fi
	-rm -f $(libsubdir)/cpp$(exeext)
	$(INSTALL_PROGRAM) cpp$(exeext) $(libsubdir)/cpp$(exeext)
# Install gcov if it was compiled.
	-if [ -f gcov$(exeext) ]; \
	then \
	    rm -f $(bindir)/gcov$(exeext); \
	    $(INSTALL_PROGRAM) gcov$(exeext) $(bindir)/gcov$(exeext); \
	    chmod a+x $(bindir)/gcov$(exeext); \
	fi

# Install the driver program as $(target_alias)-gcc
# and also as either gcc (if native) or $(tooldir)/bin/gcc.
install-driver: xgcc
	rm -f $(local_prefix)/bin/$(GCC_CROSS_NAME)
	$(INSTALL_PROGRAM) gcc-cross $(local_prefix)/bin/$(GCC_CROSS_NAME)

# Install the info files.
# $(INSTALL_DATA) might be a relative pathname, so we can't cd into srcdir
# to do the install.  The sed rule was copied from stmp-int-hdrs.
install-info: doc installdirs lang.install-info
	-rm -f $(infodir)/cpp.info* $(infodir)/gcc.info*
	for f in $(srcdir)/cpp.info* $(srcdir)/gcc.info*; do \
	    realfile=`echo $$f | sed -e 's|.*/\([^/]*\)$$|\1|'`; \
	    $(INSTALL_DATA) $$f $(infodir)/$$realfile; \
	done
	-chmod a-x $(infodir)/cpp.info* $(infodir)/gcc.info*

# Install the man pages.
install-man: installdirs $(srcdir)/gcc.1 $(srcdir)/cccp.1 lang.install-man
	-if [ -f gcc-cross$(exeext) ] ; then \
	  rm -f $(mandir)/$(GCC_CROSS_NAME)$(manext); \
	  $(INSTALL_DATA) $(srcdir)/gcc.1 $(mandir)/$(GCC_CROSS_NAME)$(manext); \
	  chmod a-x $(mandir)/$(GCC_CROSS_NAME)$(manext); \
	else \
	  rm -f $(mandir)/$(GCC_INSTALL_NAME)$(manext); \
	  $(INSTALL_DATA) $(srcdir)/gcc.1 $(mandir)/$(GCC_INSTALL_NAME)$(manext); \
	  chmod a-x $(mandir)/$(GCC_INSTALL_NAME)$(manext); \
	fi
	-rm -f $(mandir)/cccp$(manext)
	-$(INSTALL_DATA) $(srcdir)/cccp.1 $(mandir)/cccp$(manext)
	-chmod a-x $(mandir)/cccp$(manext)

# Install the library.
install-libgcc: libgcc.a installdirs
	-if [ -f libgcc.a ] ; then \
	  rm -f $(libsubdir)/libgcc.a; \
	  $(INSTALL_DATA) libgcc.a $(libsubdir)/libgcc.a; \
	  if $(RANLIB_TEST) ; then \
	    (cd $(libsubdir); $(RANLIB) libgcc.a); else true; fi; \
	  chmod a-x $(libsubdir)/libgcc.a; \
	else true; fi

# Install multiple versions of libgcc.a.
install-multilib: stmp-multilib installdirs
	for i in `$(GCC_FOR_TARGET) --print-multi-lib`; do \
	  dir=`echo $$i | sed -e 's/;.*$$//'`; \
	  if [ -d $(libsubdir)/$${dir} ]; then true; else mkdir $(libsubdir)/$${dir}; fi; \
	  for f in libgcc.a $(EXTRA_MULTILIB_PARTS); do \
	    rm -f $(libsubdir)/$${dir}/$${f}; \
	    $(INSTALL_DATA) $${dir}/$${f} $(libsubdir)/$${dir}/$${f}; \
	  done; \
	  if $(RANLIB_TEST); then \
	    (cd $(libsubdir)/$${dir}; $(RANLIB) libgcc.a); else true; fi; \
	  chmod a-x $(libsubdir)/$${dir}/libgcc.a; \
	done

# Install all the header files built in the include subdirectory.
install-headers: install-include-dir $(INSTALL_HEADERS_DIR) $(INSTALL_ASSERT_H)
# Fix symlinks to absolute paths in the installed include directory to
# point to the installed directory, not the build directory.
	-files=`cd $(libsubdir)/include; find . -type l -print 2>/dev/null`; \
	if [ $$? -eq 0 ]; then \
	  dir=`cd include; pwd`; \
	  for i in $$files; do \
	    dest=`ls -ld $(libsubdir)/include/$$i | sed -n 's/.*-> //p'`; \
	    if expr "$$dest" : "$$dir.*" > /dev/null; then \
	      rm -f $(libsubdir)/include/$$i; \
	      ln -s `echo $$i | sed "s|/[^/]*|/..|g" | sed 's|/..$$||'``echo "$$dest" | sed "s|$$dir||"` $(libsubdir)/include/$$i; \
	    fi; \
	  done; \
	fi

# Create or recreate the gcc private include file directory.
install-include-dir: installdirs
	-rm -rf $(libsubdir)/include
	mkdir $(libsubdir)/include
	-chmod a+rx $(libsubdir)/include

# Install the include directory using tar.
install-headers-tar: stmp-headers $(STMP_FIXPROTO) install-include-dir
	(cd include; \
	 tar -cf - .; exit 0) | (cd $(libsubdir)/include; tar $(TAROUTOPTS) - )
# /bin/sh on some systems returns the status of the first tar,
# and that can lose with GNU tar which always writes a full block.
# So use `exit 0' to ignore its exit status.

# Install the include directory using cpio.
install-headers-cpio: stmp-headers $(STMP_FIXPROTO) install-include-dir
	(cd include; find . -print) | (cd include; cpio -pdum $(libsubdir)/include)

# Put assert.h where it won't override GNU libc's assert.h.
# It goes in a dir that is searched after GNU libc's headers;
# thus, the following conditionals are no longer needed.
# But it's not worth deleting them now.
## Don't replace the assert.h already there if it is not from GCC.
## This code would be simpler if it tested for -f ... && ! grep ...
## but supposedly the ! operator is missing in sh on some systems.
install-assert-h: assert.h installdirs
	if [ -f $(assertdir)/assert.h ]; \
	then \
	  if grep "__eprintf" $(assertdir)/assert.h >/dev/null; \
	    then \
	    rm -f $(assertdir)/assert.h; \
	    $(INSTALL_DATA) $(srcdir)/assert.h $(assertdir)/assert.h; \
	    chmod a-x $(assertdir)/assert.h; \
	  else true; \
	  fi; \
	else \
	  rm -f $(assertdir)/assert.h; \
	  $(INSTALL_DATA) $(srcdir)/assert.h $(assertdir)/assert.h; \
	  chmod a-x $(assertdir)/assert.h; \
	fi

# Use this target to install the program `collect2' under the name `ld'.
install-collect2: collect2 installdirs
	$(INSTALL_PROGRAM) collect2$(exeext) $(libsubdir)/ld$(exeext)
# Install the driver program as $(libsubdir)/gcc for collect2.
	$(INSTALL_PROGRAM) xgcc$(exeext) $(libsubdir)/gcc$(exeext)

# Cancel installation by deleting the installed files.
uninstall: lang.uninstall
	-rm -rf $(libsubdir)
	-rm -rf $(bindir)/$(GCC_INSTALL_NAME)$(exeext)
	-rm -rf $(bindir)/$(GCC_CROSS_NAME)$(exeext)
	-rm -rf $(bindir)/protoize$(exeext)
	-rm -rf $(bindir)/unprotoize$(exeext)
	-rm -rf $(mandir)/$(GCC_INSTALL_NAME)$(manext)
	-rm -rf $(mandir)/$(GCC_CROSS_NAME)$(manext)
	-rm -rf $(mandir)/cccp$(manext)
	-rm -rf $(mandir)/protoize$(manext)
	-rm -rf $(mandir)/unprotoize$(manext)
#
# These exist for maintenance purposes.

# Update the tags table.
TAGS: force
	cd $(srcdir);							\
	mkdir temp;							\
	mv -f c-parse.[ch] cexp.c =*.[chy] temp;		\
	etags *.y *.h *.c;						\
	mv temp/* .;							\
	rmdir temp

# Create the distribution tar file.
#dist: gcc-$(version).tar.gz
dist: gcc.xtar.gz

gcc.xtar.gz: gcc.xtar
	gzip --best < gcc.xtar > tmp-gcc.xtar.gz
	mv tmp-gcc.xtar.gz gcc.xtar.gz

#gcc-$(version).tar.gz: gcc-$(version).tar
#	gzip < gcc-$(version).tar > gcc-$(version).tar.gz

#gcc-$(version).tar:
gcc.xtar: distdir
# Make the distribution.
	tar -chf gcc.xtar gcc-$(version)

# This target exists to do the initial work before the language specific
# stuff gets done.
distdir-start: doc $(srcdir)/INSTALL $(srcdir)/c-parse.y $(srcdir)/c-gperf.h \
  $(srcdir)/c-parse.c $(srcdir)/cexp.c $(srcdir)/config.in
	@if grep -s "for version ${mainversion}" gcc.texi > /dev/null; \
	then true; \
	else echo "You must update the version number in \`gcc.texi'"; sleep 10;\
	fi
# Update the version number in README
	awk '$$1 " " $$2 " " $$3 == "This directory contains" \
		{ $$6 = version; print $$0 } \
	     $$1 " " $$2 " " $$3 != "This directory contains"' \
	  version=$(version) README > tmp.README
	mv tmp.README README
	-rm -rf gcc-$(version) tmp	
# Put all the files in a temporary subdirectory
# which has the name that we want to have in the tar file.
	mkdir tmp
	mkdir tmp/config
	mkdir tmp/ginclude
	for file in *[0-9a-zA-Z+]; do \
	  ln $$file tmp > /dev/null 2>&1 || cp $$file tmp; \
	done
	cd config; \
	for file in *[0-9a-zA-Z+]; do \
	  if test -d $$file && test "$$file" != RCS; then \
	    mkdir ../tmp/config/$$file; \
	    cd $$file; \
	    for subfile in *[0-9a-zA-Z+]; do \
	      ln $$subfile ../../tmp/config/$$file >/dev/null 2>&1 \
	      || cp $$subfile ../../tmp/config/$$file; \
	    done; \
	    cd ..; \
	  else \
	    ln $$file ../tmp/config >/dev/null 2>&1 \
	    || cp $$file ../tmp/config; \
	  fi; \
	done
	cd ginclude; \
	for file in *[0-9a-zA-Z+]; do \
	  ln $$file ../tmp/ginclude >/dev/null 2>&1 \
	   || cp $$file ../tmp/ginclude; \
	done
	ln .gdbinit tmp

# Finish making `distdir', after the languages have done their thing.
distdir-finish:
	mv tmp gcc-$(version)
# Get rid of everything we don't want in the distribution.  We'd want
# this to use Makefile.in, but it doesn't have the `lang.foo' targets
# expanded.
	cd gcc-$(version); make extraclean

distdir: distdir-start lang.distdir distdir-finish

# make diff oldversion=M.N 
# creates a diff file between an older distribution and this one.
# The -P option assumes this is GNU diff.
diff:
	diff -rc2P -x c-parse.y -x c-parse.c -x c-parse.h -x c-gperf.h \
	  -x cexp.c -x bi-parser.c -x objc-parse.y -x objc-parse.c \
	  -x bi-parser.h -x TAGS \
	  -x "gcc.??" -x "gcc.??s" -x gcc.aux -x "gcc.info*" \
	  -x "cpp.??" -x "cpp.??s" -x cpp.aux -x "cpp.info*" \
	  $(LANG_DIFF_EXCLUDES) \
	  gcc-$(oldversion) gcc-$(version) > diffs

bootstrap: force
# Only build the C compiler for stage1, because that is the only one that
# we can guarantee will build with the native compiler, and also it is the
# only thing useful for building stage2.
	$(MAKE) CC="$(CC)" libdir=$(libdir) LANGUAGES="$(BOOT_LANGUAGES)"
	$(MAKE) stage1
# This used to define ALLOCA as empty, but that would lead to bad results
# for a subsequent `make install' since that would not have ALLOCA empty.
# To prevent `make install' from compiling alloca.o and then relinking cc1
# because alloca.o is newer, we permit these recursive makes to compile
# alloca.o.  Then cc1 is newer, so it won't have to be relinked.
	$(MAKE) CC="stage1/xgcc -Bstage1/" CFLAGS="$(BOOT_CFLAGS)" LDFLAGS="$(BOOT_LDFLAGS)" libdir=$(libdir) STAGE_PREFIX=stage1/ LANGUAGES="$(LANGUAGES)"
	$(MAKE) stage2
	$(MAKE) CC="stage2/xgcc -Bstage2/" CFLAGS="$(BOOT_CFLAGS)" LDFLAGS="$(BOOT_LDFLAGS)" libdir=$(libdir) STAGE_PREFIX=stage2/ LANGUAGES="$(LANGUAGES)"

bootstrap2: force
	$(MAKE) CC="stage1/xgcc -Bstage1/" CFLAGS="$(BOOT_CFLAGS)" LDFLAGS="$(BOOT_LDFLAGS)" libdir=$(libdir) STAGE_PREFIX=stage1/ LANGUAGES="$(LANGUAGES)"
	$(MAKE) stage2
	$(MAKE) CC="stage2/xgcc -Bstage2/" CFLAGS="$(BOOT_CFLAGS)" LDFLAGS="$(BOOT_LDFLAGS)" libdir=$(libdir) STAGE_PREFIX=stage2/ LANGUAGES="$(LANGUAGES)"

bootstrap3: force
	$(MAKE) CC="stage2/xgcc -Bstage2/" CFLAGS="$(BOOT_CFLAGS)" LDFLAGS="$(BOOT_LDFLAGS)" libdir=$(libdir) STAGE_PREFIX=stage2/ LANGUAGES="$(LANGUAGES)"

# Compare the object files in the current directory with those in the
# stage2 directory.

# ./ avoids bug in some versions of tail.
compare: force
	for file in *$(objext); do \
	  tail +16c ./$$file > tmp-foo1; \
	  tail +16c stage2/$$file > tmp-foo2 2>/dev/null \
	    && (cmp tmp-foo1 tmp-foo2 || echo $$file differs) || true; \
	done
	for dir in tmp-foo $(SUBDIRS); do \
	  if [ "`echo $$dir/*$(objext)`" != "$$dir/*$(objext)" ] ; then \
	    for file in $$dir/*$(objext); do \
	      tail +16c ./$$file > tmp-foo1; \
	      tail +16c stage2/$$file > tmp-foo2 2>/dev/null \
	        && (cmp tmp-foo1 tmp-foo2 || echo $$file differs) || true; \
	    done; \
	  fi; \
	done
	-rm -f tmp-foo*

# Similar, but compare with stage3 directory
compare3: force
	for file in *$(objext); do \
	  tail +16c ./$$file > tmp-foo1; \
	  tail +16c stage3/$$file > tmp-foo2 2>/dev/null \
	    && (cmp tmp-foo1 tmp-foo2 || echo $$file differs) || true; \
	done
	for dir in tmp-foo $(SUBDIRS); do \
	  if [ "`echo $$dir/*$(objext)`" != "$$dir/*$(objext)" ] ; then \
	    for file in $$dir/*$(objext); do \
	      tail +16c ./$$file > tmp-foo1; \
	      tail +16c stage3/$$file > tmp-foo2 2>/dev/null \
	        && (cmp tmp-foo1 tmp-foo2 || echo $$file differs) || true; \
	    done; \
	  fi; \
	done
	-rm -f tmp-foo*

# Compare the object files in the current directory with those in the
# stage2 directory.  Use gnu cmp (diffutils v2.4 or later) to avoid
# running tail and the overhead of twice copying each object file.

gnucompare: force
	for file in *$(objext); do \
	  cmp --ignore-initial=16 $$file stage2/$$file || true ; \
	done
	for dir in tmp-foo $(SUBDIRS); do \
	  if [ "`echo $$dir/*$(objext)`" != "$$dir/*$(objext)" ] ; then \
	    for file in $$dir/*$(objext); do \
	      cmp --ignore-initial=16 $$file stage2/$$file || true ; \
	    done; \
	  fi; \
	done

# Similar, but compare with stage3 directory
gnucompare3: force
	for file in *$(objext); do \
	  cmp --ignore-initial=16 $$file stage3/$$file || true ; \
	done
	for dir in tmp-foo $(SUBDIRS); do \
	  if [ "`echo $$dir/*$(objext)`" != "$$dir/*$(objext)" ] ; then \
	    for file in $$dir/*$(objext); do \
	      cmp --ignore-initial=16 $$file stage3/$$file || true ; \
	    done; \
	  fi; \
	done

# Copy the object files from a particular stage into a subdirectory.
stage1-start:
	-if [ -d stage1 ] ; then true ; else mkdir stage1 ; fi
	-for dir in . $(SUBDIRS) ; \
	 do \
	   if [ -d stage1/$$dir ] ; then true ; else mkdir stage1/$$dir ; fi ; \
	 done
	-mv $(STAGESTUFF) stage1
# Copy as/ld if they exist to stage dir, so that running xgcc from the stage
# dir will work properly.
	-if [ -f as$(exeext) ] ; then $(LN) ../as$(exeext) stage1 ; else true ; fi
	-if [ -f ld$(exeext) ] ; then $(LN) ../ld$(exeext) stage1 ; else true ; fi
	-if [ -f collect-ld$(exeext) ] ; then $(LN) ../collect-ld$(exeext) stage1 ; else true ; fi
	-rm -f stage1/libgcc.a
	-cp libgcc.a stage1
	-if $(RANLIB_TEST) ; then $(RANLIB) stage1/libgcc.a; else true; fi
	-for f in .. $(EXTRA_MULTILIB_PARTS); do if [ x$${f} != x.. ]; then \
	  cp stage1/$${f} . ; \
	else true; \
	fi; done
stage1: force stage1-start lang.stage1

stage2-start:
	-if [ -d stage2 ] ; then true ; else mkdir stage2 ; fi
	-for dir in . $(SUBDIRS) ; \
	 do \
	   if [ -d stage2/$$dir ] ; then true ; else mkdir stage2/$$dir ; fi ; \
	 done
	-mv $(STAGESTUFF) stage2
# Copy as/ld if they exist to stage dir, so that running xgcc from the stage
# dir will work properly.
	-if [ -f as$(exeext) ] ; then $(LN) ../as$(exeext) stage2 ; else true ; fi
	-if [ -f ld$(exeext) ] ; then $(LN) ../ld$(exeext) stage2 ; else true ; fi
	-if [ -f collect-ld ] ; then $(LN) ../collect-ld$(exeext) stage2 ; else true ; fi
	-rm -f stage2/libgcc.a
	-cp libgcc.a stage2
	-if $(RANLIB_TEST) ; then $(RANLIB) stage2/libgcc.a; else true; fi
	-for f in .. $(EXTRA_MULTILIB_PARTS); do if [ x$${f} != x.. ]; then \
	  cp stage2/$${f} . ; \
	else true; \
	fi; done
stage2: force stage2-start lang.stage2

stage3-start:
	-if [ -d stage3 ] ; then true ; else mkdir stage3 ; fi
	-for dir in . $(SUBDIRS) ; \
	 do \
	   if [ -d stage3/$$dir ] ; then true ; else mkdir stage3/$$dir ; fi ; \
	 done
	-mv $(STAGESTUFF) stage3
# Copy as/ld if they exist to stage dir, so that running xgcc from the stage
# dir will work properly.
	-if [ -f as$(exeext) ] ; then $(LN) ../as$(exeext) stage3 ; else true ; fi
	-if [ -f ld$(exeext) ] ; then $(LN) ../ld$(exeext) stage3 ; else true ; fi
	-if [ -f collect-ld$(exeext) ] ; then $(LN) ../collect-ld$(exeext) stage3 ; else true ; fi
	-rm -f stage3/libgcc.a
	-cp libgcc.a stage3
	-if $(RANLIB_TEST) ; then $(RANLIB) stage3/libgcc.a; else true; fi
	-for f in .. $(EXTRA_MULTILIB_PARTS); do if [ x$${f} != x.. ]; then \
	  cp stage3/$${f} . ; \
	else true; \
	fi; done
stage3: force stage3-start lang.stage3

stage4-start:
	-if [ -d stage4 ] ; then true ; else mkdir stage4 ; fi
	-for dir in . $(SUBDIRS) ; \
	 do \
	   if [ -d stage4/$$dir ] ; then true ; else mkdir stage4/$$dir ; fi ; \
	 done
	-mv $(STAGESTUFF) stage4
# Copy as/ld if they exist to stage dir, so that running xgcc from the stage
# dir will work properly.
	-if [ -f as$(exeext) ] ; then $(LN) ../as$(exeext) stage4 ; else true ; fi
	-if [ -f ld$(exeext) ] ; then $(LN) ../ld$(exeext) stage4 ; else true ; fi
	-if [ -f collect-ld$(exeext) ] ; then $(LN) ../collect-ld$(exeext) stage4 ; else true ; fi
	-rm -f stage4/libgcc.a
	-cp libgcc.a stage4
	-if $(RANLIB_TEST) ; then $(RANLIB) stage4/libgcc.a; else true; fi
	-for f in .. $(EXTRA_MULTILIB_PARTS); do if [ x$${f} != x.. ]; then \
	  cp stage4/$${f} . ; \
	else true; \
	fi; done
stage4: force stage4-start lang.stage4

# Copy just the executable files from a particular stage into a subdirectory,
# and delete the object files.  Use this if you're just verifying a version
# that is pretty sure to work, and you are short of disk space.
risky-stage1: stage1
	-make clean

risky-stage2: stage2
	-make clean

risky-stage3: stage3
	-make clean

risky-stage4: stage4
	-make clean

#In GNU Make, ignore whether `stage*' exists.
.PHONY: stage1 stage2 stage3 stage4 clean maintainer-clean TAGS bootstrap
.PHONY: risky-stage1 risky-stage2 risky-stage3 risky-stage4

force:
