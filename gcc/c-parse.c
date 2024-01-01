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
#include "system.h"
#include <setjmp.h>

#include "tree.h"
#include "input.h"
#include "c-lex.h"
#include "c-tree.h"
#include "flags.h"
#include "output.h"
#include "toplev.h"

#ifdef MULTIBYTE_CHARS
#include <locale.h>
#endif


/* Since parsers are distinct for each language, put the language string
   definition here.  */
char *language_string = "GNU C";

/* Like YYERROR but do call yyerror.  */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

/* Cause the `yydebug' variable to be defined.  */
#define YYDEBUG 1

#define YYLEX yylex()

#line 102 "c-parse.c"

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
  YYSYMBOL_initval = 155,                  /* initval  */
  YYSYMBOL_156_20 = 156,                   /* $@20  */
  YYSYMBOL_designator_list = 157,          /* designator_list  */
  YYSYMBOL_designator = 158,               /* designator  */
  YYSYMBOL_nested_function = 159,          /* nested_function  */
  YYSYMBOL_160_21 = 160,                   /* $@21  */
  YYSYMBOL_161_22 = 161,                   /* $@22  */
  YYSYMBOL_notype_nested_function = 162,   /* notype_nested_function  */
  YYSYMBOL_163_23 = 163,                   /* $@23  */
  YYSYMBOL_164_24 = 164,                   /* $@24  */
  YYSYMBOL_declarator = 165,               /* declarator  */
  YYSYMBOL_after_type_declarator = 166,    /* after_type_declarator  */
  YYSYMBOL_parm_declarator = 167,          /* parm_declarator  */
  YYSYMBOL_notype_declarator = 168,        /* notype_declarator  */
  YYSYMBOL_struct_head = 169,              /* struct_head  */
  YYSYMBOL_union_head = 170,               /* union_head  */
  YYSYMBOL_enum_head = 171,                /* enum_head  */
  YYSYMBOL_structsp = 172,                 /* structsp  */
  YYSYMBOL_173_25 = 173,                   /* @25  */
  YYSYMBOL_174_26 = 174,                   /* @26  */
  YYSYMBOL_175_27 = 175,                   /* @27  */
  YYSYMBOL_176_28 = 176,                   /* @28  */
  YYSYMBOL_maybecomma = 177,               /* maybecomma  */
  YYSYMBOL_maybecomma_warn = 178,          /* maybecomma_warn  */
  YYSYMBOL_component_decl_list = 179,      /* component_decl_list  */
  YYSYMBOL_component_decl_list2 = 180,     /* component_decl_list2  */
  YYSYMBOL_component_decl = 181,           /* component_decl  */
  YYSYMBOL_components = 182,               /* components  */
  YYSYMBOL_component_declarator = 183,     /* component_declarator  */
  YYSYMBOL_enumlist = 184,                 /* enumlist  */
  YYSYMBOL_enumerator = 185,               /* enumerator  */
  YYSYMBOL_typename = 186,                 /* typename  */
  YYSYMBOL_absdcl = 187,                   /* absdcl  */
  YYSYMBOL_nonempty_type_quals = 188,      /* nonempty_type_quals  */
  YYSYMBOL_type_quals = 189,               /* type_quals  */
  YYSYMBOL_absdcl1 = 190,                  /* absdcl1  */
  YYSYMBOL_stmts = 191,                    /* stmts  */
  YYSYMBOL_lineno_stmt_or_labels = 192,    /* lineno_stmt_or_labels  */
  YYSYMBOL_xstmts = 193,                   /* xstmts  */
  YYSYMBOL_errstmt = 194,                  /* errstmt  */
  YYSYMBOL_pushlevel = 195,                /* pushlevel  */
  YYSYMBOL_maybe_label_decls = 196,        /* maybe_label_decls  */
  YYSYMBOL_label_decls = 197,              /* label_decls  */
  YYSYMBOL_label_decl = 198,               /* label_decl  */
  YYSYMBOL_compstmt_or_error = 199,        /* compstmt_or_error  */
  YYSYMBOL_compstmt_start = 200,           /* compstmt_start  */
  YYSYMBOL_compstmt = 201,                 /* compstmt  */
  YYSYMBOL_simple_if = 202,                /* simple_if  */
  YYSYMBOL_if_prefix = 203,                /* if_prefix  */
  YYSYMBOL_do_stmt_start = 204,            /* do_stmt_start  */
  YYSYMBOL_205_29 = 205,                   /* $@29  */
  YYSYMBOL_save_filename = 206,            /* save_filename  */
  YYSYMBOL_save_lineno = 207,              /* save_lineno  */
  YYSYMBOL_lineno_labeled_stmt = 208,      /* lineno_labeled_stmt  */
  YYSYMBOL_lineno_stmt_or_label = 209,     /* lineno_stmt_or_label  */
  YYSYMBOL_stmt_or_label = 210,            /* stmt_or_label  */
  YYSYMBOL_stmt = 211,                     /* stmt  */
  YYSYMBOL_212_30 = 212,                   /* $@30  */
  YYSYMBOL_213_31 = 213,                   /* $@31  */
  YYSYMBOL_214_32 = 214,                   /* $@32  */
  YYSYMBOL_215_33 = 215,                   /* $@33  */
  YYSYMBOL_216_34 = 216,                   /* @34  */
  YYSYMBOL_217_35 = 217,                   /* $@35  */
  YYSYMBOL_218_36 = 218,                   /* $@36  */
  YYSYMBOL_all_iter_stmt = 219,            /* all_iter_stmt  */
  YYSYMBOL_all_iter_stmt_simple = 220,     /* all_iter_stmt_simple  */
  YYSYMBOL_221_37 = 221,                   /* @37  */
  YYSYMBOL_label = 222,                    /* label  */
  YYSYMBOL_maybe_type_qual = 223,          /* maybe_type_qual  */
  YYSYMBOL_xexpr = 224,                    /* xexpr  */
  YYSYMBOL_asm_operands = 225,             /* asm_operands  */
  YYSYMBOL_nonnull_asm_operands = 226,     /* nonnull_asm_operands  */
  YYSYMBOL_asm_operand = 227,              /* asm_operand  */
  YYSYMBOL_asm_clobbers = 228,             /* asm_clobbers  */
  YYSYMBOL_parmlist = 229,                 /* parmlist  */
  YYSYMBOL_230_38 = 230,                   /* $@38  */
  YYSYMBOL_parmlist_1 = 231,               /* parmlist_1  */
  YYSYMBOL_232_39 = 232,                   /* $@39  */
  YYSYMBOL_parmlist_2 = 233,               /* parmlist_2  */
  YYSYMBOL_parms = 234,                    /* parms  */
  YYSYMBOL_parm = 235,                     /* parm  */
  YYSYMBOL_parmlist_or_identifiers = 236,  /* parmlist_or_identifiers  */
  YYSYMBOL_237_40 = 237,                   /* $@40  */
  YYSYMBOL_parmlist_or_identifiers_1 = 238, /* parmlist_or_identifiers_1  */
  YYSYMBOL_identifiers = 239,              /* identifiers  */
  YYSYMBOL_identifiers_or_typenames = 240, /* identifiers_or_typenames  */
  YYSYMBOL_extension = 241                 /* extension  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 206 "c-parse.y"

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
extern void yyprint			PROTO ((FILE *, int, YYSTYPE));

#line 405 "c-parse.c"


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
#define YYLAST   2426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  158
/* YYNRULES -- Number of rules.  */
#define YYNRULES  405
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  692

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
       0,   236,   236,   240,   255,   255,   256,   256,   260,   261,
     262,   270,   275,   285,   290,   295,   297,   299,   300,   301,
     308,   313,   307,   320,   326,   331,   325,   338,   344,   349,
     343,   356,   364,   365,   368,   370,   372,   374,   376,   378,
     380,   384,   390,   391,   395,   397,   402,   403,   406,   409,
     413,   441,   447,   450,   453,   456,   458,   463,   467,   471,
     472,   476,   475,   507,   508,   510,   512,   514,   516,   518,
     520,   522,   524,   526,   528,   530,   533,   532,   539,   538,
     545,   548,   544,   554,   553,   563,   571,   583,   681,   682,
     684,   690,   693,   692,   729,   731,   733,   737,   743,   745,
     751,   752,   757,   759,   760,   771,   776,   777,   778,   779,
     787,   792,   797,   800,   809,   814,   815,   816,   817,   825,
     836,   840,   845,   850,   855,   860,   862,   864,   874,   876,
     881,   882,   884,   889,   894,   896,   902,   903,   905,   918,
     920,   922,   924,   929,   932,   934,   937,   951,   953,   958,
     959,   967,   968,   969,   973,   975,   981,   982,   983,   987,
     988,   992,   993,   998,   999,  1007,  1006,  1014,  1023,  1022,
    1031,  1040,  1041,  1046,  1048,  1053,  1058,  1060,  1066,  1067,
    1069,  1071,  1073,  1081,  1082,  1083,  1084,  1090,  1092,  1091,
    1104,  1111,  1113,  1117,  1118,  1124,  1125,  1127,  1126,  1129,
    1134,  1133,  1137,  1139,  1143,  1144,  1148,  1153,  1155,  1161,
    1170,  1160,  1184,  1193,  1183,  1209,  1210,  1216,  1218,  1223,
    1225,  1227,  1234,  1236,  1245,  1250,  1255,  1257,  1259,  1266,
    1268,  1275,  1280,  1282,  1284,  1289,  1291,  1298,  1300,  1304,
    1306,  1311,  1313,  1318,  1320,  1326,  1325,  1331,  1335,  1338,
    1337,  1341,  1345,  1348,  1347,  1354,  1353,  1359,  1363,  1365,
    1368,  1370,  1376,  1378,  1384,  1385,  1387,  1402,  1408,  1413,
    1419,  1424,  1426,  1432,  1433,  1438,  1441,  1445,  1456,  1457,
    1462,  1468,  1470,  1475,  1477,  1483,  1484,  1488,  1490,  1496,
    1497,  1502,  1505,  1507,  1509,  1511,  1513,  1515,  1517,  1519,
    1523,  1532,  1540,  1541,  1543,  1547,  1549,  1552,  1556,  1566,
    1568,  1574,  1575,  1579,  1593,  1595,  1598,  1600,  1602,  1610,
    1618,  1630,  1634,  1638,  1653,  1652,  1665,  1669,  1673,  1678,
    1683,  1688,  1690,  1696,  1698,  1699,  1717,  1716,  1724,  1736,
    1739,  1749,  1738,  1759,  1767,  1772,  1784,  1787,  1770,  1814,
    1813,  1827,  1832,  1837,  1841,  1845,  1856,  1863,  1870,  1877,
    1888,  1894,  1898,  1904,  1903,  1959,  1990,  2021,  2036,  2052,
    2054,  2060,  2061,  2067,  2068,  2072,  2073,  2078,  2083,  2085,
    2092,  2092,  2102,  2104,  2103,  2113,  2120,  2121,  2131,  2133,
    2138,  2140,  2147,  2156,  2165,  2174,  2184,  2199,  2199,  2209,
    2210,  2220,  2222,  2228,  2230,  2235
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
  "initlist_maybe_comma", "initlist1", "initelt", "$@19", "initval",
  "$@20", "designator_list", "designator", "nested_function", "$@21",
  "$@22", "notype_nested_function", "$@23", "$@24", "declarator",
  "after_type_declarator", "parm_declarator", "notype_declarator",
  "struct_head", "union_head", "enum_head", "structsp", "@25", "@26",
  "@27", "@28", "maybecomma", "maybecomma_warn", "component_decl_list",
  "component_decl_list2", "component_decl", "components",
  "component_declarator", "enumlist", "enumerator", "typename", "absdcl",
  "nonempty_type_quals", "type_quals", "absdcl1", "stmts",
  "lineno_stmt_or_labels", "xstmts", "errstmt", "pushlevel",
  "maybe_label_decls", "label_decls", "label_decl", "compstmt_or_error",
  "compstmt_start", "compstmt", "simple_if", "if_prefix", "do_stmt_start",
  "$@29", "save_filename", "save_lineno", "lineno_labeled_stmt",
  "lineno_stmt_or_label", "stmt_or_label", "stmt", "$@30", "$@31", "$@32",
  "$@33", "@34", "$@35", "$@36", "all_iter_stmt", "all_iter_stmt_simple",
  "@37", "label", "maybe_type_qual", "xexpr", "asm_operands",
  "nonnull_asm_operands", "asm_operand", "asm_clobbers", "parmlist",
  "$@38", "parmlist_1", "$@39", "parmlist_2", "parms", "parm",
  "parmlist_or_identifiers", "$@40", "parmlist_or_identifiers_1",
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

#define YYPACT_NINF (-549)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-387)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,    79,   145,  2229,  -549,  2229,   254,  -549,  -549,  -549,
    -549,   100,   100,   100,   156,   159,   168,  -549,  -549,  -549,
    -549,  -549,   287,   152,  2257,    84,  -549,   100,  -549,    58,
      77,    89,  -549,  2229,  -549,  -549,  -549,   100,   100,   100,
    2091,  2025,   182,  -549,  -549,   287,   220,  -549,   100,  1355,
    -549,   516,  -549,   287,    84,  -549,   100,  -549,  -549,   589,
    -549,  -549,  -549,  -549,   173,  -549,   176,  -549,   187,  -549,
    -549,  -549,  -549,  -549,  -549,  2091,  2091,   375,  -549,  -549,
    -549,  2091,  -549,  -549,   721,  -549,  -549,  2091,   188,   197,
    -549,  2118,  2145,  -549,  2358,   961,   264,  2091,  -549,   207,
     291,  -549,   210,   578,   673,   216,    46,  -549,   516,   287,
    -549,   240,  -549,  1453,   544,   100,  -549,  -549,   516,   286,
    -549,   100,  1445,   293,   346,   299,  1417,   589,  -549,  -549,
    -549,  -549,   100,  -549,   224,   778,  -549,   226,  -549,   448,
    -549,  -549,  -549,  -549,  -549,   231,   234,   233,   244,  -549,
     249,  2091,   721,  -549,   721,  -549,  2091,  2091,   304,  -549,
    -549,  2091,  2091,  2091,  2091,  2091,  2091,  2091,  2091,  2091,
    2091,  2091,  2091,  -549,  -549,   375,   375,  2091,  2091,  -549,
    -549,  -549,  -549,   291,  1480,   100,  -549,   394,   691,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,    19,  -549,   281,
    -549,   346,  -549,  -549,   318,   346,   347,  -549,   611,  1535,
    -549,   278,   306,  -549,   275,    66,  -549,  -549,   322,   100,
     289,   125,  -549,   516,   516,  -549,   544,   100,  -549,  1562,
    -549,  -549,   544,   100,  -549,  -549,   404,   309,   321,  1033,
    -549,   100,  -549,  -549,   345,   311,  -549,   448,  -549,  -549,
    -549,   319,   324,  1914,  -549,  2358,   332,   360,  2358,  2358,
    2091,   395,  2091,  2091,  1587,  1668,  1882,   696,   747,   838,
     838,   579,   579,  -549,  -549,  -549,  -549,  -549,   363,   197,
     359,   352,   177,  -549,   871,  -549,   361,   291,  -549,  1617,
    -549,   691,   371,   673,  2172,    47,   384,  -549,  -549,  -549,
    1302,  -549,   388,   307,  -549,  -549,    99,  -549,  -549,  -549,
      49,  -549,  -549,  -549,   846,  -549,   293,  -549,  -549,   293,
    -549,   430,  -549,  -549,   386,  -549,  -549,  -549,  -549,  -549,
    -549,   398,  -549,   401,  2091,   375,   415,   311,  -549,   468,
    -549,  -549,  -549,  -549,  -549,   467,  2091,  2281,  1506,  -549,
    -549,   394,  -549,  -549,  -549,   394,  -549,  -549,   443,  -549,
    -549,   122,   451,  -549,  -549,   175,   131,  -549,  -549,   926,
    -549,   527,   233,  -549,  -549,  -549,   458,   953,  -549,  1291,
      49,  -549,  -549,    49,   463,  -549,  -549,   463,   100,   100,
    2358,  -549,   100,   485,   375,   814,   468,  -549,  1111,  -549,
    2374,  -549,  -549,  2091,  -549,  -549,  -549,   131,   100,    42,
     157,   100,  -549,   100,   157,   100,   871,  -549,  -549,  -549,
    -549,  -549,   516,  -549,   287,  -549,   547,  -549,  -549,  2358,
    -549,  -549,  1291,  -549,  -549,   454,  -549,  -549,  -549,   100,
    -549,   326,   409,   641,   487,   491,   894,  -549,  -549,  -549,
    -549,  -549,   532,   375,  2091,  -549,   536,  2358,   498,   499,
    -549,  -549,   302,  1231,  2091,   130,   706,   175,  -549,  1644,
    -549,  -549,  -549,   192,   131,  -549,  -549,  -549,   349,   351,
      59,   547,  -549,  -549,  1111,  -549,  -549,  2091,   164,  -549,
    -549,   375,  -549,  -549,  -549,  -549,   508,  -549,  -549,  -549,
    -549,  1780,  -549,  2268,  1111,  -549,  -549,  1171,  -549,  1346,
    -549,  -549,  2374,  -549,   450,   450,  -549,  1699,  -549,   505,
    -549,  -549,   511,  1801,  2091,  -549,  -549,  -549,  1860,   555,
     539,  -549,  -549,   541,   545,  2091,   569,   533,   543,  2038,
     113,   602,  -549,   584,   557,  -549,   558,  2261,  -549,   620,
     974,    53,  -549,  -549,  -549,  -549,  -549,  1971,  2091,  -549,
     562,  1346,  -549,  -549,  -549,  -549,  -549,  -549,  1801,  2091,
     598,  -549,  2091,  2091,  1724,  -549,  -549,  -549,  -549,   566,
    2091,   596,  -549,   623,   100,  -549,  -549,   516,  -549,   287,
    1054,  -549,  -549,  -549,  -549,  2091,  -549,  2313,  -549,  -549,
    -549,   607,  2091,   669,  -549,   413,   615,   612,  2091,  -549,
    -549,   616,  -549,  2091,  -549,   357,  -549,   147,   364,  -549,
     447,  -549,  -549,  1860,   618,  -549,  -549,   625,  -549,  -549,
    -549,  -549,  2331,  -549,    28,  -549,   544,  -549,   544,  -549,
    -549,  -549,   622,  -549,  -549,  2091,  -549,  -549,   693,   629,
    -549,  -549,  -549,  -549,  -549,  -549,   631,  -549,   652,    32,
     633,  -549,  -549,   233,   233,  -549,  -549,  2091,   693,   635,
     693,  -549,  -549,  2091,   639,   138,  -549,  -549,   650,  -549,
     347,   654,  -549,   264,   178,  -549,  -549,   661,   347,  -549,
    -549,   264
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,     0,     6,     0,     1,     0,     0,   153,   144,   151,
     143,   243,   239,   241,     0,     0,     0,   405,    19,     5,
       9,     8,     0,   119,   119,   139,   130,   140,   173,     0,
       0,     0,   152,     0,     7,    17,    18,   244,   240,   242,
       0,     0,     0,   238,   289,     0,     0,   161,   120,     0,
      16,     0,    15,     0,   141,   130,   142,   146,   145,   128,
     174,    32,    33,   264,   248,   264,   252,   255,   257,    11,
      87,    88,   100,    57,    58,     0,     0,     0,    34,    36,
      35,     0,    37,    38,     0,    39,    40,     0,     0,    41,
      59,     0,     0,    63,    44,    46,    89,     0,   287,     0,
     285,   149,     0,   285,   178,     0,     0,    12,     0,     0,
      31,     0,   397,     0,     0,   171,   223,   289,     0,     0,
     159,   120,     0,   215,   216,     0,     0,   129,   132,   156,
     157,   131,   133,   158,     0,     0,   245,     0,   249,     0,
     253,    55,    56,    50,    47,     0,     0,     0,     0,    49,
       0,     0,     0,    51,     0,    53,     0,     0,    80,    78,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,     0,     0,    42,     0,   101,
      48,   154,   289,   380,     0,   120,   283,   286,   147,   155,
     288,   149,   284,   184,   185,   186,   183,     0,   176,   179,
     290,   233,   232,   162,   163,   237,     0,   231,     0,     0,
     236,     0,     0,    29,     0,   326,   107,   327,   170,   172,
       0,     0,    14,     0,     0,    23,     0,   171,   397,     0,
      13,    27,     0,   171,   271,   266,   119,   263,   119,     0,
     264,   171,   264,   280,   281,   260,   278,     0,    91,    90,
     316,   308,     0,     0,    10,    45,     0,     0,    86,    85,
       0,     0,     0,     0,    74,    75,    73,    72,    71,    69,
      70,    64,    65,    66,    67,    68,    97,    96,     0,    43,
       0,   293,     0,   297,     0,   299,     0,     0,   380,     0,
     150,   148,     0,   178,    42,     0,     0,   401,   387,   119,
     119,   399,     0,   388,   390,   398,     0,   234,   235,   307,
       0,   109,   104,   108,     0,   168,   221,   217,   160,   222,
      21,   167,   218,   220,     0,    25,   247,   326,   265,   326,
     272,     0,   251,     0,     0,   261,     0,   260,   317,   309,
      93,    61,    60,    52,    54,     0,     0,    79,    77,    94,
      95,   292,   291,   381,   298,   300,   294,   296,     0,   175,
     177,    87,     0,   164,   385,   285,   285,   382,   383,     0,
     400,     0,     0,    30,   314,   105,   119,   119,   136,     0,
       0,   165,   219,     0,   267,   273,   327,   269,   171,   171,
     282,   279,   171,     0,     0,     0,   310,   311,     0,    81,
      84,   295,   180,     0,   182,   230,   289,   380,   120,   171,
     171,   171,   289,   120,   171,   171,     0,   389,   391,   402,
     315,   112,     0,   113,     0,   136,   134,   190,   188,   187,
     169,    22,     0,    26,   326,     0,   246,   250,   256,   171,
     403,     0,     0,     0,   326,     0,     0,   116,   327,   302,
     312,   203,    87,     0,     0,   200,     0,   202,     0,   258,
     193,   199,     0,     0,     0,     0,   293,     0,   397,     0,
     392,   393,   394,   293,     0,   395,   396,   384,     0,     0,
     163,   135,   138,   137,     0,   166,   274,     0,   171,   254,
     313,     0,   319,   118,   117,   306,     0,   320,   304,   327,
     303,     0,   206,     0,     0,   197,    62,     0,   192,     0,
     205,   196,    82,   181,   228,   229,   224,     0,   227,     0,
     110,   111,     0,   171,     0,   275,   404,   318,     0,   153,
       0,   340,   324,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   361,     0,     0,   114,   119,   119,   333,   338,
       0,     0,   330,   331,   334,   362,   332,     0,     0,   208,
       0,     0,   194,   195,   225,   226,   189,   277,   171,     0,
       0,   326,   371,     0,     0,   367,   351,   352,   353,     0,
       0,     0,   370,     0,   171,   335,   125,     0,   126,     0,
       0,   322,   327,   321,   344,     0,   127,     0,   201,   198,
     276,     0,     0,     0,   372,    46,     0,     0,     0,   365,
     354,     0,   359,     0,   368,     0,   123,   209,     0,   124,
     212,   339,   326,     0,     0,   207,   323,     0,   325,   363,
     345,   349,     0,   360,     0,   121,     0,   122,     0,   337,
     328,   326,     0,   341,   326,   371,   326,   366,   373,     0,
     210,   213,   329,   343,   326,   364,     0,   350,     0,     0,
     374,   375,   355,     0,     0,   342,   346,     0,   373,     0,
       0,   211,   214,   371,     0,     0,   356,   376,     0,   377,
       0,     0,   347,   378,     0,   357,   326,     0,     0,   348,
     358,   379
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -549,  -549,  -549,  -549,  -549,    82,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,   -26,  -549,   -40,   445,  -147,   426,
    -549,  -549,   -23,  -549,   253,  -549,  -549,  -549,  -549,  -549,
     179,  -549,  -185,  -201,   538,  -549,  -549,   314,  -549,    -5,
     -95,   202,     7,   708,  -549,   342,    10,   -16,   -86,   577,
       0,  -165,  -390,   -51,  -116,   -61,  -549,  -549,  -549,   -45,
      24,    72,  -549,   479,  -549,   341,  -549,  -292,  -549,   267,
    -549,  -395,  -549,  -549,   316,  -549,  -549,  -549,  -549,  -549,
    -549,   -44,   -55,    55,   -11,  -549,  -549,  -549,   -31,  -549,
    -549,  -549,  -549,  -549,   444,   -32,  -549,   548,   457,   355,
     560,   469,   -13,   -94,   -75,  -100,  -144,   339,  -549,  -549,
    -169,  -549,  -549,  -549,   406,  -140,  -549,  -127,  -549,  -549,
    -549,  -549,   -59,  -327,  -486,   362,  -549,   189,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,   190,  -549,
    -548,   137,  -549,   140,  -549,   528,  -549,  -246,  -549,  -549,
    -549,   455,  -206,  -549,  -549,  -549,  -549,    11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     3,     5,    19,    20,    21,   226,   380,
     232,   383,   114,   310,   456,    87,   146,   278,    89,    90,
      91,    92,    93,   398,    94,   263,   262,   260,   464,   261,
      95,   147,    96,   213,   214,   215,   375,   443,   444,    22,
     109,   545,   299,    59,   376,   426,   300,    25,   100,   188,
      26,   131,   119,    46,   115,   120,   432,    47,   379,   218,
     219,    28,   197,   198,   199,   430,   484,   458,   459,   460,
     561,   461,   504,   462,   463,   616,   636,   663,   619,   638,
     664,   204,   123,   409,   124,    29,    30,    31,    32,   240,
     242,   247,   139,   508,   336,   134,   135,   237,   384,   385,
     245,   246,   102,   186,   103,   105,   187,   445,   446,   496,
     216,   339,   395,   396,   397,   373,   251,   374,   549,   550,
     551,   571,   592,   314,   593,   449,   552,   553,   622,   570,
     654,   645,   673,   686,   646,   554,   555,   644,   556,   583,
     606,   659,   660,   661,   684,   283,   284,   301,   416,   302,
     303,   304,   207,   208,   305,   306,   441,    97
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    99,   125,    64,    66,    68,   227,   122,    54,   192,
      23,    49,    23,    24,    33,    24,    33,   220,    51,    53,
     252,   295,   322,   290,    55,   320,   224,    27,   133,    27,
     279,   325,   478,   137,   106,    37,    38,    39,   353,   282,
      23,   101,   126,    24,    33,   311,    48,   203,    56,   236,
     372,   143,   141,   142,   594,   217,   179,    27,   144,   435,
     238,    61,    62,   221,   149,    -2,   648,  -103,   511,    48,
     668,   148,    16,   211,   180,   121,   312,    48,   196,     4,
      61,    62,   281,   132,   101,   603,   111,    34,   227,    57,
     287,    58,    61,    62,   201,   292,   133,   656,   205,    60,
     293,   468,   469,   191,   649,   112,   113,   106,   669,    60,
      60,    60,   595,   244,   563,    69,    61,    62,   112,   113,
      60,   501,   202,   363,   185,   678,   290,   185,    60,    48,
      16,   250,   121,    48,    43,   101,   639,   351,   280,   256,
      63,   257,   121,   355,   286,    -3,   239,   279,  -103,   276,
     277,   132,   101,   236,   101,   652,   217,   133,   655,    65,
     657,    16,   318,   580,   238,   316,   599,   217,   665,   319,
     477,    67,   528,   217,   111,   370,   680,  -163,    43,   405,
     371,   412,   321,  -163,   228,   229,   144,    16,   326,   324,
     407,   184,   522,    60,    16,    43,   332,   615,   402,   200,
     689,   317,   524,   403,    60,    16,   513,   185,   331,   201,
     333,   151,   560,   205,   681,    40,   112,   113,    41,    43,
     345,   244,    16,   200,  -163,   406,   447,    42,  -163,    50,
     342,   327,    27,   329,   407,   184,   288,   289,   191,   101,
     431,   104,   412,   433,   121,   420,    16,   121,   121,   358,
     239,   407,   184,   352,   687,   136,   465,    60,   138,   688,
     133,   483,   516,   282,   150,   623,    44,   196,   386,   140,
     386,   411,   415,   179,   493,    45,   212,   498,   151,  -106,
    -106,  -106,  -106,   181,    54,  -106,   189,  -106,  -106,  -106,
      43,    60,    43,   116,   365,   366,   200,   107,   377,   206,
      55,   108,   233,  -106,   241,   185,   466,   248,    27,   244,
     249,   185,   473,   467,   378,   250,   483,    16,   474,    16,
     253,    16,   351,   355,    56,     7,   254,     9,   190,   351,
     355,    35,    36,    11,    12,    13,   448,    44,   509,   117,
     294,   182,   -83,   436,   437,   111,    45,   438,   118,    15,
     183,   184,   228,   229,   410,   414,    72,  -106,   315,   200,
     453,   308,   454,   222,   470,   471,   472,   223,   440,   475,
     476,   422,   424,   479,   548,   386,   230,   425,    61,    62,
     108,   334,    16,   309,   368,   448,   328,   499,   369,   408,
     413,   488,   335,    27,   489,   133,   106,   338,  -270,  -270,
     340,   548,   182,   490,   255,   112,   113,   491,   343,   258,
     259,   183,   184,   480,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   520,   502,   521,   519,
     223,   413,   108,   346,   635,   650,   344,   651,   223,   349,
      27,   637,   350,   525,   354,   108,   121,   359,    48,   243,
     133,    61,    62,   288,   289,   201,   205,    43,   116,   121,
     364,   544,   201,   205,   367,   526,   381,   173,   174,   382,
     175,   176,   177,   178,   111,   543,   388,  -163,   567,   389,
      60,  -268,  -268,  -163,    16,    60,   309,   492,   544,   629,
     408,   408,   487,   392,   144,   683,   548,   413,   413,   579,
     394,   227,   543,   691,   117,   399,   112,   113,   546,   468,
     469,   547,   557,   118,   581,   347,   348,   153,   155,    43,
     116,   514,   515,   600,  -163,    27,   401,   404,  -163,   601,
     419,    54,   604,   607,   180,   421,   671,   672,   618,   614,
     611,   587,   589,   617,   434,   212,    16,    55,  -326,  -326,
    -326,  -326,   482,   129,   130,   624,  -326,  -326,  -326,    11,
      12,    13,   627,   439,   546,  -305,   117,   547,   557,   497,
     -32,    56,  -326,   634,   505,   118,   506,   217,   620,   217,
     507,    27,     7,   544,     9,   190,   527,   390,   565,   566,
      11,    12,    13,   -33,   128,   129,   130,   543,   569,   400,
     572,    11,    12,    13,   573,   604,    15,   575,    16,   582,
     576,   121,   296,    48,   297,     7,     8,     9,    10,    16,
     577,   298,   584,    11,    12,    13,  -102,   674,   182,   170,
     171,   172,   429,   604,   585,   586,   590,   183,   184,    15,
     598,    16,   212,   610,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,   457,  -115,  -115,  -115,  -115,  -115,   602,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,   612,  -115,  -115,    61,    62,   193,   194,
     195,  -115,   613,   626,  -115,   429,   628,  -386,   631,  -115,
    -115,  -115,   630,   633,   642,  -115,  -115,   129,   130,   653,
    -115,   643,   658,    11,    12,    13,   662,   503,   666,    43,
     405,   667,   676,   200,   670,   679,   457,   512,  -115,  -115,
    -115,  -115,   145,  -115,    70,     7,   682,     9,    98,    71,
      72,   685,    73,    11,    12,    13,    16,   457,   690,   362,
     523,   165,   166,   167,   168,   169,   170,   171,   172,    15,
      74,   605,    17,   313,    75,    76,   406,   457,   494,   596,
     457,    77,   457,   127,    78,   407,   184,   481,   291,    79,
      80,    81,   360,   485,   562,    82,    83,   568,   510,   234,
      84,   393,     7,   495,     9,    98,   387,   330,   574,   486,
      11,    12,    13,   166,   167,   168,   169,   170,   171,   172,
      85,    86,   450,   -92,   391,   675,    15,   337,   500,    17,
     677,   597,   640,   641,   457,   442,   356,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,   418,  -326,  -326,  -326,  -326,  -326,
       0,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,     0,  -326,  -326,     0,
       7,     8,     9,    10,  -326,   235,  -262,  -326,    11,    12,
      13,   632,  -326,  -326,  -326,     0,     0,     0,  -326,  -326,
       0,     0,   296,  -326,    15,     7,     8,     9,    10,     0,
       0,   298,     0,    11,    12,    13,   168,   169,   170,   171,
     172,  -326,     0,  -326,  -326,   212,  -326,  -326,  -326,    15,
       0,    16,  -326,  -326,     0,  -326,     0,     0,     0,  -326,
       0,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,     0,  -326,     0,  -326,     0,  -326,  -326,     0,
       7,     8,     9,    10,  -326,     0,   417,  -326,    11,    12,
      13,     0,  -326,  -326,  -326,     0,     0,  -386,  -326,  -326,
       0,     0,     0,  -326,    15,     0,    16,     7,    57,     9,
      58,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,  -326,  -301,  -326,  -326,   591,  -326,  -326,  -326,     0,
       0,    15,  -326,  -326,     0,  -326,     0,     0,     0,  -326,
       0,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,     0,  -326,     0,  -326,     0,  -326,  -326,     0,
       0,     0,     0,     0,  -326,   173,   174,  -326,   175,   176,
     177,   178,  -326,  -326,  -326,     0,     0,     0,  -326,  -326,
     423,     0,     0,  -326,   234,     0,     0,     7,     0,     9,
      98,     0,     0,     0,     0,    11,    12,    13,     0,     0,
       0,  -326,     0,  -326,  -326,   621,  -326,  -336,  -336,     0,
       0,    15,  -336,  -336,    17,  -336,     0,     0,     0,  -336,
       0,  -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,  -336,
    -336,  -336,     0,  -336,     0,  -336,     0,  -336,  -336,     0,
       0,     0,     0,     0,  -336,     0,     0,  -336,     0,     0,
       0,     0,  -336,  -336,  -336,     0,     0,     0,  -336,  -336,
       0,     0,   451,  -336,   452,    62,     0,     0,     0,    71,
      72,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,  -336,     0,  -336,  -336,     0,  -336,     0,     0,     0,
      74,     0,    17,     0,    75,    76,     0,     0,     0,     0,
       0,    77,     0,     0,    78,     0,     0,     0,     0,    79,
      80,    81,     0,     0,     0,    82,    83,     0,     0,   453,
      84,   454,   451,     0,   452,    62,     0,     0,     0,    71,
      72,     0,    73,     0,     0,     0,     0,     0,     0,  -191,
      85,    86,     0,   455,     0,     0,     0,     0,     0,     0,
      74,     0,    17,     0,    75,    76,     0,     0,     0,     0,
       0,    77,     0,     0,    78,     0,     0,     0,     0,    79,
      80,    81,     0,     0,     0,    82,    83,     0,     0,   453,
      84,   454,   451,     0,    70,     0,     0,     0,     0,    71,
      72,     0,    73,     0,     0,     0,     0,     0,     0,  -259,
      85,    86,     0,   455,     0,     0,     0,     0,     0,     0,
      74,     0,    17,     0,    75,    76,     0,  -204,     0,     0,
       0,    77,     0,     0,    78,     0,     0,     0,     0,    79,
      80,    81,     0,     0,     0,    82,    83,     0,     0,  -204,
      84,  -204,   427,     0,    70,     0,     0,     0,     0,    71,
      72,     0,    73,     0,     0,     0,     7,     8,     9,    10,
      85,    86,     0,   455,    11,    12,    13,     0,     0,     0,
      74,     0,    17,     0,    75,    76,     0,     0,     0,     0,
      15,    77,    16,     0,    78,     0,     0,     0,     0,    79,
      80,    81,     0,     0,     0,    82,    83,   451,     0,    70,
      84,     0,     0,     0,    71,    72,   110,    73,     0,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,
      85,    86,     0,   428,     0,    74,     0,    17,     0,    75,
      76,     0,   111,   -28,     0,  -163,    77,     0,     0,    78,
       0,  -163,     0,     0,    79,    80,    81,     0,     0,     0,
      82,    83,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   113,     0,     0,   231,     0,
       0,   -24,   -24,   -24,   -24,    85,    86,     0,   455,   -24,
     -24,   -24,  -163,     0,     0,     0,  -163,   -28,     0,     0,
       0,     0,     0,     0,   111,   -24,   225,  -163,     0,   -20,
     -20,   -20,   -20,  -163,     0,     0,    70,   -20,   -20,   -20,
       0,    71,    72,     0,    73,     0,     0,     0,     0,     0,
       0,     0,   111,   -20,     0,  -163,   112,   113,     0,     0,
       0,  -163,    74,    70,    17,     0,    75,    76,    71,    72,
       0,    73,     0,    77,  -163,     0,    78,     0,  -163,   -24,
       0,    79,    80,   209,     0,     0,     0,    82,    83,    74,
       0,    17,    84,    75,    76,     0,     0,     0,     0,     0,
      77,     0,  -163,    78,     0,     0,  -163,   -20,    79,    80,
      81,     0,    85,    86,    82,    83,   210,     0,    70,    84,
       0,     0,     0,    71,    72,     0,    73,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,    85,
      86,     0,     0,   285,    74,    70,    17,     0,    75,    76,
      71,    72,     0,    73,     0,    77,     0,     0,    78,     0,
       0,     0,     0,    79,    80,    81,     0,     0,     0,    82,
      83,    74,     0,    17,    84,    75,    76,     0,     0,     0,
       0,     0,    77,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,     0,    85,    86,    82,    83,   307,     0,
      70,    84,     0,     0,     0,    71,    72,     0,    73,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
       0,    85,    86,     0,     0,   323,    74,    70,    17,     0,
      75,    76,    71,    72,     0,    73,     0,    77,     0,     0,
      78,     0,     0,     0,     0,    79,    80,    81,     0,     0,
       0,    82,    83,    74,     0,    17,    84,    75,    76,     0,
       0,     0,     0,     0,    77,     0,     0,    78,     0,     0,
       0,     0,    79,    80,   517,     0,    85,    86,    82,    83,
     357,     0,    70,    84,     0,     0,     0,    71,    72,     0,
      73,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,     0,     0,    85,    86,     0,     0,   518,    74,     0,
      17,     0,    75,    76,   608,     0,     0,     0,     0,    77,
       0,     0,    78,     0,     0,     0,     0,    79,    80,    81,
       0,     0,     0,    82,    83,     0,     0,     0,    84,   156,
     157,   158,   609,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,     0,    85,    86,
       0,     0,   564,   452,   529,     8,     9,    10,    71,    72,
       0,    73,    11,    12,    13,   530,     0,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,    15,    74,
      16,    17,     0,    75,    76,     0,     0,     0,     0,     0,
      77,     0,     0,    78,     0,     0,     0,     0,    79,    80,
      81,    16,     0,     0,    82,    83,   156,   157,   158,    84,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,     0,     0,     0,   542,     0,    85,
      86,     0,   250,   452,    62,     0,     0,     0,    71,    72,
       0,    73,     0,     0,     0,   530,     0,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,     0,    74,
       0,    17,     0,    75,    76,     0,     0,     0,     0,     0,
      77,     0,     0,    78,     0,     0,     0,     0,    79,    80,
      81,     0,     0,     0,    82,    83,     0,    70,     0,    84,
       0,     0,    71,    72,     0,    73,   164,   165,   166,   167,
     168,   169,   170,   171,   172,     0,     0,   542,     0,    85,
      86,     0,   250,    74,     0,    17,     0,    75,    76,     0,
       0,     0,     0,     0,    77,     0,     0,    78,     0,     0,
       0,     0,    79,    80,    81,     0,     0,     0,    82,    83,
       0,     0,     0,    84,    70,     7,     8,     9,    10,    71,
      72,     0,    73,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,   341,     0,     0,    15,
      74,    16,    17,     0,    75,    76,     0,     0,     0,     0,
       0,    77,     0,     0,    78,     0,     0,     0,     0,    79,
      80,    81,     0,     0,     0,    82,    83,     0,    70,     7,
      84,     9,    98,    71,    72,     0,    73,    11,    12,    13,
       0,    70,     0,     0,     0,     0,    71,    72,     0,    73,
      85,    86,     0,    15,    74,     0,    17,     0,    75,    76,
       0,     0,     0,     0,     0,    77,     0,    74,    78,    17,
       0,    75,    76,    79,    80,    81,     0,     0,    77,    82,
      83,    78,     0,     0,    84,     0,    79,    80,    81,     0,
       0,     0,    82,    83,    70,     0,     0,    84,     0,    71,
      72,     0,    73,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   578,     0,    85,    86,     0,
      74,    70,    17,     0,    75,    76,    71,    72,     0,    73,
       0,    77,     0,     0,    78,     0,     0,     0,     0,    79,
      80,    81,     0,     0,     0,    82,    83,    74,    70,    17,
      84,    75,    76,    71,    72,     0,    73,     0,    77,     0,
       0,    78,     0,     0,     0,     0,    79,    80,    81,     0,
      85,    86,    82,    83,    74,   361,    17,   152,    75,    76,
      71,    72,     0,    73,     0,    77,     0,     0,    78,     0,
       0,     0,     0,    79,    80,    81,     0,    85,    86,    82,
      83,    74,     0,    17,   154,    75,    76,     0,     0,     0,
       0,     0,    77,     0,     0,    78,     0,     0,     0,     0,
      79,    80,    81,     0,    85,    86,    82,    83,     0,     0,
       6,    84,  -119,     7,     8,     9,    10,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,    14,    15,     0,    16,
      17,     7,     8,     9,    10,     7,     8,     9,    10,    11,
      12,    13,     0,    11,    12,    13,     0,     0,   558,  -119,
       0,     0,     0,     0,     0,    15,     0,    16,  -119,    15,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   158,    18,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,    52,     0,     0,     0,   588,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   156,   157,
     158,   559,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   156,   157,   158,   647,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   625,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   158,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172
};

static const yytype_int16 yycheck[] =
{
      40,    41,    53,    29,    30,    31,   122,    51,    24,   103,
       3,    22,     5,     3,     3,     5,     5,   117,    23,    24,
     147,   206,   228,   188,    24,   226,   121,     3,    59,     5,
     177,   232,   422,    65,    45,    11,    12,    13,   284,   183,
      33,    41,    53,    33,    33,   214,    22,   108,    24,   135,
       1,    77,    75,    76,     1,   114,     9,    33,    81,   386,
     135,     3,     4,   118,    87,     0,    38,     1,   463,    45,
      38,    84,    30,   113,    97,    51,    10,    53,   104,     0,
       3,     4,   182,    59,    84,   571,    27,     5,   204,     5,
     185,     7,     3,     4,   105,    76,   127,   645,   109,    27,
      81,    59,    60,   103,    76,    59,    60,   118,    76,    37,
      38,    39,    59,   139,   509,    33,     3,     4,    59,    60,
      48,   448,    76,    76,   100,   673,   291,   103,    56,   105,
      30,    82,   108,   109,     3,   135,   622,   281,   178,   152,
      82,   154,   118,   287,   184,     0,   135,   294,    82,   175,
     176,   127,   152,   239,   154,   641,   215,   188,   644,    82,
     646,    30,   223,    50,   239,   220,   561,   226,   654,   224,
     416,    82,   499,   232,    27,    76,    38,    30,     3,     4,
      81,    50,   227,    36,    59,    60,   209,    30,   233,   229,
      59,    60,   484,   121,    30,     3,   241,   587,    76,     7,
     686,    76,    38,    81,   132,    30,    76,   183,   240,   220,
     242,    81,   504,   224,    76,    59,    59,    60,    59,     3,
     260,   247,    30,     7,    77,    50,   395,    59,    81,    77,
     253,   236,   208,   238,    59,    60,    59,    60,   238,   239,
     380,    59,    50,   383,   220,   372,    30,   223,   224,   289,
     239,    59,    60,    76,    76,    82,   403,   185,    82,    81,
     291,   426,   468,   407,    76,   592,    50,   293,   327,    82,
     329,   365,   366,     9,   443,    59,     1,   446,    81,     4,
       5,     6,     7,    76,   300,    10,    76,    12,    13,    14,
       3,   219,     3,     4,   299,   300,     7,    77,   314,    59,
     300,    81,    78,    28,    78,   281,   406,    76,   284,   335,
      76,   287,   412,   408,   314,    82,   481,    30,   413,    30,
      76,    30,   466,   467,   300,     4,    77,     6,     7,   473,
     474,    77,    78,    12,    13,    14,   395,    50,    36,    50,
      59,    50,    38,   388,   389,    27,    59,   392,    59,    28,
      59,    60,    59,    60,   365,   366,     9,    82,    36,     7,
      58,    83,    60,    77,   409,   410,   411,    81,   394,   414,
     415,   376,   377,   424,   501,   434,    77,   377,     3,     4,
      81,    36,    30,    77,    77,   444,    77,   446,    81,   365,
     366,   435,    81,   369,   439,   426,   407,    78,    77,    78,
      76,   528,    50,    77,   151,    59,    60,    81,    76,   156,
     157,    59,    60,   424,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    77,   453,    77,   469,
      81,   407,    81,    38,    77,   636,    76,   638,    81,    76,
     416,    77,    83,   488,    83,    81,   422,    76,   424,     1,
     481,     3,     4,    59,    60,   466,   467,     3,     4,   435,
      76,   501,   473,   474,    76,   491,    36,    54,    55,    83,
      57,    58,    59,    60,    27,   501,    78,    30,   523,    78,
     408,    77,    78,    36,    30,   413,    77,    78,   528,    76,
     466,   467,    38,    78,   517,   680,   623,   473,   474,   539,
      32,   617,   528,   688,    50,    38,    59,    60,   501,    59,
      60,   501,   501,    59,   540,   262,   263,    91,    92,     3,
       4,   466,   467,   568,    77,   501,    83,    76,    81,   569,
       3,   547,   572,   573,   557,    77,   663,   664,   589,   584,
     580,   546,   547,   587,    81,     1,    30,   547,     4,     5,
       6,     7,     5,     6,     7,   595,    12,    13,    14,    12,
      13,    14,   602,    78,   557,    78,    50,   557,   557,    78,
      38,   547,    28,   613,    38,    59,    78,   636,   589,   638,
      81,   557,     4,   623,     6,     7,    78,   334,    83,    78,
      12,    13,    14,    38,     5,     6,     7,   623,    59,   346,
      59,    12,    13,    14,    59,   645,    28,    38,    30,     7,
      77,   587,     1,   589,     3,     4,     5,     6,     7,    30,
      77,    10,    38,    12,    13,    14,    82,   667,    50,    50,
      51,    52,   379,   673,    77,    77,    16,    59,    60,    28,
      78,    30,     1,    77,     3,     4,     5,     6,     7,     8,
       9,   398,    11,    12,    13,    14,    15,    59,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    77,    33,    34,     3,     4,     5,     6,
       7,    40,    59,    76,    43,   432,    17,    76,    76,    48,
      49,    50,    77,    77,    76,    54,    55,     6,     7,    77,
      59,    76,     9,    12,    13,    14,    77,   454,    77,     3,
       4,    59,    77,     7,    81,    76,   463,   464,    77,    78,
      79,    80,     1,    82,     3,     4,    76,     6,     7,     8,
       9,    77,    11,    12,    13,    14,    30,   484,    77,   294,
     487,    45,    46,    47,    48,    49,    50,    51,    52,    28,
      29,   572,    31,   215,    33,    34,    50,   504,   444,   557,
     507,    40,   509,    55,    43,    59,    60,   425,   191,    48,
      49,    50,   293,   432,   507,    54,    55,   524,   462,     1,
      59,   337,     4,   444,     6,     7,   329,   239,   535,   434,
      12,    13,    14,    46,    47,    48,    49,    50,    51,    52,
      79,    80,   396,    82,   335,   668,    28,   247,   446,    31,
     670,   558,   623,   623,   561,     1,   288,     3,     4,     5,
       6,     7,     8,     9,   369,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    -1,
       4,     5,     6,     7,    40,    77,    78,    43,    12,    13,
      14,   608,    48,    49,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,     1,    59,    28,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    12,    13,    14,    48,    49,    50,    51,
      52,    77,    -1,    79,    80,     1,    82,     3,     4,    28,
      -1,    30,     8,     9,    -1,    11,    -1,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    -1,    31,    -1,    33,    34,    -1,
       4,     5,     6,     7,    40,    -1,    10,    43,    12,    13,
      14,    -1,    48,    49,    50,    -1,    -1,    76,    54,    55,
      -1,    -1,    -1,    59,    28,    -1,    30,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    77,    78,    79,    80,     1,    82,     3,     4,    -1,
      -1,    28,     8,     9,    -1,    11,    -1,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    54,    55,    43,    57,    58,
      59,    60,    48,    49,    50,    -1,    -1,    -1,    54,    55,
      77,    -1,    -1,    59,     1,    -1,    -1,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    77,    -1,    79,    80,     1,    82,     3,     4,    -1,
      -1,    28,     8,     9,    31,    11,    -1,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    49,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,     1,    59,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    80,    -1,    82,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,
      59,    60,     1,    -1,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,
      59,    60,     1,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,
      59,    60,     1,    -1,     3,    -1,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    -1,     4,     5,     6,     7,
      79,    80,    -1,    82,    12,    13,    14,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      28,    40,    30,    -1,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    -1,    -1,    -1,    54,    55,     1,    -1,     3,
      59,    -1,    -1,    -1,     8,     9,     1,    11,    -1,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      79,    80,    -1,    82,    -1,    29,    -1,    31,    -1,    33,
      34,    -1,    27,    28,    -1,    30,    40,    -1,    -1,    43,
      -1,    36,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,     1,    -1,
      -1,     4,     5,     6,     7,    79,    80,    -1,    82,    12,
      13,    14,    77,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,     1,    30,    -1,     4,
       5,     6,     7,    36,    -1,    -1,     3,    12,    13,    14,
      -1,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    59,    60,    -1,    -1,
      -1,    36,    29,     3,    31,    -1,    33,    34,     8,     9,
      -1,    11,    -1,    40,    77,    -1,    43,    -1,    81,    82,
      -1,    48,    49,    50,    -1,    -1,    -1,    54,    55,    29,
      -1,    31,    59,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    77,    43,    -1,    -1,    81,    82,    48,    49,
      50,    -1,    79,    80,    54,    55,    83,    -1,     3,    59,
      -1,    -1,    -1,     8,     9,    -1,    11,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    79,
      80,    -1,    -1,    83,    29,     3,    31,    -1,    33,    34,
       8,     9,    -1,    11,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,    54,
      55,    29,    -1,    31,    59,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    79,    80,    54,    55,    83,    -1,
       3,    59,    -1,    -1,    -1,     8,     9,    -1,    11,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    79,    80,    -1,    -1,    83,    29,     3,    31,    -1,
      33,    34,     8,     9,    -1,    11,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,
      -1,    54,    55,    29,    -1,    31,    59,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    49,    50,    -1,    79,    80,    54,    55,
      83,    -1,     3,    59,    -1,    -1,    -1,     8,     9,    -1,
      11,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    79,    80,    -1,    -1,    83,    29,    -1,
      31,    -1,    33,    34,    10,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    79,    80,
      -1,    -1,    83,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    30,    -1,    -1,    54,    55,    35,    36,    37,    59,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    77,    -1,    79,
      80,    -1,    82,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      -1,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    -1,    -1,    -1,    54,    55,    -1,     3,    -1,    59,
      -1,    -1,     8,     9,    -1,    11,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    77,    -1,    79,
      80,    -1,    82,    29,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    49,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    59,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    82,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    -1,     3,     4,
      59,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,
      79,    80,    -1,    28,    29,    -1,    31,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    29,    43,    31,
      -1,    33,    34,    48,    49,    50,    -1,    -1,    40,    54,
      55,    43,    -1,    -1,    59,    -1,    48,    49,    50,    -1,
      -1,    -1,    54,    55,     3,    -1,    -1,    59,    -1,     8,
       9,    -1,    11,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    80,    -1,
      29,     3,    31,    -1,    33,    34,     8,     9,    -1,    11,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    29,     3,    31,
      59,    33,    34,     8,     9,    -1,    11,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,
      79,    80,    54,    55,    29,     3,    31,    59,    33,    34,
       8,     9,    -1,    11,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    79,    80,    54,
      55,    29,    -1,    31,    59,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    79,    80,    54,    55,    -1,    -1,
       1,    59,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    27,    28,    -1,    30,
      31,     4,     5,     6,     7,     4,     5,     6,     7,    12,
      13,    14,    -1,    12,    13,    14,    -1,    -1,    10,    50,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    59,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    77,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    77,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    83,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    83,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    85,    86,    87,     0,    88,     1,     4,     5,     6,
       7,    12,    13,    14,    27,    28,    30,    31,    77,    89,
      90,    91,   123,   126,   130,   131,   134,   144,   145,   169,
     170,   171,   172,   241,    89,    77,    78,   144,   144,   144,
      59,    59,    59,     3,    50,    59,   137,   141,   144,   168,
      77,   123,    77,   123,   131,   134,   144,     5,     7,   127,
     145,     3,     4,    82,    98,    82,    98,    82,    98,    89,
       3,     8,     9,    11,    29,    33,    34,    40,    43,    48,
      49,    50,    54,    55,    59,    79,    80,    99,   100,   102,
     103,   104,   105,   106,   108,   114,   116,   241,     7,   100,
     132,   134,   186,   188,    59,   189,   168,    77,    81,   124,
       1,    27,    59,    60,    96,   138,     4,    50,    59,   136,
     139,   144,   165,   166,   168,   137,   168,   127,     5,     6,
       7,   135,   144,   172,   179,   180,    82,   179,    82,   176,
      82,   106,   106,    98,   106,     1,   100,   115,   186,   106,
      76,    81,    59,   103,    59,   103,    35,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    54,    55,    57,    58,    59,    60,     9,
     106,    76,    50,    59,    60,   144,   187,   190,   133,    76,
       7,   134,   187,     5,     6,     7,    98,   146,   147,   148,
       7,   168,    76,   139,   165,   168,    59,   236,   237,    50,
      83,   100,     1,   117,   118,   119,   194,   206,   143,   144,
     189,   166,    77,    81,   124,     1,    92,   138,    59,    60,
      77,     1,    94,    78,     1,    77,   132,   181,   188,   241,
     173,    78,   174,     1,    98,   184,   185,   175,    76,    76,
      82,   200,   201,    76,    77,   108,   186,   186,   108,   108,
     111,   113,   110,   109,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,    98,    98,   101,   102,
     100,   189,   190,   229,   230,    83,   100,   124,    59,    60,
     135,   133,    76,    81,    59,   116,     1,     3,    10,   126,
     130,   231,   233,   234,   235,   238,   239,    83,    83,    77,
      97,   194,    10,   118,   207,    36,   166,    76,   139,   166,
     117,   143,   236,    83,   100,   117,   143,   123,    77,   123,
     181,   179,   143,   179,    36,    81,   178,   184,    78,   195,
      76,    82,   106,    76,    76,   100,    38,   108,   108,    76,
      83,   190,    76,   231,    83,   190,   229,    83,   100,    76,
     147,     3,   101,    76,    76,   123,   123,    76,    77,    81,
      76,    81,     1,   199,   201,   120,   128,   131,   134,   142,
      93,    36,    83,    95,   182,   183,   206,   182,    78,    78,
     108,   185,    78,   178,    32,   196,   197,   198,   107,    38,
     108,    83,    76,    81,    76,     4,    50,    59,   144,   167,
     168,   187,    50,   144,   168,   187,   232,    10,   235,     3,
     201,    77,   123,    77,   123,   134,   129,     1,    82,   108,
     149,   199,   140,   199,    81,   207,   143,   143,   143,    78,
      98,   240,     1,   121,   122,   191,   192,   194,   206,   209,
     198,     1,     3,    58,    60,    82,    98,   108,   151,   152,
     153,   155,   157,   158,   112,   102,   189,   124,    59,    60,
     143,   143,   143,   189,   124,   143,   143,   231,   136,   137,
     168,   129,     5,   135,   150,   149,   183,    38,   165,   143,
      77,    81,    78,   194,   121,   191,   193,    78,   194,   206,
     209,   207,    98,   108,   156,    38,    78,    81,   177,    36,
     158,   155,   108,    76,   167,   167,   236,    50,    83,   100,
      77,    77,   151,   108,    38,   143,    98,    78,   207,     4,
      15,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    77,    98,   100,   125,   126,   130,   201,   202,
     203,   204,   210,   211,   219,   220,   222,   241,    10,    83,
     151,   154,   153,   155,    83,    83,    78,   143,   108,    59,
     213,   205,    59,    59,   108,    38,    77,    77,    77,   100,
      50,    98,     7,   223,    38,    77,    77,   123,    77,   123,
      16,     1,   206,   208,     1,    59,   125,   108,    78,   155,
     143,   100,    59,   208,   100,   114,   224,   100,    10,    38,
      77,   100,    77,    59,   143,   136,   159,   165,   137,   162,
     168,     1,   212,   207,   100,    83,    76,   100,    17,    76,
      77,    76,   108,    77,   100,    77,   160,    77,   163,   208,
     211,   222,    76,    76,   221,   215,   218,    38,    38,    76,
     117,   117,   208,    77,   214,   208,   224,   208,     9,   225,
     226,   227,    77,   161,   164,   208,    77,    59,    38,    76,
      81,   201,   201,   216,   100,   225,    77,   227,   224,    76,
      38,    76,    76,   116,   228,    77,   217,    76,    81,   208,
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
     149,   151,   151,   152,   152,   153,   153,   154,   153,   153,
     156,   155,   155,   155,   157,   157,   158,   158,   158,   160,
     161,   159,   163,   164,   162,   165,   165,   166,   166,   166,
     166,   166,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   168,   168,   168,   168,   168,   169,
     169,   170,   170,   171,   171,   173,   172,   172,   172,   174,
     172,   172,   172,   175,   172,   176,   172,   172,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   181,   181,   181,
     181,   181,   181,   182,   182,   183,   183,   183,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   191,   192,   192,   192,   193,   193,   194,   195,   196,
     196,   197,   197,   198,   199,   199,   200,   201,   201,   201,
     201,   202,   202,   203,   205,   204,   206,   207,   208,   208,
     209,   210,   210,   211,   211,   211,   212,   211,   211,   211,
     213,   214,   211,   211,   211,   215,   216,   217,   211,   218,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   219,   221,   220,   222,   222,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   228,   228,
     230,   229,   231,   232,   231,   231,   233,   233,   233,   233,
     234,   234,   235,   235,   235,   235,   235,   237,   236,   238,
     238,   239,   239,   240,   240,   241
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
       1,     0,     2,     1,     3,     3,     2,     0,     4,     1,
       0,     4,     1,     1,     1,     2,     2,     5,     3,     0,
       0,     5,     0,     0,     5,     1,     1,     3,     3,     4,
       3,     3,     3,     1,     3,     4,     4,     3,     3,     3,
       1,     3,     3,     3,     4,     4,     3,     3,     1,     1,
       2,     1,     2,     1,     2,     0,     7,     5,     2,     0,
       7,     5,     2,     0,     8,     0,     7,     2,     0,     1,
       0,     1,     1,     2,     0,     3,     2,     3,     1,     3,
       1,     1,     2,     1,     3,     4,     6,     5,     1,     3,
       1,     1,     3,     2,     2,     0,     1,     1,     2,     0,
       2,     3,     3,     2,     3,     4,     3,     2,     3,     2,
       3,     1,     1,     2,     2,     0,     1,     2,     0,     0,
       1,     1,     2,     3,     1,     2,     1,     2,     6,     5,
       5,     2,     2,     4,     0,     4,     0,     0,     3,     4,
       3,     1,     1,     1,     1,     2,     0,     4,     1,     3,
       0,     0,     7,     5,     2,     0,     0,     0,    12,     0,
       6,     2,     2,     2,     3,     6,     8,    10,    12,     3,
       4,     1,     1,     0,     6,     3,     5,     2,     3,     0,
       1,     0,     1,     0,     1,     1,     3,     4,     1,     3,
       0,     2,     2,     0,     4,     2,     0,     1,     1,     3,
       1,     3,     4,     4,     4,     4,     4,     0,     2,     1,
       2,     1,     3,     1,     3,     1
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
#line 236 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids an empty source file");
		  finish_file ();
		}
#line 2254 "c-parse.c"
    break;

  case 3: /* program: extdefs  */
#line 241 "c-parse.y"
                {
		  /* In case there were missing closebraces,
		     get us back to the global binding level.  */
		  while (! global_bindings_p ())
		    poplevel (0, 0, 0);
		  finish_file ();
		}
#line 2266 "c-parse.c"
    break;

  case 4: /* @1: %empty  */
#line 255 "c-parse.y"
        {(yyval.ttype) = NULL_TREE; }
#line 2272 "c-parse.c"
    break;

  case 6: /* @2: %empty  */
#line 256 "c-parse.y"
                  {(yyval.ttype) = NULL_TREE; }
#line 2278 "c-parse.c"
    break;

  case 10: /* extdef: ASM_KEYWORD '(' expr ')' ';'  */
#line 263 "c-parse.y"
                { STRIP_NOPS ((yyvsp[-2].ttype));
		  if ((TREE_CODE ((yyvsp[-2].ttype)) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND ((yyvsp[-2].ttype), 0)) == STRING_CST)
		      || TREE_CODE ((yyvsp[-2].ttype)) == STRING_CST)
		    assemble_asm ((yyvsp[-2].ttype));
		  else
		    error ("argument of `asm' is not a constant string"); }
#line 2290 "c-parse.c"
    break;

  case 11: /* extdef: extension extdef  */
#line 271 "c-parse.y"
                { pedantic = (yyvsp[-1].itype); }
#line 2296 "c-parse.c"
    break;

  case 12: /* datadef: setspecs notype_initdecls ';'  */
#line 276 "c-parse.y"
                { if (pedantic)
		    error ("ANSI C forbids data definition with no type or storage class");
		  else if (!flag_traditional)
		    warning ("data definition has no type or storage class"); 

		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2310 "c-parse.c"
    break;

  case 13: /* datadef: declmods setspecs notype_initdecls ';'  */
#line 286 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2319 "c-parse.c"
    break;

  case 14: /* datadef: typed_declspecs setspecs initdecls ';'  */
#line 291 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  }
#line 2328 "c-parse.c"
    break;

  case 15: /* datadef: declmods ';'  */
#line 296 "c-parse.y"
          { pedwarn ("empty declaration"); }
#line 2334 "c-parse.c"
    break;

  case 16: /* datadef: typed_declspecs ';'  */
#line 298 "c-parse.y"
          { shadow_tag ((yyvsp[-1].ttype)); }
#line 2340 "c-parse.c"
    break;

  case 19: /* datadef: ';'  */
#line 302 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C does not allow extra `;' outside of a function"); }
#line 2347 "c-parse.c"
    break;

  case 20: /* $@3: %empty  */
#line 308 "c-parse.y"
                { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); }
#line 2356 "c-parse.c"
    break;

  case 21: /* $@4: %empty  */
#line 313 "c-parse.y"
                { store_parm_decls (); }
#line 2362 "c-parse.c"
    break;

  case 22: /* fndef: typed_declspecs setspecs declarator $@3 old_style_parm_decls $@4 compstmt_or_error  */
#line 315 "c-parse.y"
                { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); }
#line 2372 "c-parse.c"
    break;

  case 23: /* fndef: typed_declspecs setspecs declarator error  */
#line 321 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2381 "c-parse.c"
    break;

  case 24: /* $@5: %empty  */
#line 326 "c-parse.y"
                { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); }
#line 2390 "c-parse.c"
    break;

  case 25: /* $@6: %empty  */
#line 331 "c-parse.y"
                { store_parm_decls (); }
#line 2396 "c-parse.c"
    break;

  case 26: /* fndef: declmods setspecs notype_declarator $@5 old_style_parm_decls $@6 compstmt_or_error  */
#line 333 "c-parse.y"
                { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); }
#line 2406 "c-parse.c"
    break;

  case 27: /* fndef: declmods setspecs notype_declarator error  */
#line 339 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2415 "c-parse.c"
    break;

  case 28: /* $@7: %empty  */
#line 344 "c-parse.y"
                { if (! start_function (NULL_TREE, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 0))
		    YYERROR1;
		  reinit_parse_for_function (); }
#line 2424 "c-parse.c"
    break;

  case 29: /* $@8: %empty  */
#line 349 "c-parse.y"
                { store_parm_decls (); }
#line 2430 "c-parse.c"
    break;

  case 30: /* fndef: setspecs notype_declarator $@7 old_style_parm_decls $@8 compstmt_or_error  */
#line 351 "c-parse.y"
                { finish_function (0); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-5].itype)); }
#line 2440 "c-parse.c"
    break;

  case 31: /* fndef: setspecs notype_declarator error  */
#line 357 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 2449 "c-parse.c"
    break;

  case 34: /* unop: '&'  */
#line 369 "c-parse.y"
                { (yyval.code) = ADDR_EXPR; }
#line 2455 "c-parse.c"
    break;

  case 35: /* unop: '-'  */
#line 371 "c-parse.y"
                { (yyval.code) = NEGATE_EXPR; }
#line 2461 "c-parse.c"
    break;

  case 36: /* unop: '+'  */
#line 373 "c-parse.y"
                { (yyval.code) = CONVERT_EXPR; }
#line 2467 "c-parse.c"
    break;

  case 37: /* unop: PLUSPLUS  */
#line 375 "c-parse.y"
                { (yyval.code) = PREINCREMENT_EXPR; }
#line 2473 "c-parse.c"
    break;

  case 38: /* unop: MINUSMINUS  */
#line 377 "c-parse.y"
                { (yyval.code) = PREDECREMENT_EXPR; }
#line 2479 "c-parse.c"
    break;

  case 39: /* unop: '~'  */
#line 379 "c-parse.y"
                { (yyval.code) = BIT_NOT_EXPR; }
#line 2485 "c-parse.c"
    break;

  case 40: /* unop: '!'  */
#line 381 "c-parse.y"
                { (yyval.code) = TRUTH_NOT_EXPR; }
#line 2491 "c-parse.c"
    break;

  case 41: /* expr: nonnull_exprlist  */
#line 385 "c-parse.y"
                { (yyval.ttype) = build_compound_expr ((yyvsp[0].ttype)); }
#line 2497 "c-parse.c"
    break;

  case 42: /* exprlist: %empty  */
#line 390 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 2503 "c-parse.c"
    break;

  case 44: /* nonnull_exprlist: expr_no_commas  */
#line 396 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 2509 "c-parse.c"
    break;

  case 45: /* nonnull_exprlist: nonnull_exprlist ',' expr_no_commas  */
#line 398 "c-parse.y"
                { chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 2515 "c-parse.c"
    break;

  case 47: /* unary_expr: '*' cast_expr  */
#line 404 "c-parse.y"
                { (yyval.ttype) = build_indirect_ref ((yyvsp[0].ttype), "unary *"); }
#line 2521 "c-parse.c"
    break;

  case 48: /* unary_expr: extension cast_expr  */
#line 407 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  pedantic = (yyvsp[-1].itype); }
#line 2528 "c-parse.c"
    break;

  case 49: /* unary_expr: unop cast_expr  */
#line 410 "c-parse.y"
                { (yyval.ttype) = build_unary_op ((yyvsp[-1].code), (yyvsp[0].ttype), 0);
		  overflow_warning ((yyval.ttype)); }
#line 2535 "c-parse.c"
    break;

  case 50: /* unary_expr: ANDAND identifier  */
#line 414 "c-parse.y"
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
#line 2552 "c-parse.c"
    break;

  case 51: /* unary_expr: sizeof unary_expr  */
#line 442 "c-parse.y"
                { skip_evaluation--;
		  if (TREE_CODE ((yyvsp[0].ttype)) == COMPONENT_REF
		      && DECL_C_BIT_FIELD (TREE_OPERAND ((yyvsp[0].ttype), 1)))
		    error ("`sizeof' applied to a bit-field");
		  (yyval.ttype) = c_sizeof (TREE_TYPE ((yyvsp[0].ttype))); }
#line 2562 "c-parse.c"
    break;

  case 52: /* unary_expr: sizeof '(' typename ')'  */
#line 448 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_sizeof (groktypename ((yyvsp[-1].ttype))); }
#line 2569 "c-parse.c"
    break;

  case 53: /* unary_expr: alignof unary_expr  */
#line 451 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_alignof_expr ((yyvsp[0].ttype)); }
#line 2576 "c-parse.c"
    break;

  case 54: /* unary_expr: alignof '(' typename ')'  */
#line 454 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_alignof (groktypename ((yyvsp[-1].ttype))); }
#line 2583 "c-parse.c"
    break;

  case 55: /* unary_expr: REALPART cast_expr  */
#line 457 "c-parse.y"
                { (yyval.ttype) = build_unary_op (REALPART_EXPR, (yyvsp[0].ttype), 0); }
#line 2589 "c-parse.c"
    break;

  case 56: /* unary_expr: IMAGPART cast_expr  */
#line 459 "c-parse.y"
                { (yyval.ttype) = build_unary_op (IMAGPART_EXPR, (yyvsp[0].ttype), 0); }
#line 2595 "c-parse.c"
    break;

  case 57: /* sizeof: SIZEOF  */
#line 463 "c-parse.y"
               { skip_evaluation++; }
#line 2601 "c-parse.c"
    break;

  case 58: /* alignof: ALIGNOF  */
#line 467 "c-parse.y"
                { skip_evaluation++; }
#line 2607 "c-parse.c"
    break;

  case 60: /* cast_expr: '(' typename ')' cast_expr  */
#line 473 "c-parse.y"
                { tree type = groktypename ((yyvsp[-2].ttype));
		  (yyval.ttype) = build_c_cast (type, (yyvsp[0].ttype)); }
#line 2614 "c-parse.c"
    break;

  case 61: /* $@9: %empty  */
#line 476 "c-parse.y"
                { start_init (NULL_TREE, NULL, 0);
		  (yyvsp[-2].ttype) = groktypename ((yyvsp[-2].ttype));
		  really_start_incremental_init ((yyvsp[-2].ttype)); }
#line 2622 "c-parse.c"
    break;

  case 62: /* cast_expr: '(' typename ')' '{' $@9 initlist_maybe_comma '}'  */
#line 480 "c-parse.y"
                { char *name;
		  tree result = pop_init_level (0);
		  tree type = (yyvsp[-5].ttype);
		  finish_init ();

		  if (pedantic && ! flag_isoc9x)
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
#line 2651 "c-parse.c"
    break;

  case 64: /* expr_no_commas: expr_no_commas '+' expr_no_commas  */
#line 509 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2657 "c-parse.c"
    break;

  case 65: /* expr_no_commas: expr_no_commas '-' expr_no_commas  */
#line 511 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2663 "c-parse.c"
    break;

  case 66: /* expr_no_commas: expr_no_commas '*' expr_no_commas  */
#line 513 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2669 "c-parse.c"
    break;

  case 67: /* expr_no_commas: expr_no_commas '/' expr_no_commas  */
#line 515 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2675 "c-parse.c"
    break;

  case 68: /* expr_no_commas: expr_no_commas '%' expr_no_commas  */
#line 517 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2681 "c-parse.c"
    break;

  case 69: /* expr_no_commas: expr_no_commas LSHIFT expr_no_commas  */
#line 519 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2687 "c-parse.c"
    break;

  case 70: /* expr_no_commas: expr_no_commas RSHIFT expr_no_commas  */
#line 521 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2693 "c-parse.c"
    break;

  case 71: /* expr_no_commas: expr_no_commas ARITHCOMPARE expr_no_commas  */
#line 523 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2699 "c-parse.c"
    break;

  case 72: /* expr_no_commas: expr_no_commas EQCOMPARE expr_no_commas  */
#line 525 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2705 "c-parse.c"
    break;

  case 73: /* expr_no_commas: expr_no_commas '&' expr_no_commas  */
#line 527 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2711 "c-parse.c"
    break;

  case 74: /* expr_no_commas: expr_no_commas '|' expr_no_commas  */
#line 529 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2717 "c-parse.c"
    break;

  case 75: /* expr_no_commas: expr_no_commas '^' expr_no_commas  */
#line 531 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2723 "c-parse.c"
    break;

  case 76: /* $@10: %empty  */
#line 533 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; }
#line 2730 "c-parse.c"
    break;

  case 77: /* expr_no_commas: expr_no_commas ANDAND $@10 expr_no_commas  */
#line 536 "c-parse.y"
                { skip_evaluation -= (yyvsp[-3].ttype) == boolean_false_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ANDIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2737 "c-parse.c"
    break;

  case 78: /* $@11: %empty  */
#line 539 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; }
#line 2744 "c-parse.c"
    break;

  case 79: /* expr_no_commas: expr_no_commas OROR $@11 expr_no_commas  */
#line 542 "c-parse.y"
                { skip_evaluation -= (yyvsp[-3].ttype) == boolean_true_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ORIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2751 "c-parse.c"
    break;

  case 80: /* $@12: %empty  */
#line 545 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; }
#line 2758 "c-parse.c"
    break;

  case 81: /* $@13: %empty  */
#line 548 "c-parse.y"
                { skip_evaluation += (((yyvsp[-4].ttype) == boolean_true_node)
				      - ((yyvsp[-4].ttype) == boolean_false_node)); }
#line 2765 "c-parse.c"
    break;

  case 82: /* expr_no_commas: expr_no_commas '?' $@12 expr ':' $@13 expr_no_commas  */
#line 551 "c-parse.y"
                { skip_evaluation -= (yyvsp[-6].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-6].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2772 "c-parse.c"
    break;

  case 83: /* $@14: %empty  */
#line 554 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids omitting the middle term of a ?: expression");
		  /* Make sure first operand is calculated only once.  */
		  (yyvsp[0].ttype) = save_expr ((yyvsp[-1].ttype));
		  (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[0].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; }
#line 2783 "c-parse.c"
    break;

  case 84: /* expr_no_commas: expr_no_commas '?' $@14 ':' expr_no_commas  */
#line 561 "c-parse.y"
                { skip_evaluation -= (yyvsp[-4].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-4].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 2790 "c-parse.c"
    break;

  case 85: /* expr_no_commas: expr_no_commas '=' expr_no_commas  */
#line 564 "c-parse.y"
                { char class;
		  (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), NOP_EXPR, (yyvsp[0].ttype));
		  class = TREE_CODE_CLASS (TREE_CODE ((yyval.ttype)));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), MODIFY_EXPR);
		}
#line 2802 "c-parse.c"
    break;

  case 86: /* expr_no_commas: expr_no_commas ASSIGN expr_no_commas  */
#line 572 "c-parse.y"
                { char class;
		  (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), (yyvsp[-1].code), (yyvsp[0].ttype));
		  /* This inhibits warnings in truthvalue_conversion.  */
		  class = TREE_CODE_CLASS (TREE_CODE ((yyval.ttype)));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), ERROR_MARK);
		}
#line 2815 "c-parse.c"
    break;

  case 87: /* primary: IDENTIFIER  */
#line 584 "c-parse.y"
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
				  error ("`%s' undeclared (first use in this function)",
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
#line 2917 "c-parse.c"
    break;

  case 89: /* primary: string  */
#line 683 "c-parse.y"
                { (yyval.ttype) = combine_strings ((yyvsp[0].ttype)); }
#line 2923 "c-parse.c"
    break;

  case 90: /* primary: '(' expr ')'  */
#line 685 "c-parse.y"
                { char class = TREE_CODE_CLASS (TREE_CODE ((yyvsp[-1].ttype)));
		  if (class == 'e' || class == '1'
		      || class == '2' || class == '<')
		    C_SET_EXP_ORIGINAL_CODE ((yyvsp[-1].ttype), ERROR_MARK);
		  (yyval.ttype) = (yyvsp[-1].ttype); }
#line 2933 "c-parse.c"
    break;

  case 91: /* primary: '(' error ')'  */
#line 691 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 2939 "c-parse.c"
    break;

  case 92: /* @15: %empty  */
#line 693 "c-parse.y"
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
#line 2957 "c-parse.c"
    break;

  case 93: /* primary: '(' @15 compstmt ')'  */
#line 707 "c-parse.y"
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
#line 2984 "c-parse.c"
    break;

  case 94: /* primary: primary '(' exprlist ')'  */
#line 730 "c-parse.y"
                { (yyval.ttype) = build_function_call ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 2990 "c-parse.c"
    break;

  case 95: /* primary: primary '[' expr ']'  */
#line 732 "c-parse.y"
                { (yyval.ttype) = build_array_ref ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 2996 "c-parse.c"
    break;

  case 96: /* primary: primary '.' identifier  */
#line 734 "c-parse.y"
                {
		    (yyval.ttype) = build_component_ref ((yyvsp[-2].ttype), (yyvsp[0].ttype));
		}
#line 3004 "c-parse.c"
    break;

  case 97: /* primary: primary POINTSAT identifier  */
#line 738 "c-parse.y"
                {
                  tree expr = build_indirect_ref ((yyvsp[-2].ttype), "->");

                    (yyval.ttype) = build_component_ref (expr, (yyvsp[0].ttype));
		}
#line 3014 "c-parse.c"
    break;

  case 98: /* primary: primary PLUSPLUS  */
#line 744 "c-parse.y"
                { (yyval.ttype) = build_unary_op (POSTINCREMENT_EXPR, (yyvsp[-1].ttype), 0); }
#line 3020 "c-parse.c"
    break;

  case 99: /* primary: primary MINUSMINUS  */
#line 746 "c-parse.y"
                { (yyval.ttype) = build_unary_op (POSTDECREMENT_EXPR, (yyvsp[-1].ttype), 0); }
#line 3026 "c-parse.c"
    break;

  case 101: /* string: string STRING  */
#line 753 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3032 "c-parse.c"
    break;

  case 104: /* old_style_parm_decls: datadecls ELLIPSIS  */
#line 762 "c-parse.y"
                { c_mark_varargs ();
		  if (pedantic)
		    pedwarn ("ANSI C does not permit use of `varargs.h'"); }
#line 3040 "c-parse.c"
    break;

  case 105: /* lineno_datadecl: save_filename save_lineno datadecl  */
#line 772 "c-parse.y"
                { }
#line 3046 "c-parse.c"
    break;

  case 110: /* datadecl: typed_declspecs_no_prefix_attr setspecs initdecls ';'  */
#line 788 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3055 "c-parse.c"
    break;

  case 111: /* datadecl: declmods_no_prefix_attr setspecs notype_initdecls ';'  */
#line 793 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);	
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3064 "c-parse.c"
    break;

  case 112: /* datadecl: typed_declspecs_no_prefix_attr ';'  */
#line 798 "c-parse.y"
                { shadow_tag_warned ((yyvsp[-1].ttype), 1);
		  pedwarn ("empty declaration"); }
#line 3071 "c-parse.c"
    break;

  case 113: /* datadecl: declmods_no_prefix_attr ';'  */
#line 801 "c-parse.y"
                { pedwarn ("empty declaration"); }
#line 3077 "c-parse.c"
    break;

  case 114: /* lineno_decl: save_filename save_lineno decl  */
#line 810 "c-parse.y"
                { }
#line 3083 "c-parse.c"
    break;

  case 119: /* setspecs: %empty  */
#line 825 "c-parse.y"
                { (yyval.itype) = suspend_momentary ();
		  pending_xref_error ();
		  declspec_stack = tree_cons (prefix_attributes,
					      current_declspecs,
					      declspec_stack);
		  split_specs_attrs ((yyvsp[0].ttype),
				     &current_declspecs, &prefix_attributes); }
#line 3095 "c-parse.c"
    break;

  case 120: /* setattrs: %empty  */
#line 836 "c-parse.y"
                { prefix_attributes = chainon (prefix_attributes, (yyvsp[0].ttype)); }
#line 3101 "c-parse.c"
    break;

  case 121: /* decl: typed_declspecs setspecs initdecls ';'  */
#line 841 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3110 "c-parse.c"
    break;

  case 122: /* decl: declmods setspecs notype_initdecls ';'  */
#line 846 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 3119 "c-parse.c"
    break;

  case 123: /* decl: typed_declspecs setspecs nested_function  */
#line 851 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3128 "c-parse.c"
    break;

  case 124: /* decl: declmods setspecs notype_nested_function  */
#line 856 "c-parse.y"
                { current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3137 "c-parse.c"
    break;

  case 125: /* decl: typed_declspecs ';'  */
#line 861 "c-parse.y"
                { shadow_tag ((yyvsp[-1].ttype)); }
#line 3143 "c-parse.c"
    break;

  case 126: /* decl: declmods ';'  */
#line 863 "c-parse.y"
                { pedwarn ("empty declaration"); }
#line 3149 "c-parse.c"
    break;

  case 127: /* decl: extension decl  */
#line 865 "c-parse.y"
                { pedantic = (yyvsp[-1].itype); }
#line 3155 "c-parse.c"
    break;

  case 128: /* typed_declspecs: typespec reserved_declspecs  */
#line 875 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3161 "c-parse.c"
    break;

  case 129: /* typed_declspecs: declmods typespec reserved_declspecs  */
#line 877 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); }
#line 3167 "c-parse.c"
    break;

  case 130: /* reserved_declspecs: %empty  */
#line 881 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3173 "c-parse.c"
    break;

  case 131: /* reserved_declspecs: reserved_declspecs typespecqual_reserved  */
#line 883 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3179 "c-parse.c"
    break;

  case 132: /* reserved_declspecs: reserved_declspecs SCSPEC  */
#line 885 "c-parse.y"
                { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3188 "c-parse.c"
    break;

  case 133: /* reserved_declspecs: reserved_declspecs attributes  */
#line 890 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype)); }
#line 3194 "c-parse.c"
    break;

  case 134: /* typed_declspecs_no_prefix_attr: typespec reserved_declspecs_no_prefix_attr  */
#line 895 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3200 "c-parse.c"
    break;

  case 135: /* typed_declspecs_no_prefix_attr: declmods_no_prefix_attr typespec reserved_declspecs_no_prefix_attr  */
#line 897 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); }
#line 3206 "c-parse.c"
    break;

  case 136: /* reserved_declspecs_no_prefix_attr: %empty  */
#line 902 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3212 "c-parse.c"
    break;

  case 137: /* reserved_declspecs_no_prefix_attr: reserved_declspecs_no_prefix_attr typespecqual_reserved  */
#line 904 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3218 "c-parse.c"
    break;

  case 138: /* reserved_declspecs_no_prefix_attr: reserved_declspecs_no_prefix_attr SCSPEC  */
#line 906 "c-parse.y"
                { if (extra_warnings)
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3227 "c-parse.c"
    break;

  case 139: /* declmods: declmods_no_prefix_attr  */
#line 919 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3233 "c-parse.c"
    break;

  case 140: /* declmods: attributes  */
#line 921 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, NULL_TREE); }
#line 3239 "c-parse.c"
    break;

  case 141: /* declmods: declmods declmods_no_prefix_attr  */
#line 923 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3245 "c-parse.c"
    break;

  case 142: /* declmods: declmods attributes  */
#line 925 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype)); }
#line 3251 "c-parse.c"
    break;

  case 143: /* declmods_no_prefix_attr: TYPE_QUAL  */
#line 930 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3258 "c-parse.c"
    break;

  case 144: /* declmods_no_prefix_attr: SCSPEC  */
#line 933 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE); }
#line 3264 "c-parse.c"
    break;

  case 145: /* declmods_no_prefix_attr: declmods_no_prefix_attr TYPE_QUAL  */
#line 935 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3271 "c-parse.c"
    break;

  case 146: /* declmods_no_prefix_attr: declmods_no_prefix_attr SCSPEC  */
#line 938 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3281 "c-parse.c"
    break;

  case 147: /* typed_typespecs: typespec reserved_typespecquals  */
#line 952 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3287 "c-parse.c"
    break;

  case 148: /* typed_typespecs: nonempty_type_quals typespec reserved_typespecquals  */
#line 954 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[0].ttype), tree_cons (NULL_TREE, (yyvsp[-1].ttype), (yyvsp[-2].ttype))); }
#line 3293 "c-parse.c"
    break;

  case 149: /* reserved_typespecquals: %empty  */
#line 958 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3299 "c-parse.c"
    break;

  case 150: /* reserved_typespecquals: reserved_typespecquals typespecqual_reserved  */
#line 960 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 3305 "c-parse.c"
    break;

  case 153: /* typespec: TYPENAME  */
#line 970 "c-parse.y"
                { /* For a typedef name, record the meaning, not the name.
		     In case of `foo foo, bar;'.  */
		  (yyval.ttype) = lookup_name ((yyvsp[0].ttype)); }
#line 3313 "c-parse.c"
    break;

  case 154: /* typespec: TYPEOF '(' expr ')'  */
#line 974 "c-parse.y"
                { (yyval.ttype) = TREE_TYPE ((yyvsp[-1].ttype)); }
#line 3319 "c-parse.c"
    break;

  case 155: /* typespec: TYPEOF '(' typename ')'  */
#line 976 "c-parse.y"
                { (yyval.ttype) = groktypename ((yyvsp[-1].ttype)); }
#line 3325 "c-parse.c"
    break;

  case 163: /* maybeasm: %empty  */
#line 998 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3331 "c-parse.c"
    break;

  case 164: /* maybeasm: ASM_KEYWORD '(' string ')'  */
#line 1000 "c-parse.y"
                { if (TREE_CHAIN ((yyvsp[-1].ttype))) (yyvsp[-1].ttype) = combine_strings ((yyvsp[-1].ttype));
		  (yyval.ttype) = (yyvsp[-1].ttype);
		}
#line 3339 "c-parse.c"
    break;

  case 165: /* @16: %empty  */
#line 1007 "c-parse.y"
                { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  (yyvsp[-1].ttype), prefix_attributes);
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); }
#line 3347 "c-parse.c"
    break;

  case 166: /* initdcl: declarator maybeasm maybe_attribute '=' @16 init  */
#line 1012 "c-parse.y"
                { finish_init ();
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); }
#line 3354 "c-parse.c"
    break;

  case 167: /* initdcl: declarator maybeasm maybe_attribute  */
#line 1015 "c-parse.y"
                { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       (yyvsp[0].ttype), prefix_attributes);
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); 
                }
#line 3363 "c-parse.c"
    break;

  case 168: /* @17: %empty  */
#line 1023 "c-parse.y"
                { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  (yyvsp[-1].ttype), prefix_attributes);
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); }
#line 3371 "c-parse.c"
    break;

  case 169: /* notype_initdcl: notype_declarator maybeasm maybe_attribute '=' @17 init  */
#line 1028 "c-parse.y"
                { finish_init ();
		  decl_attributes ((yyvsp[-1].ttype), (yyvsp[-3].ttype), prefix_attributes);
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); }
#line 3379 "c-parse.c"
    break;

  case 170: /* notype_initdcl: notype_declarator maybeasm maybe_attribute  */
#line 1032 "c-parse.y"
                { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       (yyvsp[0].ttype), prefix_attributes);
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); }
#line 3387 "c-parse.c"
    break;

  case 171: /* maybe_attribute: %empty  */
#line 1040 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3393 "c-parse.c"
    break;

  case 172: /* maybe_attribute: attributes  */
#line 1042 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3399 "c-parse.c"
    break;

  case 173: /* attributes: attribute  */
#line 1047 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3405 "c-parse.c"
    break;

  case 174: /* attributes: attributes attribute  */
#line 1049 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3411 "c-parse.c"
    break;

  case 175: /* attribute: ATTRIBUTE '(' '(' attribute_list ')' ')'  */
#line 1054 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype); }
#line 3417 "c-parse.c"
    break;

  case 176: /* attribute_list: attrib  */
#line 1059 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3423 "c-parse.c"
    break;

  case 177: /* attribute_list: attribute_list ',' attrib  */
#line 1061 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3429 "c-parse.c"
    break;

  case 178: /* attrib: %empty  */
#line 1066 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3435 "c-parse.c"
    break;

  case 179: /* attrib: any_word  */
#line 1068 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[0].ttype), NULL_TREE); }
#line 3441 "c-parse.c"
    break;

  case 180: /* attrib: any_word '(' IDENTIFIER ')'  */
#line 1070 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), build_tree_list (NULL_TREE, (yyvsp[-1].ttype))); }
#line 3447 "c-parse.c"
    break;

  case 181: /* attrib: any_word '(' IDENTIFIER ',' nonnull_exprlist ')'  */
#line 1072 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-5].ttype), tree_cons (NULL_TREE, (yyvsp[-3].ttype), (yyvsp[-1].ttype))); }
#line 3453 "c-parse.c"
    break;

  case 182: /* attrib: any_word '(' exprlist ')'  */
#line 1074 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3459 "c-parse.c"
    break;

  case 188: /* $@18: %empty  */
#line 1092 "c-parse.y"
                { really_start_incremental_init (NULL_TREE);
		  /* Note that the call to clear_momentary
		     is in process_init_element.  */
		  push_momentary (); }
#line 3468 "c-parse.c"
    break;

  case 189: /* init: '{' $@18 initlist_maybe_comma '}'  */
#line 1097 "c-parse.y"
                { (yyval.ttype) = pop_init_level (0);
		  if ((yyval.ttype) == error_mark_node
		      && ! (yychar == STRING || yychar == CONSTANT))
		    pop_momentary ();
		  else
		    pop_momentary_nofree (); }
#line 3479 "c-parse.c"
    break;

  case 190: /* init: error  */
#line 1105 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 3485 "c-parse.c"
    break;

  case 191: /* initlist_maybe_comma: %empty  */
#line 1111 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids empty initializer braces"); }
#line 3492 "c-parse.c"
    break;

  case 197: /* $@19: %empty  */
#line 1127 "c-parse.y"
                { set_init_label ((yyvsp[-1].ttype)); }
#line 3498 "c-parse.c"
    break;

  case 200: /* $@20: %empty  */
#line 1134 "c-parse.y"
                { push_init_level (0); }
#line 3504 "c-parse.c"
    break;

  case 201: /* initval: '{' $@20 initlist_maybe_comma '}'  */
#line 1136 "c-parse.y"
                { process_init_element (pop_init_level (0)); }
#line 3510 "c-parse.c"
    break;

  case 202: /* initval: expr_no_commas  */
#line 1138 "c-parse.y"
                { process_init_element ((yyvsp[0].ttype)); }
#line 3516 "c-parse.c"
    break;

  case 206: /* designator: '.' identifier  */
#line 1149 "c-parse.y"
                { set_init_label ((yyvsp[0].ttype)); }
#line 3522 "c-parse.c"
    break;

  case 207: /* designator: '[' expr_no_commas ELLIPSIS expr_no_commas ']'  */
#line 1154 "c-parse.y"
                { set_init_index ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3528 "c-parse.c"
    break;

  case 208: /* designator: '[' expr_no_commas ']'  */
#line 1156 "c-parse.y"
                { set_init_index ((yyvsp[-1].ttype), NULL_TREE); }
#line 3534 "c-parse.c"
    break;

  case 209: /* $@21: %empty  */
#line 1161 "c-parse.y"
                { push_c_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); }
#line 3547 "c-parse.c"
    break;

  case 210: /* $@22: %empty  */
#line 1170 "c-parse.y"
                { store_parm_decls (); }
#line 3553 "c-parse.c"
    break;

  case 211: /* nested_function: declarator $@21 old_style_parm_decls $@22 compstmt  */
#line 1178 "c-parse.y"
                { finish_function (1);
		  pop_c_function_context (); }
#line 3560 "c-parse.c"
    break;

  case 212: /* $@23: %empty  */
#line 1184 "c-parse.y"
                { push_c_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					prefix_attributes, NULL_TREE, 1))
		    {
		      pop_c_function_context ();
		      YYERROR1;
		    }
		  reinit_parse_for_function (); }
#line 3573 "c-parse.c"
    break;

  case 213: /* $@24: %empty  */
#line 1193 "c-parse.y"
                { store_parm_decls (); }
#line 3579 "c-parse.c"
    break;

  case 214: /* notype_nested_function: notype_declarator $@23 old_style_parm_decls $@24 compstmt  */
#line 1201 "c-parse.y"
                { finish_function (1);
		  pop_c_function_context (); }
#line 3586 "c-parse.c"
    break;

  case 217: /* after_type_declarator: '(' after_type_declarator ')'  */
#line 1217 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-1].ttype); }
#line 3592 "c-parse.c"
    break;

  case 218: /* after_type_declarator: after_type_declarator '(' parmlist_or_identifiers  */
#line 1219 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 3598 "c-parse.c"
    break;

  case 219: /* after_type_declarator: after_type_declarator '[' expr ']'  */
#line 1224 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3604 "c-parse.c"
    break;

  case 220: /* after_type_declarator: after_type_declarator '[' ']'  */
#line 1226 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 3610 "c-parse.c"
    break;

  case 221: /* after_type_declarator: '*' type_quals after_type_declarator  */
#line 1228 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3616 "c-parse.c"
    break;

  case 222: /* after_type_declarator: attributes setattrs after_type_declarator  */
#line 1235 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3622 "c-parse.c"
    break;

  case 224: /* parm_declarator: parm_declarator '(' parmlist_or_identifiers  */
#line 1246 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 3628 "c-parse.c"
    break;

  case 225: /* parm_declarator: parm_declarator '[' '*' ']'  */
#line 1251 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), NULL_TREE);
		  if (! flag_isoc9x)
		    error ("`[*]' in parameter declaration only allowed in ISO C 9x");
		}
#line 3637 "c-parse.c"
    break;

  case 226: /* parm_declarator: parm_declarator '[' expr ']'  */
#line 1256 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3643 "c-parse.c"
    break;

  case 227: /* parm_declarator: parm_declarator '[' ']'  */
#line 1258 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 3649 "c-parse.c"
    break;

  case 228: /* parm_declarator: '*' type_quals parm_declarator  */
#line 1260 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3655 "c-parse.c"
    break;

  case 229: /* parm_declarator: attributes setattrs parm_declarator  */
#line 1267 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3661 "c-parse.c"
    break;

  case 231: /* notype_declarator: notype_declarator '(' parmlist_or_identifiers  */
#line 1276 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 3667 "c-parse.c"
    break;

  case 232: /* notype_declarator: '(' notype_declarator ')'  */
#line 1281 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-1].ttype); }
#line 3673 "c-parse.c"
    break;

  case 233: /* notype_declarator: '*' type_quals notype_declarator  */
#line 1283 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3679 "c-parse.c"
    break;

  case 234: /* notype_declarator: notype_declarator '[' '*' ']'  */
#line 1285 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), NULL_TREE);
		  if (! flag_isoc9x)
		    error ("`[*]' in parameter declaration only allowed in ISO C 9x");
		}
#line 3688 "c-parse.c"
    break;

  case 235: /* notype_declarator: notype_declarator '[' expr ']'  */
#line 1290 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3694 "c-parse.c"
    break;

  case 236: /* notype_declarator: notype_declarator '[' ']'  */
#line 1292 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 3700 "c-parse.c"
    break;

  case 237: /* notype_declarator: attributes setattrs notype_declarator  */
#line 1299 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3706 "c-parse.c"
    break;

  case 239: /* struct_head: STRUCT  */
#line 1305 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3712 "c-parse.c"
    break;

  case 240: /* struct_head: STRUCT attributes  */
#line 1307 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3718 "c-parse.c"
    break;

  case 241: /* union_head: UNION  */
#line 1312 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3724 "c-parse.c"
    break;

  case 242: /* union_head: UNION attributes  */
#line 1314 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3730 "c-parse.c"
    break;

  case 243: /* enum_head: ENUM  */
#line 1319 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3736 "c-parse.c"
    break;

  case 244: /* enum_head: ENUM attributes  */
#line 1321 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3742 "c-parse.c"
    break;

  case 245: /* @25: %empty  */
#line 1326 "c-parse.y"
                { (yyval.ttype) = start_struct (RECORD_TYPE, (yyvsp[-1].ttype));
		  /* Start scope of tag before parsing components.  */
		}
#line 3750 "c-parse.c"
    break;

  case 246: /* structsp: struct_head identifier '{' @25 component_decl_list '}' maybe_attribute  */
#line 1330 "c-parse.y"
                { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype))); }
#line 3756 "c-parse.c"
    break;

  case 247: /* structsp: struct_head '{' component_decl_list '}' maybe_attribute  */
#line 1332 "c-parse.y"
                { (yyval.ttype) = finish_struct (start_struct (RECORD_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), chainon ((yyvsp[-4].ttype), (yyvsp[0].ttype)));
		}
#line 3764 "c-parse.c"
    break;

  case 248: /* structsp: struct_head identifier  */
#line 1336 "c-parse.y"
                { (yyval.ttype) = xref_tag (RECORD_TYPE, (yyvsp[0].ttype)); }
#line 3770 "c-parse.c"
    break;

  case 249: /* @26: %empty  */
#line 1338 "c-parse.y"
                { (yyval.ttype) = start_struct (UNION_TYPE, (yyvsp[-1].ttype)); }
#line 3776 "c-parse.c"
    break;

  case 250: /* structsp: union_head identifier '{' @26 component_decl_list '}' maybe_attribute  */
#line 1340 "c-parse.y"
                { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype))); }
#line 3782 "c-parse.c"
    break;

  case 251: /* structsp: union_head '{' component_decl_list '}' maybe_attribute  */
#line 1342 "c-parse.y"
                { (yyval.ttype) = finish_struct (start_struct (UNION_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), chainon ((yyvsp[-4].ttype), (yyvsp[0].ttype)));
		}
#line 3790 "c-parse.c"
    break;

  case 252: /* structsp: union_head identifier  */
#line 1346 "c-parse.y"
                { (yyval.ttype) = xref_tag (UNION_TYPE, (yyvsp[0].ttype)); }
#line 3796 "c-parse.c"
    break;

  case 253: /* @27: %empty  */
#line 1348 "c-parse.y"
                { (yyvsp[0].itype) = suspend_momentary ();
		  (yyval.ttype) = start_enum ((yyvsp[-1].ttype)); }
#line 3803 "c-parse.c"
    break;

  case 254: /* structsp: enum_head identifier '{' @27 enumlist maybecomma_warn '}' maybe_attribute  */
#line 1351 "c-parse.y"
                { (yyval.ttype)= finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)), chainon ((yyvsp[-7].ttype), (yyvsp[0].ttype)));
		  resume_momentary ((yyvsp[-5].itype)); }
#line 3810 "c-parse.c"
    break;

  case 255: /* @28: %empty  */
#line 1354 "c-parse.y"
                { (yyvsp[0].itype) = suspend_momentary ();
		  (yyval.ttype) = start_enum (NULL_TREE); }
#line 3817 "c-parse.c"
    break;

  case 256: /* structsp: enum_head '{' @28 enumlist maybecomma_warn '}' maybe_attribute  */
#line 1357 "c-parse.y"
                { (yyval.ttype)= finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype)));
		  resume_momentary ((yyvsp[-5].itype)); }
#line 3824 "c-parse.c"
    break;

  case 257: /* structsp: enum_head identifier  */
#line 1360 "c-parse.y"
                { (yyval.ttype) = xref_tag (ENUMERAL_TYPE, (yyvsp[0].ttype)); }
#line 3830 "c-parse.c"
    break;

  case 261: /* maybecomma_warn: ','  */
#line 1371 "c-parse.y"
                { if (pedantic && ! flag_isoc9x)
		    pedwarn ("comma at end of enumerator list"); }
#line 3837 "c-parse.c"
    break;

  case 262: /* component_decl_list: component_decl_list2  */
#line 1377 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 3843 "c-parse.c"
    break;

  case 263: /* component_decl_list: component_decl_list2 component_decl  */
#line 1379 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		  pedwarn ("no semicolon at end of struct or union"); }
#line 3850 "c-parse.c"
    break;

  case 264: /* component_decl_list2: %empty  */
#line 1384 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3856 "c-parse.c"
    break;

  case 265: /* component_decl_list2: component_decl_list2 component_decl ';'  */
#line 1386 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[-1].ttype)); }
#line 3862 "c-parse.c"
    break;

  case 266: /* component_decl_list2: component_decl_list2 ';'  */
#line 1388 "c-parse.y"
                { if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified"); }
#line 3869 "c-parse.c"
    break;

  case 267: /* component_decl: typed_typespecs setspecs components  */
#line 1403 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3879 "c-parse.c"
    break;

  case 268: /* component_decl: typed_typespecs  */
#line 1409 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag((yyvsp[0].ttype));
		  (yyval.ttype) = NULL_TREE; }
#line 3888 "c-parse.c"
    break;

  case 269: /* component_decl: nonempty_type_quals setspecs components  */
#line 1414 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-1].itype)); }
#line 3898 "c-parse.c"
    break;

  case 270: /* component_decl: nonempty_type_quals  */
#line 1420 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids member declarations with no members");
		  shadow_tag((yyvsp[0].ttype));
		  (yyval.ttype) = NULL_TREE; }
#line 3907 "c-parse.c"
    break;

  case 271: /* component_decl: error  */
#line 1425 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3913 "c-parse.c"
    break;

  case 272: /* component_decl: extension component_decl  */
#line 1427 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  pedantic = (yyvsp[-1].itype); }
#line 3920 "c-parse.c"
    break;

  case 274: /* components: components ',' component_declarator  */
#line 1434 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3926 "c-parse.c"
    break;

  case 275: /* component_declarator: save_filename save_lineno declarator maybe_attribute  */
#line 1439 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-3].filename), (yyvsp[-2].lineno), (yyvsp[-1].ttype), current_declspecs, NULL_TREE);
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); }
#line 3933 "c-parse.c"
    break;

  case 276: /* component_declarator: save_filename save_lineno declarator ':' expr_no_commas maybe_attribute  */
#line 1443 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-5].filename), (yyvsp[-4].lineno), (yyvsp[-3].ttype), current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); }
#line 3940 "c-parse.c"
    break;

  case 277: /* component_declarator: save_filename save_lineno ':' expr_no_commas maybe_attribute  */
#line 1446 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-4].filename), (yyvsp[-3].lineno), NULL_TREE, current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes ((yyval.ttype), (yyvsp[0].ttype), prefix_attributes); }
#line 3947 "c-parse.c"
    break;

  case 279: /* enumlist: enumlist ',' enumerator  */
#line 1458 "c-parse.y"
                { if ((yyvsp[-2].ttype) == error_mark_node)
		    (yyval.ttype) = (yyvsp[-2].ttype);
		  else
		    (yyval.ttype) = chainon ((yyvsp[0].ttype), (yyvsp[-2].ttype)); }
#line 3956 "c-parse.c"
    break;

  case 280: /* enumlist: error  */
#line 1463 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 3962 "c-parse.c"
    break;

  case 281: /* enumerator: identifier  */
#line 1469 "c-parse.y"
                { (yyval.ttype) = build_enumerator ((yyvsp[0].ttype), NULL_TREE); }
#line 3968 "c-parse.c"
    break;

  case 282: /* enumerator: identifier '=' expr_no_commas  */
#line 1471 "c-parse.y"
                { (yyval.ttype) = build_enumerator ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3974 "c-parse.c"
    break;

  case 283: /* typename: typed_typespecs absdcl  */
#line 1476 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3980 "c-parse.c"
    break;

  case 284: /* typename: nonempty_type_quals absdcl  */
#line 1478 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 3986 "c-parse.c"
    break;

  case 285: /* absdcl: %empty  */
#line 1483 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 3992 "c-parse.c"
    break;

  case 287: /* nonempty_type_quals: TYPE_QUAL  */
#line 1489 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE); }
#line 3998 "c-parse.c"
    break;

  case 288: /* nonempty_type_quals: nonempty_type_quals TYPE_QUAL  */
#line 1491 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 4004 "c-parse.c"
    break;

  case 289: /* type_quals: %empty  */
#line 1496 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4010 "c-parse.c"
    break;

  case 290: /* type_quals: type_quals TYPE_QUAL  */
#line 1498 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype)); }
#line 4016 "c-parse.c"
    break;

  case 291: /* absdcl1: '(' absdcl1 ')'  */
#line 1503 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-1].ttype); }
#line 4022 "c-parse.c"
    break;

  case 292: /* absdcl1: '*' type_quals absdcl1  */
#line 1506 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4028 "c-parse.c"
    break;

  case 293: /* absdcl1: '*' type_quals  */
#line 1508 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[0].ttype), NULL_TREE); }
#line 4034 "c-parse.c"
    break;

  case 294: /* absdcl1: absdcl1 '(' parmlist  */
#line 1510 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 4040 "c-parse.c"
    break;

  case 295: /* absdcl1: absdcl1 '[' expr ']'  */
#line 1512 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 4046 "c-parse.c"
    break;

  case 296: /* absdcl1: absdcl1 '[' ']'  */
#line 1514 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, (yyvsp[-2].ttype), NULL_TREE); }
#line 4052 "c-parse.c"
    break;

  case 297: /* absdcl1: '(' parmlist  */
#line 1516 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, NULL_TREE, (yyvsp[0].ttype), NULL_TREE); }
#line 4058 "c-parse.c"
    break;

  case 298: /* absdcl1: '[' expr ']'  */
#line 1518 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, NULL_TREE, (yyvsp[-1].ttype)); }
#line 4064 "c-parse.c"
    break;

  case 299: /* absdcl1: '[' ']'  */
#line 1520 "c-parse.y"
                { (yyval.ttype) = build_nt (ARRAY_REF, NULL_TREE, NULL_TREE); }
#line 4070 "c-parse.c"
    break;

  case 300: /* absdcl1: attributes setattrs absdcl1  */
#line 1524 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4076 "c-parse.c"
    break;

  case 301: /* stmts: lineno_stmt_or_labels  */
#line 1533 "c-parse.y"
                {
		  if (pedantic && (yyvsp[0].ends_in_label))
		    pedwarn ("ANSI C forbids label at end of compound statement");
		}
#line 4085 "c-parse.c"
    break;

  case 303: /* lineno_stmt_or_labels: lineno_stmt_or_labels lineno_stmt_or_label  */
#line 1542 "c-parse.y"
                { (yyval.ends_in_label) = (yyvsp[0].ends_in_label); }
#line 4091 "c-parse.c"
    break;

  case 304: /* lineno_stmt_or_labels: lineno_stmt_or_labels errstmt  */
#line 1544 "c-parse.y"
                { (yyval.ends_in_label) = 0; }
#line 4097 "c-parse.c"
    break;

  case 308: /* pushlevel: %empty  */
#line 1556 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  pushlevel (0);
		  clear_last_expr ();
		  push_momentary ();
		  expand_start_bindings (0);
		}
#line 4108 "c-parse.c"
    break;

  case 310: /* maybe_label_decls: label_decls  */
#line 1569 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids label declarations"); }
#line 4115 "c-parse.c"
    break;

  case 313: /* label_decl: LABEL identifiers_or_typenames ';'  */
#line 1580 "c-parse.y"
                { tree link;
		  for (link = (yyvsp[-1].ttype); link; link = TREE_CHAIN (link))
		    {
		      tree label = shadow_label (TREE_VALUE (link));
		      C_DECLARED_LABEL_FLAG (label) = 1;
		      declare_nonlocal_label (label);
		    }
		}
#line 4128 "c-parse.c"
    break;

  case 314: /* compstmt_or_error: compstmt  */
#line 1594 "c-parse.y"
                {}
#line 4134 "c-parse.c"
    break;

  case 316: /* compstmt_start: '{'  */
#line 1598 "c-parse.y"
                    { compstmt_count++; }
#line 4140 "c-parse.c"
    break;

  case 317: /* compstmt: compstmt_start '}'  */
#line 1601 "c-parse.y"
                { (yyval.ttype) = convert (void_type_node, integer_zero_node); }
#line 4146 "c-parse.c"
    break;

  case 318: /* compstmt: compstmt_start pushlevel maybe_label_decls decls xstmts '}'  */
#line 1603 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), 1, 0);
		  (yyval.ttype) = poplevel (1, 1, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4158 "c-parse.c"
    break;

  case 319: /* compstmt: compstmt_start pushlevel maybe_label_decls error '}'  */
#line 1611 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  (yyval.ttype) = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4170 "c-parse.c"
    break;

  case 320: /* compstmt: compstmt_start pushlevel maybe_label_decls stmts '}'  */
#line 1619 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_end_bindings (getdecls (), kept_level_p (), 0);
		  (yyval.ttype) = poplevel (kept_level_p (), 0, 0);
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4182 "c-parse.c"
    break;

  case 323: /* if_prefix: IF '(' expr ')'  */
#line 1639 "c-parse.y"
                { emit_line_note ((yyvsp[(-1) - (4)].filename), (yyvsp[-4].lineno));
		  c_expand_start_cond (truthvalue_conversion ((yyvsp[-1].ttype)), 0, 
				       compstmt_count);
		  (yyval.itype) = stmt_count;
		  if_stmt_file = (yyvsp[(-1) - (4)].filename);
		  if_stmt_line = (yyvsp[-4].lineno);
		  position_after_white_space (); }
#line 4194 "c-parse.c"
    break;

  case 324: /* $@29: %empty  */
#line 1653 "c-parse.y"
                { stmt_count++;
		  compstmt_count++;
		  emit_line_note ((yyvsp[(-1) - (1)].filename), (yyvsp[-1].lineno));
		  /* See comment in `while' alternative, above.  */
		  emit_nop ();
		  expand_start_loop_continue_elsewhere (1);
		  position_after_white_space (); }
#line 4206 "c-parse.c"
    break;

  case 325: /* do_stmt_start: DO $@29 lineno_labeled_stmt WHILE  */
#line 1661 "c-parse.y"
                { expand_loop_continue_here (); }
#line 4212 "c-parse.c"
    break;

  case 326: /* save_filename: %empty  */
#line 1665 "c-parse.y"
                { (yyval.filename) = input_filename; }
#line 4218 "c-parse.c"
    break;

  case 327: /* save_lineno: %empty  */
#line 1669 "c-parse.y"
                { (yyval.lineno) = lineno; }
#line 4224 "c-parse.c"
    break;

  case 328: /* lineno_labeled_stmt: save_filename save_lineno stmt  */
#line 1674 "c-parse.y"
                { }
#line 4230 "c-parse.c"
    break;

  case 329: /* lineno_labeled_stmt: save_filename save_lineno label lineno_labeled_stmt  */
#line 1679 "c-parse.y"
                { }
#line 4236 "c-parse.c"
    break;

  case 330: /* lineno_stmt_or_label: save_filename save_lineno stmt_or_label  */
#line 1684 "c-parse.y"
                { (yyval.ends_in_label) = (yyvsp[0].ends_in_label); }
#line 4242 "c-parse.c"
    break;

  case 331: /* stmt_or_label: stmt  */
#line 1689 "c-parse.y"
                { (yyval.ends_in_label) = 0; }
#line 4248 "c-parse.c"
    break;

  case 332: /* stmt_or_label: label  */
#line 1691 "c-parse.y"
                { (yyval.ends_in_label) = 1; }
#line 4254 "c-parse.c"
    break;

  case 333: /* stmt: compstmt  */
#line 1697 "c-parse.y"
                { stmt_count++; }
#line 4260 "c-parse.c"
    break;

  case 335: /* stmt: expr ';'  */
#line 1700 "c-parse.y"
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
#line 4281 "c-parse.c"
    break;

  case 336: /* $@30: %empty  */
#line 1717 "c-parse.y"
                { c_expand_start_else ();
		  (yyvsp[-1].itype) = stmt_count;
		  position_after_white_space (); }
#line 4289 "c-parse.c"
    break;

  case 337: /* stmt: simple_if ELSE $@30 lineno_labeled_stmt  */
#line 1721 "c-parse.y"
                { c_expand_end_cond ();
		  if (extra_warnings && stmt_count == (yyvsp[-3].itype))
		    warning ("empty body in an else-statement"); }
#line 4297 "c-parse.c"
    break;

  case 338: /* stmt: simple_if  */
#line 1725 "c-parse.y"
                { c_expand_end_cond ();
		  /* This warning is here instead of in simple_if, because we
		     do not want a warning if an empty if is followed by an
		     else statement.  Increment stmt_count so we don't
		     give a second error if this is a nested `if'.  */
		  if (extra_warnings && stmt_count++ == (yyvsp[0].itype))
		    warning_with_file_and_line (if_stmt_file, if_stmt_line,
						"empty body in an if-statement"); }
#line 4310 "c-parse.c"
    break;

  case 339: /* stmt: simple_if ELSE error  */
#line 1737 "c-parse.y"
                { c_expand_end_cond (); }
#line 4316 "c-parse.c"
    break;

  case 340: /* $@31: %empty  */
#line 1739 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (1)].filename), (yyvsp[-1].lineno));
		  /* The emit_nop used to come before emit_line_note,
		     but that made the nop seem like part of the preceding line.
		     And that was confusing when the preceding line was
		     inside of an if statement and was not really executed.
		     I think it ought to work to put the nop after the line number.
		     We will see.  --rms, July 15, 1991.  */
		  emit_nop (); }
#line 4330 "c-parse.c"
    break;

  case 341: /* $@32: %empty  */
#line 1749 "c-parse.y"
                { /* Don't start the loop till we have succeeded
		     in parsing the end test.  This is to make sure
		     that we end every loop we start.  */
		  expand_start_loop (1);
		  emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion ((yyvsp[-1].ttype)));
		  position_after_white_space (); }
#line 4343 "c-parse.c"
    break;

  case 342: /* stmt: WHILE $@31 '(' expr ')' $@32 lineno_labeled_stmt  */
#line 1758 "c-parse.y"
                { expand_end_loop (); }
#line 4349 "c-parse.c"
    break;

  case 343: /* stmt: do_stmt_start '(' expr ')' ';'  */
#line 1761 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  expand_exit_loop_if_false (NULL_PTR,
					     truthvalue_conversion ((yyvsp[-2].ttype)));
		  expand_end_loop ();
		  clear_momentary (); }
#line 4359 "c-parse.c"
    break;

  case 344: /* stmt: do_stmt_start error  */
#line 1768 "c-parse.y"
                { expand_end_loop ();
		  clear_momentary (); }
#line 4366 "c-parse.c"
    break;

  case 345: /* $@33: %empty  */
#line 1772 "c-parse.y"
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
#line 4381 "c-parse.c"
    break;

  case 346: /* @34: %empty  */
#line 1784 "c-parse.y"
                { (yyvsp[0].lineno) = lineno;
		  (yyval.filename) = input_filename; }
#line 4388 "c-parse.c"
    break;

  case 347: /* $@35: %empty  */
#line 1787 "c-parse.y"
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
#line 4408 "c-parse.c"
    break;

  case 348: /* stmt: FOR '(' xexpr ';' $@33 xexpr ';' @34 xexpr ')' $@35 lineno_labeled_stmt  */
#line 1803 "c-parse.y"
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
#line 4423 "c-parse.c"
    break;

  case 349: /* $@36: %empty  */
#line 1814 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (4)].filename), (yyvsp[-4].lineno));
		  c_expand_start_case ((yyvsp[-1].ttype));
		  /* Don't let the tree nodes for $3 be discarded by
		     clear_momentary during the parsing of the next stmt.  */
		  push_momentary ();
		  position_after_white_space (); }
#line 4435 "c-parse.c"
    break;

  case 350: /* stmt: SWITCH '(' expr ')' $@36 lineno_labeled_stmt  */
#line 1822 "c-parse.y"
                { expand_end_case ((yyvsp[-3].ttype));
		  if (yychar == CONSTANT || yychar == STRING)
		    pop_momentary_nofree ();
		  else
		    pop_momentary (); }
#line 4445 "c-parse.c"
    break;

  case 351: /* stmt: BREAK ';'  */
#line 1828 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (2)].filename), (yyvsp[-2].lineno));
		  if ( ! expand_exit_something ())
		    error ("break statement not within loop or switch"); }
#line 4454 "c-parse.c"
    break;

  case 352: /* stmt: CONTINUE ';'  */
#line 1833 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (2)].filename), (yyvsp[-2].lineno));
		  if (! expand_continue_loop (NULL_PTR))
		    error ("continue statement not within a loop"); }
#line 4463 "c-parse.c"
    break;

  case 353: /* stmt: RETURN ';'  */
#line 1838 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (2)].filename), (yyvsp[-2].lineno));
		  c_expand_return (NULL_TREE); }
#line 4471 "c-parse.c"
    break;

  case 354: /* stmt: RETURN expr ';'  */
#line 1842 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (3)].filename), (yyvsp[-3].lineno));
		  c_expand_return ((yyvsp[-1].ttype)); }
#line 4479 "c-parse.c"
    break;

  case 355: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ')' ';'  */
#line 1846 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (6)].filename), (yyvsp[-6].lineno));
		  STRIP_NOPS ((yyvsp[-2].ttype));
		  if ((TREE_CODE ((yyvsp[-2].ttype)) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND ((yyvsp[-2].ttype), 0)) == STRING_CST)
		      || TREE_CODE ((yyvsp[-2].ttype)) == STRING_CST)
		    expand_asm ((yyvsp[-2].ttype));
		  else
		    error ("argument of `asm' is not a constant string"); }
#line 4493 "c-parse.c"
    break;

  case 356: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ':' asm_operands ')' ';'  */
#line 1857 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (8)].filename), (yyvsp[-8].lineno));
		  c_expand_asm_operands ((yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE, NULL_TREE,
					 (yyvsp[-6].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); }
#line 4503 "c-parse.c"
    break;

  case 357: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ':' asm_operands ':' asm_operands ')' ';'  */
#line 1864 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (10)].filename), (yyvsp[-10].lineno));
		  c_expand_asm_operands ((yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE,
					 (yyvsp[-8].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); }
#line 4513 "c-parse.c"
    break;

  case 358: /* stmt: ASM_KEYWORD maybe_type_qual '(' expr ':' asm_operands ':' asm_operands ':' asm_clobbers ')' ';'  */
#line 1872 "c-parse.y"
                { stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (12)].filename), (yyvsp[-12].lineno));
		  c_expand_asm_operands ((yyvsp[-8].ttype), (yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype),
					 (yyvsp[-10].ttype) == ridpointers[(int)RID_VOLATILE],
					 input_filename, lineno); }
#line 4523 "c-parse.c"
    break;

  case 359: /* stmt: GOTO identifier ';'  */
#line 1878 "c-parse.y"
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
#line 4538 "c-parse.c"
    break;

  case 360: /* stmt: GOTO '*' expr ';'  */
#line 1889 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ANSI C forbids `goto *expr;'");
		  stmt_count++;
		  emit_line_note ((yyvsp[(-1) - (4)].filename), (yyvsp[-4].lineno));
		  expand_computed_goto (convert (ptr_type_node, (yyvsp[-1].ttype))); }
#line 4548 "c-parse.c"
    break;

  case 363: /* @37: %empty  */
#line 1904 "c-parse.y"
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
#line 4573 "c-parse.c"
    break;

  case 364: /* all_iter_stmt_simple: FOR '(' primary ')' @37 lineno_labeled_stmt  */
#line 1925 "c-parse.y"
          {
	    if ((yyvsp[-1].itype))
	      iterator_for_loop_end ((yyvsp[-3].ttype));
	  }
#line 4582 "c-parse.c"
    break;

  case 365: /* label: CASE expr_no_commas ':'  */
#line 1960 "c-parse.y"
                { register tree value = check_case_value ((yyvsp[-1].ttype));
		  register tree label
		    = build_decl (LABEL_DECL, NULL_TREE, NULL_TREE);

		  stmt_count++;

		  if (value != error_mark_node)
		    {
		      tree duplicate;
		      int success;

		      if (pedantic && ! INTEGRAL_TYPE_P (TREE_TYPE (value)))
			pedwarn ("label must have integral type in ANSI C");

		      success = pushcase (value, convert_and_check,
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
#line 4617 "c-parse.c"
    break;

  case 366: /* label: CASE expr_no_commas ELLIPSIS expr_no_commas ':'  */
#line 1991 "c-parse.y"
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
#line 4652 "c-parse.c"
    break;

  case 367: /* label: DEFAULT ':'  */
#line 2022 "c-parse.y"
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
#line 4671 "c-parse.c"
    break;

  case 368: /* label: identifier ':' maybe_attribute  */
#line 2037 "c-parse.y"
                { tree label = define_label (input_filename, lineno, (yyvsp[-2].ttype));
		  stmt_count++;
		  emit_nop ();
		  if (label)
		    {
		      expand_label (label);
		      decl_attributes (label, (yyvsp[0].ttype), NULL_TREE);
		    }
		  position_after_white_space (); }
#line 4685 "c-parse.c"
    break;

  case 369: /* maybe_type_qual: %empty  */
#line 2052 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  (yyval.ttype) = NULL_TREE; }
#line 4692 "c-parse.c"
    break;

  case 370: /* maybe_type_qual: TYPE_QUAL  */
#line 2055 "c-parse.y"
                { emit_line_note (input_filename, lineno); }
#line 4698 "c-parse.c"
    break;

  case 371: /* xexpr: %empty  */
#line 2060 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4704 "c-parse.c"
    break;

  case 373: /* asm_operands: %empty  */
#line 2067 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4710 "c-parse.c"
    break;

  case 376: /* nonnull_asm_operands: nonnull_asm_operands ',' asm_operand  */
#line 2074 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 4716 "c-parse.c"
    break;

  case 377: /* asm_operand: STRING '(' expr ')'  */
#line 2079 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 4722 "c-parse.c"
    break;

  case 378: /* asm_clobbers: string  */
#line 2084 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), NULL_TREE); }
#line 4728 "c-parse.c"
    break;

  case 379: /* asm_clobbers: asm_clobbers ',' string  */
#line 2086 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), (yyvsp[-2].ttype)); }
#line 4734 "c-parse.c"
    break;

  case 380: /* $@38: %empty  */
#line 2092 "c-parse.y"
                { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (0); }
#line 4742 "c-parse.c"
    break;

  case 381: /* parmlist: $@38 parmlist_1  */
#line 2096 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); }
#line 4750 "c-parse.c"
    break;

  case 383: /* $@39: %empty  */
#line 2104 "c-parse.y"
                { tree parm;
		  if (pedantic)
		    pedwarn ("ANSI C forbids forward parameter declarations");
		  /* Mark the forward decls as such.  */
		  for (parm = getdecls (); parm; parm = TREE_CHAIN (parm))
		    TREE_ASM_WRITTEN (parm) = 1;
		  clear_parm_order (); }
#line 4762 "c-parse.c"
    break;

  case 384: /* parmlist_1: parms ';' $@39 parmlist_1  */
#line 2112 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4768 "c-parse.c"
    break;

  case 385: /* parmlist_1: error ')'  */
#line 2114 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, NULL_TREE); }
#line 4774 "c-parse.c"
    break;

  case 386: /* parmlist_2: %empty  */
#line 2120 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0); }
#line 4780 "c-parse.c"
    break;

  case 387: /* parmlist_2: ELLIPSIS  */
#line 2122 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0);
		  /* Gcc used to allow this as an extension.  However, it does
		     not work for all targets, and thus has been disabled.
		     Also, since func (...) and func () are indistinguishable,
		     it caused problems with the code in expand_builtin which
		     tries to verify that BUILT_IN_NEXT_ARG is being used
		     correctly.  */
		  error ("ANSI C requires a named argument before `...'");
		}
#line 4794 "c-parse.c"
    break;

  case 388: /* parmlist_2: parms  */
#line 2132 "c-parse.y"
                { (yyval.ttype) = get_parm_info (1); }
#line 4800 "c-parse.c"
    break;

  case 389: /* parmlist_2: parms ',' ELLIPSIS  */
#line 2134 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0); }
#line 4806 "c-parse.c"
    break;

  case 390: /* parms: parm  */
#line 2139 "c-parse.y"
                { push_parm_decl ((yyvsp[0].ttype)); }
#line 4812 "c-parse.c"
    break;

  case 391: /* parms: parms ',' parm  */
#line 2141 "c-parse.y"
                { push_parm_decl ((yyvsp[0].ttype)); }
#line 4818 "c-parse.c"
    break;

  case 392: /* parm: typed_declspecs setspecs parm_declarator maybe_attribute  */
#line 2148 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 4831 "c-parse.c"
    break;

  case 393: /* parm: typed_declspecs setspecs notype_declarator maybe_attribute  */
#line 2157 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype))); 
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 4844 "c-parse.c"
    break;

  case 394: /* parm: typed_declspecs setspecs absdcl maybe_attribute  */
#line 2166 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype)); }
#line 4857 "c-parse.c"
    break;

  case 395: /* parm: declmods setspecs notype_declarator maybe_attribute  */
#line 2175 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  }
#line 4870 "c-parse.c"
    break;

  case 396: /* parm: declmods setspecs absdcl maybe_attribute  */
#line 2185 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					build_tree_list (prefix_attributes,
							 (yyvsp[0].ttype)));
		  current_declspecs = TREE_VALUE (declspec_stack);
		  prefix_attributes = TREE_PURPOSE (declspec_stack);
		  declspec_stack = TREE_CHAIN (declspec_stack);
		  resume_momentary ((yyvsp[-2].itype));  }
#line 4883 "c-parse.c"
    break;

  case 397: /* $@40: %empty  */
#line 2199 "c-parse.y"
                { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (1); }
#line 4891 "c-parse.c"
    break;

  case 398: /* parmlist_or_identifiers: $@40 parmlist_or_identifiers_1  */
#line 2203 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); }
#line 4899 "c-parse.c"
    break;

  case 400: /* parmlist_or_identifiers_1: identifiers ')'  */
#line 2211 "c-parse.y"
                { tree t;
		  for (t = (yyvsp[-1].ttype); t; t = TREE_CHAIN (t))
		    if (TREE_VALUE (t) == NULL_TREE)
		      error ("`...' in old-style identifier list");
		  (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, (yyvsp[-1].ttype)); }
#line 4909 "c-parse.c"
    break;

  case 401: /* identifiers: IDENTIFIER  */
#line 2221 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 4915 "c-parse.c"
    break;

  case 402: /* identifiers: identifiers ',' IDENTIFIER  */
#line 2223 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 4921 "c-parse.c"
    break;

  case 403: /* identifiers_or_typenames: identifier  */
#line 2229 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 4927 "c-parse.c"
    break;

  case 404: /* identifiers_or_typenames: identifiers_or_typenames ',' identifier  */
#line 2231 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 4933 "c-parse.c"
    break;

  case 405: /* extension: EXTENSION  */
#line 2236 "c-parse.y"
                { (yyval.itype) = pedantic;
		  pedantic = 0; }
#line 4940 "c-parse.c"
    break;


#line 4944 "c-parse.c"

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

#line 2240 "c-parse.y"

