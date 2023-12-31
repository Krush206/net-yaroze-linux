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
#line 56 "c-parse.y"

#include "config.h"

#include <stdio.h>
#include <errno.h>
#include <setjmp.h>

#include "tree.h"
#include "input.h"
#include "c-lex.h"
#include "c-tree.h"
#include "flags.h"

#ifdef MULTIBYTE_CHARS
#include <stdlib.h>
#include <locale.h>
#endif


/* Since parsers are distinct for each language, put the language string
   definition here.  */
char *language_string = "GNU C";

#ifndef errno
extern int errno;
#endif

void yyerror ();

/* Like YYERROR but do call yyerror.  */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

/* Cause the `yydebug' variable to be defined.  */
#define YYDEBUG 1

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

#line 127 "c-parse.c"

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

#include "c-parse.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPENAME = 4,                   /* TYPENAME  */
  YYSYMBOL_SCSPEC = 5,                     /* SCSPEC  */
  YYSYMBOL_TYPESPEC = 6,                   /* TYPESPEC  */
  YYSYMBOL_TYPE_QUAL = 7,                  /* TYPE_QUAL  */
  YYSYMBOL_CONSTANT = 8,                   /* CONSTANT  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_ELLIPSIS = 10,                  /* ELLIPSIS  */
  YYSYMBOL_SIZEOF = 11,                    /* SIZEOF  */
  YYSYMBOL_ENUM = 12,                      /* ENUM  */
  YYSYMBOL_STRUCT = 13,                    /* STRUCT  */
  YYSYMBOL_UNION = 14,                     /* UNION  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 23,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 24,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_GOTO = 26,                      /* GOTO  */
  YYSYMBOL_ASM_KEYWORD = 27,               /* ASM_KEYWORD  */
  YYSYMBOL_TYPEOF = 28,                    /* TYPEOF  */
  YYSYMBOL_ALIGNOF = 29,                   /* ALIGNOF  */
  YYSYMBOL_ATTRIBUTE = 30,                 /* ATTRIBUTE  */
  YYSYMBOL_EXTENSION = 31,                 /* EXTENSION  */
  YYSYMBOL_LABEL = 32,                     /* LABEL  */
  YYSYMBOL_REALPART = 33,                  /* REALPART  */
  YYSYMBOL_IMAGPART = 34,                  /* IMAGPART  */
  YYSYMBOL_ASSIGN = 35,                    /* ASSIGN  */
  YYSYMBOL_36_ = 36,                       /* '='  */
  YYSYMBOL_37_ = 37,                       /* '?'  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_OROR = 39,                      /* OROR  */
  YYSYMBOL_ANDAND = 40,                    /* ANDAND  */
  YYSYMBOL_41_ = 41,                       /* '|'  */
  YYSYMBOL_42_ = 42,                       /* '^'  */
  YYSYMBOL_43_ = 43,                       /* '&'  */
  YYSYMBOL_EQCOMPARE = 44,                 /* EQCOMPARE  */
  YYSYMBOL_ARITHCOMPARE = 45,              /* ARITHCOMPARE  */
  YYSYMBOL_LSHIFT = 46,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 47,                    /* RSHIFT  */
  YYSYMBOL_48_ = 48,                       /* '+'  */
  YYSYMBOL_49_ = 49,                       /* '-'  */
  YYSYMBOL_50_ = 50,                       /* '*'  */
  YYSYMBOL_51_ = 51,                       /* '/'  */
  YYSYMBOL_52_ = 52,                       /* '%'  */
  YYSYMBOL_UNARY = 53,                     /* UNARY  */
  YYSYMBOL_PLUSPLUS = 54,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 55,                /* MINUSMINUS  */
  YYSYMBOL_HYPERUNARY = 56,                /* HYPERUNARY  */
  YYSYMBOL_POINTSAT = 57,                  /* POINTSAT  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_59_ = 59,                       /* '('  */
  YYSYMBOL_60_ = 60,                       /* '['  */
  YYSYMBOL_INTERFACE = 61,                 /* INTERFACE  */
  YYSYMBOL_IMPLEMENTATION = 62,            /* IMPLEMENTATION  */
  YYSYMBOL_END = 63,                       /* END  */
  YYSYMBOL_SELECTOR = 64,                  /* SELECTOR  */
  YYSYMBOL_DEFS = 65,                      /* DEFS  */
  YYSYMBOL_ENCODE = 66,                    /* ENCODE  */
  YYSYMBOL_CLASSNAME = 67,                 /* CLASSNAME  */
  YYSYMBOL_PUBLIC = 68,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 69,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 70,                 /* PROTECTED  */
  YYSYMBOL_PROTOCOL = 71,                  /* PROTOCOL  */
  YYSYMBOL_OBJECTNAME = 72,                /* OBJECTNAME  */
  YYSYMBOL_CLASS = 73,                     /* CLASS  */
  YYSYMBOL_ALIAS = 74,                     /* ALIAS  */
  YYSYMBOL_OBJC_STRING = 75,               /* OBJC_STRING  */
  YYSYMBOL_76_ = 76,                       /* ')'  */
  YYSYMBOL_77_ = 77,                       /* ';'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* '~'  */
  YYSYMBOL_80_ = 80,                       /* '!'  */
  YYSYMBOL_81_ = 81,                       /* ','  */
  YYSYMBOL_82_ = 82,                       /* '{'  */
  YYSYMBOL_83_ = 83,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_program = 85,                   /* program  */
  YYSYMBOL_extdefs = 86,                   /* extdefs  */
  YYSYMBOL_87_1 = 87,                      /* @1  */
  YYSYMBOL_88_2 = 88,                      /* @2  */
  YYSYMBOL_extdef = 89,                    /* extdef  */
  YYSYMBOL_datadef = 90,                   /* datadef  */
  YYSYMBOL_fndef = 91,                     /* fndef  */
  YYSYMBOL_92_3 = 92,                      /* $@3  */
  YYSYMBOL_93_4 = 93,                      /* $@4  */
  YYSYMBOL_94_5 = 94,                      /* $@5  */
  YYSYMBOL_95_6 = 95,                      /* $@6  */
  YYSYMBOL_96_7 = 96,                      /* $@7  */
  YYSYMBOL_97_8 = 97,                      /* $@8  */
  YYSYMBOL_identifier = 98,                /* identifier  */
  YYSYMBOL_unop = 99,                      /* unop  */
  YYSYMBOL_expr = 100,                     /* expr  */
  YYSYMBOL_exprlist = 101,                 /* exprlist  */
  YYSYMBOL_nonnull_exprlist = 102,         /* nonnull_exprlist  */
  YYSYMBOL_unary_expr = 103,               /* unary_expr  */
  YYSYMBOL_sizeof = 104,                   /* sizeof  */
  YYSYMBOL_alignof = 105,                  /* alignof  */
  YYSYMBOL_cast_expr = 106,                /* cast_expr  */
  YYSYMBOL_107_9 = 107,                    /* $@9  */
  YYSYMBOL_expr_no_commas = 108,           /* expr_no_commas  */
  YYSYMBOL_109_10 = 109,                   /* $@10  */
  YYSYMBOL_110_11 = 110,                   /* $@11  */
  YYSYMBOL_111_12 = 111,                   /* $@12  */
  YYSYMBOL_112_13 = 112,                   /* $@13  */
  YYSYMBOL_113_14 = 113,                   /* $@14  */
  YYSYMBOL_primary = 114,                  /* primary  */
  YYSYMBOL_115_15 = 115,                   /* @15  */
  YYSYMBOL_string = 116,                   /* string  */
  YYSYMBOL_old_style_parm_decls = 117,     /* old_style_parm_decls  */
  YYSYMBOL_lineno_datadecl = 118,          /* lineno_datadecl  */
  YYSYMBOL_datadecls = 119,                /* datadecls  */
  YYSYMBOL_datadecl = 120,                 /* datadecl  */
  YYSYMBOL_lineno_decl = 121,              /* lineno_decl  */
  YYSYMBOL_decls = 122,                    /* decls  */
  YYSYMBOL_setspecs = 123,                 /* setspecs  */
  YYSYMBOL_setattrs = 124,                 /* setattrs  */
  YYSYMBOL_decl = 125,                     /* decl  */
  YYSYMBOL_typed_declspecs = 126,          /* typed_declspecs  */
  YYSYMBOL_reserved_declspecs = 127,       /* reserved_declspecs  */
  YYSYMBOL_typed_declspecs_no_prefix_attr = 128, /* typed_declspecs_no_prefix_attr  */
  YYSYMBOL_reserved_declspecs_no_prefix_attr = 129, /* reserved_declspecs_no_prefix_attr  */
  YYSYMBOL_declmods = 130,                 /* declmods  */
  YYSYMBOL_declmods_no_prefix_attr = 131,  /* declmods_no_prefix_attr  */
  YYSYMBOL_typed_typespecs = 132,          /* typed_typespecs  */
  YYSYMBOL_reserved_typespecquals = 133,   /* reserved_typespecquals  */
  YYSYMBOL_typespec = 134,                 /* typespec  */
  YYSYMBOL_typespecqual_reserved = 135,    /* typespecqual_reserved  */
  YYSYMBOL_initdecls = 136,                /* initdecls  */
  YYSYMBOL_notype_initdecls = 137,         /* notype_initdecls  */
  YYSYMBOL_maybeasm = 138,                 /* maybeasm  */
  YYSYMBOL_initdcl = 139,                  /* initdcl  */
  YYSYMBOL_140_16 = 140,                   /* @16  */
  YYSYMBOL_notype_initdcl = 141,           /* notype_initdcl  */
  YYSYMBOL_142_17 = 142,                   /* @17  */
  YYSYMBOL_maybe_attribute = 143,          /* maybe_attribute  */
  YYSYMBOL_attributes = 144,               /* attributes  */
  YYSYMBOL_attribute = 145,                /* attribute  */
  YYSYMBOL_attribute_list = 146,           /* attribute_list  */
  YYSYMBOL_attrib = 147,                   /* attrib  */
  YYSYMBOL_any_word = 148,                 /* any_word  */
  YYSYMBOL_init = 149,                     /* init  */
  YYSYMBOL_150_18 = 150,                   /* $@18  */
  YYSYMBOL_initlist_maybe_comma = 151,     /* initlist_maybe_comma  */
  YYSYMBOL_initlist1 = 152,                /* initlist1  */
  YYSYMBOL_initelt = 153,                  /* initelt  */
  YYSYMBOL_154_19 = 154,                   /* $@19  */
  YYSYMBOL_155_20 = 155,                   /* $@20  */
  YYSYMBOL_156_21 = 156,                   /* $@21  */
  YYSYMBOL_157_22 = 157,                   /* $@22  */
  YYSYMBOL_158_23 = 158,                   /* $@23  */
  YYSYMBOL_159_24 = 159,                   /* $@24  */
  YYSYMBOL_nested_function = 160,          /* nested_function  */
  YYSYMBOL_161_25 = 161,                   /* $@25  */
  YYSYMBOL_162_26 = 162,                   /* $@26  */
  YYSYMBOL_notype_nested_function = 163,   /* notype_nested_function  */
  YYSYMBOL_164_27 = 164,                   /* $@27  */
  YYSYMBOL_165_28 = 165,                   /* $@28  */
  YYSYMBOL_declarator = 166,               /* declarator  */
  YYSYMBOL_after_type_declarator = 167,    /* after_type_declarator  */
  YYSYMBOL_parm_declarator = 168,          /* parm_declarator  */
  YYSYMBOL_notype_declarator = 169,        /* notype_declarator  */
  YYSYMBOL_structsp = 170,                 /* structsp  */
  YYSYMBOL_171_29 = 171,                   /* @29  */
  YYSYMBOL_172_30 = 172,                   /* @30  */
  YYSYMBOL_173_31 = 173,                   /* @31  */
  YYSYMBOL_174_32 = 174,                   /* @32  */
  YYSYMBOL_maybecomma = 175,               /* maybecomma  */
  YYSYMBOL_maybecomma_warn = 176,          /* maybecomma_warn  */
  YYSYMBOL_component_decl_list = 177,      /* component_decl_list  */
  YYSYMBOL_component_decl_list2 = 178,     /* component_decl_list2  */
  YYSYMBOL_component_decl = 179,           /* component_decl  */
  YYSYMBOL_components = 180,               /* components  */
  YYSYMBOL_component_declarator = 181,     /* component_declarator  */
  YYSYMBOL_enumlist = 182,                 /* enumlist  */
  YYSYMBOL_enumerator = 183,               /* enumerator  */
  YYSYMBOL_typename = 184,                 /* typename  */
  YYSYMBOL_absdcl = 185,                   /* absdcl  */
  YYSYMBOL_nonempty_type_quals = 186,      /* nonempty_type_quals  */
  YYSYMBOL_type_quals = 187,               /* type_quals  */
  YYSYMBOL_absdcl1 = 188,                  /* absdcl1  */
  YYSYMBOL_stmts = 189,                    /* stmts  */
  YYSYMBOL_lineno_stmt_or_labels = 190,    /* lineno_stmt_or_labels  */
  YYSYMBOL_xstmts = 191,                   /* xstmts  */
  YYSYMBOL_errstmt = 192,                  /* errstmt  */
  YYSYMBOL_pushlevel = 193,                /* pushlevel  */
  YYSYMBOL_maybe_label_decls = 194,        /* maybe_label_decls  */
  YYSYMBOL_label_decls = 195,              /* label_decls  */
  YYSYMBOL_label_decl = 196,               /* label_decl  */
  YYSYMBOL_compstmt_or_error = 197,        /* compstmt_or_error  */
  YYSYMBOL_compstmt_start = 198,           /* compstmt_start  */
  YYSYMBOL_compstmt = 199,                 /* compstmt  */
  YYSYMBOL_simple_if = 200,                /* simple_if  */
  YYSYMBOL_if_prefix = 201,                /* if_prefix  */
  YYSYMBOL_do_stmt_start = 202,            /* do_stmt_start  */
  YYSYMBOL_203_33 = 203,                   /* $@33  */
  YYSYMBOL_save_filename = 204,            /* save_filename  */
  YYSYMBOL_save_lineno = 205,              /* save_lineno  */
  YYSYMBOL_lineno_labeled_stmt = 206,      /* lineno_labeled_stmt  */
  YYSYMBOL_lineno_stmt_or_label = 207,     /* lineno_stmt_or_label  */
  YYSYMBOL_stmt_or_label = 208,            /* stmt_or_label  */
  YYSYMBOL_stmt = 209,                     /* stmt  */
  YYSYMBOL_210_34 = 210,                   /* $@34  */
  YYSYMBOL_211_35 = 211,                   /* $@35  */
  YYSYMBOL_212_36 = 212,                   /* $@36  */
  YYSYMBOL_213_37 = 213,                   /* $@37  */
  YYSYMBOL_214_38 = 214,                   /* @38  */
  YYSYMBOL_215_39 = 215,                   /* $@39  */
  YYSYMBOL_216_40 = 216,                   /* $@40  */
  YYSYMBOL_all_iter_stmt = 217,            /* all_iter_stmt  */
  YYSYMBOL_all_iter_stmt_simple = 218,     /* all_iter_stmt_simple  */
  YYSYMBOL_219_41 = 219,                   /* @41  */
  YYSYMBOL_label = 220,                    /* label  */
  YYSYMBOL_maybe_type_qual = 221,          /* maybe_type_qual  */
  YYSYMBOL_xexpr = 222,                    /* xexpr  */
  YYSYMBOL_asm_operands = 223,             /* asm_operands  */
  YYSYMBOL_nonnull_asm_operands = 224,     /* nonnull_asm_operands  */
  YYSYMBOL_asm_operand = 225,              /* asm_operand  */
  YYSYMBOL_asm_clobbers = 226,             /* asm_clobbers  */
  YYSYMBOL_parmlist = 227,                 /* parmlist  */
  YYSYMBOL_228_42 = 228,                   /* $@42  */
  YYSYMBOL_parmlist_1 = 229,               /* parmlist_1  */
  YYSYMBOL_230_43 = 230,                   /* $@43  */
  YYSYMBOL_parmlist_2 = 231,               /* parmlist_2  */
  YYSYMBOL_parms = 232,                    /* parms  */
  YYSYMBOL_parm = 233,                     /* parm  */
  YYSYMBOL_parmlist_or_identifiers = 234,  /* parmlist_or_identifiers  */
  YYSYMBOL_235_44 = 235,                   /* $@44  */
  YYSYMBOL_parmlist_or_identifiers_1 = 236, /* parmlist_or_identifiers_1  */
  YYSYMBOL_identifiers = 237,              /* identifiers  */
  YYSYMBOL_identifiers_or_typenames = 238, /* identifiers_or_typenames  */
  YYSYMBOL_extension = 239                 /* extension  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 230 "c-parse.y"

/* Number of statements (loosely speaking) and compound statements 
   seen so far.  */
static int stmt_count;
static int compstmt_count;
  
/* Input file and line number of the end of the body of last simple_if;
   used by the stmt-rule immediately after simple_if returns.  */
static char *if_stmt_file;
static int if_stmt_line;

/* List of types and structure classes of the current declaration.  */
static tree current_declspecs = NULL_TREE;
static tree prefix_attributes = NULL_TREE;

/* Stack of saved values of current_declspecs and prefix_attributes.  */
static tree declspec_stack;

/* 1 if we explained undeclared var errors.  */
static int undeclared_variable_notice;


/* Tell yyparse how to print a token's value, if yydebug is set.  */

#define YYPRINT(FILE,YYCHAR,YYLVAL) yyprint(FILE,YYCHAR,YYLVAL)
extern void yyprint ();

#line 428 "c-parse.c"


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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  156
/* YYNRULES -- Number of rules.  */
#define YYNRULES  396
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  682

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    80,     2,     2,     2,    52,    43,     2,
      59,    76,    50,    48,    81,    49,    58,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    77,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    83,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    41,    78,    79,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    39,    40,    44,    45,    46,    47,    53,    54,    55,
      56,    57,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   260,   260,   264,   279,   279,   280,   280,   284,   285,
     286,   294,   299,   309,   314,   319,   321,   323,   324,   325,
     332,   337,   331,   344,   350,   355,   349,   362,   368,   373,
     367,   380,   388,   389,   392,   394,   396,   398,   400,   402,
     404,   408,   414,   415,   419,   421,   426,   427,   430,   433,
     437,   465,   471,   474,   477,   480,   482,   487,   491,   495,
     496,   500,   499,   531,   532,   534,   536,   538,   540,   542,
     544,   546,   548,   550,   552,   554,   557,   556,   563,   562,
     569,   572,   568,   578,   577,   587,   590,   597,   695,   696,
     698,   704,   707,   706,   743,   745,   747,   751,   757,   759,
     765,   766,   771,   773,   774,   785,   790,   791,   792,   793,
     801,   806,   811,   814,   823,   828,   829,   830,   831,   839,
     850,   854,   859,   864,   869,   874,   876,   878,   888,   890,
     895,   896,   898,   903,   908,   910,   916,   917,   919,   932,
     934,   936,   938,   943,   946,   948,   951,   965,   967,   972,
     973,   981,   982,   983,   987,   989,   995,   996,   997,  1001,
    1002,  1006,  1007,  1012,  1013,  1021,  1020,  1028,  1037,  1036,
    1045,  1054,  1055,  1060,  1062,  1067,  1072,  1074,  1080,  1081,
    1083,  1085,  1087,  1095,  1096,  1097,  1098,  1104,  1106,  1105,
    1118,  1125,  1127,  1131,  1132,  1138,  1141,  1140,  1144,  1149,
    1148,  1152,  1151,  1155,  1154,  1158,  1157,  1161,  1160,  1167,
    1176,  1166,  1190,  1199,  1189,  1215,  1216,  1222,  1224,  1229,
    1231,  1233,  1240,  1242,  1251,  1256,  1258,  1260,  1267,  1269,
    1276,  1281,  1283,  1285,  1287,  1294,  1296,  1301,  1300,  1306,
    1310,  1313,  1312,  1316,  1320,  1323,  1322,  1329,  1328,  1334,
    1338,  1340,  1343,  1345,  1350,  1352,  1358,  1359,  1361,  1376,
    1382,  1387,  1393,  1398,  1400,  1406,  1407,  1412,  1415,  1419,
    1430,  1431,  1436,  1442,  1444,  1449,  1451,  1457,  1458,  1462,
    1464,  1470,  1471,  1476,  1479,  1481,  1483,  1485,  1487,  1489,
    1491,  1493,  1504,  1512,  1513,  1515,  1519,  1521,  1524,  1528,
    1538,  1540,  1546,  1547,  1551,  1565,  1567,  1570,  1572,  1574,
    1582,  1590,  1602,  1606,  1610,  1625,  1624,  1637,  1641,  1645,
    1650,  1655,  1660,  1662,  1668,  1670,  1671,  1689,  1688,  1696,
    1708,  1711,  1721,  1710,  1731,  1739,  1744,  1756,  1759,  1742,
    1786,  1785,  1799,  1804,  1809,  1813,  1817,  1828,  1835,  1842,
    1849,  1860,  1866,  1870,  1876,  1875,  1931,  1956,  1987,  2002,
    2015,  2017,  2023,  2024,  2030,  2031,  2035,  2036,  2041,  2046,
    2048,  2055,  2055,  2065,  2067,  2066,  2076,  2083,  2084,  2094,
    2096,  2101,  2103,  2110,  2119,  2128,  2137,  2147,  2162,  2162,
    2172,  2173,  2183,  2185,  2191,  2193,  2198
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPENAME", "SCSPEC", "TYPESPEC", "TYPE_QUAL", "CONSTANT", "STRING",
  "ELLIPSIS", "SIZEOF", "ENUM", "STRUCT", "UNION", "IF", "ELSE", "WHILE",
  "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE", "RETURN",
  "GOTO", "ASM_KEYWORD", "TYPEOF", "ALIGNOF", "ATTRIBUTE", "EXTENSION",
  "LABEL", "REALPART", "IMAGPART", "ASSIGN", "'='", "'?'", "':'", "OROR",
  "ANDAND", "'|'", "'^'", "'&'", "EQCOMPARE", "ARITHCOMPARE", "LSHIFT",
  "RSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY", "PLUSPLUS",
  "MINUSMINUS", "HYPERUNARY", "POINTSAT", "'.'", "'('", "'['", "INTERFACE",
  "IMPLEMENTATION", "END", "SELECTOR", "DEFS", "ENCODE", "CLASSNAME",
  "PUBLIC", "PRIVATE", "PROTECTED", "PROTOCOL", "OBJECTNAME", "CLASS",
  "ALIAS", "OBJC_STRING", "')'", "';'", "'}'", "'~'", "'!'", "','", "'{'",
  "']'", "$accept", "program", "extdefs", "@1", "@2", "extdef", "datadef",
  "fndef", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "identifier", "unop",
  "expr", "exprlist", "nonnull_exprlist", "unary_expr", "sizeof",
  "alignof", "cast_expr", "$@9", "expr_no_commas", "$@10", "$@11", "$@12",
  "$@13", "$@14", "primary", "@15", "string", "old_style_parm_decls",
  "lineno_datadecl", "datadecls", "datadecl", "lineno_decl", "decls",
  "setspecs", "setattrs", "decl", "typed_declspecs", "reserved_declspecs",
  "typed_declspecs_no_prefix_attr", "reserved_declspecs_no_prefix_attr",
  "declmods", "declmods_no_prefix_attr", "typed_typespecs",
  "reserved_typespecquals", "typespec", "typespecqual_reserved",
  "initdecls", "notype_initdecls", "maybeasm", "initdcl", "@16",
  "notype_initdcl", "@17", "maybe_attribute", "attributes", "attribute",
  "attribute_list", "attrib", "any_word", "init", "$@18",
  "initlist_maybe_comma", "initlist1", "initelt", "$@19", "$@20", "$@21",
  "$@22", "$@23", "$@24", "nested_function", "$@25", "$@26",
  "notype_nested_function", "$@27", "$@28", "declarator",
  "after_type_declarator", "parm_declarator", "notype_declarator",
  "structsp", "@29", "@30", "@31", "@32", "maybecomma", "maybecomma_warn",
  "component_decl_list", "component_decl_list2", "component_decl",
  "components", "component_declarator", "enumlist", "enumerator",
  "typename", "absdcl", "nonempty_type_quals", "type_quals", "absdcl1",
  "stmts", "lineno_stmt_or_labels", "xstmts", "errstmt", "pushlevel",
  "maybe_label_decls", "label_decls", "label_decl", "compstmt_or_error",
  "compstmt_start", "compstmt", "simple_if", "if_prefix", "do_stmt_start",
  "$@33", "save_filename", "save_lineno", "lineno_labeled_stmt",
  "lineno_stmt_or_label", "stmt_or_label", "stmt", "$@34", "$@35", "$@36",
  "$@37", "@38", "$@39", "$@40", "all_iter_stmt", "all_iter_stmt_simple",
  "@41", "label", "maybe_type_qual", "xexpr", "asm_operands",
  "nonnull_asm_operands", "asm_operand", "asm_clobbers", "parmlist",
  "$@42", "parmlist_1", "$@43", "parmlist_2", "parms", "parm",
  "parmlist_or_identifiers", "$@44", "parmlist_or_identifiers_1",
  "identifiers", "identifiers_or_typenames", "extension", YY_NULLPTR
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
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    61,    63,    58,   291,
     292,   124,    94,    38,   293,   294,   295,   296,    43,    45,
      42,    47,    37,   297,   298,   299,   300,   301,    46,    40,
      91,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,    41,    59,   125,   126,
      33,    44,   123,    93
};
#endif

#define YYPACT_NINF (-553)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-378)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,   139,   152,  2011,  -553,  2011,   155,  -553,  -553,  -553,
    -553,    76,    89,   102,    43,   117,   150,  -553,  -553,  -553,
    -553,  -553,    58,   163,   447,   182,  -553,   221,  -553,  -553,
    2011,  -553,  -553,  -553,  -553,  -553,  -553,   177,  -553,   222,
    -553,   242,  1873,  1807,   270,  -553,  -553,    58,   144,  -553,
     221,  1267,  -553,   316,  -553,    58,   182,  -553,   221,  -553,
    -553,   740,  -553,  -553,   111,  -553,   199,   189,  -553,   269,
    -553,  -553,  -553,  -553,  -553,  -553,  1873,  1873,   266,  -553,
    -553,  -553,  1873,  -553,  -553,  1079,  -553,  -553,  1873,   285,
     263,  -553,  1900,  1927,  -553,  2135,   929,   358,  1873,  -553,
     308,   123,  -553,   315,   920,   769,   399,   151,  -553,   316,
      58,  -553,   300,  -553,  1342,   304,   221,  -553,  -553,   316,
     214,  -553,   221,   820,   247,   293,   253,  1327,   740,  -553,
    -553,  -553,  -553,   221,  -553,  -553,   353,   318,  -553,   111,
     221,  -553,  -553,   343,   317,   201,  1621,  -553,   221,  -553,
    -553,  -553,  -553,  -553,   328,   336,   333,   342,  -553,   354,
    1873,  1079,  -553,  1079,  -553,  1873,  1873,   395,  -553,  -553,
    1873,  1873,  1873,  1873,  1873,  1873,  1873,  1873,  1873,  1873,
    1873,  1873,  -553,  -553,   266,   266,  1873,  1873,  -553,  -553,
    -553,  -553,   123,  1402,  -553,   383,   799,  -553,  -553,  -553,
    -553,  -553,  -553,  -553,  -553,    98,  -553,   376,  -553,   293,
    -553,  -553,   423,   293,   446,  -553,   999,  -553,   374,   393,
    -553,   350,    59,  -553,  -553,   462,   221,   504,   185,  -553,
     316,   316,  -553,   304,   221,  -553,  1415,  -553,  -553,   304,
    1873,   266,   404,   318,  -553,  -553,  -553,  -553,  -553,   425,
    -553,   427,  -553,  -553,  -553,   428,   434,  1696,  -553,  2135,
     438,   439,  2135,  2135,  1873,   479,  1873,  1873,  2171,   638,
    1272,  1507,  1722,   747,   747,   373,   373,  -553,  -553,  -553,
    -553,  -553,   445,   263,   443,   278,   267,  -553,  1150,  -553,
     448,  -553,  1468,  -553,   799,   453,   769,  1954,    53,   457,
    -553,  -553,  -553,  2015,  -553,   464,   254,  -553,  -553,   143,
    -553,  -553,    55,  -553,  -553,  -553,  1355,  -553,   247,  -553,
    -553,   247,  -553,   502,  -553,  -553,   460,  -553,  2135,  -553,
     221,   467,   465,  -553,  -553,   465,   221,   221,  -553,   525,
    -553,  -553,  -553,  -553,  -553,   520,  1873,  2148,  2160,  -553,
    -553,   383,  -553,  -553,  -553,  -553,  -553,   477,  -553,  -553,
     184,   485,  -553,  -553,   196,   188,  -553,  -553,  1704,  -553,
     559,   333,  -553,  -553,  -553,   488,   268,  -553,  1256,    55,
    -553,  -553,    55,  -553,   221,  -553,   283,  -553,  -553,   266,
     860,   525,  -553,   760,  -553,  2007,  -553,  -553,  1873,  -553,
    -553,  -553,   188,   221,    67,   176,   221,  -553,   176,   221,
    1150,  -553,  -553,  -553,  -553,  -553,   316,  -553,    58,  -553,
     823,  -553,  -553,  2135,  -553,  -553,  1256,  -553,  -553,  -553,
    1873,   137,  -553,   291,   385,   621,   492,   494,   701,  -553,
    -553,  -553,  -553,  -553,   535,   266,  1873,  -553,   536,  2135,
     498,   496,  -553,  1873,   195,   367,   389,  -553,  1481,  -553,
    -553,  -553,   406,  -553,  -553,  -553,   292,   302,   204,   823,
    -553,  -553,   760,  -553,  2077,  1873,  -553,  -553,   266,  -553,
    -553,  -553,  -553,   500,  -553,  -553,  -553,  -553,  1562,   546,
    2050,   760,  -553,  -553,  1136,  -553,  2007,  -553,   442,  -553,
     442,  -553,  -553,   503,  -553,  -553,   507,  -553,  2077,  -553,
    -553,  1642,   554,   534,  -553,  -553,   541,   542,  1873,   560,
     526,   530,  1820,    60,   595,  -553,   572,   540,  -553,   576,
     583,  -553,   596,   942,    57,  -553,  -553,  -553,  -553,  -553,
    1753,  -553,  1873,   582,   578,  1196,  -553,   564,  -553,  -553,
    -553,  1873,   598,  -553,  1873,  1873,  2099,  -553,  -553,  -553,
    -553,   581,  1873,   585,  -553,   606,  -553,  -553,  -553,   316,
    -553,    58,  1022,  -553,  -553,  -553,  -553,  1873,  -553,  1196,
    2032,  -553,  1196,  -553,  -553,   543,  1873,   620,  -553,  1066,
     590,   592,  1873,  -553,  -553,   600,  -553,  1873,   324,  -553,
     539,   330,  -553,   636,  -553,  -553,  1642,   597,  -553,   642,
    1196,  -553,  -553,   603,  -553,  -553,  -553,  -553,  2117,  -553,
      47,  -553,   304,  -553,   304,  -553,  -553,  -553,   615,  -553,
    -553,  -553,  -553,  1873,  -553,  -553,   684,   617,  -553,  -553,
    -553,  -553,  1196,  -553,  -553,   630,  -553,   652,    48,   616,
    -553,  -553,   333,   333,  -553,  -553,  -553,  1873,   684,   637,
     684,  -553,  -553,  1873,   639,   109,  -553,  -553,   653,  -553,
     446,   654,  -553,   358,   218,  -553,  -553,   656,   446,  -553,
    -553,   358
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,     0,     6,     0,     1,     0,     0,   153,   144,   151,
     143,     0,     0,     0,     0,     0,     0,   396,    19,     5,
       9,     8,     0,   119,   119,   139,   130,   140,   173,   152,
       0,     7,    17,    18,    32,    33,   247,   249,   256,   240,
     256,   244,     0,     0,     0,   236,   281,     0,     0,   161,
     120,     0,    16,     0,    15,     0,   141,   130,   142,   146,
     145,   128,   174,    11,     0,   245,     0,     0,   237,     0,
     241,    87,    88,   100,    57,    58,     0,     0,     0,    34,
      36,    35,     0,    37,    38,     0,    39,    40,     0,     0,
      41,    59,     0,     0,    63,    44,    46,    89,     0,   279,
       0,   277,   149,     0,   277,   178,     0,     0,    12,     0,
       0,    31,     0,   388,     0,     0,   171,   223,   281,     0,
       0,   159,   120,     0,   215,   216,     0,     0,   129,   132,
     156,   157,   131,   133,   158,   272,   273,   252,   270,     0,
     171,   263,   258,   119,   255,   119,     0,   256,   171,   256,
      55,    56,    50,    47,     0,     0,     0,     0,    49,     0,
       0,     0,    51,     0,    53,     0,     0,    80,    78,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,     0,     0,    42,     0,   101,    48,
     154,   281,   371,     0,   275,   278,   147,   155,   280,   149,
     276,   184,   185,   186,   183,     0,   176,   179,   282,   232,
     231,   162,   163,   235,     0,   230,     0,   234,     0,     0,
      29,     0,   317,   107,   318,   170,   172,     0,     0,    14,
       0,     0,    23,     0,   171,   388,     0,    13,    27,     0,
       0,   253,     0,   252,   239,   317,   257,   317,   264,     0,
     243,     0,    91,    90,   307,   299,     0,     0,    10,    45,
       0,     0,    86,    85,     0,     0,     0,     0,    74,    75,
      73,    72,    71,    69,    70,    64,    65,    66,    67,    68,
      97,    96,     0,    43,     0,   285,     0,   289,     0,   291,
       0,   371,     0,   150,   148,     0,   178,    42,     0,     0,
     392,   378,   119,   119,   390,     0,   379,   381,   389,     0,
     233,   298,     0,   109,   104,   108,     0,   168,   221,   217,
     160,   222,    21,   167,   218,   220,     0,    25,   274,   271,
     171,     0,   259,   265,   318,   261,   171,   171,   308,   300,
      93,    61,    60,    52,    54,     0,     0,    79,    77,    94,
      95,   284,   283,   372,   290,   286,   288,     0,   175,   177,
      87,     0,   164,   376,   277,   277,   373,   374,     0,   391,
       0,     0,    30,   305,   105,   119,   119,   136,     0,     0,
     165,   219,     0,   248,   171,   317,     0,   238,   242,     0,
       0,   301,   302,     0,    81,    84,   287,   180,     0,   182,
     229,   281,   371,   120,   171,   171,   171,   281,   171,   171,
       0,   380,   382,   393,   306,   112,     0,   113,     0,   136,
     134,   190,   188,   187,   169,    22,     0,    26,   246,   266,
       0,   171,   394,     0,     0,     0,   317,     0,     0,   116,
     318,   293,   303,   198,    87,     0,     0,   196,     0,   195,
       0,   250,   193,     0,     0,   285,     0,   388,     0,   383,
     384,   385,   285,   386,   387,   375,     0,     0,   163,   135,
     138,   137,     0,   166,   171,     0,   267,   304,     0,   310,
     118,   117,   297,     0,   311,   295,   318,   294,     0,     0,
       0,     0,   205,    62,     0,   192,    82,   181,   227,   281,
     228,   224,   226,     0,   110,   111,     0,   269,   171,   395,
     309,     0,   153,     0,   331,   315,     0,     0,     0,     0,
       0,     0,     0,     0,   360,   352,     0,     0,   114,   119,
     119,   324,   329,     0,     0,   321,   322,   325,   353,   323,
       0,   207,     0,   203,     0,     0,   194,     0,   225,   189,
     268,     0,     0,   317,   362,     0,     0,   358,   342,   343,
     344,     0,     0,     0,   361,     0,   359,   326,   125,     0,
     126,     0,     0,   313,   318,   312,   335,     0,   127,     0,
       0,   201,     0,   197,   206,     0,     0,     0,   363,    46,
       0,     0,     0,   356,   345,     0,   350,     0,     0,   123,
     209,     0,   124,   212,   330,   317,     0,     0,   208,     0,
       0,   204,   314,     0,   316,   354,   336,   340,     0,   351,
       0,   121,     0,   122,     0,   328,   319,   317,     0,   199,
     202,   332,   317,   362,   317,   357,   364,     0,   210,   213,
     320,   334,     0,   317,   355,     0,   341,     0,     0,   365,
     366,   346,     0,     0,   200,   333,   337,     0,   364,     0,
       0,   211,   214,   362,     0,     0,   347,   367,     0,   368,
       0,     0,   338,   369,     0,   348,   317,     0,     0,   339,
     349,   370
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -553,  -553,  -553,  -553,  -553,    70,  -553,  -553,  -553,  -553,
    -553,  -553,  -553,  -553,    -7,  -553,   -42,   440,  -141,   352,
    -553,  -553,     1,  -553,   313,  -553,  -553,  -553,  -553,  -553,
     186,  -553,  -206,  -214,   514,  -553,  -553,   306,  -553,    20,
    -101,   198,     8,   691,  -553,   338,    11,    -2,   -13,   563,
       9,  -166,  -377,   -53,  -103,   -61,  -553,  -553,  -553,   200,
      12,    -3,  -553,   469,  -553,   332,  -553,  -388,  -553,  -444,
    -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,  -553,
    -553,  -553,   -50,   -70,  -313,   -15,   -32,  -553,  -553,  -553,
    -553,  -553,   524,    13,  -553,   631,   537,   397,   647,   549,
     -17,   -81,     3,  -109,  -165,   351,  -553,  -553,  -186,  -553,
    -553,  -553,   401,  -292,  -553,  -130,  -553,  -553,  -553,  -553,
     -97,  -306,  -446,   363,  -553,   210,  -553,  -553,  -553,  -553,
    -553,  -553,  -553,  -553,  -553,  -553,   211,  -553,  -552,   164,
    -553,   142,  -553,   532,  -553,  -242,  -553,  -553,  -553,   473,
    -204,  -553,  -553,  -553,  -553,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     5,    19,    20,    21,   233,   379,
     239,   382,   115,   312,   448,    88,   155,   282,    90,    91,
      92,    93,    94,   393,    95,   267,   266,   264,   453,   265,
      96,   156,    97,   220,   221,   222,   374,   435,   436,    22,
     110,   528,   302,    61,   375,   420,   303,    25,   101,   196,
      26,   132,   120,    48,   116,   121,   426,    49,   378,   225,
     226,    28,   205,   206,   207,   424,   472,   450,   451,   452,
     491,   642,   610,   582,   545,   579,   599,   622,   652,   602,
     624,   653,   212,   124,   498,   125,    29,   147,   149,   139,
      64,   495,   242,    66,    67,   144,   332,   333,   137,   138,
     103,   194,   104,   106,   195,   437,   438,   483,   223,   339,
     390,   391,   392,   372,   255,   373,   532,   533,   534,   553,
     574,   316,   575,   441,   535,   536,   605,   552,   643,   633,
     663,   676,   634,   537,   538,   632,   539,   565,   590,   648,
     649,   650,   674,   287,   288,   304,   410,   305,   306,   307,
     215,   216,   308,   309,   433,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,   100,   126,   123,    37,    39,    41,    51,   298,   227,
      30,    23,    30,    23,    24,    27,    24,    27,   224,   322,
     234,   231,    56,   200,    62,   327,   256,   286,   386,   134,
     293,   324,   107,    57,    50,   313,    58,    30,    23,   466,
     127,    24,    27,    53,    55,   283,   353,    62,   211,   228,
     546,   404,   102,    69,   143,    62,   371,   136,   576,    50,
    -103,    45,   188,    34,    35,   122,    -2,    50,   157,   314,
     145,   152,   218,   133,   146,    31,   102,   150,   151,    34,
      35,   645,   285,   153,   506,   636,   658,   425,    16,   158,
     427,   209,    34,    35,   102,   213,   134,    16,   204,   189,
      63,   584,    42,   544,   107,    34,    35,   587,    46,   234,
     562,   668,   135,   199,    34,    35,   577,    47,    50,    62,
     351,   122,    50,   637,   659,   224,   457,   458,   293,   362,
      62,   122,   136,   143,   488,   608,   224,   254,   611,     4,
     133,  -103,   224,   500,   260,   284,   261,   670,   334,   145,
     334,   290,    -3,   146,   199,   102,   283,   318,    36,   625,
     249,   321,   251,   245,   134,   247,   630,    16,   465,   320,
     102,    38,   102,   191,   295,   475,    43,   280,   281,   296,
     511,   640,   192,   193,    40,   671,   644,    59,   646,    60,
     141,    45,   598,     7,   326,     9,    99,   655,   654,    45,
     400,    11,    12,    13,   439,     7,    16,     9,   198,    44,
     113,   114,   209,    11,    12,    13,   213,    15,    16,   369,
      17,   108,   345,    62,   370,   109,    16,   210,    27,    15,
     679,   112,    32,    33,   136,   113,   114,   286,   407,   122,
      52,   414,   122,   122,   235,   236,   401,   402,   193,   480,
     357,    16,   485,   501,   471,   402,   193,   454,   342,    65,
     397,   319,   134,   113,   114,   398,   142,  -254,   606,    34,
      35,   497,     7,    59,     9,    60,   160,   140,  -262,  -262,
      11,    12,    13,   406,   409,   208,    45,   117,   334,   204,
     351,   229,   455,   440,   677,   230,    15,   351,   462,   678,
      27,    56,   456,   471,    68,   219,   235,   236,  -317,  -317,
    -317,  -317,    57,    16,   376,    58,  -317,  -317,  -317,    45,
     117,   430,   364,   365,    70,   377,   291,   292,   191,   105,
     237,   367,  -317,   118,   109,   368,   431,   192,   193,   440,
     244,   486,   119,   352,   160,   417,    16,   148,   250,   405,
     408,   219,   113,   114,  -106,  -106,  -106,  -106,   531,   214,
    -106,   159,  -106,  -106,  -106,   467,   118,   188,   477,   504,
      45,   400,   478,   230,   208,   119,   403,    50,  -106,   505,
      27,   531,   432,   109,   190,   419,  -102,   107,   134,   240,
     547,   197,    45,   400,   246,   416,   418,    16,   122,   241,
      62,   621,    45,   468,   252,   230,   208,   623,   638,    45,
     639,   109,   253,   208,    50,   254,   503,   401,   257,    16,
    -260,  -260,    27,   179,   180,   181,   402,   193,   122,    16,
      50,   258,  -106,   -83,   323,   297,    16,   134,   489,   499,
     209,   213,   291,   292,   162,   164,   527,   209,    47,    46,
     112,     7,     8,     9,    10,    73,   407,   310,    47,    11,
      12,    13,   311,   479,   673,   402,   193,   403,   403,   527,
     311,   509,   681,   259,    50,    15,   531,    16,   262,   263,
     561,   526,   330,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   540,   529,   234,   317,   530,
      27,   457,   458,   336,   526,   337,   338,    45,   117,   585,
     340,   208,   588,   591,   343,   344,   563,   346,   601,   600,
     595,   349,   661,   662,    54,   224,   350,   224,    56,   358,
     383,   354,   209,   363,    16,   607,   387,   388,   380,    57,
     366,   189,    58,   381,   613,   384,   385,   540,   529,   569,
     571,   530,    27,   328,   118,   620,   603,   389,   394,   403,
     396,   399,   413,   119,   527,   415,   112,    45,   400,  -163,
    -296,   208,   484,   -32,   492,  -163,   493,   494,   510,   347,
     348,   122,   541,    50,   428,   549,   548,     7,     8,     9,
      10,   588,   -33,   551,    16,    11,    12,    13,   557,   526,
     554,   555,   564,   558,   459,   460,   461,   559,   463,   464,
     566,    15,   572,    16,   499,   664,  -163,   567,   581,   612,
    -163,   588,   219,    47,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,   476,  -115,  -115,  -115,  -115,  -115,   614,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,   568,  -115,  -115,   583,   586,   594,   395,
     570,  -115,   596,   112,  -115,   597,  -163,   616,   617,  -115,
    -115,  -115,  -163,   628,   507,  -115,  -115,   619,   629,   631,
    -115,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   423,   641,   647,   651,   113,   114,   660,  -115,  -115,
    -115,  -115,   219,  -115,  -317,  -317,   449,   656,   550,  -317,
    -317,   657,  -317,  -163,   666,   669,  -317,  -163,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,   672,
    -317,   675,  -317,   680,  -317,  -317,   315,   361,   578,   423,
     589,  -317,   481,   474,  -317,   129,   130,   131,   128,  -317,
    -317,  -317,    11,    12,    13,  -317,  -317,   469,   473,   490,
    -317,   443,   294,   444,    35,   359,   496,   331,    72,    73,
      16,    74,    34,    35,   201,   202,   203,   248,  -317,  -292,
    -317,  -317,   429,  -317,   335,   449,   243,   482,   508,    75,
     329,    17,   442,    76,    77,   177,   178,   179,   180,   181,
      78,   487,   667,    79,   449,   130,   131,   449,    80,    81,
      82,    11,    12,    13,    83,    84,   626,   627,   445,    85,
     446,   232,   665,   355,   -20,   -20,   -20,   -20,   470,   130,
     131,   556,   -20,   -20,   -20,    11,    12,    13,  -191,    86,
      87,   412,   447,     0,     0,     0,     0,   112,   -20,     0,
    -163,     0,     0,     0,     0,   580,  -163,     0,   449,     0,
       0,   434,     0,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
       0,  -317,  -317,  -317,  -317,  -317,     0,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,   449,  -317,  -317,   449,     0,  -163,     0,     0,
    -317,  -163,   -20,  -317,     0,   618,     0,     0,  -317,  -317,
    -317,     0,     0,     0,  -317,  -317,     0,     0,     0,  -317,
       0,     0,     0,   449,     7,     0,     9,   198,     0,     0,
       0,     0,    11,    12,    13,     0,     0,  -317,     0,  -317,
    -317,     0,  -317,   573,     0,  -317,  -317,     0,    15,     0,
    -317,  -317,     0,  -317,     0,   449,     0,  -317,     0,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
     191,  -317,     0,  -317,     0,  -317,  -317,     0,     0,   192,
     193,     0,  -317,   182,   183,  -317,   184,   185,   186,   187,
    -317,  -317,  -317,     0,     0,     0,  -317,  -317,     0,     0,
     299,  -317,   300,     7,     8,     9,    10,     0,     0,   301,
       0,    11,    12,    13,     0,     0,     0,     0,     0,  -317,
       0,  -317,  -317,   604,  -317,  -327,  -327,    15,     0,    16,
    -327,  -327,     0,  -327,     0,     0,     0,  -327,     0,  -327,
    -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,
       0,  -327,     0,  -327,     0,  -327,  -327,     0,     0,     0,
       0,     0,  -327,     0,     0,  -327,     0,     0,     0,     0,
    -327,  -327,  -327,     0,     0,  -377,  -327,  -327,     0,     0,
     154,  -327,    71,     7,     0,     9,    99,    72,    73,     0,
      74,    11,    12,    13,     0,     0,     0,     0,     0,  -327,
       0,  -327,  -327,     0,  -327,     0,     0,    15,    75,     0,
      17,     0,    76,    77,     0,     0,     0,     0,     0,    78,
     182,   183,    79,   184,   185,   186,   187,    80,    81,    82,
       0,     0,     0,    83,    84,     0,     0,   443,    85,   444,
      35,     0,   615,     0,    72,    73,     0,    74,     0,     0,
       0,   299,     0,     0,     7,     8,     9,    10,    86,    87,
     301,   -92,    11,    12,    13,    75,     0,    17,     0,    76,
      77,     0,     0,     0,     0,     0,    78,     0,    15,    79,
      16,     0,     0,     0,    80,    81,    82,     0,     0,     0,
      83,    84,     0,     0,   445,    85,   446,   443,     0,   444,
      35,     0,     0,     0,    72,    73,     0,    74,     0,     0,
       0,     0,     0,     0,  -251,    86,    87,     0,   447,     0,
       0,     0,     0,     0,     0,    75,  -377,    17,     0,    76,
      77,     0,     0,     0,     0,     0,    78,     0,     0,    79,
       0,     0,     0,     0,    80,    81,    82,     0,     0,     0,
      83,    84,     0,     0,   445,    85,   446,   421,     0,    71,
       0,     0,     0,     0,    72,    73,     0,    74,   111,     0,
       0,   -28,   -28,   -28,   -28,    86,    87,     0,   447,   -28,
     -28,   -28,     0,     0,     0,    75,     0,    17,     0,    76,
      77,     0,     0,     0,   112,   -28,    78,  -163,     0,    79,
       0,     0,     0,  -163,    80,    81,    82,     0,     0,     0,
      83,    84,     0,     0,     0,    85,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   113,   114,   238,     0,
       0,   -24,   -24,   -24,   -24,    86,    87,     0,   422,   -24,
     -24,   -24,     0,     0,  -163,    71,     0,     0,  -163,   -28,
      72,    73,     0,    74,   112,   -24,     0,  -163,     0,     7,
       8,     9,    10,  -163,     0,     0,     0,    11,    12,    13,
       0,    75,     0,    17,     0,    76,    77,     0,     0,     0,
       0,     0,    78,    15,     0,    79,   113,   114,     0,     0,
      80,    81,    82,     0,     0,     0,    83,    84,     0,     0,
       0,    85,     0,     0,  -163,    71,     0,     0,  -163,   -24,
      72,    73,     0,    74,     0,     0,     0,     0,    71,     0,
       0,    86,    87,    72,    73,   217,    74,     0,     0,     0,
       0,    75,     0,    17,     0,    76,    77,     0,     0,     0,
       0,     0,    78,     0,    75,    79,    17,     0,    76,    77,
      80,    81,    82,     0,     0,    78,    83,    84,    79,     0,
       0,    85,     0,    80,    81,    82,     0,     0,     0,    83,
      84,    71,     0,     0,    85,     0,    72,    73,     0,    74,
       0,    86,    87,     0,    71,   289,     0,     0,     0,    72,
      73,     0,    74,     0,    86,    87,     0,    75,   325,    17,
       0,    76,    77,     0,     0,     0,     0,     0,    78,     0,
      75,    79,    17,     0,    76,    77,    80,    81,    82,     0,
       0,    78,    83,    84,    79,     0,     0,    85,     0,    80,
      81,    82,     0,     0,     0,    83,    84,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,   356,   174,   175,   176,   177,   178,   179,   180,   181,
      86,    87,     0,     0,   502,   444,   512,     8,     9,    10,
      72,    73,     0,    74,    11,    12,    13,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
      15,    75,    16,    17,     0,    76,    77,     0,     0,     0,
       0,     0,    78,     0,     0,    79,     0,     0,     0,     0,
      80,    81,    82,     0,     0,     0,    83,    84,     0,     0,
       0,    85,   141,     0,     0,     7,     0,     9,    99,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,   525,
       0,    86,    87,     0,   254,   444,    35,     0,     0,    15,
      72,    73,    17,    74,     0,     0,     0,   513,     0,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,    75,     0,    17,     0,    76,    77,     0,     0,     0,
       0,     0,    78,     0,     0,    79,     0,     0,     0,     0,
      80,    81,    82,     0,     0,     0,    83,    84,     0,    71,
       0,    85,     0,     0,    72,    73,     0,    74,     7,     8,
       9,    10,     0,     0,   411,     0,    11,    12,    13,   525,
       0,    86,    87,     0,   254,    75,     0,    17,     0,    76,
      77,     0,    15,     0,    16,     0,    78,     0,     0,    79,
       0,     0,     0,     0,    80,    81,    82,     0,     0,     0,
      83,    84,     0,     0,     0,    85,    71,     7,     8,     9,
      10,    72,    73,     0,    74,    11,    12,    13,   175,   176,
     177,   178,   179,   180,   181,    86,    87,     0,   341,     0,
       0,    15,    75,    16,    17,     0,    76,    77,     0,     0,
       0,     0,     0,    78,     0,     0,    79,     0,     0,     0,
       0,    80,    81,    82,     0,     0,     0,    83,    84,     0,
      71,     7,    85,     9,    99,    72,    73,     0,    74,    11,
      12,    13,     0,    71,     0,     0,     0,     0,    72,    73,
       0,    74,    86,    87,     0,    15,    75,     0,    17,     0,
      76,    77,     0,     0,     0,     0,     0,    78,     0,    75,
      79,    17,     0,    76,    77,    80,    81,    82,     0,     0,
      78,    83,    84,    79,     0,     0,    85,     0,    80,    81,
      82,     0,     0,     0,    83,    84,    71,     0,     0,    85,
       0,    72,    73,     0,    74,     0,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   560,     0,    86,
      87,     0,    75,    71,    17,     0,    76,    77,    72,    73,
       0,    74,     0,    78,     0,     0,    79,     0,     0,     0,
       0,    80,    81,    82,     0,     0,     0,    83,    84,    75,
      71,    17,    85,    76,    77,    72,    73,     0,    74,     0,
      78,     0,     0,    79,     0,     0,     0,     0,    80,    81,
      82,     0,    86,    87,    83,    84,    75,   360,    17,   161,
      76,    77,    72,    73,     0,    74,     0,    78,     0,     0,
      79,     0,     0,     0,     0,    80,    81,    82,     0,    86,
      87,    83,    84,    75,     0,    17,   163,    76,    77,     0,
       0,     0,     0,     0,    78,     0,     0,    79,     0,     0,
       0,     0,    80,    81,    82,     0,    86,    87,    83,    84,
       0,     0,     6,    85,  -119,     7,     8,     9,    10,     7,
       8,     9,    10,    11,    12,    13,     0,    11,    12,    13,
       0,     0,     0,    86,    87,     0,     0,     0,    14,    15,
       0,    16,    17,    15,   167,    16,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     542,  -119,     0,     0,     0,     0,     0,   165,   166,   167,
    -119,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   165,   166,   167,    18,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,     0,     0,     0,     0,    16,     0,   592,
       0,     0,   165,   166,   167,   609,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
       0,     0,     0,   543,   165,   166,   167,   593,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   165,   166,   167,   635,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     165,   166,   167,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181
};

static const yytype_int16 yycheck[] =
{
      42,    43,    55,    53,    11,    12,    13,    22,   214,   118,
       3,     3,     5,     5,     3,     3,     5,     5,   115,   233,
     123,   122,    24,   104,    27,   239,   156,   192,   334,    61,
     196,   235,    47,    24,    22,   221,    24,    30,    30,   416,
      55,    30,    30,    23,    24,   186,   288,    50,   109,   119,
     494,   364,    43,    40,    67,    58,     1,    64,     1,    47,
       1,     3,     9,     3,     4,    53,     0,    55,    85,    10,
      67,    78,   114,    61,    67,     5,    67,    76,    77,     3,
       4,   633,   191,    82,   472,    38,    38,   379,    30,    88,
     382,   106,     3,     4,    85,   110,   128,    30,   105,    98,
      30,   545,    59,   491,   119,     3,     4,   553,    50,   212,
      50,   663,     1,   104,     3,     4,    59,    59,   106,   122,
     285,   109,   110,    76,    76,   222,    59,    60,   294,    76,
     133,   119,   139,   146,   440,   579,   233,    82,   582,     0,
     128,    82,   239,   456,   161,   187,   163,    38,   245,   146,
     247,   193,     0,   146,   145,   146,   297,   227,    82,   605,
     147,   231,   149,   143,   196,   145,   610,    30,   410,   230,
     161,    82,   163,    50,    76,    38,    59,   184,   185,    81,
     486,   627,    59,    60,    82,    76,   632,     5,   634,     7,
       1,     3,   569,     4,   236,     6,     7,   643,   642,     3,
       4,    12,    13,    14,   390,     4,    30,     6,     7,    59,
      59,    60,   227,    12,    13,    14,   231,    28,    30,    76,
      31,    77,   264,   226,    81,    81,    30,    76,   216,    28,
     676,    27,    77,    78,   241,    59,    60,   402,    50,   227,
      77,   371,   230,   231,    59,    60,    50,    59,    60,   435,
     292,    30,   438,   457,   420,    59,    60,   398,   257,    82,
      76,    76,   294,    59,    60,    81,    77,    78,   574,     3,
       4,    76,     4,     5,     6,     7,    81,    78,    77,    78,
      12,    13,    14,   364,   365,     7,     3,     4,   385,   296,
     455,    77,   401,   390,    76,    81,    28,   462,   407,    81,
     288,   303,   403,   469,    82,     1,    59,    60,     4,     5,
       6,     7,   303,    30,   316,   303,    12,    13,    14,     3,
       4,    38,   302,   303,    82,   316,    59,    60,    50,    59,
      77,    77,    28,    50,    81,    81,   386,    59,    60,   436,
     140,   438,    59,    76,    81,    77,    30,    78,   148,   364,
     365,     1,    59,    60,     4,     5,     6,     7,   488,    59,
      10,    76,    12,    13,    14,   418,    50,     9,    77,    77,
       3,     4,    81,    81,     7,    59,   364,   365,    28,    77,
     368,   511,   389,    81,    76,   376,    82,   402,   420,    36,
     499,    76,     3,     4,    77,   375,   376,    30,   386,    81,
     403,    77,     3,   418,    76,    81,     7,    77,   622,     3,
     624,    81,    76,     7,   402,    82,   458,    50,    76,    30,
      77,    78,   410,    50,    51,    52,    59,    60,   416,    30,
     418,    77,    82,    38,   234,    59,    30,   469,   445,    50,
     455,   456,    59,    60,    92,    93,   488,   462,    59,    50,
      27,     4,     5,     6,     7,     9,    50,    83,    59,    12,
      13,    14,    77,    78,   670,    59,    60,   455,   456,   511,
      77,   478,   678,   160,   462,    28,   606,    30,   165,   166,
     522,   488,    78,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   488,   488,   600,    36,   488,
     488,    59,    60,    78,   511,    78,    78,     3,     4,   551,
      76,     7,   554,   555,    76,    76,   523,    38,   571,   569,
     562,    76,   652,   653,    77,   622,    83,   624,   530,    76,
     330,    83,   547,    76,    30,   577,   336,   337,    36,   530,
      76,   540,   530,    83,   586,    78,    81,   540,   540,   529,
     530,   540,   540,   240,    50,   597,   571,    32,    38,   547,
      83,    76,     3,    59,   606,    77,    27,     3,     4,    30,
      78,     7,    78,    38,    38,    36,    78,    81,    78,   266,
     267,   569,    36,   571,   384,    78,    83,     4,     5,     6,
       7,   633,    38,    59,    30,    12,    13,    14,    38,   606,
      59,    59,     7,    77,   404,   405,   406,    77,   408,   409,
      38,    28,    16,    30,    50,   657,    77,    77,    36,    76,
      81,   663,     1,    59,     3,     4,     5,     6,     7,     8,
       9,   431,    11,    12,    13,    14,    15,    17,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    77,    33,    34,    78,    59,    77,   346,
      77,    40,    77,    27,    43,    59,    30,    77,    76,    48,
      49,    50,    36,    76,   474,    54,    55,    77,    36,    76,
      59,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   378,    77,     9,    77,    59,    60,    81,    77,    78,
      79,    80,     1,    82,     3,     4,   393,    77,   508,     8,
       9,    59,    11,    77,    77,    76,    15,    81,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    76,
      29,    77,    31,    77,    33,    34,   222,   297,   540,   426,
     554,    40,   436,   430,    43,     5,     6,     7,    57,    48,
      49,    50,    12,    13,    14,    54,    55,   419,   426,   446,
      59,     1,   199,     3,     4,   296,   453,   243,     8,     9,
      30,    11,     3,     4,     5,     6,     7,   146,    77,    78,
      79,    80,   385,    82,   247,   472,   139,   436,   475,    29,
     241,    31,   391,    33,    34,    48,    49,    50,    51,    52,
      40,   438,   660,    43,   491,     6,     7,   494,    48,    49,
      50,    12,    13,    14,    54,    55,   606,   606,    58,    59,
      60,     1,   658,   291,     4,     5,     6,     7,     5,     6,
       7,   518,    12,    13,    14,    12,    13,    14,    78,    79,
      80,   368,    82,    -1,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    -1,    -1,    -1,   542,    36,    -1,   545,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   579,    33,    34,   582,    -1,    77,    -1,    -1,
      40,    81,    82,    43,    -1,   592,    -1,    -1,    48,    49,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,
      -1,    -1,    -1,   610,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    -1,    -1,    77,    -1,    79,
      80,    -1,    82,     1,    -1,     3,     4,    -1,    28,    -1,
       8,     9,    -1,    11,    -1,   642,    -1,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      50,    29,    -1,    31,    -1,    33,    34,    -1,    -1,    59,
      60,    -1,    40,    54,    55,    43,    57,    58,    59,    60,
      48,    49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
       1,    59,     3,     4,     5,     6,     7,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    80,     1,    82,     3,     4,    28,    -1,    30,
       8,     9,    -1,    11,    -1,    -1,    -1,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    -1,    76,    54,    55,    -1,    -1,
       1,    59,     3,     4,    -1,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    80,    -1,    82,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      54,    55,    43,    57,    58,    59,    60,    48,    49,    50,
      -1,    -1,    -1,    54,    55,    -1,    -1,     1,    59,     3,
       4,    -1,    76,    -1,     8,     9,    -1,    11,    -1,    -1,
      -1,     1,    -1,    -1,     4,     5,     6,     7,    79,    80,
      10,    82,    12,    13,    14,    29,    -1,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    28,    43,
      30,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    58,    59,    60,     1,    -1,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    76,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    58,    59,    60,     1,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    -1,    11,     1,    -1,
      -1,     4,     5,     6,     7,    79,    80,    -1,    82,    12,
      13,    14,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    -1,    -1,    -1,    27,    28,    40,    30,    -1,    43,
      -1,    -1,    -1,    36,    48,    49,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    59,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    59,    60,     1,    -1,
      -1,     4,     5,     6,     7,    79,    80,    -1,    82,    12,
      13,    14,    -1,    -1,    77,     3,    -1,    -1,    81,    82,
       8,     9,    -1,    11,    27,    28,    -1,    30,    -1,     4,
       5,     6,     7,    36,    -1,    -1,    -1,    12,    13,    14,
      -1,    29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    28,    -1,    43,    59,    60,    -1,    -1,
      48,    49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    77,     3,    -1,    -1,    81,    82,
       8,     9,    -1,    11,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    79,    80,     8,     9,    83,    11,    -1,    -1,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    29,    43,    31,    -1,    33,    34,
      48,    49,    50,    -1,    -1,    40,    54,    55,    43,    -1,
      -1,    59,    -1,    48,    49,    50,    -1,    -1,    -1,    54,
      55,     3,    -1,    -1,    59,    -1,     8,     9,    -1,    11,
      -1,    79,    80,    -1,     3,    83,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    79,    80,    -1,    29,    83,    31,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      29,    43,    31,    -1,    33,    34,    48,    49,    50,    -1,
      -1,    40,    54,    55,    43,    -1,    -1,    59,    -1,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    83,    45,    46,    47,    48,    49,    50,    51,    52,
      79,    80,    -1,    -1,    83,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,     1,    -1,    -1,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    77,
      -1,    79,    80,    -1,    82,     3,     4,    -1,    -1,    28,
       8,     9,    31,    11,    -1,    -1,    -1,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    -1,    -1,    54,    55,    -1,     3,
      -1,    59,    -1,    -1,     8,     9,    -1,    11,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    12,    13,    14,    77,
      -1,    79,    80,    -1,    82,    29,    -1,    31,    -1,    33,
      34,    -1,    28,    -1,    30,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    59,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    46,    47,
      48,    49,    50,    51,    52,    79,    80,    -1,    82,    -1,
      -1,    28,    29,    30,    31,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    54,    55,    -1,
       3,     4,    59,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,
      -1,    11,    79,    80,    -1,    28,    29,    -1,    31,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    29,
      43,    31,    -1,    33,    34,    48,    49,    50,    -1,    -1,
      40,    54,    55,    43,    -1,    -1,    59,    -1,    48,    49,
      50,    -1,    -1,    -1,    54,    55,     3,    -1,    -1,    59,
      -1,     8,     9,    -1,    11,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      80,    -1,    29,     3,    31,    -1,    33,    34,     8,     9,
      -1,    11,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    54,    55,    29,
       3,    31,    59,    33,    34,     8,     9,    -1,    11,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    -1,    79,    80,    54,    55,    29,     3,    31,    59,
      33,    34,     8,     9,    -1,    11,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,    79,
      80,    54,    55,    29,    -1,    31,    59,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    49,    50,    -1,    79,    80,    54,    55,
      -1,    -1,     1,    59,     3,     4,     5,     6,     7,     4,
       5,     6,     7,    12,    13,    14,    -1,    12,    13,    14,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    27,    28,
      -1,    30,    31,    28,    37,    30,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      10,    50,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      59,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    35,    36,    37,    77,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    30,    -1,    10,
      -1,    -1,    35,    36,    37,    83,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    83,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    85,    86,    87,     0,    88,     1,     4,     5,     6,
       7,    12,    13,    14,    27,    28,    30,    31,    77,    89,
      90,    91,   123,   126,   130,   131,   134,   144,   145,   170,
     239,    89,    77,    78,     3,     4,    82,    98,    82,    98,
      82,    98,    59,    59,    59,     3,    50,    59,   137,   141,
     144,   169,    77,   123,    77,   123,   131,   134,   144,     5,
       7,   127,   145,    89,   174,    82,   177,   178,    82,   177,
      82,     3,     8,     9,    11,    29,    33,    34,    40,    43,
      48,    49,    50,    54,    55,    59,    79,    80,    99,   100,
     102,   103,   104,   105,   106,   108,   114,   116,   239,     7,
     100,   132,   134,   184,   186,    59,   187,   169,    77,    81,
     124,     1,    27,    59,    60,    96,   138,     4,    50,    59,
     136,   139,   144,   166,   167,   169,   137,   169,   127,     5,
       6,     7,   135,   144,   170,     1,    98,   182,   183,   173,
      78,     1,    77,   132,   179,   186,   239,   171,    78,   172,
     106,   106,    98,   106,     1,   100,   115,   184,   106,    76,
      81,    59,   103,    59,   103,    35,    36,    37,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    54,    55,    57,    58,    59,    60,     9,   106,
      76,    50,    59,    60,   185,   188,   133,    76,     7,   134,
     185,     5,     6,     7,    98,   146,   147,   148,     7,   169,
      76,   139,   166,   169,    59,   234,   235,    83,   100,     1,
     117,   118,   119,   192,   204,   143,   144,   187,   167,    77,
      81,   124,     1,    92,   138,    59,    60,    77,     1,    94,
      36,    81,   176,   182,   143,   123,    77,   123,   179,   177,
     143,   177,    76,    76,    82,   198,   199,    76,    77,   108,
     184,   184,   108,   108,   111,   113,   110,   109,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
      98,    98,   101,   102,   100,   187,   188,   227,   228,    83,
     100,    59,    60,   135,   133,    76,    81,    59,   116,     1,
       3,    10,   126,   130,   229,   231,   232,   233,   236,   237,
      83,    77,    97,   192,    10,   118,   205,    36,   167,    76,
     139,   167,   117,   143,   234,    83,   100,   117,   108,   183,
      78,   176,   180,   181,   204,   180,    78,    78,    78,   193,
      76,    82,   106,    76,    76,   100,    38,   108,   108,    76,
      83,   188,    76,   229,    83,   227,    83,   100,    76,   147,
       3,   101,    76,    76,   123,   123,    76,    77,    81,    76,
      81,     1,   197,   199,   120,   128,   131,   134,   142,    93,
      36,    83,    95,   143,    78,    81,   205,   143,   143,    32,
     194,   195,   196,   107,    38,   108,    83,    76,    81,    76,
       4,    50,    59,   144,   168,   169,   185,    50,   169,   185,
     230,    10,   233,     3,   199,    77,   123,    77,   123,   134,
     129,     1,    82,   108,   149,   197,   140,   197,   143,   181,
      38,   166,    98,   238,     1,   121,   122,   189,   190,   192,
     204,   207,   196,     1,     3,    58,    60,    82,    98,   108,
     151,   152,   153,   112,   102,   187,   124,    59,    60,   143,
     143,   143,   187,   143,   143,   229,   136,   137,   169,   129,
       5,   135,   150,   149,   108,    38,   143,    77,    81,    78,
     192,   121,   189,   191,    78,   192,   204,   207,   205,    98,
     108,   154,    38,    78,    81,   175,   108,    76,   168,    50,
     168,   234,    83,   100,    77,    77,   151,   143,   108,    98,
      78,   205,     4,    15,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    77,    98,   100,   125,   126,
     130,   199,   200,   201,   202,   208,   209,   217,   218,   220,
     239,    36,    10,    83,   151,   158,   153,   187,    83,    78,
     143,    59,   211,   203,    59,    59,   108,    38,    77,    77,
      77,   100,    50,    98,     7,   221,    38,    77,    77,   123,
      77,   123,    16,     1,   204,   206,     1,    59,   125,   159,
     108,    36,   157,    78,   153,   100,    59,   206,   100,   114,
     222,   100,    10,    38,    77,   100,    77,    59,   136,   160,
     166,   137,   163,   169,     1,   210,   205,   100,   153,    83,
     156,   153,    76,   100,    17,    76,    77,    76,   108,    77,
     100,    77,   161,    77,   164,   206,   209,   220,    76,    36,
     153,    76,   219,   213,   216,    38,    38,    76,   117,   117,
     206,    77,   155,   212,   206,   222,   206,     9,   223,   224,
     225,    77,   162,   165,   153,   206,    77,    59,    38,    76,
      81,   199,   199,   214,   100,   223,    77,   225,   222,    76,
      38,    76,    76,   116,   226,    77,   215,    76,    81,   206,
      77,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    87,    86,    88,    86,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      92,    93,    91,    91,    94,    95,    91,    91,    96,    97,
      91,    91,    98,    98,    99,    99,    99,    99,    99,    99,
      99,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   105,   106,
     106,   107,   106,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   108,   110,   108,
     111,   112,   108,   113,   108,   108,   108,   114,   114,   114,
     114,   114,   115,   114,   114,   114,   114,   114,   114,   114,
     116,   116,   117,   117,   117,   118,   119,   119,   119,   119,
     120,   120,   120,   120,   121,   122,   122,   122,   122,   123,
     124,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   127,   127,   127,   128,   128,   129,   129,   129,   130,
     130,   130,   130,   131,   131,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   134,   135,   135,   135,   136,
     136,   137,   137,   138,   138,   140,   139,   139,   142,   141,
     141,   143,   143,   144,   144,   145,   146,   146,   147,   147,
     147,   147,   147,   148,   148,   148,   148,   149,   150,   149,
     149,   151,   151,   152,   152,   153,   154,   153,   153,   155,
     153,   156,   153,   157,   153,   158,   153,   159,   153,   161,
     162,   160,   164,   165,   163,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   171,   170,   170,
     170,   172,   170,   170,   170,   173,   170,   174,   170,   170,
     175,   175,   176,   176,   177,   177,   178,   178,   178,   179,
     179,   179,   179,   179,   179,   180,   180,   181,   181,   181,
     182,   182,   182,   183,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   189,   190,   190,   190,   191,   191,   192,   193,
     194,   194,   195,   195,   196,   197,   197,   198,   199,   199,
     199,   199,   200,   200,   201,   203,   202,   204,   205,   206,
     206,   207,   208,   208,   209,   209,   209,   210,   209,   209,
     209,   211,   212,   209,   209,   209,   213,   214,   215,   209,
     216,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   217,   219,   218,   220,   220,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   226,
     226,   228,   227,   229,   230,   229,   229,   231,   231,   231,
     231,   232,   232,   233,   233,   233,   233,   233,   235,   234,
     236,   236,   237,   237,   238,   238,   239
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     0,     2,     0,     3,     1,     1,
       5,     2,     3,     4,     4,     2,     2,     2,     2,     1,
       0,     0,     7,     4,     0,     0,     7,     4,     0,     0,
       6,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     3,     1,     2,     2,     2,
       2,     2,     4,     2,     4,     2,     2,     1,     1,     1,
       4,     0,     7,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     0,     7,     0,     5,     3,     3,     1,     1,     1,
       3,     3,     0,     4,     4,     4,     3,     3,     2,     2,
       1,     2,     0,     1,     2,     3,     1,     1,     2,     2,
       4,     4,     2,     2,     3,     1,     1,     2,     2,     0,
       0,     4,     4,     3,     3,     2,     2,     2,     2,     3,
       0,     2,     2,     2,     2,     3,     0,     2,     2,     1,
       1,     2,     2,     1,     1,     2,     2,     2,     3,     0,
       2,     1,     1,     1,     4,     4,     1,     1,     1,     1,
       3,     1,     3,     0,     4,     0,     6,     3,     0,     6,
       3,     0,     1,     1,     2,     6,     1,     3,     0,     1,
       4,     6,     4,     1,     1,     1,     1,     1,     0,     4,
       1,     0,     2,     1,     3,     1,     0,     4,     1,     0,
       8,     0,     6,     0,     5,     0,     4,     0,     5,     0,
       0,     5,     0,     0,     5,     1,     1,     3,     3,     4,
       3,     3,     3,     1,     3,     4,     3,     3,     3,     1,
       3,     3,     3,     4,     3,     3,     1,     0,     7,     5,
       2,     0,     7,     5,     2,     0,     8,     0,     7,     2,
       0,     1,     0,     1,     1,     2,     0,     3,     2,     3,
       1,     3,     1,     1,     2,     1,     3,     4,     6,     5,
       1,     3,     1,     1,     3,     2,     2,     0,     1,     1,
       2,     0,     2,     3,     3,     2,     3,     4,     3,     2,
       3,     2,     1,     1,     2,     2,     0,     1,     2,     0,
       0,     1,     1,     2,     3,     1,     2,     1,     2,     6,
       5,     5,     2,     2,     4,     0,     4,     0,     0,     3,
       4,     3,     1,     1,     1,     1,     2,     0,     4,     1,
       3,     0,     0,     7,     5,     2,     0,     0,     0,    12,
       0,     6,     2,     2,     2,     3,     6,     8,    10,    12,
       3,     4,     1,     1,     0,     6,     3,     5,     2,     2,
       0,     1,     0,     1,     0,     1,     1,     3,     4,     1,
       3,     0,     2,     2,     0,     4,     2,     0,     1,     1,
       3,     1,     3,     4,     4,     4,     4,     4,     0,     2,
       1,     2,     1,     3,     1,     3,     1
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
  case 2: /* program: %empty  */
#line 260 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids an empty source file");
		  finish_file ();
		}
#line 2230 "c-parse.c"
    break;

  case 3: /* program: extdefs  */
#line 265 "c-parse.y"
                {
		  /* In case there were missing closebraces,
		     get us back to the global binding level.  */
		  while (! global_bindings_p ())
		    poplevel (0, 0, 0);
		  finish_file ();
		}
#line 2242 "c-parse.c"
    break;

  case 4: /* @1: %empty  */
#line 279 "c-parse.y"
        {(yyval.ttype) = NULL_TREE; }
#line 2248 "c-parse.c"
    break;

  case 6: /* @2: %empty  */
#line 280 "c-parse.y"
                  {(yyval.ttype) = NULL_TREE; }
#line 2254 "c-parse.c"
    break;

  case 10: /* extdef: ASM_KEYWORD '(' expr ')' ';'  */
#line 287 "c-parse.y"
                { STRIP_NOPS ((yyvsp[-2].ttype));
		  if ((TREE_CODE ((yyvsp[-2].ttype)) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND ((yyvsp[-2].ttype), 0)) == STRING_CST)
		      || TREE_CODE ((yyvsp[-2].ttype)) == STRING_CST)
		    assemble_asm ((yyvsp[-2].ttype));
		  else
		    error ("argument of `asm' is not a constant string"); }
#line 2266 "c-parse.c"
    break;

  case 11: /* extdef: extension extdef  */
#line 295 "c-parse.y"
                { pedantic = (yyvsp[-1].itype); }
#line 2272 "c-parse.c"
    break;

  case 12: /* datadef: setspecs notype_initdecls ';'  */
#line 300 "c-parse.y"
                { if (pedantic)
		    error ("ANSI C forbids data definition with no type or storage class");
		  else if (!flag_traditional)
		    warning ("data definition has no type or storage class"); 

		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2286 "c-parse.c"
    break;

  case 13: /* datadef: declmods setspecs notype_initdecls ';'  */
#line 310 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2295 "c-parse.c"
    break;

  case 14: /* datadef: typed_declspecs setspecs initdecls ';'  */
#line 315 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  }
#line 2304 "c-parse.c"
    break;

  case 15: /* datadef: declmods ';'  */
#line 320 "c-parse.y"
          { pedwarn ("empty declaration"); }
#line 2310 "c-parse.c"
    break;

  case 16: /* datadef: typed_declspecs ';'  */
#line 322 "c-parse.y"
          { shadow_tag ((yyvsp[-1].ttype)); }
#line 2316 "c-parse.c"
    break;

  case 19: /* datadef: ';'  */
#line 326 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C does not allow extra `;' outside of a function"); }
#line 2323 "c-parse.c"
    break;

  case 20: /* $@3: %empty  */
#line 332 "c-parse.y"
                { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); }
#line 2332 "c-parse.c"
    break;

  case 21: /* $@4: %empty  */
#line 337 "c-parse.y"
                { store_parm_decls (); }
#line 2338 "c-parse.c"
    break;

  case 22: /* fndef: typed_declspecs setspecs declarator $@3 old_style_parm_decls $@4 compstmt_or_error  */
#line 339 "c-parse.y"
                { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); }
#line 2348 "c-parse.c"
    break;

  case 23: /* fndef: typed_declspecs setspecs declarator error  */
#line 345 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2357 "c-parse.c"
    break;

  case 24: /* $@5: %empty  */
#line 350 "c-parse.y"
                { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); }
#line 2366 "c-parse.c"
    break;

  case 25: /* $@6: %empty  */
#line 355 "c-parse.y"
                { store_parm_decls (); }
#line 2372 "c-parse.c"
    break;

  case 26: /* fndef: declmods setspecs notype_declarator $@5 old_style_parm_decls $@6 compstmt_or_error  */
#line 357 "c-parse.y"
                { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); }
#line 2382 "c-parse.c"
    break;

  case 27: /* fndef: declmods setspecs notype_declarator error  */
#line 363 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2391 "c-parse.c"
    break;

  case 28: /* $@7: %empty  */
#line 368 "c-parse.y"
                { if (! start_function (NULL_TREE, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); }
#line 2400 "c-parse.c"
    break;

  case 29: /* $@8: %empty  */
#line 373 "c-parse.y"
                { store_parm_decls (); }
#line 2406 "c-parse.c"
    break;

  case 30: /* fndef: setspecs notype_declarator $@7 old_style_parm_decls $@8 compstmt_or_error  */
#line 375 "c-parse.y"
                { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); }
#line 2416 "c-parse.c"
    break;

  case 31: /* fndef: setspecs notype_declarator error  */
#line 381 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2425 "c-parse.c"
    break;

  case 34: /* unop: '&'  */
#line 393 "c-parse.y"
                { (yyval.code) = ADDR_EXPR; }
#line 2431 "c-parse.c"
    break;

  case 35: /* unop: '-'  */
#line 395 "c-parse.y"
                { (yyval.code) = NEGATE_EXPR; }
#line 2437 "c-parse.c"
    break;

  case 36: /* unop: '+'  */
#line 397 "c-parse.y"
                { (yyval.code) = CONVERT_EXPR; }
#line 2443 "c-parse.c"
    break;

  case 37: /* unop: PLUSPLUS  */
#line 399 "c-parse.y"
                { (yyval.code) = PREINCREMENT_EXPR; }
#line 2449 "c-parse.c"
    break;

  case 38: /* unop: MINUSMINUS  */
#line 401 "c-parse.y"
                { (yyval.code) = PREDECREMENT_EXPR; }
#line 2455 "c-parse.c"
    break;

  case 39: /* unop: '~'  */
#line 403 "c-parse.y"
                { (yyval.code) = BIT_NOT_EXPR; }
#line 2461 "c-parse.c"
    break;

  case 40: /* unop: '!'  */
#line 405 "c-parse.y"
                { (yyval.code) = TRUTH_NOT_EXPR; }
#line 2467 "c-parse.c"
    break;

  case 41: /* expr: nonnull_exprlist  */
#line 409 "c-parse.y"
                { (yyval.ttype) = build_compound_expr ((yyvsp[0].ttype)); }
#line 2473 "c-parse.c"
    break;

  case 42: /* exprlist: %empty  */
#line 414 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 2479 "c-parse.c"
    break;

  case 44: /* nonnull_exprlist: expr_no_commas  */
#line 420 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 2485 "c-parse.c"
    break;

  case 45: /* nonnull_exprlist: nonnull_exprlist ',' expr_no_commas  */
#line 422 "c-parse.y"
                { chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 2491 "c-parse.c"
    break;

  case 47: /* unary_expr: '*' cast_expr  */
#line 428 "c-parse.y"
                { (yyval.ttype) = build_indirect_ref ((yyvsp[0].ttype), "unary *"); }
#line 2497 "c-parse.c"
    break;

  case 48: /* unary_expr: extension cast_expr  */
#line 431 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  pedantic = (yyvsp[-1].itype); }
#line 2504 "c-parse.c"
    break;

  case 49: /* unary_expr: unop cast_expr  */
#line 434 "c-parse.y"
                { (yyval.ttype) = build_unary_op ((yyvsp[-1].code), (yyvsp[0].ttype), 0);
		  overflow_warning ((yyval.ttype)); }
#line 2511 "c-parse.c"
    break;

  case 50: /* unary_expr: ANDAND identifier  */
#line 438 "c-parse.y"
                { tree label = lookup_label ((yyvsp[0].ttype));
		  if (pedantic)
		    pedwarn ("ANSI C forbids `&&'");
		  if (label == 0)
		    (yyval.ttype) = null_pointer_node;
		  else
		    {
		      TREE_USED (label) = 1;
		      (yyval.ttype) = build1 (ADDR_EXPR, ptr_type_node, label);
		      TREE_CONSTANT ((yyval.ttype)) = 1;
		    }
		}
#line 2528 "c-parse.c"
    break;

  case 51: /* unary_expr: sizeof unary_expr  */
#line 466 "c-parse.y"
                { skip_evaluation--;
		  if (TREE_CODE ((yyvsp[0].ttype)) == COMPONENT_REF
		      && DECL_C_BIT_FIELD (TREE_OPERAND ((yyvsp[0].ttype), 1)))
		    error ("`sizeof' applied to a bit-field");
		  (yyval.ttype) = c_sizeof (TREE_TYPE ((yyvsp[0].ttype))); }
#line 2538 "c-parse.c"
    break;

  case 52: /* unary_expr: sizeof '(' typename ')'  */
#line 472 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_sizeof (groktypename ((yyvsp[-1].ttype))); }
#line 2545 "c-parse.c"
    break;

  case 53: /* unary_expr: alignof unary_expr  */
#line 475 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_alignof_expr ((yyvsp[0].ttype)); }
#line 2552 "c-parse.c"
    break;

  case 54: /* unary_expr: alignof '(' typename ')'  */
#line 478 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_alignof (groktypename ((yyvsp[-1].ttype))); }
#line 2559 "c-parse.c"
    break;

  case 55: /* unary_expr: REALPART cast_expr  */
#line 481 "c-parse.y"
                { (yyval.ttype) = build_unary_op (REALPART_EXPR, (yyvsp[0].ttype), 0); }
#line 2565 "c-parse.c"
    break;

  case 56: /* unary_expr: IMAGPART cast_expr  */
#line 483 "c-parse.y"
                { (yyval.ttype) = build_unary_op (IMAGPART_EXPR, (yyvsp[0].ttype), 0); }
#line 2571 "c-parse.c"
    break;

  case 57: /* sizeof: SIZEOF  */
#line 487 "c-parse.y"
               { skip_evaluation++; }
#line 2577 "c-parse.c"
    break;

  case 58: /* alignof: ALIGNOF  */
#line 491 "c-parse.y"
                { skip_evaluation++; }
#line 2583 "c-parse.c"
    break;

  case 60: /* cast_expr: '(' typename ')' cast_expr  */
#line 497 "c-parse.y"
                { tree type = groktypename ((yyvsp[-2].ttype));
		  (yyval.ttype) = build_c_cast (type, (yyvsp[0].ttype)); }
#line 2590 "c-parse.c"
    break;

  case 61: /* $@9: %empty  */
#line 500 "c-parse.y"
                { start_init (NULL_TREE, NULL, 0);
		  (yyvsp[-2].ttype) = groktypename ((yyvsp[-2].ttype));
		  really_start_incremental_init ((yyvsp[-2].ttype)); }
#line 2598 "c-parse.c"
    break;

  case 62: /* cast_expr: '(' typename ')' '{' $@9 initlist_maybe_comma '}'  */
#line 504 "c-parse.y"
                { char *name;
		  tree result = pop_init_level (0);
		  tree type = (yyvsp[-5].ttype);
		  finish_init ();

		  if (pedantic)
		    pedwarn ("ANSI C forbids constructor expressions");
		  if (TYPE_NAME (type) != 0)
		    {
		      if (TREE_CODE (TYPE_NAME (type)) == IDENTIFIER_NODE)
			name = IDENTIFIER_POINTER (TYPE_NAME (type));
		      else
			name = IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (type)));
		    }
		  else
		    name = "";
		  (yyval.ttype) = result;
		  if (TREE_CODE (type) == ARRAY_TYPE && TYPE_SIZE (type) == 0)
		    {
		      int failure = complete_array_type (type, (yyval.ttype), 1);
		      if (failure)
			abort ();
		    }
		}
#line 2627 "c-parse.c"
    break;

  case 64: /* expr_no_commas: expr_no_commas '+' expr_no_commas  */
#line 533 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2633 "c-parse.c"
    break;

  case 65: /* expr_no_commas: expr_no_commas '-' expr_no_commas  */
#line 535 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2639 "c-parse.c"
    break;

  case 66: /* expr_no_commas: expr_no_commas '*' expr_no_commas  */
#line 537 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2645 "c-parse.c"
    break;

  case 67: /* expr_no_commas: expr_no_commas '/' expr_no_commas  */
#line 539 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2651 "c-parse.c"
    break;

  case 68: /* expr_no_commas: expr_no_commas '%' expr_no_commas  */
#line 541 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2657 "c-parse.c"
    break;

  case 69: /* expr_no_commas: expr_no_commas LSHIFT expr_no_commas  */
#line 543 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2663 "c-parse.c"
    break;

  case 70: /* expr_no_commas: expr_no_commas RSHIFT expr_no_commas  */
#line 545 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2669 "c-parse.c"
    break;

  case 71: /* expr_no_commas: expr_no_commas ARITHCOMPARE expr_no_commas  */
#line 547 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2675 "c-parse.c"
    break;

  case 72: /* expr_no_commas: expr_no_commas EQCOMPARE expr_no_commas  */
#line 549 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2681 "c-parse.c"
    break;

  case 73: /* expr_no_commas: expr_no_commas '&' expr_no_commas  */
#line 551 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2687 "c-parse.c"
    break;

  case 74: /* expr_no_commas: expr_no_commas '|' expr_no_commas  */
#line 553 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2693 "c-parse.c"
    break;

  case 75: /* expr_no_commas: expr_no_commas '^' expr_no_commas  */
#line 555 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2699 "c-parse.c"
    break;

  case 76: /* $@10: %empty  */
#line 557 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; }
#line 2706 "c-parse.c"
    break;

  case 77: /* expr_no_commas: expr_no_commas ANDAND $@10 expr_no_commas  */
#line 560 "c-parse.y"
                { skip_evaluation -= (yyvsp[-3].ttype) == boolean_false_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ANDIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2713 "c-parse.c"
    break;

  case 78: /* $@11: %empty  */
#line 563 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; }
#line 2720 "c-parse.c"
    break;

  case 79: /* expr_no_commas: expr_no_commas OROR $@11 expr_no_commas  */
#line 566 "c-parse.y"
                { skip_evaluation -= (yyvsp[-3].ttype) == boolean_true_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ORIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2727 "c-parse.c"
    break;

  case 80: /* $@12: %empty  */
#line 569 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; }
#line 2734 "c-parse.c"
    break;

  case 81: /* $@13: %empty  */
#line 572 "c-parse.y"
                { skip_evaluation += (((yyvsp[-4].ttype) == boolean_true_node)
				      - ((yyvsp[-4].ttype) == boolean_false_node)); }
#line 2741 "c-parse.c"
    break;

  case 82: /* expr_no_commas: expr_no_commas '?' $@12 expr ':' $@13 expr_no_commas  */
#line 575 "c-parse.y"
                { skip_evaluation -= (yyvsp[-6].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-6].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2748 "c-parse.c"
    break;

  case 83: /* $@14: %empty  */
#line 578 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids omitting the middle term of a ?: expression");
		  /* Make sure first operand is calculated only once.  */
		  (yyvsp[0].ttype) = save_expr ((yyvsp[-1].ttype));
		  (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[0].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; }
#line 2759 "c-parse.c"
    break;

  case 84: /* expr_no_commas: expr_no_commas '?' $@14 ':' expr_no_commas  */
#line 585 "c-parse.y"
                { skip_evaluation -= (yyvsp[-4].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-4].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2766 "c-parse.c"
    break;

  case 85: /* expr_no_commas: expr_no_commas '=' expr_no_commas  */
#line 588 "c-parse.y"
                { (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), NOP_EXPR, (yyvsp[0].ttype));
		  C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), MODIFY_EXPR); }
#line 2773 "c-parse.c"
    break;

  case 86: /* expr_no_commas: expr_no_commas ASSIGN expr_no_commas  */
#line 591 "c-parse.y"
                { (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), (yyvsp[-1].code), (yyvsp[0].ttype));
		  /* This inhibits warnings in truthvalue_conversion.  */
		  C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), ERROR_MARK); }
#line 2781 "c-parse.c"
    break;

  case 87: /* primary: IDENTIFIER  */
#line 598 "c-parse.y"
                {
		  (yyval.ttype) = lastiddecl;
		  if (!(yyval.ttype) || (yyval.ttype) == error_mark_node)
		    {
		      if (yychar == YYEMPTY)
			yychar = YYLEX;
		      if (yychar == '(')
			{
			    {
			      /* Ordinary implicit function declaration.  */
			      (yyval.ttype) = implicitly_declare ((yyvsp[0].ttype));
			      assemble_external ((yyval.ttype));
			      TREE_USED ((yyval.ttype)) = 1;
			    }
			}
		      else if (current_function_decl == 0)
			{
			  error ("`%s' undeclared here (not in a function)",
				 IDENTIFIER_POINTER ((yyvsp[0].ttype)));
			  (yyval.ttype) = error_mark_node;
			}
		      else
			{
			    {
			      if (IDENTIFIER_GLOBAL_VALUE ((yyvsp[0].ttype)) != error_mark_node
				  || IDENTIFIER_ERROR_LOCUS ((yyvsp[0].ttype)) != current_function_decl)
				{
				  error ("`%s' undeclared (first use this function)",
					 IDENTIFIER_POINTER ((yyvsp[0].ttype)));

				  if (! undeclared_variable_notice)
				    {
				      error ("(Each undeclared identifier is reported only once");
				      error ("for each function it appears in.)");
				      undeclared_variable_notice = 1;
				    }
				}
			      (yyval.ttype) = error_mark_node;
			      /* Prevent repeated error messages.  */
			      IDENTIFIER_GLOBAL_VALUE ((yyvsp[0].ttype)) = error_mark_node;
			      IDENTIFIER_ERROR_LOCUS ((yyvsp[0].ttype)) = current_function_decl;
			    }
			}
		    }
		  else if (TREE_TYPE ((yyval.ttype)) == error_mark_node)
		    (yyval.ttype) = error_mark_node;
		  else if (C_DECL_ANTICIPATED ((yyval.ttype)))
		    {
		      /* The first time we see a build-in function used,
			 if it has not been declared.  */
		      C_DECL_ANTICIPATED ((yyval.ttype)) = 0;
		      if (yychar == YYEMPTY)
			yychar = YYLEX;
		      if (yychar == '(')
			{
			  /* Omit the implicit declaration we
			     would ordinarily do, so we don't lose
			     the actual built in type.
			     But print a diagnostic for the mismatch.  */
			    if (TREE_CODE ((yyval.ttype)) != FUNCTION_DECL)
			      error ("`%s' implicitly declared as function",
				     IDENTIFIER_POINTER (DECL_NAME ((yyval.ttype))));
			  else if ((TYPE_MODE (TREE_TYPE (TREE_TYPE ((yyval.ttype))))
				    != TYPE_MODE (integer_type_node))
				   && (TREE_TYPE (TREE_TYPE ((yyval.ttype)))
				       != void_type_node))
			    pedwarn ("type mismatch in implicit declaration for built-in function `%s'",
				     IDENTIFIER_POINTER (DECL_NAME ((yyval.ttype))));
			  /* If it really returns void, change that to int.  */
			  if (TREE_TYPE (TREE_TYPE ((yyval.ttype))) == void_type_node)
			    TREE_TYPE ((yyval.ttype))
			      = build_function_type (integer_type_node,
						     TYPE_ARG_TYPES (TREE_TYPE ((yyval.ttype))));
			}
		      else
			pedwarn ("built-in function `%s' used without declaration",
				 IDENTIFIER_POINTER (DECL_NAME ((yyval.ttype))));

		      /* Do what we would ordinarily do when a fn is used.  */
		      assemble_external ((yyval.ttype));
		      TREE_USED ((yyval.ttype)) = 1;
		    }
		  else
		    {
		      assemble_external ((yyval.ttype));
		      TREE_USED ((yyval.ttype)) = 1;
		    }

		  if (TREE_CODE ((yyval.ttype)) == CONST_DECL)
		    {
		      (yyval.ttype) = DECL_INITIAL ((yyval.ttype));
		      /* This is to prevent an enum whose value is 0
			 from being considered a null pointer constant.  */
		      (yyval.ttype) = build1 (NOP_EXPR, TREE_TYPE ((yyval.ttype)), (yyval.ttype));
		      TREE_CONSTANT ((yyval.ttype)) = 1;
		    }
		}
#line 2883 "c-parse.c"
    break;

  case 89: /* primary: string  */
#line 697 "c-parse.y"
                { (yyval.ttype) = combine_strings ((yyvsp[0].ttype)); }
#line 2889 "c-parse.c"
    break;

  case 90: /* primary: '(' expr ')'  */
#line 699 "c-parse.y"
                { char class = TREE_CODE_CLASS (TREE_CODE ((yyvsp[-1].ttype)));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE ((yyvsp[-1].ttype), ERROR_MARK);
		  (yyval.ttype) = (yyvsp[-1].ttype); }
#line 2899 "c-parse.c"
    break;

  case 91: /* primary: '(' error ')'  */
#line 705 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 2905 "c-parse.c"
    break;

  case 92: /* @15: %empty  */
#line 707 "c-parse.y"
                { if (current_function_decl == 0)
		    {
		      error ("braced-group within expression allowed only inside a function");
		      YYERROR;
		    }
		  /* We must force a BLOCK for this level
		     so that, if it is not expanded later,
		     there is a way to turn off the entire subtree of blocks
		     that are contained in it.  */
		  keep_next_level ();
		  push_iterator_stack ();
		  push_label_level ();
		  (yyval.ttype) = expand_start_stmt_expr (); }
#line 2923 "c-parse.c"
    break;

  case 93: /* primary: '(' @15 compstmt ')'  */
#line 721 "c-parse.y"
                { tree rtl_exp;
		  if (pedantic)
		    pedwarn ("ANSI C forbids braced-groups within expressions");
		  pop_iterator_stack ();
		  pop_label_level ();
		  rtl_exp = expand_end_stmt_expr ((yyvsp[-2].ttype));
		  /* The statements have side effects, so the group does.  */
		  TREE_SIDE_EFFECTS (rtl_exp) = 1;

		  if (TREE_CODE ((yyvsp[-1].ttype)) == BLOCK)
		    {
		      /* Make a BIND_EXPR for the BLOCK already made.  */
		      (yyval.ttype) = build (BIND_EXPR, TREE_TYPE (rtl_exp),
				  NULL_TREE, rtl_exp, (yyvsp[-1].ttype));
		      /* Remove the block from the tree at this point.
			 It gets put back at the proper place
			 when the BIND_EXPR is expanded.  */
		      delete_block ((yyvsp[-1].ttype));
		    }
		  else
		    (yyval.ttype) = (yyvsp[-1].ttype);
		}
#line 2950 "c-parse.c"
    break;

  case 94: /* primary: primary '(' exprlist ')'  */
#line 744 "c-parse.y"
                { (yyval.ttype) = build_function_call ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 2956 "c-parse.c"
    break;

  case 95: /* primary: primary '[' expr ']'  */
#line 746 "c-parse.y"
                { (yyval.ttype) = build_array_ref ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 2962 "c-parse.c"
    break;

  case 96: /* primary: primary '.' identifier  */
#line 748 "c-parse.y"
                {
		    (yyval.ttype) = build_component_ref ((yyvsp[-2].ttype), (yyvsp[0].ttype));
		}
#line 2970 "c-parse.c"
    break;

  case 97: /* primary: primary POINTSAT identifier  */
#line 752 "c-parse.y"
                {
                  tree expr = build_indirect_ref ((yyvsp[-2].ttype), "->");

                    (yyval.ttype) = build_component_ref (expr, (yyvsp[0].ttype));
		}
#line 2980 "c-parse.c"
    break;

  case 98: /* primary: primary PLUSPLUS  */
#line 758 "c-parse.y"
                { (yyval.ttype) = build_unary_op (POSTINCREMENT_EXPR, (yyvsp[-1].ttype), 0); }
#line 2986 "c-parse.c"
    break;

  case 99: /* primary: primary MINUSMINUS  */
#line 760 "c-parse.y"
                { (yyval.ttype) = build_unary_op (POSTDECREMENT_EXPR, (yyvsp[-1].ttype), 0); }
#line 2992 "c-parse.c"
    break;

  case 101: /* string: string STRING  */
#line 767 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 2998 "c-parse.c"
    break;

  case 104: /* old_style_parm_decls: datadecls ELLIPSIS  */
#line 776 "c-parse.y"
                { c_mark_varargs ();
		  if (pedantic)
		    pedwarn ("ANSI C does not permit use of `varargs.h'"); }
#line 3006 "c-parse.c"
    break;

  case 105: /* lineno_datadecl: save_filename save_lineno datadecl  */
#line 786 "c-parse.y"
                { }
#line 3012 "c-parse.c"
    break;

  case 110: /* datadecl: typed_declspecs_no_prefix_attr setspecs initdecls ';'  */
#line 802 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3021 "c-parse.c"
    break;

  case 111: /* datadecl: declmods_no_prefix_attr setspecs notype_initdecls ';'  */
#line 807 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);	
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3030 "c-parse.c"
    break;

  case 112: /* datadecl: typed_declspecs_no_prefix_attr ';'  */
#line 812 "c-parse.y"
                { shadow_tag_warned ((yyvsp[-1].ttype), 1);
		  pedwarn ("empty declaration"); }
#line 3037 "c-parse.c"
    break;

  case 113: /* datadecl: declmods_no_prefix_attr ';'  */
#line 815 "c-parse.y"
                { pedwarn ("empty declaration"); }
#line 3043 "c-parse.c"
    break;

  case 114: /* lineno_decl: save_filename save_lineno decl  */
#line 824 "c-parse.y"
                { }
#line 3049 "c-parse.c"
    break;

  case 119: /* setspecs: %empty  */
#line 839 "c-parse.y"
                { (yyval.itype) = suspend_momentary ();
		  pending_xref_error ();
		  declspec_stack = tree_cons (prefix_attributes,
					      current_declspecs,
					      declspec_stack);
		  split_specs_attrs ((yyvsp[0].ttype),
				     &current_declspecs, &prefix_attributes); }
#line 3061 "c-parse.c"
    break;

  case 120: /* setattrs: %empty  */
#line 850 "c-parse.y"
                { prefix_attributes = chainon (prefix_attributes, (yyvsp[0].ttype)); }
#line 3067 "c-parse.c"
    break;

  case 121: /* decl: typed_declspecs setspecs initdecls ';'  */
#line 855 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3076 "c-parse.c"
    break;

  case 122: /* decl: declmods setspecs notype_initdecls ';'  */
#line 860 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3085 "c-parse.c"
    break;

  case 123: /* decl: typed_declspecs setspecs nested_function  */
#line 865 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3094 "c-parse.c"
    break;

  case 124: /* decl: declmods setspecs notype_nested_function  */
#line 870 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3103 "c-parse.c"
    break;

  case 125: /* decl: typed_declspecs ';'  */
#line 875 "c-parse.y"
                { shadow_tag ((yyvsp[-1].ttype)); }
#line 3109 "c-parse.c"
    break;

  case 126: /* decl: declmods ';'  */
#line 877 "c-parse.y"
                { pedwarn ("empty declaration"); }
#line 3115 "c-parse.c"
    break;

  case 127: /* decl: extension decl  */
#line 879 "c-parse.y"
                { pedantic = (yyvsp[-1].itype); }
#line 3121 "c-parse.c"
    break;

  case 128: /* typed_declspecs: typespec reserved_declspecs  */
#line 889 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3127 "c-parse.c"
    break;

  case 129: /* typed_declspecs: declmods typespec reserved_declspecs  */
#line 891 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); }
#line 3133 "c-parse.c"
    break;

  case 130: /* reserved_declspecs: %empty  */
#line 895 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3139 "c-parse.c"
    break;

  case 131: /* reserved_declspecs: reserved_declspecs typespecqual_reserved  */
#line 897 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3145 "c-parse.c"
    break;

  case 132: /* reserved_declspecs: reserved_declspecs SCSPEC  */
#line 899 "c-parse.y"
                { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3154 "c-parse.c"
    break;

  case 133: /* reserved_declspecs: reserved_declspecs attributes  */
#line 904 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype)); }
#line 3160 "c-parse.c"
    break;

  case 134: /* typed_declspecs_no_prefix_attr: typespec reserved_declspecs_no_prefix_attr  */
#line 909 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3166 "c-parse.c"
    break;

  case 135: /* typed_declspecs_no_prefix_attr: declmods_no_prefix_attr typespec reserved_declspecs_no_prefix_attr  */
#line 911 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); }
#line 3172 "c-parse.c"
    break;

  case 136: /* reserved_declspecs_no_prefix_attr: %empty  */
#line 916 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3178 "c-parse.c"
    break;

  case 137: /* reserved_declspecs_no_prefix_attr: reserved_declspecs_no_prefix_attr typespecqual_reserved  */
#line 918 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3184 "c-parse.c"
    break;

  case 138: /* reserved_declspecs_no_prefix_attr: reserved_declspecs_no_prefix_attr SCSPEC  */
#line 920 "c-parse.y"
                { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3193 "c-parse.c"
    break;

  case 139: /* declmods: declmods_no_prefix_attr  */
#line 933 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3199 "c-parse.c"
    break;

  case 140: /* declmods: attributes  */
#line 935 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, NULL_TREE); }
#line 3205 "c-parse.c"
    break;

  case 141: /* declmods: declmods declmods_no_prefix_attr  */
#line 937 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3211 "c-parse.c"
    break;

  case 142: /* declmods: declmods attributes  */
#line 939 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype)); }
#line 3217 "c-parse.c"
    break;

  case 143: /* declmods_no_prefix_attr: TYPE_QUAL  */
#line 944 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3224 "c-parse.c"
    break;

  case 144: /* declmods_no_prefix_attr: SCSPEC  */
#line 947 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE); }
#line 3230 "c-parse.c"
    break;

  case 145: /* declmods_no_prefix_attr: declmods_no_prefix_attr TYPE_QUAL  */
#line 949 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3237 "c-parse.c"
    break;

  case 146: /* declmods_no_prefix_attr: declmods_no_prefix_attr SCSPEC  */
#line 952 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3247 "c-parse.c"
    break;

  case 147: /* typed_typespecs: typespec reserved_typespecquals  */
#line 966 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3253 "c-parse.c"
    break;

  case 148: /* typed_typespecs: nonempty_type_quals typespec reserved_typespecquals  */
#line 968 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); }
#line 3259 "c-parse.c"
    break;

  case 149: /* reserved_typespecquals: %empty  */
#line 972 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3265 "c-parse.c"
    break;

  case 150: /* reserved_typespecquals: reserved_typespecquals typespecqual_reserved  */
#line 974 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3271 "c-parse.c"
    break;

  case 153: /* typespec: TYPENAME  */
#line 984 "c-parse.y"
                { /* For a typedef name, record the meaning, not the name.
		     In case of `foo foo, bar;'.  */
		  (yyval.ttype) = lookup_name ((yyvsp[0].ttype)); }
#line 3279 "c-parse.c"
    break;

  case 154: /* typespec: TYPEOF '(' expr ')'  */
#line 988 "c-parse.y"
                { (yyval.ttype) = TREE_TYPE ((yyvsp[-1].ttype)); }
#line 3285 "c-parse.c"
    break;

  case 155: /* typespec: TYPEOF '(' typename ')'  */
#line 990 "c-parse.y"
                { (yyval.ttype) = groktypename ((yyvsp[-1].ttype)); }
#line 3291 "c-parse.c"
    break;

  case 163: /* maybeasm: %empty  */
#line 1012 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3297 "c-parse.c"
    break;

  case 164: /* maybeasm: ASM_KEYWORD '(' string ')'  */
#line 1014 "c-parse.y"
                { if (TREE_CHAIN ((yyvsp[-1].ttype))) (yyvsp[-1].ttype) = combine_strings ((yyvsp[-1].ttype));
		  (yyval.ttype) = (yyvsp[-1].ttype);
		}
#line 3305 "c-parse.c"
    break;

  case 165: /* @16: %empty  */
#line 1021 "c-parse.y"
                { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  (yyvsp[-1].ttype), prefix_attributes);
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); }
#line 3313 "c-parse.c"
    break;

  case 166: /* initdcl: declarator maybeasm maybe_attribute '=' @16 init  */
#line 1026 "c-parse.y"
                { finish_init ();
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); }
#line 3320 "c-parse.c"
    break;

  case 167: /* initdcl: declarator maybeasm maybe_attribute  */
#line 1029 "c-parse.y"
                { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       (yyvsp[0].ttype), prefix_attributes);
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); 
                }
#line 3329 "c-parse.c"
    break;

  case 168: /* @17: %empty  */
#line 1037 "c-parse.y"
                { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  (yyvsp[-1].ttype), prefix_attributes);
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); }
#line 3337 "c-parse.c"
    break;

  case 169: /* notype_initdcl: notype_declarator maybeasm maybe_attribute '=' @17 init  */
#line 1042 "c-parse.y"
                { finish_init ();
		  decl_attributes ((yyvsp[-1].ttype), (yyvsp[-3].ttype), prefix_attributes);
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); }
#line 3345 "c-parse.c"
    break;

  case 170: /* notype_initdcl: notype_declarator maybeasm maybe_attribute  */
#line 1046 "c-parse.y"
                { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       (yyvsp[0].ttype), prefix_attributes);
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); }
#line 3353 "c-parse.c"
    break;

  case 171: /* maybe_attribute: %empty  */
#line 1054 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3359 "c-parse.c"
    break;

  case 172: /* maybe_attribute: attributes  */
#line 1056 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3365 "c-parse.c"
    break;

  case 173: /* attributes: attribute  */
#line 1061 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3371 "c-parse.c"
    break;

  case 174: /* attributes: attributes attribute  */
#line 1063 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3377 "c-parse.c"
    break;

  case 175: /* attribute: ATTRIBUTE '(' '(' attribute_list ')' ')'  */
#line 1068 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype); }
#line 3383 "c-parse.c"
    break;

  case 176: /* attribute_list: attrib  */
#line 1073 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3389 "c-parse.c"
    break;

  case 177: /* attribute_list: attribute_list ',' attrib  */
#line 1075 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3395 "c-parse.c"
    break;

  case 178: /* attrib: %empty  */
#line 1080 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3401 "c-parse.c"
    break;

  case 179: /* attrib: any_word  */
#line 1082 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[0].ttype), NULL_TREE); }
#line 3407 "c-parse.c"
    break;

  case 180: /* attrib: any_word '(' IDENTIFIER ')'  */
#line 1084 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), build_tree_list (NULL_TREE, (yyvsp[-1].ttype))); }
#line 3413 "c-parse.c"
    break;

  case 181: /* attrib: any_word '(' IDENTIFIER ',' nonnull_exprlist ')'  */
#line 1086 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-5].ttype), tree_cons (NULL_TREE, (yyvsp[-3].ttype), (yyvsp[-1].ttype))); }
#line 3419 "c-parse.c"
    break;

  case 182: /* attrib: any_word '(' exprlist ')'  */
#line 1088 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3425 "c-parse.c"
    break;

  case 188: /* $@18: %empty  */
#line 1106 "c-parse.y"
                { really_start_incremental_init (NULL_TREE);
		  /* Note that the call to clear_momentary
		     is in process_init_element.  */
		  push_momentary (); }
#line 3434 "c-parse.c"
    break;

  case 189: /* init: '{' $@18 initlist_maybe_comma '}'  */
#line 1111 "c-parse.y"
                { (yyval.ttype) = pop_init_level (0);
		  if ((yyval.ttype) == error_mark_node
		      && ! (yychar == STRING || yychar == CONSTANT))
		    pop_momentary ();
		  else
		    pop_momentary_nofree (); }
#line 3445 "c-parse.c"
    break;

  case 190: /* init: error  */
#line 1119 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 3451 "c-parse.c"
    break;

  case 191: /* initlist_maybe_comma: %empty  */
#line 1125 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids empty initializer braces"); }
#line 3458 "c-parse.c"
    break;

  case 195: /* initelt: expr_no_commas  */
#line 1139 "c-parse.y"
                { process_init_element ((yyvsp[0].ttype)); }
#line 3464 "c-parse.c"
    break;

  case 196: /* $@19: %empty  */
#line 1141 "c-parse.y"
                { push_init_level (0); }
#line 3470 "c-parse.c"
    break;

  case 197: /* initelt: '{' $@19 initlist_maybe_comma '}'  */
#line 1143 "c-parse.y"
                { process_init_element (pop_init_level (0)); }
#line 3476 "c-parse.c"
    break;

  case 199: /* $@20: %empty  */
#line 1149 "c-parse.y"
                { set_init_index ((yyvsp[-4].ttype), (yyvsp[-2].ttype)); }
#line 3482 "c-parse.c"
    break;

  case 201: /* $@21: %empty  */
#line 1152 "c-parse.y"
                { set_init_index ((yyvsp[-2].ttype), NULL_TREE); }
#line 3488 "c-parse.c"
    break;

  case 203: /* $@22: %empty  */
#line 1155 "c-parse.y"
                { set_init_index ((yyvsp[-1].ttype), NULL_TREE); }
#line 3494 "c-parse.c"
    break;

  case 205: /* $@23: %empty  */
#line 1158 "c-parse.y"
                { set_init_label ((yyvsp[-1].ttype)); }
#line 3500 "c-parse.c"
    break;

  case 207: /* $@24: %empty  */
#line 1161 "c-parse.y"
                { set_init_label ((yyvsp[-1].ttype)); }
#line 3506 "c-parse.c"
    break;

  case 209: /* $@25: %empty  */
#line 1167 "c-parse.y"
                { push_c_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); }
#line 3519 "c-parse.c"
    break;

  case 210: /* $@26: %empty  */
#line 1176 "c-parse.y"
                { store_parm_decls (); }
#line 3525 "c-parse.c"
    break;

  case 211: /* nested_function: declarator $@25 old_style_parm_decls $@26 compstmt  */
#line 1184 "c-parse.y"
                { finish_function (1);
		  pop_c_function_context (); }
#line 3532 "c-parse.c"
    break;

  case 212: /* $@27: %empty  */
#line 1190 "c-parse.y"
                { push_c_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); }
#line 3545 "c-parse.c"
    break;

  case 213: /* $@28: %empty  */
#line 1199 "c-parse.y"
                { store_parm_decls (); }
#line 3551 "c-parse.c"
    break;

  case 214: /* notype_nested_function: notype_declarator $@27 old_style_parm_decls $@28 compstmt  */
#line 1207 "c-parse.y"
                { finish_function (1);
		  pop_c_function_context (); }
#line 3558 "c-parse.c"
    break;

  case 217: /* after_type_declarator: '(' after_type_declarator ')'  */
#line 1223 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-1].ttype); }
#line 3564 "c-parse.c"
    break;

  case 218: /* after_type_declarator: after_type_declarator '(' parmlist_or_identifiers  */
#line 1225 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 3570 "c-parse.c"
    break;

  case 219: /* after_type_declarator: after_type_declarator '[' expr ']'  */
#line 1230 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3576 "c-parse.c"
    break;

  case 220: /* after_type_declarator: after_type_declarator '[' ']'  */
#line 1232 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 3582 "c-parse.c"
    break;

  case 221: /* after_type_declarator: '*' type_quals after_type_declarator  */
#line 1234 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3588 "c-parse.c"
    break;

  case 222: /* after_type_declarator: attributes setattrs after_type_declarator  */
#line 1241 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3594 "c-parse.c"
    break;

  case 224: /* parm_declarator: parm_declarator '(' parmlist_or_identifiers  */
#line 1252 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 3600 "c-parse.c"
    break;

  case 225: /* parm_declarator: parm_declarator '[' expr ']'  */
#line 1257 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3606 "c-parse.c"
    break;

  case 226: /* parm_declarator: parm_declarator '[' ']'  */
#line 1259 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 3612 "c-parse.c"
    break;

  case 227: /* parm_declarator: '*' type_quals parm_declarator  */
#line 1261 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3618 "c-parse.c"
    break;

  case 228: /* parm_declarator: attributes setattrs parm_declarator  */
#line 1268 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3624 "c-parse.c"
    break;

  case 230: /* notype_declarator: notype_declarator '(' parmlist_or_identifiers  */
#line 1277 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 3630 "c-parse.c"
    break;

  case 231: /* notype_declarator: '(' notype_declarator ')'  */
#line 1282 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-1].ttype); }
#line 3636 "c-parse.c"
    break;

  case 232: /* notype_declarator: '*' type_quals notype_declarator  */
#line 1284 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3642 "c-parse.c"
    break;

  case 233: /* notype_declarator: notype_declarator '[' expr ']'  */
#line 1286 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3648 "c-parse.c"
    break;

  case 234: /* notype_declarator: notype_declarator '[' ']'  */
#line 1288 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 3654 "c-parse.c"
    break;

  case 235: /* notype_declarator: attributes setattrs notype_declarator  */
#line 1295 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3660 "c-parse.c"
    break;

  case 237: /* @29: %empty  */
#line 1301 "c-parse.y"
                { (yyval.ttype) = start_struct (RECORD_TYPE, (yyvsp[-1].ttype));
		  /* Start scope of tag before parsing components.  */
		}
#line 3668 "c-parse.c"
    break;

  case 238: /* structsp: STRUCT identifier '{' @29 component_decl_list '}' maybe_attribute  */
#line 1305 "c-parse.y"
                { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3674 "c-parse.c"
    break;

  case 239: /* structsp: STRUCT '{' component_decl_list '}' maybe_attribute  */
#line 1307 "c-parse.y"
                { (yyval.ttype) = finish_struct (start_struct (RECORD_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), (yyvsp[0].ttype));
		}
#line 3682 "c-parse.c"
    break;

  case 240: /* structsp: STRUCT identifier  */
#line 1311 "c-parse.y"
                { (yyval.ttype) = xref_tag (RECORD_TYPE, (yyvsp[0].ttype)); }
#line 3688 "c-parse.c"
    break;

  case 241: /* @30: %empty  */
#line 1313 "c-parse.y"
                { (yyval.ttype) = start_struct (UNION_TYPE, (yyvsp[-1].ttype)); }
#line 3694 "c-parse.c"
    break;

  case 242: /* structsp: UNION identifier '{' @30 component_decl_list '}' maybe_attribute  */
#line 1315 "c-parse.y"
                { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3700 "c-parse.c"
    break;

  case 243: /* structsp: UNION '{' component_decl_list '}' maybe_attribute  */
#line 1317 "c-parse.y"
                { (yyval.ttype) = finish_struct (start_struct (UNION_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), (yyvsp[0].ttype));
		}
#line 3708 "c-parse.c"
    break;

  case 244: /* structsp: UNION identifier  */
#line 1321 "c-parse.y"
                { (yyval.ttype) = xref_tag (UNION_TYPE, (yyvsp[0].ttype)); }
#line 3714 "c-parse.c"
    break;

  case 245: /* @31: %empty  */
#line 1323 "c-parse.y"
                { (yyvsp[0].itype) = suspend_momentary ();
		  (yyval.ttype) = start_enum ((yyvsp[-1].ttype)); }
#line 3721 "c-parse.c"
    break;

  case 246: /* structsp: ENUM identifier '{' @31 enumlist maybecomma_warn '}' maybe_attribute  */
#line 1326 "c-parse.y"
                { (yyval.ttype) = finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)), (yyvsp[0].ttype));
		  resume_momentary ((yyvsp[-5].itype)); }
#line 3728 "c-parse.c"
    break;

  case 247: /* @32: %empty  */
#line 1329 "c-parse.y"
                { (yyvsp[0].itype) = suspend_momentary ();
		  (yyval.ttype) = start_enum (NULL_TREE); }
#line 3735 "c-parse.c"
    break;

  case 248: /* structsp: ENUM '{' @32 enumlist maybecomma_warn '}' maybe_attribute  */
#line 1332 "c-parse.y"
                { (yyval.ttype) = finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)), (yyvsp[0].ttype));
		  resume_momentary ((yyvsp[-5].itype)); }
#line 3742 "c-parse.c"
    break;

  case 249: /* structsp: ENUM identifier  */
#line 1335 "c-parse.y"
                { (yyval.ttype) = xref_tag (ENUMERAL_TYPE, (yyvsp[0].ttype)); }
#line 3748 "c-parse.c"
    break;

  case 253: /* maybecomma_warn: ','  */
#line 1346 "c-parse.y"
                { if (pedantic) pedwarn ("comma at end of enumerator list"); }
#line 3754 "c-parse.c"
    break;

  case 254: /* component_decl_list: component_decl_list2  */
#line 1351 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3760 "c-parse.c"
    break;

  case 255: /* component_decl_list: component_decl_list2 component_decl  */
#line 1353 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		  pedwarn ("no semicolon at end of struct or union"); }
#line 3767 "c-parse.c"
    break;

  case 256: /* component_decl_list2: %empty  */
#line 1358 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3773 "c-parse.c"
    break;

  case 257: /* component_decl_list2: component_decl_list2 component_decl ';'  */
#line 1360 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[-1].ttype)); }
#line 3779 "c-parse.c"
    break;

  case 258: /* component_decl_list2: component_decl_list2 ';'  */
#line 1362 "c-parse.y"
                { if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified"); }
#line 3786 "c-parse.c"
    break;

  case 259: /* component_decl: typed_typespecs setspecs components  */
#line 1377 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3796 "c-parse.c"
    break;

  case 260: /* component_decl: typed_typespecs  */
#line 1383 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag((yyvsp[0].ttype));
		  (yyval.ttype) = NULL_TREE; }
#line 3805 "c-parse.c"
    break;

  case 261: /* component_decl: nonempty_type_quals setspecs components  */
#line 1388 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3815 "c-parse.c"
    break;

  case 262: /* component_decl: nonempty_type_quals  */
#line 1394 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag((yyvsp[0].ttype));
		  (yyval.ttype) = NULL_TREE; }
#line 3824 "c-parse.c"
    break;

  case 263: /* component_decl: error  */
#line 1399 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3830 "c-parse.c"
    break;

  case 264: /* component_decl: extension component_decl  */
#line 1401 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  pedantic = (yyvsp[-1].itype); }
#line 3837 "c-parse.c"
    break;

  case 266: /* components: components ',' component_declarator  */
#line 1408 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3843 "c-parse.c"
    break;

  case 267: /* component_declarator: save_filename save_lineno declarator maybe_attribute  */
#line 1413 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-3].filename), (yyvsp[-2].lineno), (yyvsp[-1].ttype), current_declspecs, NULL_TREE);
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); }
#line 3850 "c-parse.c"
    break;

  case 268: /* component_declarator: save_filename save_lineno declarator ':' expr_no_commas maybe_attribute  */
#line 1417 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-5].filename), (yyvsp[-4].lineno), (yyvsp[-3].ttype), current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); }
#line 3857 "c-parse.c"
    break;

  case 269: /* component_declarator: save_filename save_lineno ':' expr_no_commas maybe_attribute  */
#line 1420 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-4].filename), (yyvsp[-3].lineno), NULL_TREE, current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); }
#line 3864 "c-parse.c"
    break;

  case 271: /* enumlist: enumlist ',' enumerator  */
#line 1432 "c-parse.y"
                { if ((yyvsp[-2].ttype) == error_mark_node)
		    (yyval.ttype) = (yyvsp[-2].ttype);
		  else
		    (yyval.ttype) = chainon ((yyvsp[0].ttype), (yyvsp[-2].ttype)); }
#line 3873 "c-parse.c"
    break;

  case 272: /* enumlist: error  */
#line 1437 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 3879 "c-parse.c"
    break;

  case 273: /* enumerator: identifier  */
#line 1443 "c-parse.y"
                { (yyval.ttype) = build_enumerator ((yyvsp[0].ttype), NULL_TREE); }
#line 3885 "c-parse.c"
    break;

  case 274: /* enumerator: identifier '=' expr_no_commas  */
#line 1445 "c-parse.y"
                { (yyval.ttype) = build_enumerator ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3891 "c-parse.c"
    break;

  case 275: /* typename: typed_typespecs absdcl  */
#line 1450 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3897 "c-parse.c"
    break;

  case 276: /* typename: nonempty_type_quals absdcl  */
#line 1452 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3903 "c-parse.c"
    break;

  case 277: /* absdcl: %empty  */
#line 1457 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3909 "c-parse.c"
    break;

  case 279: /* nonempty_type_quals: TYPE_QUAL  */
#line 1463 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE); }
#line 3915 "c-parse.c"
    break;

  case 280: /* nonempty_type_quals: nonempty_type_quals TYPE_QUAL  */
#line 1465 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3921 "c-parse.c"
    break;

  case 281: /* type_quals: %empty  */
#line 1470 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3927 "c-parse.c"
    break;

  case 282: /* type_quals: type_quals TYPE_QUAL  */
#line 1472 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3933 "c-parse.c"
    break;

  case 283: /* absdcl1: '(' absdcl1 ')'  */
#line 1477 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-1].ttype); }
#line 3939 "c-parse.c"
    break;

  case 284: /* absdcl1: '*' type_quals absdcl1  */
#line 1480 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3945 "c-parse.c"
    break;

  case 285: /* absdcl1: '*' type_quals  */
#line 1482 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[0].ttype), NULL_TREE); }
#line 3951 "c-parse.c"
    break;

  case 286: /* absdcl1: absdcl1 '(' parmlist  */
#line 1484 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 3957 "c-parse.c"
    break;

  case 287: /* absdcl1: absdcl1 '[' expr ']'  */
#line 1486 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3963 "c-parse.c"
    break;

  case 288: /* absdcl1: absdcl1 '[' ']'  */
#line 1488 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 3969 "c-parse.c"
    break;

  case 289: /* absdcl1: '(' parmlist  */
#line 1490 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, NULL_TREE, (yyvsp[0].ttype), NULL_TREE); }
#line 3975 "c-parse.c"
    break;

  case 290: /* absdcl1: '[' expr ']'  */
#line 1492 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, NULL_TREE, (yyvsp[-1].ttype)); }
#line 3981 "c-parse.c"
    break;

  case 291: /* absdcl1: '[' ']'  */
#line 1494 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, NULL_TREE, NULL_TREE); }
#line 3987 "c-parse.c"
    break;

  case 292: /* stmts: lineno_stmt_or_labels  */
#line 1505 "c-parse.y"
                {
		  if (pedantic && (yyvsp[0].ends_in_label))
		    pedwarn ("ANSI C forbids label at end of compound statement");
		}
#line 3996 "c-parse.c"
    break;

  case 294: /* lineno_stmt_or_labels: lineno_stmt_or_labels lineno_stmt_or_label  */
#line 1514 "c-parse.y"
                { (yyval.ends_in_label) = (yyvsp[0].ends_in_label); }
#line 4002 "c-parse.c"
    break;

  case 295: /* lineno_stmt_or_labels: lineno_stmt_or_labels errstmt  */
#line 1516 "c-parse.y"
                { (yyval.ends_in_label) = 0; }
#line 4008 "c-parse.c"
    break;

  case 299: /* pushlevel: %empty  */
#line 1528 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  pushlevel (0);
		  clear_last_expr ();
		  push_momentary ();
		  expand_start_bindings (0);
		}
#line 4019 "c-parse.c"
    break;

  case 301: /* maybe_label_decls: label_decls  */
#line 1541 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids label declarations"); }
#line 4026 "c-parse.c"
    break;

  case 304: /* label_decl: LABEL identifiers_or_typenames ';'  */
#line 1552 "c-parse.y"
                { tree link;
		  for (link = (yyvsp[-1].ttype); link; link = TREE_CHAIN (link))
		    {
		      tree label = shadow_label (TREE_VALUE (link));
		      C_DECLARED_LABEL_FLAG (label) = 1;
		      declare_nonlocal_label (label);
		    }
		}
#line 4039 "c-parse.c"
    break;

  case 305: /* compstmt_or_error: compstmt  */
#line 1566 "c-parse.y"
                {}
#line 4045 "c-parse.c"
    break;

  case 307: /* compstmt_start: '{'  */
#line 1570 "c-parse.y"
                    { compstmt_count++; }
#line 4051 "c-parse.c"
    break;

  case 308: /* compstmt: compstmt_start '}'  */
#line 1573 "c-parse.y"
                { (yyval.ttype) = convert (void_type_node, integer_zero_node); }
#line 4057 "c-parse.c"
    break;

  case 309: /* compstmt: compstmt_start pushlevel maybe_label_decls decls xstmts '}'  */
#line 1575 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), 1, 0);
		  (yyval.ttype) = poplevel (1, 1, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4069 "c-parse.c"
    break;

  case 310: /* compstmt: compstmt_start pushlevel maybe_label_decls error '}'  */
#line 1583 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  (yyval.ttype) = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4081 "c-parse.c"
    break;

  case 311: /* compstmt: compstmt_start pushlevel maybe_label_decls stmts '}'  */
#line 1591 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  (yyval.ttype) = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4093 "c-parse.c"
    break;

  case 314: /* if_prefix: IF '(' expr ')'  */
#line 1611 "c-parse.y"
                { emit_line_note ((yyvsp[(-1) - (4)].filename), (yyvsp[-4].lineno));
		  c_expand_start_cond (truthvalue_conversion ((yyvsp[-1].ttype)), 0, 
				       compstmt_count);
		  (yyval.itype) = stmt_count;
		  if_stmt_file = (yyvsp[(-1) - (4)].filename);
		  if_stmt_line = (yyvsp[-4].lineno);
		  position_after_white_space (); }
#line 4105 "c-parse.c"
    break;

  case 315: /* $@33: %empty  */
#line 1625 "c-parse.y"
                { stmt_count++;
		  compstmt_count++;
		  emit_line_note ((yyvsp[(-1) - (1)].filename), (yyvsp[-1].lineno));
		  /* See comment in `while' alternative, above.  */
		  emit_nop ();
		  expand_start_loop_continue_elsewhere (1);
		  position_after_white_space (); }
#line 4117 "c-parse.c"
    break;

  case 316: /* do_stmt_start: DO $@33 lineno_labeled_stmt WHILE  */
#line 1633 "c-parse.y"
                { expand_loop_continue_here (); }
#line 4123 "c-parse.c"
    break;

  case 317: /* save_filename: %empty  */
#line 1637 "c-parse.y"
                { (yyval.filename) = input_filename; }
#line 4129 "c-parse.c"
    break;

  case 318: /* save_lineno: %empty  */
#line 1641 "c-parse.y"
                { (yyval.lineno) = lineno; }
#line 4135 "c-parse.c"
    break;

  case 319: /* lineno_labeled_stmt: save_filename save_lineno stmt  */
#line 1646 "c-parse.y"
                { }
#line 4141 "c-parse.c"
    break;

  case 320: /* lineno_labeled_stmt: save_filename save_lineno label lineno_labeled_stmt  */
#line 1651 "c-parse.y"
                { }
#line 4147 "c-parse.c"
    break;

  case 321: /* lineno_stmt_or_label: save_filename save_lineno stmt_or_label  */
#line 1656 "c-parse.y"
                { (yyval.ends_in_label) = (yyvsp[0].ends_in_label); }
#line 4153 "c-parse.c"
    break;

  case 322: /* stmt_or_label: stmt  */
#line 1661 "c-parse.y"
                { (yyval.ends_in_label) = 0; }
#line 4159 "c-parse.c"
    break;

  case 323: /* stmt_or_label: label  */
#line 1663 "c-parse.y"
                { (yyval.ends_in_label) = 1; }
#line 4165 "c-parse.c"
    break;

  case 324: /* stmt: compstmt  */
#line 1669 "c-parse.y"
                { stmt_count++; }
#line 4171 "c-parse.c"
    break;

  case 326: /* stmt: expr ';'  */
#line 1672 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (2)].filename), (yyvsp[-2].lineno));
/* It appears that this should not be done--that a non-lvalue array
   shouldn't get an error if the value isn't used.
   Section 3.2.2.1 says that an array lvalue gets converted to a pointer
   if it appears as a top-level expression,
   but says nothing about non-lvalue arrays.  */
#if 0
		  /* Call default_conversion to get an error
		     on referring to a register array if pedantic.  */
		  if (TREE_CODE (TREE_TYPE ((yyvsp[-1].ttype))) == ARRAY_TYPE
		      || TREE_CODE (TREE_TYPE ((yyvsp[-1].ttype))) == FUNCTION_TYPE)
		    (yyvsp[-1].ttype) = default_conversion ((yyvsp[-1].ttype));
#endif
		  iterator_expand ((yyvsp[-1].ttype));
		  clear_momentary (); }
#line 4192 "c-parse.c"
    break;

  case 327: /* $@34: %empty  */
#line 1689 "c-parse.y"
                { c_expand_start_else ();
		  (yyvsp[-1].itype) = stmt_count;
		  position_after_white_space (); }
#line 4200 "c-parse.c"
    break;

  case 328: /* stmt: simple_if ELSE $@34 lineno_labeled_stmt  */
#line 1693 "c-parse.y"
                { c_expand_end_cond ();
		  if (extra_warnings && stmt_count == (yyvsp[-3].itype))
		    warning ("empty body in an else-statement"); }
#line 4208 "c-parse.c"
    break;

  case 329: /* stmt: simple_if  */
#line 1697 "c-parse.y"
                { c_expand_end_cond ();
		  /* This warning is here instead of in simple_if, because we
		     do not want a warning if an empty if is followed by an
		     else statement.  Increment stmt_count so we don't
		     give a second error if this is a nested `if'.  */
		  if (extra_warnings && stmt_count++ == (yyvsp[0].itype))
		    warning_with_file_and_line (if_stmt_file, if_stmt_line,
						"empty body in an if-statement"); }
#line 4221 "c-parse.c"
    break;

  case 330: /* stmt: simple_if ELSE error  */
#line 1709 "c-parse.y"
                { c_expand_end_cond (); }
#line 4227 "c-parse.c"
    break;

  case 331: /* $@35: %empty  */
#line 1711 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (1)].filename), (yyvsp[-1].lineno));
		  /* The emit_nop used to come before emit_line_note,
		     but that made the nop seem like part of the preceding line.
		     And that was confusing when the preceding line was
		     inside of an if statement and was not really executed.
		     I think it ought to work to put the nop after the line number.
		     We will see.  --rms, July 15, 1991.  */
		  emit_nop (); }
#line 4241 "c-parse.c"
    break;

  case 332: /* $@36: %empty  */
#line 1721 "c-parse.y"
                { /* Don't start the loop till we have succeeded
		     in parsing the end test.  This is to make sure
		     that we end every loop we start.  */
		  expand_start_loop (1);
		  emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion ((yyvsp[-1].ttype)));
		  position_after_white_space (); }
#line 4254 "c-parse.c"
    break;

  case 333: /* stmt: WHILE $@35 '(' expr ')' $@36 lineno_labeled_stmt  */
#line 1730 "c-parse.y"
                { expand_end_loop (); }
#line 4260 "c-parse.c"
    break;

  case 334: /* stmt: do_stmt_start '(' expr ')' ';'  */
#line 1733 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion ((yyvsp[-2].ttype)));
		  expand_end_loop ();
		  clear_momentary (); }
#line 4270 "c-parse.c"
    break;

  case 335: /* stmt: do_stmt_start error  */
#line 1740 "c-parse.y"
                { expand_end_loop ();
		  clear_momentary (); }
#line 4277 "c-parse.c"
    break;

  case 336: /* $@37: %empty  */
#line 1744 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (4)].filename), (yyvsp[-4].lineno));
		  /* See comment in `while' alternative, above.  */
		  emit_nop ();
		  if ((yyvsp[-1].ttype)) c_expand_expr_stmt ((yyvsp[-1].ttype));
		  /* Next step is to call expand_start_loop_continue_elsewhere,
		     but wait till after we parse the entire for (...).
		     Otherwise, invalid input might cause us to call that
		     fn without calling expand_end_loop.  */
		}
#line 4292 "c-parse.c"
    break;

  case 337: /* @38: %empty  */
#line 1756 "c-parse.y"
                { (yyvsp[0].lineno) = lineno;
		  (yyval.filename) = input_filename; }
#line 4299 "c-parse.c"
    break;

  case 338: /* $@39: %empty  */
#line 1759 "c-parse.y"
                { 
		  /* Start the loop.  Doing this after parsing
		     all the expressions ensures we will end the loop.  */
		  expand_start_loop_continue_elsewhere (1);
		  /* Emit the end-test, with a line number.  */
		  emit_line_note ((yyvsp[-2].filename), (yyvsp[-3].lineno));
		  if ((yyvsp[-4].ttype))
		    expand_exit_loop_if_false (NULL_PTR,
					       truthvalue_conversion ((yyvsp[-4].ttype)));
		  /* Don't let the tree nodes for $9 be discarded by
		     clear_momentary during the parsing of the next stmt.  */
		  push_momentary ();
		  (yyvsp[-3].lineno) = lineno;
		  (yyvsp[-2].filename) = input_filename;
		  position_after_white_space (); }
#line 4319 "c-parse.c"
    break;

  case 339: /* stmt: FOR '(' xexpr ';' $@37 xexpr ';' @38 xexpr ')' $@39 lineno_labeled_stmt  */
#line 1775 "c-parse.y"
                { /* Emit the increment expression, with a line number.  */
		  emit_line_note ((yyvsp[-4].filename), (yyvsp[-5].lineno));
		  expand_loop_continue_here ();
		  if ((yyvsp[-3].ttype))
		    c_expand_expr_stmt ((yyvsp[-3].ttype));
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary ();
		  expand_end_loop (); }
#line 4334 "c-parse.c"
    break;

  case 340: /* $@40: %empty  */
#line 1786 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (4)].filename), (yyvsp[-4].lineno));
		  c_expand_start_case ((yyvsp[-1].ttype));
		  /* Don't let the tree nodes for $3 be discarded by
		     clear_momentary during the parsing of the next stmt.  */
		  push_momentary ();
		  position_after_white_space (); }
#line 4346 "c-parse.c"
    break;

  case 341: /* stmt: SWITCH '(' expr ')' $@40 lineno_labeled_stmt  */
#line 1794 "c-parse.y"
                { expand_end_case ((yyvsp[-3].ttype));
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4356 "c-parse.c"
    break;

  case 342: /* stmt: BREAK ';'  */
#line 1800 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (2)].filename), (yyvsp[-2].lineno));
		  if ( ! expand_exit_something ())
		    error ("break statement not within loop or switch"); }
#line 4365 "c-parse.c"
    break;

  case 343: /* stmt: CONTINUE ';'  */
#line 1805 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (2)].filename), (yyvsp[-2].lineno));
		  if (! expand_continue_loop (NULL_PTR))
		    error ("continue statement not within a loop"); }
#line 4374 "c-parse.c"
    break;

  case 344: /* stmt: RETURN ';'  */
#line 1810 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (2)].filename), (yyvsp[-2].lineno));
		  c_expand_return (NULL_TREE); }
#line 4382 "c-parse.c"
    break;

  case 345: /* stmt: RETURN expr ';'  */
#line 1814 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (3)].filename), (yyvsp[-3].lineno));
		  c_expand_return ((yyvsp[-1].ttype)); }
#line 4390 "c-parse.c"
    break;

  case 346: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ')' ';'  */
#line 1818 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (6)].filename), (yyvsp[-6].lineno));
		  STRIP_NOPS ((yyvsp[-2].ttype));
		  if ((TREE_CODE ((yyvsp[-2].ttype)) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND ((yyvsp[-2].ttype), 0)) == STRING_CST)
		      || TREE_CODE ((yyvsp[-2].ttype)) == STRING_CST)
		    expand_asm ((yyvsp[-2].ttype));
		  else
		    error ("argument of `asm' is not a constant string"); }
#line 4404 "c-parse.c"
    break;

  case 347: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ':' asm_operands ')' ';'  */
#line 1829 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (8)].filename), (yyvsp[-8].lineno));
		  c_expand_asm_operands ((yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE, NULL_TREE,
					 (yyvsp[-6].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); }
#line 4414 "c-parse.c"
    break;

  case 348: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ':' asm_operands ':' asm_operands ')' ';'  */
#line 1836 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (10)].filename), (yyvsp[-10].lineno));
		  c_expand_asm_operands ((yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE,
					 (yyvsp[-8].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); }
#line 4424 "c-parse.c"
    break;

  case 349: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ':' asm_operands ':' asm_operands ':' asm_clobbers ')' ';'  */
#line 1844 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (12)].filename), (yyvsp[-12].lineno));
		  c_expand_asm_operands ((yyvsp[-8].ttype), (yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype),
					 (yyvsp[-10].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); }
#line 4434 "c-parse.c"
    break;

  case 350: /* stmt: GOTO identifier ';'  */
#line 1850 "c-parse.y"
                { tree decl;
		  stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (3)].filename), (yyvsp[-3].lineno));
		  decl = lookup_label ((yyvsp[-1].ttype));
		  if (decl != 0)
		    {
		      TREE_USED (decl) = 1;
		      expand_goto (decl);
		    }
		}
#line 4449 "c-parse.c"
    break;

  case 351: /* stmt: GOTO '*' expr ';'  */
#line 1861 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids `goto *expr;'");
		  stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (4)].filename), (yyvsp[-4].lineno));
		  expand_computed_goto (convert (ptr_type_node, (yyvsp[-1].ttype))); }
#line 4459 "c-parse.c"
    break;

  case 354: /* @41: %empty  */
#line 1876 "c-parse.y"
          {
	    /* The value returned by this action is  */
	    /*      1 if everything is OK */ 
	    /*      0 in case of error or already bound iterator */

	    (yyval.itype) = 0;
	    if (TREE_CODE ((yyvsp[-1].ttype)) != VAR_DECL)
	      error ("invalid `for (ITERATOR)' syntax");
	    else if (! ITERATOR_P ((yyvsp[-1].ttype)))
	      error ("`%s' is not an iterator",
		     IDENTIFIER_POINTER (DECL_NAME ((yyvsp[-1].ttype))));
	    else if (ITERATOR_BOUND_P ((yyvsp[-1].ttype)))
	      error ("`for (%s)' inside expansion of same iterator",
		     IDENTIFIER_POINTER (DECL_NAME ((yyvsp[-1].ttype))));
	    else
	      {
		(yyval.itype) = 1;
		iterator_for_loop_start ((yyvsp[-1].ttype));
	      }
	  }
#line 4484 "c-parse.c"
    break;

  case 355: /* all_iter_stmt_simple: FOR '(' primary ')' @41 lineno_labeled_stmt  */
#line 1897 "c-parse.y"
          {
	    if ((yyvsp[-1].itype))
	      iterator_for_loop_end ((yyvsp[-3].ttype));
	  }
#line 4493 "c-parse.c"
    break;

  case 356: /* label: CASE expr_no_commas ':'  */
#line 1932 "c-parse.y"
                { register tree value = check_case_value ((yyvsp[-1].ttype));
		  register tree label
		    = build_decl (LABEL_DECL, NULL_TREE, NULL_TREE);

		  stmt_count++;

		  if (value != error_mark_node)
		    {
		      tree duplicate;
		      int success = pushcase (value, convert_and_check,
					      label, &duplicate);
		      if (success == 1)
			error ("case label not within a switch statement");
		      else if (success == 2)
			{
			  error ("duplicate case value");
			  error_with_decl (duplicate, "this is the first entry for that value");
			}
		      else if (success == 3)
			warning ("case value out of range");
		      else if (success == 5)
			error ("case label within scope of cleanup or variable array");
		    }
		  position_after_white_space (); }
#line 4522 "c-parse.c"
    break;

  case 357: /* label: CASE expr_no_commas ELLIPSIS expr_no_commas ':'  */
#line 1957 "c-parse.y"
                { register tree value1 = check_case_value ((yyvsp[-3].ttype));
		  register tree value2 = check_case_value ((yyvsp[-1].ttype));
		  register tree label
		    = build_decl (LABEL_DECL, NULL_TREE, NULL_TREE);

		  if (pedantic)
		    pedwarn ("ANSI C forbids case ranges");
		  stmt_count++;

		  if (value1 != error_mark_node && value2 != error_mark_node)
		    {
		      tree duplicate;
		      int success = pushcase_range (value1, value2,
						    convert_and_check, label,
						    &duplicate);
		      if (success == 1)
			error ("case label not within a switch statement");
		      else if (success == 2)
			{
			  error ("duplicate case value");
			  error_with_decl (duplicate, "this is the first entry for that value");
			}
		      else if (success == 3)
			warning ("case value out of range");
		      else if (success == 4)
			warning ("empty case range");
		      else if (success == 5)
			error ("case label within scope of cleanup or variable array");
		    }
		  position_after_white_space (); }
#line 4557 "c-parse.c"
    break;

  case 358: /* label: DEFAULT ':'  */
#line 1988 "c-parse.y"
                {
		  tree duplicate;
		  register tree label
		    = build_decl (LABEL_DECL, NULL_TREE, NULL_TREE);
		  int success = pushcase (NULL_TREE, 0, label, &duplicate);
		  stmt_count++;
		  if (success == 1)
		    error ("default label not within a switch statement");
		  else if (success == 2)
		    {
		      error ("multiple default labels in one switch");
		      error_with_decl (duplicate, "this is the first default label");
		    }
		  position_after_white_space (); }
#line 4576 "c-parse.c"
    break;

  case 359: /* label: identifier ':'  */
#line 2003 "c-parse.y"
                { tree label = define_label (input_filename, lineno, (yyvsp[-1].ttype));
		  stmt_count++;
		  emit_nop ();
		  if (label)
		    expand_label (label);
		  position_after_white_space (); }
#line 4587 "c-parse.c"
    break;

  case 360: /* maybe_type_qual: %empty  */
#line 2015 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  (yyval.ttype) = NULL_TREE; }
#line 4594 "c-parse.c"
    break;

  case 361: /* maybe_type_qual: TYPE_QUAL  */
#line 2018 "c-parse.y"
                { emit_line_note (input_filename, lineno); }
#line 4600 "c-parse.c"
    break;

  case 362: /* xexpr: %empty  */
#line 2023 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4606 "c-parse.c"
    break;

  case 364: /* asm_operands: %empty  */
#line 2030 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4612 "c-parse.c"
    break;

  case 367: /* nonnull_asm_operands: nonnull_asm_operands ',' asm_operand  */
#line 2037 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 4618 "c-parse.c"
    break;

  case 368: /* asm_operand: STRING '(' expr ')'  */
#line 2042 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 4624 "c-parse.c"
    break;

  case 369: /* asm_clobbers: string  */
#line 2047 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), NULL_TREE); }
#line 4630 "c-parse.c"
    break;

  case 370: /* asm_clobbers: asm_clobbers ',' string  */
#line 2049 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), (yyvsp[-2].ttype)); }
#line 4636 "c-parse.c"
    break;

  case 371: /* $@42: %empty  */
#line 2055 "c-parse.y"
                { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (0); }
#line 4644 "c-parse.c"
    break;

  case 372: /* parmlist: $@42 parmlist_1  */
#line 2059 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); }
#line 4652 "c-parse.c"
    break;

  case 374: /* $@43: %empty  */
#line 2067 "c-parse.y"
                { tree parm;
		  if (pedantic)
		    pedwarn ("ANSI C forbids forward parameter declarations");
		  /* Mark the forward decls as such.  */
		  for (parm = getdecls (); parm; parm = TREE_CHAIN (parm))
		    TREE_ASM_WRITTEN (parm) = 1;
		  clear_parm_order (); }
#line 4664 "c-parse.c"
    break;

  case 375: /* parmlist_1: parms ';' $@43 parmlist_1  */
#line 2075 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4670 "c-parse.c"
    break;

  case 376: /* parmlist_1: error ')'  */
#line 2077 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, NULL_TREE); }
#line 4676 "c-parse.c"
    break;

  case 377: /* parmlist_2: %empty  */
#line 2083 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0); }
#line 4682 "c-parse.c"
    break;

  case 378: /* parmlist_2: ELLIPSIS  */
#line 2085 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0);
		  /* Gcc used to allow this as an extension.  However, it does
		     not work for all targets, and thus has been disabled.
		     Also, since func (...) and func () are indistinguishable,
		     it caused problems with the code in expand_builtin which
		     tries to verify that BUILT_IN_NEXT_ARG is being used
		     correctly.  */
		  error ("ANSI C requires a named argument before `...'");
		}
#line 4696 "c-parse.c"
    break;

  case 379: /* parmlist_2: parms  */
#line 2095 "c-parse.y"
                { (yyval.ttype) = get_parm_info (1); }
#line 4702 "c-parse.c"
    break;

  case 380: /* parmlist_2: parms ',' ELLIPSIS  */
#line 2097 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0); }
#line 4708 "c-parse.c"
    break;

  case 381: /* parms: parm  */
#line 2102 "c-parse.y"
                { push_parm_decl ((yyvsp[0].ttype)); }
#line 4714 "c-parse.c"
    break;

  case 382: /* parms: parms ',' parm  */
#line 2104 "c-parse.y"
                { push_parm_decl ((yyvsp[0].ttype)); }
#line 4720 "c-parse.c"
    break;

  case 383: /* parm: typed_declspecs setspecs parm_declarator maybe_attribute  */
#line 2111 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 4733 "c-parse.c"
    break;

  case 384: /* parm: typed_declspecs setspecs notype_declarator maybe_attribute  */
#line 2120 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype))); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 4746 "c-parse.c"
    break;

  case 385: /* parm: typed_declspecs setspecs absdcl maybe_attribute  */
#line 2129 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 4759 "c-parse.c"
    break;

  case 386: /* parm: declmods setspecs notype_declarator maybe_attribute  */
#line 2138 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  }
#line 4772 "c-parse.c"
    break;

  case 387: /* parm: declmods setspecs absdcl maybe_attribute  */
#line 2148 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  }
#line 4785 "c-parse.c"
    break;

  case 388: /* $@44: %empty  */
#line 2162 "c-parse.y"
                { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (1); }
#line 4793 "c-parse.c"
    break;

  case 389: /* parmlist_or_identifiers: $@44 parmlist_or_identifiers_1  */
#line 2166 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); }
#line 4801 "c-parse.c"
    break;

  case 391: /* parmlist_or_identifiers_1: identifiers ')'  */
#line 2174 "c-parse.y"
                { tree t;
		  for (t = (yyvsp[-1].ttype); t; t = TREE_CHAIN (t))
		    if (TREE_VALUE (t) == NULL_TREE)
		      error ("`...' in old-style identifier list");
		  (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, (yyvsp[-1].ttype)); }
#line 4811 "c-parse.c"
    break;

  case 392: /* identifiers: IDENTIFIER  */
#line 2184 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 4817 "c-parse.c"
    break;

  case 393: /* identifiers: identifiers ',' IDENTIFIER  */
#line 2186 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 4823 "c-parse.c"
    break;

  case 394: /* identifiers_or_typenames: identifier  */
#line 2192 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 4829 "c-parse.c"
    break;

  case 395: /* identifiers_or_typenames: identifiers_or_typenames ',' identifier  */
#line 2194 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 4835 "c-parse.c"
    break;

  case 396: /* extension: EXTENSION  */
#line 2199 "c-parse.y"
                { (yyval.itype) = pedantic;
		  pedantic = 0; }
#line 4842 "c-parse.c"
    break;


#line 4846 "c-parse.c"

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

#line 2203 "c-parse.y"

