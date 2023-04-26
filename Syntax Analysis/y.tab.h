/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASSIGN = 258,
    LOR = 259,
    LAND = 260,
    EQ = 261,
    NE = 262,
    LT = 263,
    LE = 264,
    GT = 265,
    GE = 266,
    PLUS = 267,
    MINUS = 268,
    MULT = 269,
    DIV = 270,
    MOD = 271,
    NOT = 272,
    STRING_CONST = 273,
    INT_CONST = 274,
    FLOAT_CONST = 275,
    CHAR_CONST = 276,
    SIGNED_CONST = 277,
    INT = 278,
    FLOAT = 279,
    CHAR = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    FOR = 284,
    RETURN = 285,
    BREAK = 286,
    CONTINUE = 287,
    CASE = 288,
    DEFAULT = 289,
    SWITCH = 290,
    VOID = 291,
    MAIN = 292,
    PRINTF = 293,
    ID = 294,
    SEMICOLON = 295,
    COMMA = 296,
    LPAREN = 297,
    RPAREN = 298,
    LBRACE = 299,
    RBRACE = 300,
    LBRACKET = 301,
    RBRACKET = 302,
    HASH = 303,
    DQ = 304,
    ARR = 305,
    ARR2D = 306,
    FUNC = 307,
    TYPE_SPEC = 308
  };
#endif
/* Tokens.  */
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
#define MULT 269
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
#define FUNC 307
#define TYPE_SPEC 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
