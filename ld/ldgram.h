/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 284 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
