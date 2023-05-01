/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    WHILE = 260,                   /* WHILE  */
    FOR = 261,                     /* FOR  */
    RETURN = 262,                  /* RETURN  */
    BREAK = 263,                   /* BREAK  */
    CONTINUE = 264,                /* CONTINUE  */
    CASE = 265,                    /* CASE  */
    DEFAULT = 266,                 /* DEFAULT  */
    SWITCH = 267,                  /* SWITCH  */
    MAIN = 268,                    /* MAIN  */
    PRINTF = 269,                  /* PRINTF  */
    COMMA = 270,                   /* COMMA  */
    RPAREN = 271,                  /* RPAREN  */
    LBRACE = 272,                  /* LBRACE  */
    RBRACE = 273,                  /* RBRACE  */
    LBRACKET = 274,                /* LBRACKET  */
    RBRACKET = 275,                /* RBRACKET  */
    HASH = 276,                    /* HASH  */
    DQ = 277,                      /* DQ  */
    ARR = 278,                     /* ARR  */
    ARR2D = 279,                   /* ARR2D  */
    ARR_E = 280,                   /* ARR_E  */
    FUNC = 281,                    /* FUNC  */
    TYPE_SPEC = 282,               /* TYPE_SPEC  */
    FUNC_NAME = 283,               /* FUNC_NAME  */
    ID = 284,                      /* ID  */
    ASSIGN = 285,                  /* ASSIGN  */
    INT = 286,                     /* INT  */
    SEMICOLON = 287,               /* SEMICOLON  */
    FLOAT = 288,                   /* FLOAT  */
    CHAR = 289,                    /* CHAR  */
    VOID = 290,                    /* VOID  */
    LPAREN = 291,                  /* LPAREN  */
    EQ = 292,                      /* EQ  */
    NE = 293,                      /* NE  */
    LOR = 294,                     /* LOR  */
    LAND = 295,                    /* LAND  */
    GT = 296,                      /* GT  */
    LT = 297,                      /* LT  */
    GE = 298,                      /* GE  */
    LE = 299,                      /* LE  */
    PLUS = 300,                    /* PLUS  */
    MINUS = 301,                   /* MINUS  */
    DIV = 302,                     /* DIV  */
    MUL = 303,                     /* MUL  */
    MOD = 304,                     /* MOD  */
    NOT = 305,                     /* NOT  */
    INT_CONST = 306,               /* INT_CONST  */
    FLOAT_CONST = 307,             /* FLOAT_CONST  */
    CHAR_CONST = 308,              /* CHAR_CONST  */
    STRING_CONST = 309,            /* STRING_CONST  */
    SIGNED_CONST = 310             /* SIGNED_CONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define RETURN 262
#define BREAK 263
#define CONTINUE 264
#define CASE 265
#define DEFAULT 266
#define SWITCH 267
#define MAIN 268
#define PRINTF 269
#define COMMA 270
#define RPAREN 271
#define LBRACE 272
#define RBRACE 273
#define LBRACKET 274
#define RBRACKET 275
#define HASH 276
#define DQ 277
#define ARR 278
#define ARR2D 279
#define ARR_E 280
#define FUNC 281
#define TYPE_SPEC 282
#define FUNC_NAME 283
#define ID 284
#define ASSIGN 285
#define INT 286
#define SEMICOLON 287
#define FLOAT 288
#define CHAR 289
#define VOID 290
#define LPAREN 291
#define EQ 292
#define NE 293
#define LOR 294
#define LAND 295
#define GT 296
#define LT 297
#define GE 298
#define LE 299
#define PLUS 300
#define MINUS 301
#define DIV 302
#define MUL 303
#define MOD 304
#define NOT 305
#define INT_CONST 306
#define FLOAT_CONST 307
#define CHAR_CONST 308
#define STRING_CONST 309
#define SIGNED_CONST 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "three.y"

    char* lexeme;

#line 181 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
