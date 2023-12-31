/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "./ldgram.y"

/*

 */

#define DONTDECLARE_MALLOC

#include "bfd.h"
#include "sysdep.h"
#include "bfdlink.h"
#include "ld.h"    
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldemul.h"
#include "ldfile.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldlex.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

static enum section_type sectype;

lang_memory_region_type *region;


char *current_file;
boolean ldgram_want_filename = true;
boolean had_script = false;
boolean force_make_executable = false;

boolean ldgram_in_script = false;
boolean ldgram_had_equals = false;


#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;

#line 117 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    NAME = 259,                    /* NAME  */
    LNAME = 260,                   /* LNAME  */
    PLUSEQ = 261,                  /* PLUSEQ  */
    MINUSEQ = 262,                 /* MINUSEQ  */
    MULTEQ = 263,                  /* MULTEQ  */
    DIVEQ = 264,                   /* DIVEQ  */
    LSHIFTEQ = 265,                /* LSHIFTEQ  */
    RSHIFTEQ = 266,                /* RSHIFTEQ  */
    ANDEQ = 267,                   /* ANDEQ  */
    OREQ = 268,                    /* OREQ  */
    OROR = 269,                    /* OROR  */
    ANDAND = 270,                  /* ANDAND  */
    EQ = 271,                      /* EQ  */
    NE = 272,                      /* NE  */
    LE = 273,                      /* LE  */
    GE = 274,                      /* GE  */
    LSHIFT = 275,                  /* LSHIFT  */
    RSHIFT = 276,                  /* RSHIFT  */
    UNARY = 277,                   /* UNARY  */
    END = 278,                     /* END  */
    ALIGN_K = 279,                 /* ALIGN_K  */
    BLOCK = 280,                   /* BLOCK  */
    BIND = 281,                    /* BIND  */
    QUAD = 282,                    /* QUAD  */
    LONG = 283,                    /* LONG  */
    SHORT = 284,                   /* SHORT  */
    BYTE = 285,                    /* BYTE  */
    SECTIONS = 286,                /* SECTIONS  */
    PHDRS = 287,                   /* PHDRS  */
    SIZEOF_HEADERS = 288,          /* SIZEOF_HEADERS  */
    OUTPUT_FORMAT = 289,           /* OUTPUT_FORMAT  */
    FORCE_COMMON_ALLOCATION = 290, /* FORCE_COMMON_ALLOCATION  */
    OUTPUT_ARCH = 291,             /* OUTPUT_ARCH  */
    INCLUDE = 292,                 /* INCLUDE  */
    MEMORY = 293,                  /* MEMORY  */
    DEFSYMEND = 294,               /* DEFSYMEND  */
    NOLOAD = 295,                  /* NOLOAD  */
    DSECT = 296,                   /* DSECT  */
    COPY = 297,                    /* COPY  */
    INFO = 298,                    /* INFO  */
    OVERLAY = 299,                 /* OVERLAY  */
    DEFINED = 300,                 /* DEFINED  */
    TARGET_K = 301,                /* TARGET_K  */
    SEARCH_DIR = 302,              /* SEARCH_DIR  */
    MAP = 303,                     /* MAP  */
    ENTRY = 304,                   /* ENTRY  */
    NEXT = 305,                    /* NEXT  */
    SIZEOF = 306,                  /* SIZEOF  */
    ADDR = 307,                    /* ADDR  */
    LOADADDR = 308,                /* LOADADDR  */
    MAX = 309,                     /* MAX  */
    MIN = 310,                     /* MIN  */
    STARTUP = 311,                 /* STARTUP  */
    HLL = 312,                     /* HLL  */
    SYSLIB = 313,                  /* SYSLIB  */
    FLOAT = 314,                   /* FLOAT  */
    NOFLOAT = 315,                 /* NOFLOAT  */
    NOCROSSREFS = 316,             /* NOCROSSREFS  */
    ORIGIN = 317,                  /* ORIGIN  */
    FILL = 318,                    /* FILL  */
    LENGTH = 319,                  /* LENGTH  */
    CREATE_OBJECT_SYMBOLS = 320,   /* CREATE_OBJECT_SYMBOLS  */
    INPUT = 321,                   /* INPUT  */
    GROUP = 322,                   /* GROUP  */
    OUTPUT = 323,                  /* OUTPUT  */
    CONSTRUCTORS = 324,            /* CONSTRUCTORS  */
    ALIGNMOD = 325,                /* ALIGNMOD  */
    AT = 326,                      /* AT  */
    PROVIDE = 327,                 /* PROVIDE  */
    CHIP = 328,                    /* CHIP  */
    LIST = 329,                    /* LIST  */
    SECT = 330,                    /* SECT  */
    ABSOLUTE = 331,                /* ABSOLUTE  */
    LOAD = 332,                    /* LOAD  */
    NEWLINE = 333,                 /* NEWLINE  */
    ENDWORD = 334,                 /* ENDWORD  */
    ORDER = 335,                   /* ORDER  */
    NAMEWORD = 336,                /* NAMEWORD  */
    FORMAT = 337,                  /* FORMAT  */
    PUBLIC = 338,                  /* PUBLIC  */
    BASE = 339,                    /* BASE  */
    ALIAS = 340,                   /* ALIAS  */
    TRUNCATE = 341,                /* TRUNCATE  */
    REL = 342,                     /* REL  */
    INPUT_SCRIPT = 343,            /* INPUT_SCRIPT  */
    INPUT_MRI_SCRIPT = 344,        /* INPUT_MRI_SCRIPT  */
    INPUT_DEFSYM = 345,            /* INPUT_DEFSYM  */
    CASE = 346,                    /* CASE  */
    EXTERN = 347,                  /* EXTERN  */
    START = 348,                   /* START  */
    VERS_TAG = 349,                /* VERS_TAG  */
    VERS_IDENTIFIER = 350,         /* VERS_IDENTIFIER  */
    GLOBAL = 351,                  /* GLOBAL  */
    LOCAL = 352,                   /* LOCAL  */
    VERSION = 353,                 /* VERSION  */
    INPUT_VERSION_SCRIPT = 354     /* INPUT_VERSION_SCRIPT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define NAME 259
#define LNAME 260
#define PLUSEQ 261
#define MINUSEQ 262
#define MULTEQ 263
#define DIVEQ 264
#define LSHIFTEQ 265
#define RSHIFTEQ 266
#define ANDEQ 267
#define OREQ 268
#define OROR 269
#define ANDAND 270
#define EQ 271
#define NE 272
#define LE 273
#define GE 274
#define LSHIFT 275
#define RSHIFT 276
#define UNARY 277
#define END 278
#define ALIGN_K 279
#define BLOCK 280
#define BIND 281
#define QUAD 282
#define LONG 283
#define SHORT 284
#define BYTE 285
#define SECTIONS 286
#define PHDRS 287
#define SIZEOF_HEADERS 288
#define OUTPUT_FORMAT 289
#define FORCE_COMMON_ALLOCATION 290
#define OUTPUT_ARCH 291
#define INCLUDE 292
#define MEMORY 293
#define DEFSYMEND 294
#define NOLOAD 295
#define DSECT 296
#define COPY 297
#define INFO 298
#define OVERLAY 299
#define DEFINED 300
#define TARGET_K 301
#define SEARCH_DIR 302
#define MAP 303
#define ENTRY 304
#define NEXT 305
#define SIZEOF 306
#define ADDR 307
#define LOADADDR 308
#define MAX 309
#define MIN 310
#define STARTUP 311
#define HLL 312
#define SYSLIB 313
#define FLOAT 314
#define NOFLOAT 315
#define NOCROSSREFS 316
#define ORIGIN 317
#define FILL 318
#define LENGTH 319
#define CREATE_OBJECT_SYMBOLS 320
#define INPUT 321
#define GROUP 322
#define OUTPUT 323
#define CONSTRUCTORS 324
#define ALIGNMOD 325
#define AT 326
#define PROVIDE 327
#define CHIP 328
#define LIST 329
#define SECT 330
#define ABSOLUTE 331
#define LOAD 332
#define NEWLINE 333
#define ENDWORD 334
#define ORDER 335
#define NAMEWORD 336
#define FORMAT 337
#define PUBLIC 338
#define BASE 339
#define ALIAS 340
#define TRUNCATE 341
#define REL 342
#define INPUT_SCRIPT 343
#define INPUT_MRI_SCRIPT 344
#define INPUT_DEFSYM 345
#define CASE 346
#define EXTERN 347
#define START 348
#define VERS_TAG 349
#define VERS_IDENTIFIER 350
#define GLOBAL 351
#define LOCAL 352
#define VERSION 353
#define INPUT_VERSION_SCRIPT 354

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "./ldgram.y"

  bfd_vma integer;
  char *name;
  int token;
  union etree_union *etree;
  struct phdr_info
    {
      boolean filehdr;
      boolean phdrs;
      union etree_union *at;
      union etree_union *flags;
    } phdr;
  struct lang_nocrossref *nocrossref;
  struct lang_output_section_phdr_list *section_phdr;
  struct bfd_elf_version_deps *deflist;
  struct bfd_elf_version_expr *versyms;
  struct bfd_elf_version_tree *versnode;

#line 387 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_NAME = 4,                       /* NAME  */
  YYSYMBOL_LNAME = 5,                      /* LNAME  */
  YYSYMBOL_PLUSEQ = 6,                     /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 7,                    /* MINUSEQ  */
  YYSYMBOL_MULTEQ = 8,                     /* MULTEQ  */
  YYSYMBOL_DIVEQ = 9,                      /* DIVEQ  */
  YYSYMBOL_10_ = 10,                       /* '='  */
  YYSYMBOL_LSHIFTEQ = 11,                  /* LSHIFTEQ  */
  YYSYMBOL_RSHIFTEQ = 12,                  /* RSHIFTEQ  */
  YYSYMBOL_ANDEQ = 13,                     /* ANDEQ  */
  YYSYMBOL_OREQ = 14,                      /* OREQ  */
  YYSYMBOL_15_ = 15,                       /* '?'  */
  YYSYMBOL_16_ = 16,                       /* ':'  */
  YYSYMBOL_OROR = 17,                      /* OROR  */
  YYSYMBOL_ANDAND = 18,                    /* ANDAND  */
  YYSYMBOL_19_ = 19,                       /* '|'  */
  YYSYMBOL_20_ = 20,                       /* '^'  */
  YYSYMBOL_21_ = 21,                       /* '&'  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_24_ = 24,                       /* '<'  */
  YYSYMBOL_25_ = 25,                       /* '>'  */
  YYSYMBOL_LE = 26,                        /* LE  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_LSHIFT = 28,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 29,                    /* RSHIFT  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '%'  */
  YYSYMBOL_UNARY = 35,                     /* UNARY  */
  YYSYMBOL_END = 36,                       /* END  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_ALIGN_K = 38,                   /* ALIGN_K  */
  YYSYMBOL_BLOCK = 39,                     /* BLOCK  */
  YYSYMBOL_BIND = 40,                      /* BIND  */
  YYSYMBOL_QUAD = 41,                      /* QUAD  */
  YYSYMBOL_LONG = 42,                      /* LONG  */
  YYSYMBOL_SHORT = 43,                     /* SHORT  */
  YYSYMBOL_BYTE = 44,                      /* BYTE  */
  YYSYMBOL_SECTIONS = 45,                  /* SECTIONS  */
  YYSYMBOL_PHDRS = 46,                     /* PHDRS  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_SIZEOF_HEADERS = 49,            /* SIZEOF_HEADERS  */
  YYSYMBOL_OUTPUT_FORMAT = 50,             /* OUTPUT_FORMAT  */
  YYSYMBOL_FORCE_COMMON_ALLOCATION = 51,   /* FORCE_COMMON_ALLOCATION  */
  YYSYMBOL_OUTPUT_ARCH = 52,               /* OUTPUT_ARCH  */
  YYSYMBOL_INCLUDE = 53,                   /* INCLUDE  */
  YYSYMBOL_MEMORY = 54,                    /* MEMORY  */
  YYSYMBOL_DEFSYMEND = 55,                 /* DEFSYMEND  */
  YYSYMBOL_NOLOAD = 56,                    /* NOLOAD  */
  YYSYMBOL_DSECT = 57,                     /* DSECT  */
  YYSYMBOL_COPY = 58,                      /* COPY  */
  YYSYMBOL_INFO = 59,                      /* INFO  */
  YYSYMBOL_OVERLAY = 60,                   /* OVERLAY  */
  YYSYMBOL_DEFINED = 61,                   /* DEFINED  */
  YYSYMBOL_TARGET_K = 62,                  /* TARGET_K  */
  YYSYMBOL_SEARCH_DIR = 63,                /* SEARCH_DIR  */
  YYSYMBOL_MAP = 64,                       /* MAP  */
  YYSYMBOL_ENTRY = 65,                     /* ENTRY  */
  YYSYMBOL_NEXT = 66,                      /* NEXT  */
  YYSYMBOL_SIZEOF = 67,                    /* SIZEOF  */
  YYSYMBOL_ADDR = 68,                      /* ADDR  */
  YYSYMBOL_LOADADDR = 69,                  /* LOADADDR  */
  YYSYMBOL_MAX = 70,                       /* MAX  */
  YYSYMBOL_MIN = 71,                       /* MIN  */
  YYSYMBOL_STARTUP = 72,                   /* STARTUP  */
  YYSYMBOL_HLL = 73,                       /* HLL  */
  YYSYMBOL_SYSLIB = 74,                    /* SYSLIB  */
  YYSYMBOL_FLOAT = 75,                     /* FLOAT  */
  YYSYMBOL_NOFLOAT = 76,                   /* NOFLOAT  */
  YYSYMBOL_NOCROSSREFS = 77,               /* NOCROSSREFS  */
  YYSYMBOL_ORIGIN = 78,                    /* ORIGIN  */
  YYSYMBOL_FILL = 79,                      /* FILL  */
  YYSYMBOL_LENGTH = 80,                    /* LENGTH  */
  YYSYMBOL_CREATE_OBJECT_SYMBOLS = 81,     /* CREATE_OBJECT_SYMBOLS  */
  YYSYMBOL_INPUT = 82,                     /* INPUT  */
  YYSYMBOL_GROUP = 83,                     /* GROUP  */
  YYSYMBOL_OUTPUT = 84,                    /* OUTPUT  */
  YYSYMBOL_CONSTRUCTORS = 85,              /* CONSTRUCTORS  */
  YYSYMBOL_ALIGNMOD = 86,                  /* ALIGNMOD  */
  YYSYMBOL_AT = 87,                        /* AT  */
  YYSYMBOL_PROVIDE = 88,                   /* PROVIDE  */
  YYSYMBOL_CHIP = 89,                      /* CHIP  */
  YYSYMBOL_LIST = 90,                      /* LIST  */
  YYSYMBOL_SECT = 91,                      /* SECT  */
  YYSYMBOL_ABSOLUTE = 92,                  /* ABSOLUTE  */
  YYSYMBOL_LOAD = 93,                      /* LOAD  */
  YYSYMBOL_NEWLINE = 94,                   /* NEWLINE  */
  YYSYMBOL_ENDWORD = 95,                   /* ENDWORD  */
  YYSYMBOL_ORDER = 96,                     /* ORDER  */
  YYSYMBOL_NAMEWORD = 97,                  /* NAMEWORD  */
  YYSYMBOL_FORMAT = 98,                    /* FORMAT  */
  YYSYMBOL_PUBLIC = 99,                    /* PUBLIC  */
  YYSYMBOL_BASE = 100,                     /* BASE  */
  YYSYMBOL_ALIAS = 101,                    /* ALIAS  */
  YYSYMBOL_TRUNCATE = 102,                 /* TRUNCATE  */
  YYSYMBOL_REL = 103,                      /* REL  */
  YYSYMBOL_INPUT_SCRIPT = 104,             /* INPUT_SCRIPT  */
  YYSYMBOL_INPUT_MRI_SCRIPT = 105,         /* INPUT_MRI_SCRIPT  */
  YYSYMBOL_INPUT_DEFSYM = 106,             /* INPUT_DEFSYM  */
  YYSYMBOL_CASE = 107,                     /* CASE  */
  YYSYMBOL_EXTERN = 108,                   /* EXTERN  */
  YYSYMBOL_START = 109,                    /* START  */
  YYSYMBOL_VERS_TAG = 110,                 /* VERS_TAG  */
  YYSYMBOL_VERS_IDENTIFIER = 111,          /* VERS_IDENTIFIER  */
  YYSYMBOL_GLOBAL = 112,                   /* GLOBAL  */
  YYSYMBOL_LOCAL = 113,                    /* LOCAL  */
  YYSYMBOL_VERSION = 114,                  /* VERSION  */
  YYSYMBOL_INPUT_VERSION_SCRIPT = 115,     /* INPUT_VERSION_SCRIPT  */
  YYSYMBOL_116_ = 116,                     /* ','  */
  YYSYMBOL_117_ = 117,                     /* ';'  */
  YYSYMBOL_118_ = 118,                     /* ')'  */
  YYSYMBOL_119_ = 119,                     /* '['  */
  YYSYMBOL_120_ = 120,                     /* ']'  */
  YYSYMBOL_121_ = 121,                     /* '!'  */
  YYSYMBOL_122_ = 122,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 123,                 /* $accept  */
  YYSYMBOL_file = 124,                     /* file  */
  YYSYMBOL_filename = 125,                 /* filename  */
  YYSYMBOL_defsym_expr = 126,              /* defsym_expr  */
  YYSYMBOL_127_1 = 127,                    /* $@1  */
  YYSYMBOL_mri_script_file = 128,          /* mri_script_file  */
  YYSYMBOL_129_2 = 129,                    /* $@2  */
  YYSYMBOL_mri_script_lines = 130,         /* mri_script_lines  */
  YYSYMBOL_mri_script_command = 131,       /* mri_script_command  */
  YYSYMBOL_132_3 = 132,                    /* $@3  */
  YYSYMBOL_ordernamelist = 133,            /* ordernamelist  */
  YYSYMBOL_mri_load_name_list = 134,       /* mri_load_name_list  */
  YYSYMBOL_mri_abs_name_list = 135,        /* mri_abs_name_list  */
  YYSYMBOL_casesymlist = 136,              /* casesymlist  */
  YYSYMBOL_extern_name_list = 137,         /* extern_name_list  */
  YYSYMBOL_script_file = 138,              /* script_file  */
  YYSYMBOL_139_4 = 139,                    /* $@4  */
  YYSYMBOL_ifile_list = 140,               /* ifile_list  */
  YYSYMBOL_ifile_p1 = 141,                 /* ifile_p1  */
  YYSYMBOL_142_5 = 142,                    /* $@5  */
  YYSYMBOL_143_6 = 143,                    /* $@6  */
  YYSYMBOL_input_list = 144,               /* input_list  */
  YYSYMBOL_sections = 145,                 /* sections  */
  YYSYMBOL_sec_or_group_p1 = 146,          /* sec_or_group_p1  */
  YYSYMBOL_statement_anywhere = 147,       /* statement_anywhere  */
  YYSYMBOL_file_NAME_list = 148,           /* file_NAME_list  */
  YYSYMBOL_input_section_spec = 149,       /* input_section_spec  */
  YYSYMBOL_150_7 = 150,                    /* $@7  */
  YYSYMBOL_151_8 = 151,                    /* $@8  */
  YYSYMBOL_152_9 = 152,                    /* $@9  */
  YYSYMBOL_153_10 = 153,                   /* $@10  */
  YYSYMBOL_statement = 154,                /* statement  */
  YYSYMBOL_statement_list = 155,           /* statement_list  */
  YYSYMBOL_statement_list_opt = 156,       /* statement_list_opt  */
  YYSYMBOL_length = 157,                   /* length  */
  YYSYMBOL_fill_opt = 158,                 /* fill_opt  */
  YYSYMBOL_assign_op = 159,                /* assign_op  */
  YYSYMBOL_end = 160,                      /* end  */
  YYSYMBOL_assignment = 161,               /* assignment  */
  YYSYMBOL_opt_comma = 162,                /* opt_comma  */
  YYSYMBOL_memory = 163,                   /* memory  */
  YYSYMBOL_memory_spec_list = 164,         /* memory_spec_list  */
  YYSYMBOL_memory_spec = 165,              /* memory_spec  */
  YYSYMBOL_166_11 = 166,                   /* $@11  */
  YYSYMBOL_origin_spec = 167,              /* origin_spec  */
  YYSYMBOL_length_spec = 168,              /* length_spec  */
  YYSYMBOL_attributes_opt = 169,           /* attributes_opt  */
  YYSYMBOL_startup = 170,                  /* startup  */
  YYSYMBOL_high_level_library = 171,       /* high_level_library  */
  YYSYMBOL_high_level_library_NAME_list = 172, /* high_level_library_NAME_list  */
  YYSYMBOL_low_level_library = 173,        /* low_level_library  */
  YYSYMBOL_low_level_library_NAME_list = 174, /* low_level_library_NAME_list  */
  YYSYMBOL_floating_point_support = 175,   /* floating_point_support  */
  YYSYMBOL_nocrossref_list = 176,          /* nocrossref_list  */
  YYSYMBOL_mustbe_exp = 177,               /* mustbe_exp  */
  YYSYMBOL_178_12 = 178,                   /* $@12  */
  YYSYMBOL_exp = 179,                      /* exp  */
  YYSYMBOL_opt_at = 180,                   /* opt_at  */
  YYSYMBOL_section = 181,                  /* section  */
  YYSYMBOL_182_13 = 182,                   /* $@13  */
  YYSYMBOL_183_14 = 183,                   /* $@14  */
  YYSYMBOL_184_15 = 184,                   /* $@15  */
  YYSYMBOL_185_16 = 185,                   /* $@16  */
  YYSYMBOL_186_17 = 186,                   /* $@17  */
  YYSYMBOL_187_18 = 187,                   /* $@18  */
  YYSYMBOL_188_19 = 188,                   /* $@19  */
  YYSYMBOL_189_20 = 189,                   /* $@20  */
  YYSYMBOL_190_21 = 190,                   /* $@21  */
  YYSYMBOL_191_22 = 191,                   /* $@22  */
  YYSYMBOL_192_23 = 192,                   /* $@23  */
  YYSYMBOL_193_24 = 193,                   /* $@24  */
  YYSYMBOL_type = 194,                     /* type  */
  YYSYMBOL_atype = 195,                    /* atype  */
  YYSYMBOL_opt_exp_with_type = 196,        /* opt_exp_with_type  */
  YYSYMBOL_opt_exp_without_type = 197,     /* opt_exp_without_type  */
  YYSYMBOL_opt_nocrossrefs = 198,          /* opt_nocrossrefs  */
  YYSYMBOL_memspec_opt = 199,              /* memspec_opt  */
  YYSYMBOL_phdr_opt = 200,                 /* phdr_opt  */
  YYSYMBOL_overlay_section = 201,          /* overlay_section  */
  YYSYMBOL_202_25 = 202,                   /* $@25  */
  YYSYMBOL_203_26 = 203,                   /* $@26  */
  YYSYMBOL_204_27 = 204,                   /* $@27  */
  YYSYMBOL_phdrs = 205,                    /* phdrs  */
  YYSYMBOL_phdr_list = 206,                /* phdr_list  */
  YYSYMBOL_phdr = 207,                     /* phdr  */
  YYSYMBOL_208_28 = 208,                   /* $@28  */
  YYSYMBOL_209_29 = 209,                   /* $@29  */
  YYSYMBOL_phdr_type = 210,                /* phdr_type  */
  YYSYMBOL_phdr_qualifiers = 211,          /* phdr_qualifiers  */
  YYSYMBOL_phdr_val = 212,                 /* phdr_val  */
  YYSYMBOL_version_script_file = 213,      /* version_script_file  */
  YYSYMBOL_214_30 = 214,                   /* $@30  */
  YYSYMBOL_version = 215,                  /* version  */
  YYSYMBOL_216_31 = 216,                   /* $@31  */
  YYSYMBOL_vers_nodes = 217,               /* vers_nodes  */
  YYSYMBOL_vers_node = 218,                /* vers_node  */
  YYSYMBOL_verdep = 219,                   /* verdep  */
  YYSYMBOL_vers_tag = 220,                 /* vers_tag  */
  YYSYMBOL_vers_defns = 221                /* vers_defns  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  123
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  273
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  540

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   354


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   121,     2,     2,     2,    34,    21,     2,
      37,   118,    32,    30,   116,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,   117,
      24,    10,    25,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   119,     2,   120,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,    19,    48,   122,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    11,    12,    13,    14,    17,
      18,    22,    23,    26,    27,    28,    29,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   143,   143,   144,   145,   146,   150,   154,   154,   163,
     163,   176,   177,   181,   182,   183,   186,   189,   190,   191,
     193,   195,   197,   199,   201,   203,   205,   207,   209,   211,
     213,   214,   215,   217,   219,   221,   223,   225,   226,   228,
     227,   229,   231,   235,   236,   237,   241,   243,   247,   249,
     254,   255,   256,   260,   262,   267,   267,   278,   279,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     297,   299,   301,   304,   306,   308,   310,   312,   311,   315,
     318,   317,   319,   326,   329,   332,   335,   338,   341,   347,
     351,   352,   353,   357,   359,   365,   367,   369,   371,   373,
     375,   380,   385,   384,   391,   390,   398,   395,   403,   402,
     410,   411,   415,   416,   421,   422,   427,   438,   439,   442,
     444,   448,   450,   452,   454,   459,   466,   472,   474,   476,
     478,   480,   482,   484,   486,   491,   491,   496,   500,   508,
     516,   516,   520,   524,   525,   526,   531,   530,   536,   542,
     551,   555,   560,   565,   566,   571,   573,   579,   581,   583,
     587,   589,   595,   598,   607,   618,   618,   624,   626,   628,
     630,   632,   634,   637,   639,   641,   643,   645,   647,   649,
     651,   653,   655,   657,   659,   661,   663,   665,   667,   669,
     671,   673,   675,   677,   679,   682,   684,   686,   688,   690,
     692,   694,   696,   698,   704,   705,   708,   710,   712,   718,
     720,   708,   726,   728,   730,   735,   737,   725,   746,   748,
     746,   756,   757,   758,   759,   760,   764,   765,   769,   770,
     775,   776,   781,   782,   787,   788,   793,   795,   800,   803,
     816,   820,   825,   827,   818,   835,   838,   840,   844,   845,
     844,   854,   885,   888,   900,   909,   912,   921,   921,   935,
     935,   945,   946,   950,   954,   961,   965,   973,   976,   980,
     984,   988,   995,   999
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "NAME", "LNAME",
  "PLUSEQ", "MINUSEQ", "MULTEQ", "DIVEQ", "'='", "LSHIFTEQ", "RSHIFTEQ",
  "ANDEQ", "OREQ", "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'",
  "EQ", "NE", "'<'", "'>'", "LE", "GE", "LSHIFT", "RSHIFT", "'+'", "'-'",
  "'*'", "'/'", "'%'", "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "BIND",
  "QUAD", "LONG", "SHORT", "BYTE", "SECTIONS", "PHDRS", "'{'", "'}'",
  "SIZEOF_HEADERS", "OUTPUT_FORMAT", "FORCE_COMMON_ALLOCATION",
  "OUTPUT_ARCH", "INCLUDE", "MEMORY", "DEFSYMEND", "NOLOAD", "DSECT",
  "COPY", "INFO", "OVERLAY", "DEFINED", "TARGET_K", "SEARCH_DIR", "MAP",
  "ENTRY", "NEXT", "SIZEOF", "ADDR", "LOADADDR", "MAX", "MIN", "STARTUP",
  "HLL", "SYSLIB", "FLOAT", "NOFLOAT", "NOCROSSREFS", "ORIGIN", "FILL",
  "LENGTH", "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP", "OUTPUT",
  "CONSTRUCTORS", "ALIGNMOD", "AT", "PROVIDE", "CHIP", "LIST", "SECT",
  "ABSOLUTE", "LOAD", "NEWLINE", "ENDWORD", "ORDER", "NAMEWORD", "FORMAT",
  "PUBLIC", "BASE", "ALIAS", "TRUNCATE", "REL", "INPUT_SCRIPT",
  "INPUT_MRI_SCRIPT", "INPUT_DEFSYM", "CASE", "EXTERN", "START",
  "VERS_TAG", "VERS_IDENTIFIER", "GLOBAL", "LOCAL", "VERSION",
  "INPUT_VERSION_SCRIPT", "','", "';'", "')'", "'['", "']'", "'!'", "'~'",
  "$accept", "file", "filename", "defsym_expr", "$@1", "mri_script_file",
  "$@2", "mri_script_lines", "mri_script_command", "$@3", "ordernamelist",
  "mri_load_name_list", "mri_abs_name_list", "casesymlist",
  "extern_name_list", "script_file", "$@4", "ifile_list", "ifile_p1",
  "$@5", "$@6", "input_list", "sections", "sec_or_group_p1",
  "statement_anywhere", "file_NAME_list", "input_section_spec", "$@7",
  "$@8", "$@9", "$@10", "statement", "statement_list",
  "statement_list_opt", "length", "fill_opt", "assign_op", "end",
  "assignment", "opt_comma", "memory", "memory_spec_list", "memory_spec",
  "$@11", "origin_spec", "length_spec", "attributes_opt", "startup",
  "high_level_library", "high_level_library_NAME_list",
  "low_level_library", "low_level_library_NAME_list",
  "floating_point_support", "nocrossref_list", "mustbe_exp", "$@12", "exp",
  "opt_at", "section", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "$@22", "$@23", "$@24", "type", "atype",
  "opt_exp_with_type", "opt_exp_without_type", "opt_nocrossrefs",
  "memspec_opt", "phdr_opt", "overlay_section", "$@25", "$@26", "$@27",
  "phdrs", "phdr_list", "phdr", "$@28", "$@29", "phdr_type",
  "phdr_qualifiers", "phdr_val", "version_script_file", "$@30", "version",
  "$@31", "vers_nodes", "vers_node", "verdep", "vers_tag", "vers_defns", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      61,   265,   266,   267,   268,    63,    58,   269,   270,   124,
      94,    38,   271,   272,    60,    62,   273,   274,   275,   276,
      43,    45,    42,    47,    37,   277,   278,    40,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   123,   125,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,    44,    59,    41,    91,
      93,    33,   126
};
#endif

#define YYPACT_NINF (-494)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-260)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,  -494,  -494,  -494,  -494,    51,  -494,  -494,  -494,  -494,
    -494,    58,  -494,   -32,  -494,   462,   524,    90,    64,   -32,
    -494,  1135,    67,    87,   109,  -494,   146,   188,   159,   173,
     199,   201,   211,   212,   213,   215,  -494,  -494,   216,   217,
    -494,   218,   225,  -494,  -494,  -494,  -494,    85,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,   -19,  -494,   221,   188,   260,
     411,  -494,   270,   276,   277,  -494,  -494,   279,   280,   281,
     411,   284,   286,   287,   288,   289,   200,   411,    -9,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,   293,   294,  -494,  -494,   295,   296,   188,   188,
     297,   188,    12,  -494,   300,   214,   271,   188,   305,  -494,
    -494,  -494,   263,     7,  -494,     9,  -494,  -494,   411,   411,
     411,   278,   290,  -494,   291,   292,   298,   302,   303,   304,
     306,   311,   411,   411,   890,   174,  -494,   202,  -494,   209,
       6,  -494,  -494,   190,   990,   210,  -494,  -494,   240,  -494,
     241,  -494,  -494,   990,  -494,   301,   314,   268,   220,  -494,
     411,  -494,   143,    20,   -75,   243,  -494,  -494,  -494,   248,
     249,   250,   251,   252,  -494,  -494,   -41,    91,    11,   253,
    -494,  -494,     8,   214,   256,   321,   -32,   411,   411,  -494,
     411,   411,  -494,  -494,   646,   411,   411,   329,   411,   330,
     372,   373,   411,   411,   411,  -494,  -494,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   990,
     374,   378,  -494,   379,   411,   411,   990,   230,   380,   381,
     275,   275,   -54,   285,   990,  1135,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,   383,  -494,  -494,   518,   351,    22,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,   188,  -494,   188,
     300,  -494,  -494,  -494,  -494,   242,  -494,    17,  -494,  -494,
     -25,   990,   990,   551,   990,   990,  -494,   666,   686,   274,
     706,   282,   299,   307,   910,   930,   726,  1032,  1009,  1068,
     970,  1082,  1095,  1106,  1106,   239,   239,   239,   239,   155,
     155,   140,   140,  -494,  -494,  -494,   990,   990,   990,  -494,
    -494,  -494,   990,   990,  -494,  -494,  -494,  -494,   272,   309,
    -494,  -494,   -21,  -494,   283,   342,   283,   411,   308,  -494,
     391,   382,  -494,   295,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,   310,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,   411,   411,  -494,   411,   -20,   285,  -494,  -494,    49,
     360,   952,   385,   312,  -494,  1052,   325,  -494,   990,    10,
     402,   313,   340,  -494,  -494,   748,   768,   990,   403,  -494,
    -494,  -494,  -494,  -494,   317,   411,   139,   404,  -494,   370,
    -494,  -494,  -494,   312,   375,   384,   386,  -494,   318,  -494,
     419,   316,  -494,  -494,   275,  -494,   788,  -494,   411,   390,
    -494,  -494,   411,    10,   411,   322,  -494,  -494,   350,   323,
     103,   808,  -494,   396,   259,   828,  -494,   850,  -494,  -494,
     428,  -494,   285,   408,   430,  -494,   412,  -494,  -494,  -494,
      10,  -494,   411,  -494,    24,  -494,  -494,  -494,  -494,  -494,
    -494,   410,  -494,  -494,  -494,  -494,  -494,  -494,   412,   409,
     414,    85,  -494,  -494,  -494,   870,   415,   421,   422,  -494,
      35,  -494,  -494,  -494,  -494,    23,   424,    35,    35,    35,
     344,  -494,  -494,  -494,   -26,   440,   349,  -494,  -494,   452,
      99,   106,   114,  -494,  -494,    40,   465,  -494,  -494,   423,
     440,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,    48,
     412,  -494,  -494,   467,  -494,   425,    48,  -494,  -494,   316,
    -494,  -494,  -494,  -494,   316,    48,  -494,  -494,   316,  -494
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    55,     9,     7,   257,     0,     2,    58,     3,    12,
       5,     0,     4,     0,     1,    56,    10,     0,     0,   258,
     261,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   161,     0,     0,
      77,     0,     0,    68,    57,    60,    66,     0,    59,    62,
      63,    64,    65,    61,    67,     0,    15,     0,     0,     0,
       0,    16,     0,     0,     0,    18,    45,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,   267,   262,
     127,   128,   129,   130,   165,   131,   132,   133,   134,   165,
      92,   246,     0,     0,     6,    80,     0,     0,     0,     0,
       0,     0,     0,   159,   162,     0,     0,     0,     0,   136,
     135,    94,     0,     0,    39,     0,   193,   201,     0,     0,
       0,     0,     0,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,    48,    30,    46,    31,
      17,    32,    22,     0,    35,     0,    36,    51,    37,    53,
      38,    41,    11,     8,   272,     0,     0,     0,     0,   137,
       0,   138,     0,     0,     0,     0,    58,   146,   145,     0,
       0,     0,     0,     0,   154,   156,   141,   141,   162,     0,
      83,    86,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,   171,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    44,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,   268,   166,   206,    89,   212,   218,    91,
      90,   248,   245,   247,     0,    72,    74,   259,   151,     0,
      69,    70,    79,    93,   152,   140,   153,     0,   157,     0,
     162,   163,    82,    85,    88,     0,    76,     0,    71,   165,
       0,    26,    27,    42,    28,    29,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,   190,
     188,   187,   186,   180,   181,   184,   185,   182,   183,   178,
     179,   176,   177,   173,   174,   175,    14,    25,    23,    49,
      47,    43,    19,    20,    34,    33,    52,    54,     0,     0,
     265,   263,     0,   273,   227,     0,   227,     0,     0,    81,
       0,     0,   142,     0,   143,   155,   158,   164,    84,    87,
      78,     0,   260,    40,   199,   200,   192,   169,   195,   196,
     197,     0,     0,   198,     0,   269,   270,   266,   264,     0,
       0,   227,     0,   205,   233,     0,   234,   219,   251,   252,
       0,     0,     0,   144,   139,     0,     0,   189,     0,   221,
     222,   223,   224,   225,     0,     0,     0,     0,   229,     0,
     207,   232,   235,   205,     0,   255,     0,   249,     0,   150,
       0,   141,   202,   203,     0,   226,     0,   228,     0,     0,
     213,    92,     0,   252,     0,     0,    73,   165,     0,     0,
     227,     0,   208,     0,     0,     0,   253,     0,   250,   148,
       0,   147,   271,     0,     0,   204,   119,   214,   220,   256,
     252,   165,     0,   230,   101,   106,   108,   121,   122,   123,
     124,     0,   111,   113,   112,   102,   114,   118,   120,     0,
       0,     0,   240,   254,   149,     0,     0,     0,     0,   165,
       0,   117,   209,   165,   110,     0,   227,     0,     0,     0,
       0,    95,    97,    96,   141,   237,     0,   241,   215,     0,
     141,   141,   141,   116,   103,     0,     0,   238,   115,     0,
     237,   231,   105,   107,   109,    98,   100,    99,   236,   126,
     119,   238,   165,     0,   210,     0,   126,   125,   239,   141,
     242,   216,   211,   238,   141,   126,   217,   243,   141,   244
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -494,  -494,   -53,  -494,  -494,  -494,  -494,   315,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,   319,  -494,  -494,
    -494,   326,  -494,    53,  -155,  -308,  -494,  -494,  -494,  -494,
    -494,    15,  -494,   -45,  -494,  -469,  -494,     5,  -421,  -174,
    -494,  -494,  -230,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -158,   -89,  -494,   -59,    81,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -365,   150,  -494,  -494,   -22,  -493,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -381,  -494,
    -494,  -494,  -494,  -494,   320,   -15,  -494,  -494,  -232
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,    95,    10,    11,     8,     9,    16,    76,   189,
     140,   139,   137,   148,   150,     6,     7,    15,    44,   106,
     166,   182,    45,   162,    46,   494,   466,   480,   476,   477,
     478,   467,   468,   469,   470,   524,    89,   111,    47,   505,
      48,   259,   168,   258,   411,   441,   341,    49,    50,   176,
      51,   177,    52,   179,   159,   160,   194,   400,   250,   334,
     419,   446,   495,   529,   335,   433,   472,   510,   534,   336,
     404,   394,   372,   373,   376,   403,   507,   519,   485,   509,
     533,   538,    53,   163,   253,   337,   425,   379,   407,   423,
      12,    13,    54,    55,    19,    20,   332,   157,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     161,   134,   267,   269,    79,   114,   397,   249,   328,   329,
     232,   144,   273,   274,   405,   178,    94,   187,   153,   190,
     271,   273,   274,   352,   251,   471,   167,   497,   526,   344,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   491,
     535,   254,   436,   255,   515,   170,   171,   471,   173,   175,
     492,    14,   116,   117,   184,   516,   330,   531,   522,   192,
     193,  -104,    17,   331,   523,   444,   537,   493,   252,   473,
     342,   498,   517,   205,   206,   265,   229,   266,    18,   118,
     119,     1,     2,     3,   236,    18,   120,   121,   122,   367,
     265,   333,     4,   388,   504,   112,   368,   406,   123,   471,
      77,   244,   154,   155,   156,   389,   390,   391,   392,   393,
     124,    78,   347,   383,    90,   125,   126,   127,   128,   129,
     130,   499,   233,   188,   275,   191,   276,   270,   281,   282,
     174,   284,   285,   275,    91,   350,   287,   288,   343,   290,
     396,   131,   443,   294,   295,   296,    92,   245,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     132,   133,   223,   224,   225,   322,   323,   116,   117,   500,
     501,   502,   429,    93,   227,   221,   222,   223,   224,   225,
     351,   246,    94,   116,   117,   389,   390,   391,   392,   393,
     234,   109,   110,   247,   118,   119,    96,   265,    32,   268,
      97,   120,   121,   122,   345,   265,   346,   512,   180,   181,
     118,   119,   265,   123,   513,   113,   248,   120,   121,   122,
     265,    42,   514,   324,   325,   124,    98,   428,    99,   123,
     125,   126,   127,   128,   129,   130,   348,   349,   100,   101,
     102,   124,   103,   104,   105,   107,   125,   126,   127,   128,
     129,   130,   108,   245,   115,    79,   131,   219,   220,   221,
     222,   223,   224,   225,   135,   371,   375,   371,   378,   249,
     136,   138,   131,   141,   142,   143,   116,   117,   145,   146,
     228,   147,   149,   151,   152,   132,   133,   164,   165,   167,
     169,   172,   385,   386,   178,   387,   235,   448,   183,   185,
     186,   132,   133,   118,   119,   195,   242,   240,   230,   247,
     369,   121,   122,   370,    32,   231,   237,   196,   197,   198,
     241,   279,   123,   289,   291,   199,   416,   243,   439,   200,
     201,   202,   248,   203,   124,   116,   117,    42,   204,   125,
     126,   127,   128,   129,   130,   532,   238,   239,   374,   431,
     536,   256,   474,   435,   539,   437,   260,   261,   262,   263,
     264,   272,   118,   119,   278,   131,   292,   293,   319,   120,
     121,   122,   320,   321,   326,   327,   154,   338,   340,   365,
     490,   123,   356,   475,   496,   381,   333,   395,   382,   399,
     358,   398,   402,   124,   132,   133,   408,   418,   125,   126,
     127,   128,   129,   130,   116,   117,   454,   359,   410,   414,
     417,   422,   421,   424,   380,   360,   366,   455,   384,   427,
     440,   409,   265,   527,   131,   415,   426,   432,   451,   438,
     442,   118,   119,   447,   456,   452,   453,   479,   120,   121,
     122,   483,   487,   457,   458,   459,   460,   482,   488,   489,
     123,   396,   503,   132,   133,   506,    21,   508,   511,   518,
     520,   528,   124,   530,   434,   525,   484,   125,   126,   127,
     128,   129,   130,   481,   420,   257,   377,     0,   521,     0,
       0,   461,     0,   462,     0,     0,     0,   463,     0,     0,
      42,     0,     0,   131,   283,     0,   280,    22,    23,   277,
       0,     0,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,    21,     0,    29,    30,    31,    32,    56,   464,
       0,   465,   132,   133,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,    39,    40,    41,     0,     0,     0,
      42,     0,     0,     0,   339,    56,     0,     0,     0,     0,
       0,     0,    57,    22,    23,     0,     0,     0,    24,    25,
      26,    27,    28,     0,     0,     0,  -259,    58,     0,    43,
      29,    30,    31,    32,     0,     0,     0,   353,     0,    57,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
      39,    40,    41,     0,    58,     0,    42,     0,     0,     0,
      59,     0,     0,    60,    61,    62,    63,    64,   -42,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,    73,    74,    75,     0,    43,     0,    59,     0,     0,
      60,    61,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,    73,    74,
      75,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,     0,     0,   207,   286,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   207,   354,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   207,   355,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   207,   357,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   207,   363,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,     0,   207,   412,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   207,   413,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   207,   430,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   207,   445,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   207,   449,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,     0,     0,   207,   450,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,     0,   486,   396,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   207,   226,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,     0,   361,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     0,     0,   362,   207,   364,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   207,   401,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,    80,    81,    82,    83,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
      89,    60,   176,   177,    19,    58,   371,   162,   240,   241,
       4,    70,     4,     5,     4,     4,     4,    10,    77,    10,
     178,     4,     5,    48,     4,   446,     4,     4,   521,   259,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     4,
     533,   116,   423,   118,     4,    98,    99,   468,   101,   102,
      15,     0,     3,     4,   107,    15,   110,   526,    10,   118,
     119,    37,     4,   117,    16,   430,   535,    32,    48,   450,
      48,    48,    32,   132,   133,   116,   135,   118,   110,    30,
      31,   104,   105,   106,   143,   110,    37,    38,    39,   110,
     116,   111,   115,   113,   120,   114,   117,    87,    49,   520,
      10,   160,   111,   112,   113,    56,    57,    58,    59,    60,
      61,    47,   270,   343,    47,    66,    67,    68,    69,    70,
      71,   486,   116,   116,   116,   116,   118,   116,   187,   188,
     118,   190,   191,   116,    47,   118,   195,   196,   116,   198,
      37,    92,    39,   202,   203,   204,    37,     4,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     121,   122,    32,    33,    34,   234,   235,     3,     4,   487,
     488,   489,   414,    37,    10,    30,    31,    32,    33,    34,
     279,    48,     4,     3,     4,    56,    57,    58,    59,    60,
      10,   116,   117,    60,    30,    31,    47,   116,    65,   118,
      37,    37,    38,    39,   267,   116,   269,   118,     4,     5,
      30,    31,   116,    49,   118,     4,    83,    37,    38,    39,
     116,    88,   118,     3,     4,    61,    37,   411,    37,    49,
      66,    67,    68,    69,    70,    71,     4,     5,    37,    37,
      37,    61,    37,    37,    37,    37,    66,    67,    68,    69,
      70,    71,    37,     4,     4,   280,    92,    28,    29,    30,
      31,    32,    33,    34,     4,   334,   335,   336,   337,   434,
       4,     4,    92,     4,     4,     4,     3,     4,     4,     3,
     116,     4,     4,     4,    94,   121,   122,     4,     4,     4,
       4,     4,   361,   362,     4,   364,   116,    48,    37,     4,
      47,   121,   122,    30,    31,    37,    48,    16,   116,    60,
      37,    38,    39,    40,    65,   116,   116,    37,    37,    37,
      16,    10,    49,     4,     4,    37,   395,   117,   427,    37,
      37,    37,    83,    37,    61,     3,     4,    88,    37,    66,
      67,    68,    69,    70,    71,   529,   116,   116,    16,   418,
     534,   118,   451,   422,   538,   424,   118,   118,   118,   118,
     118,   118,    30,    31,   118,    92,     4,     4,     4,    37,
      38,    39,     4,     4,     4,     4,   111,     4,    37,   117,
     479,    49,   118,   452,   483,     4,   111,    37,    16,    87,
     118,    16,    77,    61,   121,   122,     4,    37,    66,    67,
      68,    69,    70,    71,     3,     4,     4,   118,    78,    16,
      16,    37,    47,    37,   116,   118,   117,    15,   118,    10,
      80,   118,   116,   522,    92,   118,   118,    47,    10,   117,
     117,    30,    31,    47,    32,    37,    16,    37,    37,    38,
      39,    37,    37,    41,    42,    43,    44,    48,    37,    37,
      49,    37,   118,   121,   122,    25,     4,   118,    16,     4,
      47,     4,    61,    48,   421,   520,   471,    66,    67,    68,
      69,    70,    71,   468,   403,   166,   336,    -1,   510,    -1,
      -1,    79,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      88,    -1,    -1,    92,   189,    -1,   186,    45,    46,   183,
      -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    62,    63,    64,    65,     4,   117,
      -1,   119,   121,   122,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    36,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    45,    46,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    -1,    -1,   114,    53,    -1,   117,
      62,    63,    64,    65,    -1,    -1,    -1,    36,    -1,    38,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      82,    83,    84,    -1,    53,    -1,    88,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,   107,   108,   109,    -1,   117,    -1,    86,    -1,    -1,
      89,    90,    91,    92,    93,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,   107,   108,
     109,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    15,   118,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   118,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   118,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   118,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    15,   118,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    15,   118,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    15,   118,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    15,   118,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    15,   118,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    15,   118,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    15,   118,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,   118,    37,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    15,   116,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,   116,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,   116,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   104,   105,   106,   115,   124,   138,   139,   128,   129,
     126,   127,   213,   214,     0,   140,   130,     4,   110,   217,
     218,     4,    45,    46,    50,    51,    52,    53,    54,    62,
      63,    64,    65,    72,    73,    74,    75,    76,    77,    82,
      83,    84,    88,   117,   141,   145,   147,   161,   163,   170,
     171,   173,   175,   205,   215,   216,     4,    38,    53,    86,
      89,    90,    91,    92,    93,    95,    96,    97,    98,    99,
     100,   101,   102,   107,   108,   109,   131,    10,    47,   218,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   159,
      47,    47,    37,    37,     4,   125,    47,    37,    37,    37,
      37,    37,    37,    37,    37,    37,   142,    37,    37,   116,
     117,   160,   114,     4,   125,     4,     3,     4,    30,    31,
      37,    38,    39,    49,    61,    66,    67,    68,    69,    70,
      71,    92,   121,   122,   179,     4,     4,   135,     4,   134,
     133,     4,     4,     4,   179,     4,     3,     4,   136,     4,
     137,     4,    94,   179,   111,   112,   113,   220,   221,   177,
     178,   177,   146,   206,     4,     4,   143,     4,   165,     4,
     125,   125,     4,   125,   118,   125,   172,   174,     4,   176,
       4,     5,   144,    37,   125,     4,    47,    10,   116,   132,
      10,   116,   179,   179,   179,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,   179,   179,    15,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   116,    10,   116,   179,
     116,   116,     4,   116,    10,   116,   179,   116,   116,   116,
      16,    16,    48,   117,   179,     4,    48,    60,    83,   147,
     181,     4,    48,   207,   116,   118,   118,   140,   166,   164,
     118,   118,   118,   118,   118,   116,   118,   162,   118,   162,
     116,   176,   118,     4,     5,   116,   118,   144,   118,    10,
     217,   179,   179,   130,   179,   179,   118,   179,   179,     4,
     179,     4,     4,     4,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,     4,
       4,     4,   179,   179,     3,     4,     4,     4,   221,   221,
     110,   117,   219,   111,   182,   187,   192,   208,     4,    36,
      37,   169,    48,   116,   165,   125,   125,   176,     4,     5,
     118,   177,    48,    36,   118,   118,   118,   118,   118,   118,
     118,   116,   116,   118,    16,   117,   117,   110,   117,    37,
      40,   179,   195,   196,    16,   179,   197,   196,   179,   210,
     116,     4,    16,   165,   118,   179,   179,   179,   113,    56,
      57,    58,    59,    60,   194,    37,    37,   195,    16,    87,
     180,    16,    77,   198,   193,     4,    87,   211,     4,   118,
      78,   167,   118,   118,    16,   118,   179,    16,    37,   183,
     180,    47,    37,   212,    37,   209,   118,    10,   162,   221,
     118,   179,    47,   188,   146,   179,   211,   179,   117,   177,
      80,   168,   117,    39,   195,   118,   184,    47,    48,   118,
     118,    10,    37,    16,     4,    15,    32,    41,    42,    43,
      44,    79,    81,    85,   117,   119,   149,   154,   155,   156,
     157,   161,   189,   211,   177,   179,   151,   152,   153,    37,
     150,   154,    48,    37,   160,   201,   118,    37,    37,    37,
     177,     4,    15,    32,   148,   185,   177,     4,    48,   195,
     148,   148,   148,   118,   120,   162,    25,   199,   118,   202,
     190,    16,   118,   118,   118,     4,    15,    32,     4,   200,
      47,   199,    10,    16,   158,   156,   200,   177,     4,   186,
      48,   158,   162,   203,   191,   200,   162,   158,   204,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   123,   124,   124,   124,   124,   125,   127,   126,   129,
     128,   130,   130,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     131,   131,   131,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   137,   137,   139,   138,   140,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   141,   141,
     143,   141,   141,   144,   144,   144,   144,   144,   144,   145,
     146,   146,   146,   147,   147,   148,   148,   148,   148,   148,
     148,   149,   150,   149,   151,   149,   152,   149,   153,   149,
     154,   154,   154,   154,   154,   154,   154,   155,   155,   156,
     156,   157,   157,   157,   157,   158,   158,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   160,   161,   161,   161,
     162,   162,   163,   164,   164,   164,   166,   165,   167,   168,
     169,   169,   170,   171,   171,   172,   172,   173,   174,   174,
     175,   175,   176,   176,   176,   178,   177,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   180,   180,   182,   183,   184,   185,
     186,   181,   187,   188,   189,   190,   191,   181,   192,   193,
     181,   194,   194,   194,   194,   194,   195,   195,   196,   196,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   202,   203,   204,   201,   205,   206,   206,   208,   209,
     207,   210,   211,   211,   211,   212,   212,   214,   213,   216,
     215,   217,   217,   218,   218,   219,   219,   220,   220,   220,
     220,   220,   221,   221
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     0,     4,     0,
       2,     3,     0,     2,     4,     1,     1,     2,     1,     4,
       4,     3,     2,     4,     3,     4,     4,     4,     4,     4,
       2,     2,     2,     4,     4,     2,     2,     2,     2,     0,
       5,     2,     0,     3,     2,     0,     1,     3,     1,     3,
       0,     1,     3,     1,     3,     0,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     8,     4,     1,     4,     0,     5,     4,
       0,     5,     4,     1,     3,     2,     1,     3,     2,     4,
       2,     2,     0,     4,     2,     1,     1,     1,     3,     3,
       3,     1,     0,     4,     0,     5,     0,     5,     0,     5,
       2,     1,     1,     1,     1,     4,     4,     2,     1,     0,
       1,     1,     1,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       1,     0,     5,     2,     3,     0,     0,     7,     3,     3,
       3,     0,     4,     4,     3,     3,     1,     4,     3,     0,
       1,     1,     0,     2,     3,     0,     2,     2,     3,     4,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     1,     1,     4,     4,     4,     4,     4,
       4,     1,     6,     6,     4,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,    16,     0,     0,
       7,     1,     1,     1,     1,     1,     3,     0,     3,     2,
       6,    10,     2,     1,     0,     1,     2,     0,     0,     3,
       0,     0,     0,     0,    11,     4,     0,     2,     0,     0,
       6,     1,     0,     3,     5,     0,     3,     0,     2,     0,
       5,     1,     2,     5,     6,     1,     2,     0,     2,     4,
       4,     8,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7: /* $@1: %empty  */
#line 154 "./ldgram.y"
                { ldlex_defsym(); }
#line 2122 "y.tab.c"
    break;

  case 8: /* defsym_expr: $@1 NAME '=' exp  */
#line 156 "./ldgram.y"
                {
		  ldlex_popstate();
		  lang_add_assignment(exp_assop((yyvsp[-1].token),(yyvsp[-2].name),(yyvsp[0].etree)));
		}
#line 2131 "y.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 163 "./ldgram.y"
                {
		  ldlex_mri_script ();
		  PUSH_ERROR ("MRI style script");
		}
#line 2140 "y.tab.c"
    break;

  case 10: /* mri_script_file: $@2 mri_script_lines  */
#line 168 "./ldgram.y"
                {
		  ldlex_popstate ();
		  mri_draw_tree ();
		  POP_ERROR ();
		}
#line 2150 "y.tab.c"
    break;

  case 15: /* mri_script_command: NAME  */
#line 183 "./ldgram.y"
                        {
			einfo("%P%F: unrecognised keyword in MRI style script '%s'\n",(yyvsp[0].name));
			}
#line 2158 "y.tab.c"
    break;

  case 16: /* mri_script_command: LIST  */
#line 186 "./ldgram.y"
                        {
			config.map_filename = "-";
			}
#line 2166 "y.tab.c"
    break;

  case 19: /* mri_script_command: PUBLIC NAME '=' exp  */
#line 192 "./ldgram.y"
                        { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 2172 "y.tab.c"
    break;

  case 20: /* mri_script_command: PUBLIC NAME ',' exp  */
#line 194 "./ldgram.y"
                        { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 2178 "y.tab.c"
    break;

  case 21: /* mri_script_command: PUBLIC NAME exp  */
#line 196 "./ldgram.y"
                        { mri_public((yyvsp[-1].name), (yyvsp[0].etree)); }
#line 2184 "y.tab.c"
    break;

  case 22: /* mri_script_command: FORMAT NAME  */
#line 198 "./ldgram.y"
                        { mri_format((yyvsp[0].name)); }
#line 2190 "y.tab.c"
    break;

  case 23: /* mri_script_command: SECT NAME ',' exp  */
#line 200 "./ldgram.y"
                        { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 2196 "y.tab.c"
    break;

  case 24: /* mri_script_command: SECT NAME exp  */
#line 202 "./ldgram.y"
                        { mri_output_section((yyvsp[-1].name), (yyvsp[0].etree));}
#line 2202 "y.tab.c"
    break;

  case 25: /* mri_script_command: SECT NAME '=' exp  */
#line 204 "./ldgram.y"
                        { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 2208 "y.tab.c"
    break;

  case 26: /* mri_script_command: ALIGN_K NAME '=' exp  */
#line 206 "./ldgram.y"
                        { mri_align((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2214 "y.tab.c"
    break;

  case 27: /* mri_script_command: ALIGN_K NAME ',' exp  */
#line 208 "./ldgram.y"
                        { mri_align((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2220 "y.tab.c"
    break;

  case 28: /* mri_script_command: ALIGNMOD NAME '=' exp  */
#line 210 "./ldgram.y"
                        { mri_alignmod((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2226 "y.tab.c"
    break;

  case 29: /* mri_script_command: ALIGNMOD NAME ',' exp  */
#line 212 "./ldgram.y"
                        { mri_alignmod((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 2232 "y.tab.c"
    break;

  case 32: /* mri_script_command: NAMEWORD NAME  */
#line 216 "./ldgram.y"
                        { mri_name((yyvsp[0].name)); }
#line 2238 "y.tab.c"
    break;

  case 33: /* mri_script_command: ALIAS NAME ',' NAME  */
#line 218 "./ldgram.y"
                        { mri_alias((yyvsp[-2].name),(yyvsp[0].name),0);}
#line 2244 "y.tab.c"
    break;

  case 34: /* mri_script_command: ALIAS NAME ',' INT  */
#line 220 "./ldgram.y"
                        { mri_alias((yyvsp[-2].name),0,(int) (yyvsp[0].integer));}
#line 2250 "y.tab.c"
    break;

  case 35: /* mri_script_command: BASE exp  */
#line 222 "./ldgram.y"
                        { mri_base((yyvsp[0].etree)); }
#line 2256 "y.tab.c"
    break;

  case 36: /* mri_script_command: TRUNCATE INT  */
#line 224 "./ldgram.y"
                {  mri_truncate((unsigned int) (yyvsp[0].integer)); }
#line 2262 "y.tab.c"
    break;

  case 39: /* $@3: %empty  */
#line 228 "./ldgram.y"
                { ldfile_open_command_file ((yyvsp[0].name)); }
#line 2268 "y.tab.c"
    break;

  case 41: /* mri_script_command: START NAME  */
#line 230 "./ldgram.y"
                { lang_add_entry ((yyvsp[0].name), false); }
#line 2274 "y.tab.c"
    break;

  case 43: /* ordernamelist: ordernamelist ',' NAME  */
#line 235 "./ldgram.y"
                                             { mri_order((yyvsp[0].name)); }
#line 2280 "y.tab.c"
    break;

  case 44: /* ordernamelist: ordernamelist NAME  */
#line 236 "./ldgram.y"
                                          { mri_order((yyvsp[0].name)); }
#line 2286 "y.tab.c"
    break;

  case 46: /* mri_load_name_list: NAME  */
#line 242 "./ldgram.y"
                        { mri_load((yyvsp[0].name)); }
#line 2292 "y.tab.c"
    break;

  case 47: /* mri_load_name_list: mri_load_name_list ',' NAME  */
#line 243 "./ldgram.y"
                                            { mri_load((yyvsp[0].name)); }
#line 2298 "y.tab.c"
    break;

  case 48: /* mri_abs_name_list: NAME  */
#line 248 "./ldgram.y"
                        { mri_only_load((yyvsp[0].name)); }
#line 2304 "y.tab.c"
    break;

  case 49: /* mri_abs_name_list: mri_abs_name_list ',' NAME  */
#line 250 "./ldgram.y"
                        { mri_only_load((yyvsp[0].name)); }
#line 2310 "y.tab.c"
    break;

  case 50: /* casesymlist: %empty  */
#line 254 "./ldgram.y"
                      { (yyval.name) = NULL; }
#line 2316 "y.tab.c"
    break;

  case 53: /* extern_name_list: NAME  */
#line 261 "./ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name)); }
#line 2322 "y.tab.c"
    break;

  case 54: /* extern_name_list: extern_name_list ',' NAME  */
#line 263 "./ldgram.y"
                        { ldlang_add_undef ((yyvsp[0].name)); }
#line 2328 "y.tab.c"
    break;

  case 55: /* $@4: %empty  */
#line 267 "./ldgram.y"
        {
	 ldlex_both();
	}
#line 2336 "y.tab.c"
    break;

  case 56: /* script_file: $@4 ifile_list  */
#line 271 "./ldgram.y"
        {
	ldlex_popstate();
	}
#line 2344 "y.tab.c"
    break;

  case 69: /* ifile_p1: TARGET_K '(' NAME ')'  */
#line 296 "./ldgram.y"
                { lang_add_target((yyvsp[-1].name)); }
#line 2350 "y.tab.c"
    break;

  case 70: /* ifile_p1: SEARCH_DIR '(' filename ')'  */
#line 298 "./ldgram.y"
                { ldfile_add_library_path ((yyvsp[-1].name), false); }
#line 2356 "y.tab.c"
    break;

  case 71: /* ifile_p1: OUTPUT '(' filename ')'  */
#line 300 "./ldgram.y"
                { lang_add_output((yyvsp[-1].name), 1); }
#line 2362 "y.tab.c"
    break;

  case 72: /* ifile_p1: OUTPUT_FORMAT '(' NAME ')'  */
#line 302 "./ldgram.y"
                  { lang_add_output_format ((yyvsp[-1].name), (char *) NULL,
					    (char *) NULL, 1); }
#line 2369 "y.tab.c"
    break;

  case 73: /* ifile_p1: OUTPUT_FORMAT '(' NAME ',' NAME ',' NAME ')'  */
#line 305 "./ldgram.y"
                  { lang_add_output_format ((yyvsp[-5].name), (yyvsp[-3].name), (yyvsp[-1].name), 1); }
#line 2375 "y.tab.c"
    break;

  case 74: /* ifile_p1: OUTPUT_ARCH '(' NAME ')'  */
#line 307 "./ldgram.y"
                  { ldfile_set_output_arch((yyvsp[-1].name)); }
#line 2381 "y.tab.c"
    break;

  case 75: /* ifile_p1: FORCE_COMMON_ALLOCATION  */
#line 309 "./ldgram.y"
                { command_line.force_common_definition = true ; }
#line 2387 "y.tab.c"
    break;

  case 77: /* $@5: %empty  */
#line 312 "./ldgram.y"
                  { lang_enter_group (); }
#line 2393 "y.tab.c"
    break;

  case 78: /* ifile_p1: GROUP $@5 '(' input_list ')'  */
#line 314 "./ldgram.y"
                  { lang_leave_group (); }
#line 2399 "y.tab.c"
    break;

  case 79: /* ifile_p1: MAP '(' filename ')'  */
#line 316 "./ldgram.y"
                { lang_add_map((yyvsp[-1].name)); }
#line 2405 "y.tab.c"
    break;

  case 80: /* $@6: %empty  */
#line 318 "./ldgram.y"
                { ldfile_open_command_file((yyvsp[0].name)); }
#line 2411 "y.tab.c"
    break;

  case 82: /* ifile_p1: NOCROSSREFS '(' nocrossref_list ')'  */
#line 320 "./ldgram.y"
                {
		  lang_add_nocrossref ((yyvsp[-1].nocrossref));
		}
#line 2419 "y.tab.c"
    break;

  case 83: /* input_list: NAME  */
#line 327 "./ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2426 "y.tab.c"
    break;

  case 84: /* input_list: input_list ',' NAME  */
#line 330 "./ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2433 "y.tab.c"
    break;

  case 85: /* input_list: input_list NAME  */
#line 333 "./ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2440 "y.tab.c"
    break;

  case 86: /* input_list: LNAME  */
#line 336 "./ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2447 "y.tab.c"
    break;

  case 87: /* input_list: input_list ',' LNAME  */
#line 339 "./ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2454 "y.tab.c"
    break;

  case 88: /* input_list: input_list LNAME  */
#line 342 "./ldgram.y"
                { lang_add_input_file((yyvsp[0].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
#line 2461 "y.tab.c"
    break;

  case 93: /* statement_anywhere: ENTRY '(' NAME ')'  */
#line 358 "./ldgram.y"
                { lang_add_entry ((yyvsp[-1].name), false); }
#line 2467 "y.tab.c"
    break;

  case 95: /* file_NAME_list: NAME  */
#line 366 "./ldgram.y"
                        { lang_add_wild ((yyvsp[0].name), current_file); }
#line 2473 "y.tab.c"
    break;

  case 96: /* file_NAME_list: '*'  */
#line 368 "./ldgram.y"
                        { lang_add_wild ("*", current_file); }
#line 2479 "y.tab.c"
    break;

  case 97: /* file_NAME_list: '?'  */
#line 370 "./ldgram.y"
                        { lang_add_wild ("?", current_file); }
#line 2485 "y.tab.c"
    break;

  case 98: /* file_NAME_list: file_NAME_list opt_comma NAME  */
#line 372 "./ldgram.y"
                        { lang_add_wild ((yyvsp[0].name), current_file); }
#line 2491 "y.tab.c"
    break;

  case 99: /* file_NAME_list: file_NAME_list opt_comma '*'  */
#line 374 "./ldgram.y"
                        { lang_add_wild ("*", current_file); }
#line 2497 "y.tab.c"
    break;

  case 100: /* file_NAME_list: file_NAME_list opt_comma '?'  */
#line 376 "./ldgram.y"
                        { lang_add_wild ("?", current_file); }
#line 2503 "y.tab.c"
    break;

  case 101: /* input_section_spec: NAME  */
#line 381 "./ldgram.y"
                {
		lang_add_wild((char *)NULL, (yyvsp[0].name));
		}
#line 2511 "y.tab.c"
    break;

  case 102: /* $@7: %empty  */
#line 385 "./ldgram.y"
                        {
			current_file = (char *)NULL;
			}
#line 2519 "y.tab.c"
    break;

  case 104: /* $@8: %empty  */
#line 391 "./ldgram.y"
                        {
			current_file = (yyvsp[0].name);
			}
#line 2527 "y.tab.c"
    break;

  case 106: /* $@9: %empty  */
#line 398 "./ldgram.y"
                        {
			current_file = "?";
			}
#line 2535 "y.tab.c"
    break;

  case 108: /* $@10: %empty  */
#line 403 "./ldgram.y"
                        {
			current_file = (char *)NULL;
			}
#line 2543 "y.tab.c"
    break;

  case 111: /* statement: CREATE_OBJECT_SYMBOLS  */
#line 412 "./ldgram.y"
                {
 		lang_add_attribute(lang_object_symbols_statement_enum); 
	      	}
#line 2551 "y.tab.c"
    break;

  case 113: /* statement: CONSTRUCTORS  */
#line 417 "./ldgram.y"
                {
 		
		  lang_add_attribute(lang_constructors_statement_enum); 
		}
#line 2560 "y.tab.c"
    break;

  case 115: /* statement: length '(' mustbe_exp ')'  */
#line 423 "./ldgram.y"
                        {
			lang_add_data((int) (yyvsp[-3].integer),(yyvsp[-1].etree));
			}
#line 2568 "y.tab.c"
    break;

  case 116: /* statement: FILL '(' mustbe_exp ')'  */
#line 428 "./ldgram.y"
                        {
			  lang_add_fill
			    (exp_get_value_int((yyvsp[-1].etree),
					       0,
					       "fill value",
					       lang_first_phase_enum));
			}
#line 2580 "y.tab.c"
    break;

  case 121: /* length: QUAD  */
#line 449 "./ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2586 "y.tab.c"
    break;

  case 122: /* length: LONG  */
#line 451 "./ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2592 "y.tab.c"
    break;

  case 123: /* length: SHORT  */
#line 453 "./ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2598 "y.tab.c"
    break;

  case 124: /* length: BYTE  */
#line 455 "./ldgram.y"
                        { (yyval.integer) = (yyvsp[0].token); }
#line 2604 "y.tab.c"
    break;

  case 125: /* fill_opt: '=' mustbe_exp  */
#line 460 "./ldgram.y"
                {
		  (yyval.integer) =	 exp_get_value_int((yyvsp[0].etree),
					   0,
					   "fill value",
					   lang_first_phase_enum);
		}
#line 2615 "y.tab.c"
    break;

  case 126: /* fill_opt: %empty  */
#line 466 "./ldgram.y"
                { (yyval.integer) = 0; }
#line 2621 "y.tab.c"
    break;

  case 127: /* assign_op: PLUSEQ  */
#line 473 "./ldgram.y"
                        { (yyval.token) = '+'; }
#line 2627 "y.tab.c"
    break;

  case 128: /* assign_op: MINUSEQ  */
#line 475 "./ldgram.y"
                        { (yyval.token) = '-'; }
#line 2633 "y.tab.c"
    break;

  case 129: /* assign_op: MULTEQ  */
#line 477 "./ldgram.y"
                        { (yyval.token) = '*'; }
#line 2639 "y.tab.c"
    break;

  case 130: /* assign_op: DIVEQ  */
#line 479 "./ldgram.y"
                        { (yyval.token) = '/'; }
#line 2645 "y.tab.c"
    break;

  case 131: /* assign_op: LSHIFTEQ  */
#line 481 "./ldgram.y"
                        { (yyval.token) = LSHIFT; }
#line 2651 "y.tab.c"
    break;

  case 132: /* assign_op: RSHIFTEQ  */
#line 483 "./ldgram.y"
                        { (yyval.token) = RSHIFT; }
#line 2657 "y.tab.c"
    break;

  case 133: /* assign_op: ANDEQ  */
#line 485 "./ldgram.y"
                        { (yyval.token) = '&'; }
#line 2663 "y.tab.c"
    break;

  case 134: /* assign_op: OREQ  */
#line 487 "./ldgram.y"
                        { (yyval.token) = '|'; }
#line 2669 "y.tab.c"
    break;

  case 137: /* assignment: NAME '=' mustbe_exp  */
#line 497 "./ldgram.y"
                {
		  lang_add_assignment (exp_assop ((yyvsp[-1].token), (yyvsp[-2].name), (yyvsp[0].etree)));
		}
#line 2677 "y.tab.c"
    break;

  case 138: /* assignment: NAME assign_op mustbe_exp  */
#line 501 "./ldgram.y"
                {
		  lang_add_assignment (exp_assop ('=', (yyvsp[-2].name),
						  exp_binop ((yyvsp[-1].token),
							     exp_nameop (NAME,
									 (yyvsp[-2].name)),
							     (yyvsp[0].etree))));
		}
#line 2689 "y.tab.c"
    break;

  case 139: /* assignment: PROVIDE '(' NAME '=' mustbe_exp ')'  */
#line 509 "./ldgram.y"
                {
		  lang_add_assignment (exp_provide ((yyvsp[-3].name), (yyvsp[-1].etree)));
		}
#line 2697 "y.tab.c"
    break;

  case 146: /* $@11: %empty  */
#line 531 "./ldgram.y"
                        { region = lang_memory_region_lookup((yyvsp[0].name)); }
#line 2703 "y.tab.c"
    break;

  case 148: /* origin_spec: ORIGIN '=' mustbe_exp  */
#line 537 "./ldgram.y"
                { region->current =
		 region->origin =
		 exp_get_vma((yyvsp[0].etree), 0L,"origin", lang_first_phase_enum);
}
#line 2712 "y.tab.c"
    break;

  case 149: /* length_spec: LENGTH '=' mustbe_exp  */
#line 543 "./ldgram.y"
               { region->length = exp_get_vma((yyvsp[0].etree),
					       ~((bfd_vma)0),
					       "length",
					       lang_first_phase_enum);
		}
#line 2722 "y.tab.c"
    break;

  case 150: /* attributes_opt: '(' NAME ')'  */
#line 552 "./ldgram.y"
                        {
			lang_set_flags(&region->flags, (yyvsp[-1].name));
			}
#line 2730 "y.tab.c"
    break;

  case 152: /* startup: STARTUP '(' filename ')'  */
#line 561 "./ldgram.y"
                { lang_startup((yyvsp[-1].name)); }
#line 2736 "y.tab.c"
    break;

  case 154: /* high_level_library: HLL '(' ')'  */
#line 567 "./ldgram.y"
                        { ldemul_hll((char *)NULL); }
#line 2742 "y.tab.c"
    break;

  case 155: /* high_level_library_NAME_list: high_level_library_NAME_list opt_comma filename  */
#line 572 "./ldgram.y"
                        { ldemul_hll((yyvsp[0].name)); }
#line 2748 "y.tab.c"
    break;

  case 156: /* high_level_library_NAME_list: filename  */
#line 574 "./ldgram.y"
                        { ldemul_hll((yyvsp[0].name)); }
#line 2754 "y.tab.c"
    break;

  case 158: /* low_level_library_NAME_list: low_level_library_NAME_list opt_comma filename  */
#line 582 "./ldgram.y"
                        { ldemul_syslib((yyvsp[0].name)); }
#line 2760 "y.tab.c"
    break;

  case 160: /* floating_point_support: FLOAT  */
#line 588 "./ldgram.y"
                        { lang_float(true); }
#line 2766 "y.tab.c"
    break;

  case 161: /* floating_point_support: NOFLOAT  */
#line 590 "./ldgram.y"
                        { lang_float(false); }
#line 2772 "y.tab.c"
    break;

  case 162: /* nocrossref_list: %empty  */
#line 595 "./ldgram.y"
                {
		  (yyval.nocrossref) = NULL;
		}
#line 2780 "y.tab.c"
    break;

  case 163: /* nocrossref_list: NAME nocrossref_list  */
#line 599 "./ldgram.y"
                {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[-1].name);
		  n->next = (yyvsp[0].nocrossref);
		  (yyval.nocrossref) = n;
		}
#line 2793 "y.tab.c"
    break;

  case 164: /* nocrossref_list: NAME ',' nocrossref_list  */
#line 608 "./ldgram.y"
                {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[-2].name);
		  n->next = (yyvsp[0].nocrossref);
		  (yyval.nocrossref) = n;
		}
#line 2806 "y.tab.c"
    break;

  case 165: /* $@12: %empty  */
#line 618 "./ldgram.y"
                         { ldlex_expression(); }
#line 2812 "y.tab.c"
    break;

  case 166: /* mustbe_exp: $@12 exp  */
#line 620 "./ldgram.y"
                         { ldlex_popstate(); (yyval.etree)=(yyvsp[0].etree);}
#line 2818 "y.tab.c"
    break;

  case 167: /* exp: '-' exp  */
#line 625 "./ldgram.y"
                        { (yyval.etree) = exp_unop('-', (yyvsp[0].etree)); }
#line 2824 "y.tab.c"
    break;

  case 168: /* exp: '(' exp ')'  */
#line 627 "./ldgram.y"
                        { (yyval.etree) = (yyvsp[-1].etree); }
#line 2830 "y.tab.c"
    break;

  case 169: /* exp: NEXT '(' exp ')'  */
#line 629 "./ldgram.y"
                        { (yyval.etree) = exp_unop((int) (yyvsp[-3].integer),(yyvsp[-1].etree)); }
#line 2836 "y.tab.c"
    break;

  case 170: /* exp: '!' exp  */
#line 631 "./ldgram.y"
                        { (yyval.etree) = exp_unop('!', (yyvsp[0].etree)); }
#line 2842 "y.tab.c"
    break;

  case 171: /* exp: '+' exp  */
#line 633 "./ldgram.y"
                        { (yyval.etree) = (yyvsp[0].etree); }
#line 2848 "y.tab.c"
    break;

  case 172: /* exp: '~' exp  */
#line 635 "./ldgram.y"
                        { (yyval.etree) = exp_unop('~', (yyvsp[0].etree));}
#line 2854 "y.tab.c"
    break;

  case 173: /* exp: exp '*' exp  */
#line 638 "./ldgram.y"
                        { (yyval.etree) = exp_binop('*', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2860 "y.tab.c"
    break;

  case 174: /* exp: exp '/' exp  */
#line 640 "./ldgram.y"
                        { (yyval.etree) = exp_binop('/', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2866 "y.tab.c"
    break;

  case 175: /* exp: exp '%' exp  */
#line 642 "./ldgram.y"
                        { (yyval.etree) = exp_binop('%', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2872 "y.tab.c"
    break;

  case 176: /* exp: exp '+' exp  */
#line 644 "./ldgram.y"
                        { (yyval.etree) = exp_binop('+', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2878 "y.tab.c"
    break;

  case 177: /* exp: exp '-' exp  */
#line 646 "./ldgram.y"
                        { (yyval.etree) = exp_binop('-' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2884 "y.tab.c"
    break;

  case 178: /* exp: exp LSHIFT exp  */
#line 648 "./ldgram.y"
                        { (yyval.etree) = exp_binop(LSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2890 "y.tab.c"
    break;

  case 179: /* exp: exp RSHIFT exp  */
#line 650 "./ldgram.y"
                        { (yyval.etree) = exp_binop(RSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2896 "y.tab.c"
    break;

  case 180: /* exp: exp EQ exp  */
#line 652 "./ldgram.y"
                        { (yyval.etree) = exp_binop(EQ , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2902 "y.tab.c"
    break;

  case 181: /* exp: exp NE exp  */
#line 654 "./ldgram.y"
                        { (yyval.etree) = exp_binop(NE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2908 "y.tab.c"
    break;

  case 182: /* exp: exp LE exp  */
#line 656 "./ldgram.y"
                        { (yyval.etree) = exp_binop(LE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2914 "y.tab.c"
    break;

  case 183: /* exp: exp GE exp  */
#line 658 "./ldgram.y"
                        { (yyval.etree) = exp_binop(GE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2920 "y.tab.c"
    break;

  case 184: /* exp: exp '<' exp  */
#line 660 "./ldgram.y"
                        { (yyval.etree) = exp_binop('<' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2926 "y.tab.c"
    break;

  case 185: /* exp: exp '>' exp  */
#line 662 "./ldgram.y"
                        { (yyval.etree) = exp_binop('>' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2932 "y.tab.c"
    break;

  case 186: /* exp: exp '&' exp  */
#line 664 "./ldgram.y"
                        { (yyval.etree) = exp_binop('&' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2938 "y.tab.c"
    break;

  case 187: /* exp: exp '^' exp  */
#line 666 "./ldgram.y"
                        { (yyval.etree) = exp_binop('^' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2944 "y.tab.c"
    break;

  case 188: /* exp: exp '|' exp  */
#line 668 "./ldgram.y"
                        { (yyval.etree) = exp_binop('|' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2950 "y.tab.c"
    break;

  case 189: /* exp: exp '?' exp ':' exp  */
#line 670 "./ldgram.y"
                        { (yyval.etree) = exp_trinop('?' , (yyvsp[-4].etree), (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2956 "y.tab.c"
    break;

  case 190: /* exp: exp ANDAND exp  */
#line 672 "./ldgram.y"
                        { (yyval.etree) = exp_binop(ANDAND , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2962 "y.tab.c"
    break;

  case 191: /* exp: exp OROR exp  */
#line 674 "./ldgram.y"
                        { (yyval.etree) = exp_binop(OROR , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2968 "y.tab.c"
    break;

  case 192: /* exp: DEFINED '(' NAME ')'  */
#line 676 "./ldgram.y"
                        { (yyval.etree) = exp_nameop(DEFINED, (yyvsp[-1].name)); }
#line 2974 "y.tab.c"
    break;

  case 193: /* exp: INT  */
#line 678 "./ldgram.y"
                        { (yyval.etree) = exp_intop((yyvsp[0].integer)); }
#line 2980 "y.tab.c"
    break;

  case 194: /* exp: SIZEOF_HEADERS  */
#line 680 "./ldgram.y"
                        { (yyval.etree) = exp_nameop(SIZEOF_HEADERS,0); }
#line 2986 "y.tab.c"
    break;

  case 195: /* exp: SIZEOF '(' NAME ')'  */
#line 683 "./ldgram.y"
                        { (yyval.etree) = exp_nameop(SIZEOF,(yyvsp[-1].name)); }
#line 2992 "y.tab.c"
    break;

  case 196: /* exp: ADDR '(' NAME ')'  */
#line 685 "./ldgram.y"
                        { (yyval.etree) = exp_nameop(ADDR,(yyvsp[-1].name)); }
#line 2998 "y.tab.c"
    break;

  case 197: /* exp: LOADADDR '(' NAME ')'  */
#line 687 "./ldgram.y"
                        { (yyval.etree) = exp_nameop(LOADADDR,(yyvsp[-1].name)); }
#line 3004 "y.tab.c"
    break;

  case 198: /* exp: ABSOLUTE '(' exp ')'  */
#line 689 "./ldgram.y"
                        { (yyval.etree) = exp_unop(ABSOLUTE, (yyvsp[-1].etree)); }
#line 3010 "y.tab.c"
    break;

  case 199: /* exp: ALIGN_K '(' exp ')'  */
#line 691 "./ldgram.y"
                        { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[-1].etree)); }
#line 3016 "y.tab.c"
    break;

  case 200: /* exp: BLOCK '(' exp ')'  */
#line 693 "./ldgram.y"
                        { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[-1].etree)); }
#line 3022 "y.tab.c"
    break;

  case 201: /* exp: NAME  */
#line 695 "./ldgram.y"
                        { (yyval.etree) = exp_nameop(NAME,(yyvsp[0].name)); }
#line 3028 "y.tab.c"
    break;

  case 202: /* exp: MAX '(' exp ',' exp ')'  */
#line 697 "./ldgram.y"
                        { (yyval.etree) = exp_binop (MAX, (yyvsp[-3].etree), (yyvsp[-1].etree) ); }
#line 3034 "y.tab.c"
    break;

  case 203: /* exp: MIN '(' exp ',' exp ')'  */
#line 699 "./ldgram.y"
                        { (yyval.etree) = exp_binop (MIN, (yyvsp[-3].etree), (yyvsp[-1].etree) ); }
#line 3040 "y.tab.c"
    break;

  case 204: /* opt_at: AT '(' exp ')'  */
#line 704 "./ldgram.y"
                               { (yyval.etree) = (yyvsp[-1].etree); }
#line 3046 "y.tab.c"
    break;

  case 205: /* opt_at: %empty  */
#line 705 "./ldgram.y"
                { (yyval.etree) = 0; }
#line 3052 "y.tab.c"
    break;

  case 206: /* $@13: %empty  */
#line 708 "./ldgram.y"
                                { ldlex_expression(); }
#line 3058 "y.tab.c"
    break;

  case 207: /* $@14: %empty  */
#line 710 "./ldgram.y"
                                { ldlex_popstate (); ldlex_script (); }
#line 3064 "y.tab.c"
    break;

  case 208: /* $@15: %empty  */
#line 712 "./ldgram.y"
                        {
			  lang_enter_output_section_statement((yyvsp[-5].name), (yyvsp[-3].etree),
							      sectype,
							      0, 0, 0, (yyvsp[-2].etree));
			}
#line 3074 "y.tab.c"
    break;

  case 209: /* $@16: %empty  */
#line 718 "./ldgram.y"
                    { ldlex_popstate (); ldlex_expression (); }
#line 3080 "y.tab.c"
    break;

  case 210: /* $@17: %empty  */
#line 720 "./ldgram.y"
                {
		  ldlex_popstate ();
		  lang_leave_output_section_statement ((yyvsp[0].integer), (yyvsp[-2].name), (yyvsp[-1].section_phdr));
		}
#line 3089 "y.tab.c"
    break;

  case 212: /* $@18: %empty  */
#line 726 "./ldgram.y"
                        { ldlex_expression (); }
#line 3095 "y.tab.c"
    break;

  case 213: /* $@19: %empty  */
#line 728 "./ldgram.y"
                        { ldlex_popstate (); ldlex_script (); }
#line 3101 "y.tab.c"
    break;

  case 214: /* $@20: %empty  */
#line 730 "./ldgram.y"
                        {
			  lang_enter_overlay ((yyvsp[-4].etree), (yyvsp[-2].etree), (int) (yyvsp[-3].integer));
			}
#line 3109 "y.tab.c"
    break;

  case 215: /* $@21: %empty  */
#line 735 "./ldgram.y"
                        { ldlex_popstate (); ldlex_expression (); }
#line 3115 "y.tab.c"
    break;

  case 216: /* $@22: %empty  */
#line 737 "./ldgram.y"
                        {
			  ldlex_popstate ();
			  lang_leave_overlay ((yyvsp[0].integer), (yyvsp[-2].name), (yyvsp[-1].section_phdr));
			}
#line 3124 "y.tab.c"
    break;

  case 218: /* $@23: %empty  */
#line 746 "./ldgram.y"
                      { ldlex_expression (); }
#line 3130 "y.tab.c"
    break;

  case 219: /* $@24: %empty  */
#line 748 "./ldgram.y"
                {
		  ldlex_popstate ();
		  lang_add_assignment (exp_assop ('=', ".", (yyvsp[0].etree)));
		}
#line 3139 "y.tab.c"
    break;

  case 221: /* type: NOLOAD  */
#line 756 "./ldgram.y"
                   { sectype = noload_section; }
#line 3145 "y.tab.c"
    break;

  case 222: /* type: DSECT  */
#line 757 "./ldgram.y"
                   { sectype = dsect_section; }
#line 3151 "y.tab.c"
    break;

  case 223: /* type: COPY  */
#line 758 "./ldgram.y"
                   { sectype = copy_section; }
#line 3157 "y.tab.c"
    break;

  case 224: /* type: INFO  */
#line 759 "./ldgram.y"
                   { sectype = info_section; }
#line 3163 "y.tab.c"
    break;

  case 225: /* type: OVERLAY  */
#line 760 "./ldgram.y"
                   { sectype = overlay_section; }
#line 3169 "y.tab.c"
    break;

  case 227: /* atype: %empty  */
#line 765 "./ldgram.y"
                            { sectype = normal_section; }
#line 3175 "y.tab.c"
    break;

  case 228: /* opt_exp_with_type: exp atype ':'  */
#line 769 "./ldgram.y"
                                        { (yyval.etree) = (yyvsp[-2].etree); }
#line 3181 "y.tab.c"
    break;

  case 229: /* opt_exp_with_type: atype ':'  */
#line 770 "./ldgram.y"
                                        { (yyval.etree) = (etree_type *)NULL;  }
#line 3187 "y.tab.c"
    break;

  case 230: /* opt_exp_with_type: BIND '(' exp ')' atype ':'  */
#line 775 "./ldgram.y"
                                           { (yyval.etree) = (yyvsp[-3].etree); }
#line 3193 "y.tab.c"
    break;

  case 231: /* opt_exp_with_type: BIND '(' exp ')' BLOCK '(' exp ')' atype ':'  */
#line 777 "./ldgram.y"
                { (yyval.etree) = (yyvsp[-7].etree); }
#line 3199 "y.tab.c"
    break;

  case 232: /* opt_exp_without_type: exp ':'  */
#line 781 "./ldgram.y"
                                { (yyval.etree) = (yyvsp[-1].etree); }
#line 3205 "y.tab.c"
    break;

  case 233: /* opt_exp_without_type: ':'  */
#line 782 "./ldgram.y"
                                { (yyval.etree) = (etree_type *) NULL;  }
#line 3211 "y.tab.c"
    break;

  case 234: /* opt_nocrossrefs: %empty  */
#line 787 "./ldgram.y"
                        { (yyval.integer) = 0; }
#line 3217 "y.tab.c"
    break;

  case 235: /* opt_nocrossrefs: NOCROSSREFS  */
#line 789 "./ldgram.y"
                        { (yyval.integer) = 1; }
#line 3223 "y.tab.c"
    break;

  case 236: /* memspec_opt: '>' NAME  */
#line 794 "./ldgram.y"
                { (yyval.name) = (yyvsp[0].name); }
#line 3229 "y.tab.c"
    break;

  case 237: /* memspec_opt: %empty  */
#line 795 "./ldgram.y"
                { (yyval.name) = "*default*"; }
#line 3235 "y.tab.c"
    break;

  case 238: /* phdr_opt: %empty  */
#line 800 "./ldgram.y"
                {
		  (yyval.section_phdr) = NULL;
		}
#line 3243 "y.tab.c"
    break;

  case 239: /* phdr_opt: phdr_opt ':' NAME  */
#line 804 "./ldgram.y"
                {
		  struct lang_output_section_phdr_list *n;

		  n = ((struct lang_output_section_phdr_list *)
		       xmalloc (sizeof *n));
		  n->name = (yyvsp[0].name);
		  n->used = false;
		  n->next = (yyvsp[-2].section_phdr);
		  (yyval.section_phdr) = n;
		}
#line 3258 "y.tab.c"
    break;

  case 241: /* $@25: %empty  */
#line 820 "./ldgram.y"
                        {
			  ldlex_script ();
			  lang_enter_overlay_section ((yyvsp[0].name));
			}
#line 3267 "y.tab.c"
    break;

  case 242: /* $@26: %empty  */
#line 825 "./ldgram.y"
                        { ldlex_popstate (); ldlex_expression (); }
#line 3273 "y.tab.c"
    break;

  case 243: /* $@27: %empty  */
#line 827 "./ldgram.y"
                        {
			  ldlex_popstate ();
			  lang_leave_overlay_section ((yyvsp[0].integer), (yyvsp[-1].section_phdr));
			}
#line 3282 "y.tab.c"
    break;

  case 248: /* $@28: %empty  */
#line 844 "./ldgram.y"
                     { ldlex_expression (); }
#line 3288 "y.tab.c"
    break;

  case 249: /* $@29: %empty  */
#line 845 "./ldgram.y"
                                            { ldlex_popstate (); }
#line 3294 "y.tab.c"
    break;

  case 250: /* phdr: NAME $@28 phdr_type phdr_qualifiers $@29 ';'  */
#line 847 "./ldgram.y"
                {
		  lang_new_phdr ((yyvsp[-5].name), (yyvsp[-3].etree), (yyvsp[-2].phdr).filehdr, (yyvsp[-2].phdr).phdrs, (yyvsp[-2].phdr).at,
				 (yyvsp[-2].phdr).flags);
		}
#line 3303 "y.tab.c"
    break;

  case 251: /* phdr_type: exp  */
#line 855 "./ldgram.y"
                {
		  (yyval.etree) = (yyvsp[0].etree);

		  if ((yyvsp[0].etree)->type.node_class == etree_name
		      && (yyvsp[0].etree)->type.node_code == NAME)
		    {
		      const char *s;
		      unsigned int i;
		      static const char * const phdr_types[] =
			{
			  "PT_NULL", "PT_LOAD", "PT_DYNAMIC",
			  "PT_INTERP", "PT_NOTE", "PT_SHLIB",
			  "PT_PHDR"
			};

		      s = (yyvsp[0].etree)->name.name;
		      for (i = 0;
			   i < sizeof phdr_types / sizeof phdr_types[0];
			   i++)
			if (strcmp (s, phdr_types[i]) == 0)
			  {
			    (yyval.etree) = exp_intop (i);
			    break;
			  }
		    }
		}
#line 3334 "y.tab.c"
    break;

  case 252: /* phdr_qualifiers: %empty  */
#line 885 "./ldgram.y"
                {
		  memset (&(yyval.phdr), 0, sizeof (struct phdr_info));
		}
#line 3342 "y.tab.c"
    break;

  case 253: /* phdr_qualifiers: NAME phdr_val phdr_qualifiers  */
#line 889 "./ldgram.y"
                {
		  (yyval.phdr) = (yyvsp[0].phdr);
		  if (strcmp ((yyvsp[-2].name), "FILEHDR") == 0 && (yyvsp[-1].etree) == NULL)
		    (yyval.phdr).filehdr = true;
		  else if (strcmp ((yyvsp[-2].name), "PHDRS") == 0 && (yyvsp[-1].etree) == NULL)
		    (yyval.phdr).phdrs = true;
		  else if (strcmp ((yyvsp[-2].name), "FLAGS") == 0 && (yyvsp[-1].etree) != NULL)
		    (yyval.phdr).flags = (yyvsp[-1].etree);
		  else
		    einfo ("%X%P:%S: PHDRS syntax error at `%s'\n", (yyvsp[-2].name));
		}
#line 3358 "y.tab.c"
    break;

  case 254: /* phdr_qualifiers: AT '(' exp ')' phdr_qualifiers  */
#line 901 "./ldgram.y"
                {
		  (yyval.phdr) = (yyvsp[0].phdr);
		  (yyval.phdr).at = (yyvsp[-2].etree);
		}
#line 3367 "y.tab.c"
    break;

  case 255: /* phdr_val: %empty  */
#line 909 "./ldgram.y"
                {
		  (yyval.etree) = NULL;
		}
#line 3375 "y.tab.c"
    break;

  case 256: /* phdr_val: '(' exp ')'  */
#line 913 "./ldgram.y"
                {
		  (yyval.etree) = (yyvsp[-1].etree);
		}
#line 3383 "y.tab.c"
    break;

  case 257: /* $@30: %empty  */
#line 921 "./ldgram.y"
                {
		  ldlex_version_file ();
		  PUSH_ERROR ("VERSION script");
		}
#line 3392 "y.tab.c"
    break;

  case 258: /* version_script_file: $@30 vers_nodes  */
#line 926 "./ldgram.y"
                {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
#line 3401 "y.tab.c"
    break;

  case 259: /* $@31: %empty  */
#line 935 "./ldgram.y"
                {
		  ldlex_version_script ();
		}
#line 3409 "y.tab.c"
    break;

  case 260: /* version: $@31 VERSION '{' vers_nodes '}'  */
#line 939 "./ldgram.y"
                {
		  ldlex_popstate ();
		}
#line 3417 "y.tab.c"
    break;

  case 263: /* vers_node: VERS_TAG '{' vers_tag '}' ';'  */
#line 951 "./ldgram.y"
                {
		  lang_register_vers_node ((yyvsp[-4].name), (yyvsp[-2].versnode), NULL);
		}
#line 3425 "y.tab.c"
    break;

  case 264: /* vers_node: VERS_TAG '{' vers_tag '}' verdep ';'  */
#line 955 "./ldgram.y"
                {
		  lang_register_vers_node ((yyvsp[-5].name), (yyvsp[-3].versnode), (yyvsp[-1].deflist));
		}
#line 3433 "y.tab.c"
    break;

  case 265: /* verdep: VERS_TAG  */
#line 962 "./ldgram.y"
                {
		  (yyval.deflist) = lang_add_vers_depend (NULL, (yyvsp[0].name));
		}
#line 3441 "y.tab.c"
    break;

  case 266: /* verdep: verdep VERS_TAG  */
#line 966 "./ldgram.y"
                {
		  (yyval.deflist) = lang_add_vers_depend ((yyvsp[-1].deflist), (yyvsp[0].name));
		}
#line 3449 "y.tab.c"
    break;

  case 267: /* vers_tag: %empty  */
#line 973 "./ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node (NULL, NULL);
		}
#line 3457 "y.tab.c"
    break;

  case 268: /* vers_tag: vers_defns ';'  */
#line 977 "./ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-1].versyms), NULL);
		}
#line 3465 "y.tab.c"
    break;

  case 269: /* vers_tag: GLOBAL ':' vers_defns ';'  */
#line 981 "./ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-1].versyms), NULL);
		}
#line 3473 "y.tab.c"
    break;

  case 270: /* vers_tag: LOCAL ':' vers_defns ';'  */
#line 985 "./ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node (NULL, (yyvsp[-1].versyms));
		}
#line 3481 "y.tab.c"
    break;

  case 271: /* vers_tag: GLOBAL ':' vers_defns ';' LOCAL ':' vers_defns ';'  */
#line 989 "./ldgram.y"
                {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[-5].versyms), (yyvsp[-1].versyms));
		}
#line 3489 "y.tab.c"
    break;

  case 272: /* vers_defns: VERS_IDENTIFIER  */
#line 996 "./ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_regex (NULL, (yyvsp[0].name));
		}
#line 3497 "y.tab.c"
    break;

  case 273: /* vers_defns: vers_defns ';' VERS_IDENTIFIER  */
#line 1000 "./ldgram.y"
                {
		  (yyval.versyms) = lang_new_vers_regex ((yyvsp[-2].versyms), (yyvsp[0].name));
		}
#line 3505 "y.tab.c"
    break;


#line 3509 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1005 "./ldgram.y"

void
yyerror(arg) 
     const char *arg;
{ 
  if (ldfile_assumed_script)
    einfo ("%P:%s: file format not recognized; treating as linker script\n",
	   ldfile_input_filename);
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
     einfo ("%P%F:%S: %s in %s\n", arg, error_names[error_index-1]);
  else
     einfo ("%P%F:%S: %s\n", arg);
}
