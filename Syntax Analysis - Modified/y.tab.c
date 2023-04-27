/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    extern FILE *yyin;

    struct node{
        char lexeme[100];
        char  token[100];
        int line_no;
        struct node *next;
    };

    struct ll{
        struct node *head;
        struct node *tail;
        int count;
    };

    struct ll *main_list = NULL;
    int mlc;

#line 96 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ASSIGN = 3,                     /* ASSIGN  */
  YYSYMBOL_LOR = 4,                        /* LOR  */
  YYSYMBOL_LAND = 5,                       /* LAND  */
  YYSYMBOL_EQ = 6,                         /* EQ  */
  YYSYMBOL_NE = 7,                         /* NE  */
  YYSYMBOL_LT = 8,                         /* LT  */
  YYSYMBOL_LE = 9,                         /* LE  */
  YYSYMBOL_GT = 10,                        /* GT  */
  YYSYMBOL_GE = 11,                        /* GE  */
  YYSYMBOL_PLUS = 12,                      /* PLUS  */
  YYSYMBOL_MINUS = 13,                     /* MINUS  */
  YYSYMBOL_MUL = 14,                       /* MUL  */
  YYSYMBOL_DIV = 15,                       /* DIV  */
  YYSYMBOL_MOD = 16,                       /* MOD  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_STRING_CONST = 18,              /* STRING_CONST  */
  YYSYMBOL_INT_CONST = 19,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 20,               /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 21,                /* CHAR_CONST  */
  YYSYMBOL_SIGNED_CONST = 22,              /* SIGNED_CONST  */
  YYSYMBOL_INT = 23,                       /* INT  */
  YYSYMBOL_FLOAT = 24,                     /* FLOAT  */
  YYSYMBOL_CHAR = 25,                      /* CHAR  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_FOR = 29,                       /* FOR  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_BREAK = 31,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 32,                  /* CONTINUE  */
  YYSYMBOL_CASE = 33,                      /* CASE  */
  YYSYMBOL_DEFAULT = 34,                   /* DEFAULT  */
  YYSYMBOL_SWITCH = 35,                    /* SWITCH  */
  YYSYMBOL_VOID = 36,                      /* VOID  */
  YYSYMBOL_MAIN = 37,                      /* MAIN  */
  YYSYMBOL_PRINTF = 38,                    /* PRINTF  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_SEMICOLON = 40,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 41,                     /* COMMA  */
  YYSYMBOL_LPAREN = 42,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 43,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 44,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 45,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 46,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 47,                  /* RBRACKET  */
  YYSYMBOL_HASH = 48,                      /* HASH  */
  YYSYMBOL_DQ = 49,                        /* DQ  */
  YYSYMBOL_ARR = 50,                       /* ARR  */
  YYSYMBOL_ARR2D = 51,                     /* ARR2D  */
  YYSYMBOL_ARR_E = 52,                     /* ARR_E  */
  YYSYMBOL_FUNC = 53,                      /* FUNC  */
  YYSYMBOL_TYPE_SPEC = 54,                 /* TYPE_SPEC  */
  YYSYMBOL_FUNC_NAME = 55,                 /* FUNC_NAME  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_S = 57,                         /* S  */
  YYSYMBOL_begin = 58,                     /* begin  */
  YYSYMBOL_Type = 59,                      /* Type  */
  YYSYMBOL_Func_Decl = 60,                 /* Func_Decl  */
  YYSYMBOL_Para_List = 61,                 /* Para_List  */
  YYSYMBOL_Para = 62,                      /* Para  */
  YYSYMBOL_Stmt_List = 63,                 /* Stmt_List  */
  YYSYMBOL_Stmt = 64,                      /* Stmt  */
  YYSYMBOL_Brk_cnt = 65,                   /* Brk_cnt  */
  YYSYMBOL_For_stmt = 66,                  /* For_stmt  */
  YYSYMBOL_While_stmt = 67,                /* While_stmt  */
  YYSYMBOL_Expr = 68,                      /* Expr  */
  YYSYMBOL_COMP_OP = 69,                   /* COMP_OP  */
  YYSYMBOL_TERM = 70,                      /* TERM  */
  YYSYMBOL_FACTOR = 71,                    /* FACTOR  */
  YYSYMBOL_Assgn = 72,                     /* Assgn  */
  YYSYMBOL_ASSGN_TAIL = 73,                /* ASSGN_TAIL  */
  YYSYMBOL_Decl = 74,                      /* Decl  */
  YYSYMBOL_DECL_TAIL = 75,                 /* DECL_TAIL  */
  YYSYMBOL_If_stmt = 76,                   /* If_stmt  */
  YYSYMBOL_MAT = 77,                       /* MAT  */
  YYSYMBOL_UNMAT = 78,                     /* UNMAT  */
  YYSYMBOL_Return = 79,                    /* Return  */
  YYSYMBOL_Const = 80,                     /* Const  */
  YYSYMBOL_Print = 81,                     /* Print  */
  YYSYMBOL_Var_List = 82,                  /* Var_List  */
  YYSYMBOL_Func_Call = 83,                 /* Func_Call  */
  YYSYMBOL_Mixed_List = 84,                /* Mixed_List  */
  YYSYMBOL_Arr_Decl = 85,                  /* Arr_Decl  */
  YYSYMBOL_Const_List = 86,                /* Const_List  */
  YYSYMBOL_Const_List2 = 87,               /* Const_List2  */
  YYSYMBOL_int_list = 88,                  /* int_list  */
  YYSYMBOL_float_list = 89,                /* float_list  */
  YYSYMBOL_char_list = 90                  /* char_list  */
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
typedef yytype_uint8 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    52,    52,    52,    52,    55,
      56,    59,    59,    62,    65,    65,    65,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    71,
      71,    74,    75,    76,    79,    82,    82,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    88,    88,    88,    88,
      88,    91,    91,    91,    94,    97,    97,   100,   103,   103,
     103,   106,   106,   109,   112,   115,   115,   115,   118,   118,
     118,   118,   121,   122,   125,   125,   128,   129,   130,   131,
     132,   133,   136,   136,   136,   136,   138,   139,   140,   141,
     142,   145,   145,   145,   148,   148,   151,   151,   154,   154,
     157,   157
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
  "\"end of file\"", "error", "\"invalid token\"", "ASSIGN", "LOR",
  "LAND", "EQ", "NE", "LT", "LE", "GT", "GE", "PLUS", "MINUS", "MUL",
  "DIV", "MOD", "NOT", "STRING_CONST", "INT_CONST", "FLOAT_CONST",
  "CHAR_CONST", "SIGNED_CONST", "INT", "FLOAT", "CHAR", "IF", "ELSE",
  "WHILE", "FOR", "RETURN", "BREAK", "CONTINUE", "CASE", "DEFAULT",
  "SWITCH", "VOID", "MAIN", "PRINTF", "ID", "SEMICOLON", "COMMA", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "HASH", "DQ",
  "ARR", "ARR2D", "ARR_E", "FUNC", "TYPE_SPEC", "FUNC_NAME", "$accept",
  "S", "begin", "Type", "Func_Decl", "Para_List", "Para", "Stmt_List",
  "Stmt", "Brk_cnt", "For_stmt", "While_stmt", "Expr", "COMP_OP", "TERM",
  "FACTOR", "Assgn", "ASSGN_TAIL", "Decl", "DECL_TAIL", "If_stmt", "MAT",
  "UNMAT", "Return", "Const", "Print", "Var_List", "Func_Call",
  "Mixed_List", "Arr_Decl", "Const_List", "Const_List2", "int_list",
  "float_list", "char_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -144,  -144,  -144,  -144,     8,  -144,   -28,    -8,  -144,
     -10,  -144,   -12,    22,    38,    18,  -144,   169,  -144,    -8,
      39,  -144,  -144,  -144,  -144,     5,    45,    52,   260,    48,
      59,    58,   112,  -144,   232,   169,    75,    57,    87,   169,
    -144,  -144,  -144,   279,    90,  -144,    98,   110,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   169,   232,   232,
      61,   119,  -144,   132,  -144,  -144,   131,   217,  -144,    32,
     111,   109,     3,     6,    20,   152,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   232,   232,   232,
     232,   232,  -144,  -144,   129,    46,    63,   135,   232,   137,
     138,  -144,  -144,    35,   139,   136,  -144,  -144,   141,   140,
     142,   143,   223,   163,  -144,   159,  -144,   160,  -144,   162,
      90,  -144,  -144,  -144,  -144,  -144,   166,   168,   232,   156,
       4,   232,   183,   185,   115,   184,  -144,    71,  -144,    71,
     186,   198,   116,     4,    -1,   211,    -1,   169,   169,   210,
     254,   232,   224,   219,   215,  -144,   221,   220,   264,  -144,
    -144,  -144,   227,  -144,  -144,   228,   234,   235,   246,  -144,
    -144,  -144,    -1,   247,   248,   249,   250,   265,   230,   274,
     183,   257,  -144,   258,   232,   261,   259,   284,   285,   283,
     266,   262,   268,   269,   286,  -144,   267,   270,   272,  -144,
    -144,  -144,   136,  -144,   271,  -144,  -144,  -144,  -144,   275,
    -144,  -144,   273,   276,   169,   277,  -144,  -144,   211,   169,
     169,   278,   169,  -144,   280,   281,  -144,   282,  -144,  -144,
    -144
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     6,     7,     8,     0,     2,     0,     4,     1,
       0,     3,     0,     0,     0,     0,    12,     0,    13,     0,
       0,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,    52,    28,     0,     0,     0,     0,     0,    15,
      20,    22,    24,    23,    36,    50,     0,     0,    25,    61,
      62,    18,    53,    17,    19,    21,    11,     0,     0,     0,
       0,     0,    67,     0,    30,    29,     0,     0,    52,     0,
       0,     0,    60,     0,     0,     0,    10,    14,    43,    42,
      45,    41,    38,    40,    37,    39,    44,     0,     0,     0,
       0,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    56,    51,    16,    84,     0,
      85,     0,     0,     0,    57,     0,    86,     0,    89,     0,
      35,    46,    47,    48,    49,     9,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,    54,     0,    78,     0,
       0,     0,    60,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,    72,     0,     0,     0,    82,
      83,    79,     0,    59,    58,    97,    99,   101,     0,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    34,     0,     0,     0,    75,
      73,    81,    56,    77,     0,    96,    98,   100,    87,    94,
      90,    88,     0,     0,     0,     0,    55,    76,     0,     0,
       0,     0,     0,    95,     0,     0,    33,     0,    64,    31,
      32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,   304,     2,  -144,  -144,   299,   -35,  -144,  -144,
    -144,  -144,   -33,  -144,   237,    80,  -144,   117,   287,   -61,
    -144,  -144,  -144,  -144,   -23,  -144,   148,  -144,  -104,  -144,
    -143,   104,   144,   145,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    37,     8,    15,    16,    38,    39,    40,
      41,    42,    43,    87,    44,    45,    46,   136,    47,   114,
      48,    49,    50,    51,    52,    53,   154,    54,   111,    55,
     168,   173,   169,   170,   171
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      70,    69,     7,   174,    77,    63,   112,   151,     9,   115,
       7,     1,     2,     3,    14,     1,     2,     3,   165,   166,
     167,    14,    94,   117,     4,    95,    96,    10,     4,   191,
     157,    13,    12,   159,   105,   160,    78,    79,    80,    81,
      82,    83,    84,    85,   113,   113,   116,    58,   110,    86,
      78,    79,    80,    81,    82,    83,    84,    85,   186,    19,
     118,    20,    99,    86,    97,   129,    17,    78,    79,    80,
      81,    82,    83,    84,    85,   106,   132,    18,   133,   142,
      86,   163,   164,    57,     1,     2,     3,    59,    64,   126,
      21,    22,    23,    24,    60,   149,    72,     4,   152,    65,
      66,    98,    88,    89,    90,    91,   127,    73,    74,    75,
     108,   110,   175,   176,   110,    67,   110,    71,   142,   151,
      78,    79,    80,    81,    82,    83,    84,    85,    21,    22,
      23,    24,    76,    86,    21,    22,    23,    24,    92,   110,
      78,    79,    80,    81,    82,    83,    84,    85,   108,   103,
      93,   202,   109,    86,   108,   119,   107,   113,   156,   101,
      78,    79,    80,    81,    82,    83,    84,    85,   121,   122,
     123,   124,   102,    86,   125,   128,   130,   135,   131,   221,
     138,   134,   137,   139,   224,   225,   140,   227,    21,    22,
      23,    24,     1,     2,     3,    25,   150,    26,    27,    28,
      29,    30,   143,   144,   145,     4,   146,    31,    32,    33,
     147,    34,   148,    35,    78,    79,    80,    81,    82,    83,
      84,    85,   153,   158,    36,   155,   161,    86,    78,    79,
      80,    81,    82,    83,    84,    85,    21,    22,    23,    24,
     162,    86,    21,    22,    23,    24,    21,    22,    23,    24,
     177,    21,    22,    23,    24,   172,    68,   178,   181,    34,
     180,   182,    68,   183,   179,    34,   108,   184,   196,   187,
     185,    68,   104,   197,    34,   188,   189,   198,   141,    21,
      22,    23,    24,    78,    79,    80,    81,    82,    83,    84,
      85,   190,   192,   193,   194,   195,    86,   200,   201,    61,
      62,   203,   204,   165,   167,   166,   208,   209,   210,   211,
     213,   217,    11,   212,   214,   215,   218,   219,    56,   216,
     220,   222,   223,   226,   120,   228,   229,   230,   199,     0,
       0,   205,     0,   206,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100
};

static const yytype_int16 yycheck[] =
{
      35,    34,     0,   146,    39,    28,     3,     3,     0,     3,
       8,    23,    24,    25,    12,    23,    24,    25,    19,    20,
      21,    19,    57,     3,    36,    58,    59,    55,    36,   172,
     134,    43,    42,   137,    67,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    41,    41,    40,    42,    71,    17,
       4,     5,     6,     7,     8,     9,    10,    11,   162,    41,
      40,    43,    60,    17,     3,    98,    44,     4,     5,     6,
       7,     8,     9,    10,    11,    43,    41,    39,    43,   112,
      17,   142,   143,    44,    23,    24,    25,    42,    40,    43,
      19,    20,    21,    22,    42,   128,    39,    36,   131,    40,
      42,    40,    12,    13,    14,    15,    43,    50,    51,    52,
      39,   134,   147,   148,   137,     3,   139,    42,   151,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    19,    20,
      21,    22,    45,    17,    19,    20,    21,    22,    40,   162,
       4,     5,     6,     7,     8,     9,    10,    11,    39,    18,
      40,   184,    43,    17,    39,     3,    45,    41,    43,    40,
       4,     5,     6,     7,     8,     9,    10,    11,    88,    89,
      90,    91,    40,    17,    45,    40,    39,    41,    40,   214,
      40,    42,    41,    41,   219,   220,    43,   222,    19,    20,
      21,    22,    23,    24,    25,    26,    40,    28,    29,    30,
      31,    32,    39,    44,    44,    36,    44,    38,    39,    40,
      44,    42,    44,    44,     4,     5,     6,     7,     8,     9,
      10,    11,    39,    39,    55,    40,    40,    17,     4,     5,
       6,     7,     8,     9,    10,    11,    19,    20,    21,    22,
      42,    17,    19,    20,    21,    22,    19,    20,    21,    22,
      40,    19,    20,    21,    22,    44,    39,     3,    43,    42,
      41,    40,    39,    43,    40,    42,    39,     3,     3,    41,
      43,    39,    55,    43,    42,    41,    41,     3,    55,    19,
      20,    21,    22,     4,     5,     6,     7,     8,     9,    10,
      11,    45,    45,    45,    45,    45,    17,    40,    40,    39,
      40,    40,    43,    19,    21,    20,    40,    45,    40,    40,
      43,    40,     8,    27,    44,    43,    41,    44,    19,   202,
      44,    44,   218,    45,    87,    45,    45,    45,   180,    -1,
      -1,   187,    -1,   188,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    24,    25,    36,    57,    58,    59,    60,     0,
      55,    58,    42,    43,    59,    61,    62,    44,    39,    41,
      43,    19,    20,    21,    22,    26,    28,    29,    30,    31,
      32,    38,    39,    40,    42,    44,    55,    59,    63,    64,
      65,    66,    67,    68,    70,    71,    72,    74,    76,    77,
      78,    79,    80,    81,    83,    85,    62,    44,    42,    42,
      42,    39,    40,    80,    40,    40,    42,     3,    39,    68,
      63,    42,    39,    50,    51,    52,    45,    63,     4,     5,
       6,     7,     8,     9,    10,    11,    17,    69,    12,    13,
      14,    15,    40,    40,    63,    68,    68,     3,    40,    59,
      74,    40,    40,    18,    55,    68,    43,    45,    39,    43,
      80,    84,     3,    41,    75,     3,    40,     3,    40,     3,
      70,    71,    71,    71,    71,    45,    43,    43,    40,    68,
      39,    40,    41,    43,    42,    41,    73,    41,    40,    41,
      43,    55,    68,    39,    44,    44,    44,    44,    44,    68,
      40,     3,    68,    39,    82,    40,    43,    84,    39,    84,
      84,    40,    42,    75,    75,    19,    20,    21,    86,    88,
      89,    90,    44,    87,    86,    63,    63,    40,     3,    40,
      41,    43,    40,    43,     3,    43,    84,    41,    41,    41,
      45,    86,    45,    45,    45,    45,     3,    43,     3,    82,
      40,    40,    68,    40,    43,    88,    89,    90,    40,    45,
      40,    40,    27,    43,    44,    43,    73,    40,    41,    44,
      44,    63,    44,    87,    63,    63,    45,    63,    45,    45,
      45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    59,    60,
      60,    61,    61,    62,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    66,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    71,    71,    71,    72,    73,    73,    74,    75,    75,
      75,    76,    76,    77,    78,    79,    79,    79,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    86,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     8,
       7,     3,     1,     2,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       2,    11,    11,    10,     7,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       1,     3,     1,     1,     4,     5,     0,     3,     3,     3,
       0,     1,     1,     7,    11,     3,     3,     2,     1,     1,
       1,     1,     5,     7,     1,     3,     8,     7,     4,     5,
       6,     7,     3,     3,     1,     1,     3,     7,     7,     3,
       7,     1,     1,     1,     3,     5,     3,     1,     3,     1,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* S: begin  */
#line 45 "parser.y"
         {printf("reaching here\n");}
#line 1500 "y.tab.c"
    break;

  case 4: /* begin: Func_Decl  */
#line 49 "parser.y"
                  {printf("here as well\n");}
#line 1506 "y.tab.c"
    break;


#line 1510 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 160 "parser.y"


struct node *create_node(char *lexeme, char *token, int line_no){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    strcpy(temp->lexeme, lexeme);
    temp->line_no = line_no;
    strcpy(temp->token, token);
    temp->next = NULL;
    return temp;
}

void inserttoLL(char* lexeme, char* token, int line_no){
    struct node *temp = create_node(lexeme, token, line_no);
    if(main_list->head == NULL){
        main_list->head = temp;
        main_list->tail = temp;
    }
    else{
        main_list->tail->next = temp;
        main_list->tail = temp;
    }
    main_list->count++;
}

void dis(){
    struct node *temp = main_list->head;
    printf("--------------------------------------------------------------------\n");
    printf("Line No.\tLexeme\t\t\tToken\n");
    printf("--------------------------------------------------------------------\n");
    while(temp != NULL){
        printf("%d\t\t%s\t\t\t%s\n", temp->line_no, temp->lexeme, temp->token);
        temp = temp->next;
    }
    printf("--------------------------------------------------------------------\n");
}

int check_mlc()
{
    if(mlc == 0)
        return 1;
    return 0;
}

void set_mlc()
{
    mlc = 1;
    return;
}

void reset_mlc()
{
    mlc = 0;
    return;
}

int main(int argc , char *argv[]){
    yyin = fopen(argv[1],"r");
    main_list = (struct ll *)malloc(sizeof(struct ll));
    main_list->head = NULL;
    main_list->tail = NULL;
    main_list->count = 0;
    mlc = 0;
    yyparse();
    dis();
}

void yyerror(){
    printf("Invalid statement\n");
}
