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
    ASSIGN = 258,                  /* ASSIGN  */
    LOR = 259,                     /* LOR  */
    LAND = 260,                    /* LAND  */
    EQ = 261,                      /* EQ  */
    NE = 262,                      /* NE  */
    LT = 263,                      /* LT  */
    LE = 264,                      /* LE  */
    GT = 265,                      /* GT  */
    GE = 266,                      /* GE  */
    PLUS = 267,                    /* PLUS  */
    MINUS = 268,                   /* MINUS  */
    MUL = 269,                     /* MUL  */
    DIV = 270,                     /* DIV  */
    MOD = 271,                     /* MOD  */
    NOT = 272,                     /* NOT  */
    STRING_CONST = 273,            /* STRING_CONST  */
    INT_CONST = 274,               /* INT_CONST  */
    FLOAT_CONST = 275,             /* FLOAT_CONST  */
    CHAR_CONST = 276,              /* CHAR_CONST  */
    SIGNED_CONST = 277,            /* SIGNED_CONST  */
    INT = 278,                     /* INT  */
    FLOAT = 279,                   /* FLOAT  */
    CHAR = 280,                    /* CHAR  */
    IF = 281,                      /* IF  */
    ELSE = 282,                    /* ELSE  */
    WHILE = 283,                   /* WHILE  */
    FOR = 284,                     /* FOR  */
    RETURN = 285,                  /* RETURN  */
    BREAK = 286,                   /* BREAK  */
    CONTINUE = 287,                /* CONTINUE  */
    CASE = 288,                    /* CASE  */
    DEFAULT = 289,                 /* DEFAULT  */
    SWITCH = 290,                  /* SWITCH  */
    VOID = 291,                    /* VOID  */
    MAIN = 292,                    /* MAIN  */
    PRINTF = 293,                  /* PRINTF  */
    ID = 294,                      /* ID  */
    SEMICOLON = 295,               /* SEMICOLON  */
    COMMA = 296,                   /* COMMA  */
    LPAREN = 297,                  /* LPAREN  */
    RPAREN = 298,                  /* RPAREN  */
    LBRACE = 299,                  /* LBRACE  */
    RBRACE = 300,                  /* RBRACE  */
    LBRACKET = 301,                /* LBRACKET  */
    RBRACKET = 302,                /* RBRACKET  */
    HASH = 303,                    /* HASH  */
    DQ = 304,                      /* DQ  */
    ARR = 305,                     /* ARR  */
    ARR2D = 306,                   /* ARR2D  */
    ARR_E = 307,                   /* ARR_E  */
    FUNC = 308,                    /* FUNC  */
    TYPE_SPEC = 309,               /* TYPE_SPEC  */
    FUNC_NAME = 310                /* FUNC_NAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ASSIGN 258
#define LOR 259
#define LAND 260
#define EQ 261
#define NE 262
#define LT 263
#define LE 264
#define GT 265
#define GE 266
#define PLUS 267
#define MINUS 268
#define MUL 269
#define DIV 270
#define MOD 271
#define NOT 272
#define STRING_CONST 273
#define INT_CONST 274
#define FLOAT_CONST 275
#define CHAR_CONST 276
#define SIGNED_CONST 277
#define INT 278
#define FLOAT 279
#define CHAR 280
#define IF 281
#define ELSE 282
#define WHILE 283
#define FOR 284
#define RETURN 285
#define BREAK 286
#define CONTINUE 287
#define CASE 288
#define DEFAULT 289
#define SWITCH 290
#define VOID 291
#define MAIN 292
#define PRINTF 293
#define ID 294
#define SEMICOLON 295
#define COMMA 296
#define LPAREN 297
#define RPAREN 298
#define LBRACE 299
#define RBRACE 300
#define LBRACKET 301
#define RBRACKET 302
#define HASH 303
#define DQ 304
#define ARR 305
#define ARR2D 306
#define ARR_E 307
#define FUNC 308
#define TYPE_SPEC 309
#define FUNC_NAME 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
