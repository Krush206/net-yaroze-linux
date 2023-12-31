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

#ifndef YY_YY_C_PARSE_H_INCLUDED
# define YY_YY_C_PARSE_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPENAME = 259,                /* TYPENAME  */
    SCSPEC = 260,                  /* SCSPEC  */
    TYPESPEC = 261,                /* TYPESPEC  */
    TYPE_QUAL = 262,               /* TYPE_QUAL  */
    CONSTANT = 263,                /* CONSTANT  */
    STRING = 264,                  /* STRING  */
    ELLIPSIS = 265,                /* ELLIPSIS  */
    SIZEOF = 266,                  /* SIZEOF  */
    ENUM = 267,                    /* ENUM  */
    STRUCT = 268,                  /* STRUCT  */
    UNION = 269,                   /* UNION  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    WHILE = 272,                   /* WHILE  */
    DO = 273,                      /* DO  */
    FOR = 274,                     /* FOR  */
    SWITCH = 275,                  /* SWITCH  */
    CASE = 276,                    /* CASE  */
    DEFAULT = 277,                 /* DEFAULT  */
    BREAK = 278,                   /* BREAK  */
    CONTINUE = 279,                /* CONTINUE  */
    RETURN = 280,                  /* RETURN  */
    GOTO = 281,                    /* GOTO  */
    ASM_KEYWORD = 282,             /* ASM_KEYWORD  */
    TYPEOF = 283,                  /* TYPEOF  */
    ALIGNOF = 284,                 /* ALIGNOF  */
    ATTRIBUTE = 285,               /* ATTRIBUTE  */
    EXTENSION = 286,               /* EXTENSION  */
    LABEL = 287,                   /* LABEL  */
    REALPART = 288,                /* REALPART  */
    IMAGPART = 289,                /* IMAGPART  */
    ASSIGN = 290,                  /* ASSIGN  */
    OROR = 291,                    /* OROR  */
    ANDAND = 292,                  /* ANDAND  */
    EQCOMPARE = 293,               /* EQCOMPARE  */
    ARITHCOMPARE = 294,            /* ARITHCOMPARE  */
    LSHIFT = 295,                  /* LSHIFT  */
    RSHIFT = 296,                  /* RSHIFT  */
    UNARY = 297,                   /* UNARY  */
    PLUSPLUS = 298,                /* PLUSPLUS  */
    MINUSMINUS = 299,              /* MINUSMINUS  */
    HYPERUNARY = 300,              /* HYPERUNARY  */
    POINTSAT = 301,                /* POINTSAT  */
    INTERFACE = 302,               /* INTERFACE  */
    IMPLEMENTATION = 303,          /* IMPLEMENTATION  */
    END = 304,                     /* END  */
    SELECTOR = 305,                /* SELECTOR  */
    DEFS = 306,                    /* DEFS  */
    ENCODE = 307,                  /* ENCODE  */
    CLASSNAME = 308,               /* CLASSNAME  */
    PUBLIC = 309,                  /* PUBLIC  */
    PRIVATE = 310,                 /* PRIVATE  */
    PROTECTED = 311,               /* PROTECTED  */
    PROTOCOL = 312,                /* PROTOCOL  */
    OBJECTNAME = 313,              /* OBJECTNAME  */
    CLASS = 314,                   /* CLASS  */
    ALIAS = 315,                   /* ALIAS  */
    OBJC_STRING = 316              /* OBJC_STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 114 "c-parse.y"
long itype; tree ttype; enum tree_code code;
	char *filename; int lineno; int ends_in_label; 

#line 129 "c-parse.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_PARSE_H_INCLUDED  */
