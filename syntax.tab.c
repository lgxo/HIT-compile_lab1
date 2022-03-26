/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

//#include <stdio.h>
#include "head/tree.h"
#include "lex.yy.c"

extern unsigned synError;

pNode root;

#define YYERROR_VERBOSE 1

void yyerror(const char* msg);


#line 86 "syntax.tab.c"

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
    STRUCT = 258,                  /* STRUCT  */
    RETURN = 259,                  /* RETURN  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    WHILE = 262,                   /* WHILE  */
    TYPE = 263,                    /* TYPE  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    STAR = 266,                    /* STAR  */
    DIV = 267,                     /* DIV  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    NOT = 270,                     /* NOT  */
    ASSIGNOP = 271,                /* ASSIGNOP  */
    RELOP = 272,                   /* RELOP  */
    SEMI = 273,                    /* SEMI  */
    COMMA = 274,                   /* COMMA  */
    DOT = 275,                     /* DOT  */
    LP = 276,                      /* LP  */
    RP = 277,                      /* RP  */
    LB = 278,                      /* LB  */
    RB = 279,                      /* RB  */
    LC = 280,                      /* LC  */
    RC = 281,                      /* RC  */
    INT = 282,                     /* INT  */
    FLOAT = 283,                   /* FLOAT  */
    ID = 284,                      /* ID  */
    LOWER_THAN_ELSE = 285          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "syntax.y"

	pNode node;

#line 167 "syntax.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STRUCT = 3,                     /* STRUCT  */
  YYSYMBOL_RETURN = 4,                     /* RETURN  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_TYPE = 8,                       /* TYPE  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_STAR = 11,                      /* STAR  */
  YYSYMBOL_DIV = 12,                       /* DIV  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_ASSIGNOP = 16,                  /* ASSIGNOP  */
  YYSYMBOL_RELOP = 17,                     /* RELOP  */
  YYSYMBOL_SEMI = 18,                      /* SEMI  */
  YYSYMBOL_COMMA = 19,                     /* COMMA  */
  YYSYMBOL_DOT = 20,                       /* DOT  */
  YYSYMBOL_LP = 21,                        /* LP  */
  YYSYMBOL_RP = 22,                        /* RP  */
  YYSYMBOL_LB = 23,                        /* LB  */
  YYSYMBOL_RB = 24,                        /* RB  */
  YYSYMBOL_LC = 25,                        /* LC  */
  YYSYMBOL_RC = 26,                        /* RC  */
  YYSYMBOL_INT = 27,                       /* INT  */
  YYSYMBOL_FLOAT = 28,                     /* FLOAT  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_LOWER_THAN_ELSE = 30,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_Program = 32,                   /* Program  */
  YYSYMBOL_ExtDefList = 33,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 34,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 35,                /* ExtDecList  */
  YYSYMBOL_Specifier = 36,                 /* Specifier  */
  YYSYMBOL_StructSpecifier = 37,           /* StructSpecifier  */
  YYSYMBOL_OptTag = 38,                    /* OptTag  */
  YYSYMBOL_Tag = 39,                       /* Tag  */
  YYSYMBOL_VarDec = 40,                    /* VarDec  */
  YYSYMBOL_FunDec = 41,                    /* FunDec  */
  YYSYMBOL_VarList = 42,                   /* VarList  */
  YYSYMBOL_ParamDec = 43,                  /* ParamDec  */
  YYSYMBOL_CompSt = 44,                    /* CompSt  */
  YYSYMBOL_StmtList = 45,                  /* StmtList  */
  YYSYMBOL_Stmt = 46,                      /* Stmt  */
  YYSYMBOL_DefList = 47,                   /* DefList  */
  YYSYMBOL_Def = 48,                       /* Def  */
  YYSYMBOL_DecList = 49,                   /* DecList  */
  YYSYMBOL_Dec = 50,                       /* Dec  */
  YYSYMBOL_Exp = 51,                       /* Exp  */
  YYSYMBOL_Args = 52                       /* Args  */
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
typedef yytype_int8 yy_state_t;

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    80,    83,    88,    91,    94,    97,   102,
     105,   115,   118,   123,   126,   131,   134,   139,   149,   152,
     155,   160,   163,   166,   171,   174,   179,   189,   192,   197,
     200,   205,   208,   211,   214,   217,   220,   223,   233,   236,
     241,   246,   249,   254,   257,   267,   270,   273,   276,   279,
     282,   285,   288,   291,   294,   297,   300,   303,   306,   309,
     312,   315,   318,   323,   326
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
  "\"end of file\"", "error", "\"invalid token\"", "STRUCT", "RETURN",
  "IF", "ELSE", "WHILE", "TYPE", "PLUS", "MINUS", "STAR", "DIV", "AND",
  "OR", "NOT", "ASSIGNOP", "RELOP", "SEMI", "COMMA", "DOT", "LP", "RP",
  "LB", "RB", "LC", "RC", "INT", "FLOAT", "ID", "LOWER_THAN_ELSE",
  "$accept", "Program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "OptTag", "Tag", "VarDec", "FunDec", "VarList",
  "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def", "DecList",
  "Dec", "Exp", "Args", YY_NULLPTR
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
     285
};
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-31)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    -7,    10,   -97,    22,   -97,     9,    17,   -97,   -97,
      24,    53,   -97,   -97,   -97,    38,   -97,    42,    64,    52,
      13,    18,   -97,   -97,    50,   -97,     7,    58,    61,    18,
     -97,     7,    63,    18,   -97,     7,    70,    67,    71,   -97,
     -97,    77,   -97,    40,    41,    73,    83,   -97,   -97,    81,
     -97,    18,   -97,    30,    93,    88,    89,    93,    93,    93,
     -97,   -97,    90,   -97,    86,    40,   130,    93,   -97,     7,
     -97,   -97,   145,    93,    93,    31,    60,   160,    78,   -97,
     -97,    93,    93,    93,    93,    93,    93,    93,    93,   -97,
      84,    93,   220,   -97,   -97,   175,   190,   -97,   -97,   205,
      94,    31,    31,    60,    60,   250,   235,   220,   254,   -97,
     114,    69,    69,    93,   -97,   -97,   109,   -97,   -97,    69,
     -97
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    16,    11,     0,     2,     0,     0,    12,     8,
      17,     0,    14,     1,     3,     0,     6,    18,     0,     9,
       0,    39,    23,    20,     0,     5,     0,     0,     0,    39,
       7,     0,     0,    39,    22,     0,     0,    25,     0,    18,
      10,     0,    28,     0,    43,     0,    41,    13,    38,    26,
      21,     0,    19,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    60,    32,     0,     0,     0,     0,    40,     0,
      24,    37,     0,     0,     0,    54,    55,     0,     0,    27,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,    44,    42,    33,     0,     0,    53,    57,    64,
       0,    49,    50,    51,    52,    46,    47,    45,    48,    59,
       0,     0,     0,     0,    56,    58,    34,    36,    63,     0,
      35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   111,   -97,    92,     1,   -97,   -97,   -97,   -29,
     -97,    68,   -97,   112,    80,   -96,    48,   -97,    66,   -97,
     -54,    16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    18,    31,     8,    11,    12,    19,
      20,    36,    37,    63,    64,    65,    32,    33,    45,    46,
      66,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      72,     7,    44,    75,    76,    77,    49,     7,    38,    -4,
       1,     9,     2,    92,    28,   116,   117,     3,    15,    95,
      96,     2,    13,   120,    99,    35,     3,   101,   102,   103,
     104,   105,   106,   107,   108,    16,    39,   110,    29,    10,
      44,    53,    83,    84,    54,    55,    17,    56,    71,   -15,
      57,    90,    35,     2,    91,    58,    42,    67,     3,    99,
      22,    59,    23,    24,    27,    29,   -30,    60,    61,    62,
      53,    26,    34,    54,    55,    27,    56,    43,    21,    57,
      90,    48,    25,    91,    58,    41,    51,    42,    57,    47,
      59,    68,    50,    58,    29,    23,    60,    61,    62,    59,
      98,    52,    69,    57,    27,    60,    61,    62,    58,    73,
      74,    78,    79,   109,    59,   119,   114,    14,    40,    70,
      60,    61,    62,    81,    82,    83,    84,    85,    86,   118,
      87,    88,    30,     0,    90,    93,     0,    91,   115,    81,
      82,    83,    84,    85,    86,    80,    87,    88,    89,     0,
      90,     0,     0,    91,    81,    82,    83,    84,    85,    86,
       0,    87,    88,    94,     0,    90,     0,     0,    91,    81,
      82,    83,    84,    85,    86,     0,    87,    88,     0,     0,
      90,     0,    97,    91,    81,    82,    83,    84,    85,    86,
       0,    87,    88,     0,     0,    90,     0,   111,    91,    81,
      82,    83,    84,    85,    86,     0,    87,    88,     0,     0,
      90,     0,   112,    91,    81,    82,    83,    84,    85,    86,
       0,    87,    88,     0,   113,    90,     0,     0,    91,    81,
      82,    83,    84,    85,    86,     0,    87,    88,     0,     0,
      90,     0,     0,    91,    81,    82,    83,    84,    85,     0,
       0,     0,    88,     0,     0,    90,     0,     0,    91,    81,
      82,    83,    84,    81,    82,    83,    84,    88,     0,     0,
      90,     0,     0,    91,    90,     0,     0,    91
};

static const yytype_int8 yycheck[] =
{
      54,     0,    31,    57,    58,    59,    35,     6,     1,     0,
       1,    18,     3,    67,     1,   111,   112,     8,     1,    73,
      74,     3,     0,   119,    78,    24,     8,    81,    82,    83,
      84,    85,    86,    87,    88,    18,    29,    91,    25,    29,
      69,     1,    11,    12,     4,     5,    29,     7,    18,    25,
      10,    20,    51,     3,    23,    15,    26,    16,     8,   113,
      22,    21,    24,    21,    23,    25,    26,    27,    28,    29,
       1,    19,    22,     4,     5,    23,     7,    29,    25,    10,
      20,    33,    18,    23,    15,    27,    19,    26,    10,    26,
      21,    18,    22,    15,    25,    24,    27,    28,    29,    21,
      22,    24,    19,    10,    23,    27,    28,    29,    15,    21,
      21,    21,    26,    29,    21,     6,    22,     6,    26,    51,
      27,    28,    29,     9,    10,    11,    12,    13,    14,   113,
      16,    17,    20,    -1,    20,    69,    -1,    23,    24,     9,
      10,    11,    12,    13,    14,    65,    16,    17,    18,    -1,
      20,    -1,    -1,    23,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    -1,    -1,    23,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    -1,    22,    23,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    -1,    22,    23,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    -1,    22,    23,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    19,    20,    -1,    -1,    23,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    -1,    -1,    23,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,     9,
      10,    11,    12,     9,    10,    11,    12,    17,    -1,    -1,
      20,    -1,    -1,    23,    20,    -1,    -1,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     8,    32,    33,    34,    36,    37,    18,
      29,    38,    39,     0,    33,     1,    18,    29,    35,    40,
      41,    25,    22,    24,    21,    18,    19,    23,     1,    25,
      44,    36,    47,    48,    22,    36,    42,    43,     1,    29,
      35,    27,    26,    47,    40,    49,    50,    26,    47,    40,
      22,    19,    24,     1,     4,     5,     7,    10,    15,    21,
      27,    28,    29,    44,    45,    46,    51,    16,    18,    19,
      42,    18,    51,    21,    21,    51,    51,    51,    21,    26,
      45,     9,    10,    11,    12,    13,    14,    16,    17,    18,
      20,    23,    51,    49,    18,    51,    51,    22,    22,    51,
      52,    51,    51,    51,    51,    51,    51,    51,    51,    29,
      51,    22,    22,    19,    22,    24,    46,    46,    52,     6,
      46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    34,    35,
      35,    36,    36,    37,    37,    38,    38,    39,    40,    40,
      40,    41,    41,    41,    42,    42,    43,    44,    44,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    47,    47,
      48,    49,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    52,    52
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     2,     1,
       3,     1,     1,     5,     2,     1,     0,     1,     1,     4,
       2,     4,     3,     2,     3,     1,     2,     4,     2,     2,
       0,     2,     1,     3,     5,     7,     5,     2,     2,     0,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     4,     3,     4,     3,
       1,     1,     1,     3,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ExtDefList  */
#line 74 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Program", 1, (yyvsp[0].node));
					root = (yyval.node);
				}
#line 1428 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: ExtDef ExtDefList  */
#line 80 "syntax.y"
                                 {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ExtDefList", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1436 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: %empty  */
#line 83 "syntax.y"
                                {
					(yyval.node) = NULL;
				}
#line 1444 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifier ExtDecList SEMI  */
#line 88 "syntax.y"
                                         {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ExtDef", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));				
				}
#line 1452 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifier SEMI  */
#line 91 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ExtDef", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1460 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifier FunDec CompSt  */
#line 94 "syntax.y"
                                       {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ExtDef", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1468 "syntax.tab.c"
    break;

  case 8: /* ExtDef: error SEMI  */
#line 97 "syntax.y"
                                {
					synError = TRUE;
				}
#line 1476 "syntax.tab.c"
    break;

  case 9: /* ExtDecList: VarDec  */
#line 102 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ExtDecList", 1, (yyvsp[0].node));
				}
#line 1484 "syntax.tab.c"
    break;

  case 10: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 105 "syntax.y"
                                       {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ExtDecList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1492 "syntax.tab.c"
    break;

  case 11: /* Specifier: TYPE  */
#line 115 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Specifier", 1, (yyvsp[0].node));
				}
#line 1500 "syntax.tab.c"
    break;

  case 12: /* Specifier: StructSpecifier  */
#line 118 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Specifier", 1, (yyvsp[0].node));
				}
#line 1508 "syntax.tab.c"
    break;

  case 13: /* StructSpecifier: STRUCT OptTag LC DefList RC  */
#line 123 "syntax.y"
                                           {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "StructSpecifier", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1516 "syntax.tab.c"
    break;

  case 14: /* StructSpecifier: STRUCT Tag  */
#line 126 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "StructSpecifier", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1524 "syntax.tab.c"
    break;

  case 15: /* OptTag: ID  */
#line 131 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "OptTag", 1, (yyvsp[0].node));
				}
#line 1532 "syntax.tab.c"
    break;

  case 16: /* OptTag: %empty  */
#line 134 "syntax.y"
                                {
					(yyval.node) = NULL;
				}
#line 1540 "syntax.tab.c"
    break;

  case 17: /* Tag: ID  */
#line 139 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Tag", 1, (yyvsp[0].node));
				}
#line 1548 "syntax.tab.c"
    break;

  case 18: /* VarDec: ID  */
#line 149 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "VarDec", 1, (yyvsp[0].node));
				}
#line 1556 "syntax.tab.c"
    break;

  case 19: /* VarDec: VarDec LB INT RB  */
#line 152 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "VarDec", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1564 "syntax.tab.c"
    break;

  case 20: /* VarDec: error RB  */
#line 155 "syntax.y"
                                {
					synError = TRUE;
				}
#line 1572 "syntax.tab.c"
    break;

  case 21: /* FunDec: ID LP VarList RP  */
#line 160 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "FunDec", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1580 "syntax.tab.c"
    break;

  case 22: /* FunDec: ID LP RP  */
#line 163 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "FunDec", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1588 "syntax.tab.c"
    break;

  case 23: /* FunDec: error RP  */
#line 166 "syntax.y"
                                {
					synError = TRUE;
				}
#line 1596 "syntax.tab.c"
    break;

  case 24: /* VarList: ParamDec COMMA VarList  */
#line 171 "syntax.y"
                                      {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "VarList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1604 "syntax.tab.c"
    break;

  case 25: /* VarList: ParamDec  */
#line 174 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "VarList", 1, (yyvsp[0].node));
				}
#line 1612 "syntax.tab.c"
    break;

  case 26: /* ParamDec: Specifier VarDec  */
#line 179 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ParamDec", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1620 "syntax.tab.c"
    break;

  case 27: /* CompSt: LC DefList StmtList RC  */
#line 189 "syntax.y"
                                      {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "ComSt", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1628 "syntax.tab.c"
    break;

  case 28: /* CompSt: error RC  */
#line 192 "syntax.y"
                                {
					synError = TRUE;
				}
#line 1636 "syntax.tab.c"
    break;

  case 29: /* StmtList: Stmt StmtList  */
#line 197 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "StmtList", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1644 "syntax.tab.c"
    break;

  case 30: /* StmtList: %empty  */
#line 200 "syntax.y"
                                {
					(yyval.node) = NULL;
				}
#line 1652 "syntax.tab.c"
    break;

  case 31: /* Stmt: Exp SEMI  */
#line 205 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Stmt", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1660 "syntax.tab.c"
    break;

  case 32: /* Stmt: CompSt  */
#line 208 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Stmt", 1, (yyvsp[0].node));
				}
#line 1668 "syntax.tab.c"
    break;

  case 33: /* Stmt: RETURN Exp SEMI  */
#line 211 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Stmt", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1676 "syntax.tab.c"
    break;

  case 34: /* Stmt: IF LP Exp RP Stmt  */
#line 214 "syntax.y"
                                 {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Stmt", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1684 "syntax.tab.c"
    break;

  case 35: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 217 "syntax.y"
                                           {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Stmt", 7, (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1692 "syntax.tab.c"
    break;

  case 36: /* Stmt: WHILE LP Exp RP Stmt  */
#line 220 "syntax.y"
                                    {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Stmt", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1700 "syntax.tab.c"
    break;

  case 37: /* Stmt: error SEMI  */
#line 223 "syntax.y"
                                {
					synError = TRUE;
				}
#line 1708 "syntax.tab.c"
    break;

  case 38: /* DefList: Def DefList  */
#line 233 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "DefList", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1716 "syntax.tab.c"
    break;

  case 39: /* DefList: %empty  */
#line 236 "syntax.y"
                                {
					(yyval.node) = NULL;
				}
#line 1724 "syntax.tab.c"
    break;

  case 40: /* Def: Specifier DecList SEMI  */
#line 241 "syntax.y"
                                      {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Def", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1732 "syntax.tab.c"
    break;

  case 41: /* DecList: Dec  */
#line 246 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "DecList", 1, (yyvsp[0].node));
				}
#line 1740 "syntax.tab.c"
    break;

  case 42: /* DecList: Dec COMMA DecList  */
#line 249 "syntax.y"
                                 {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "DecList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1748 "syntax.tab.c"
    break;

  case 43: /* Dec: VarDec  */
#line 254 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Dec", 1, (yyvsp[0].node));
				}
#line 1756 "syntax.tab.c"
    break;

  case 44: /* Dec: VarDec ASSIGNOP Exp  */
#line 257 "syntax.y"
                                   {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Dec", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1764 "syntax.tab.c"
    break;

  case 45: /* Exp: Exp ASSIGNOP Exp  */
#line 267 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1772 "syntax.tab.c"
    break;

  case 46: /* Exp: Exp AND Exp  */
#line 270 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1780 "syntax.tab.c"
    break;

  case 47: /* Exp: Exp OR Exp  */
#line 273 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1788 "syntax.tab.c"
    break;

  case 48: /* Exp: Exp RELOP Exp  */
#line 276 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1796 "syntax.tab.c"
    break;

  case 49: /* Exp: Exp PLUS Exp  */
#line 279 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1804 "syntax.tab.c"
    break;

  case 50: /* Exp: Exp MINUS Exp  */
#line 282 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1812 "syntax.tab.c"
    break;

  case 51: /* Exp: Exp STAR Exp  */
#line 285 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1820 "syntax.tab.c"
    break;

  case 52: /* Exp: Exp DIV Exp  */
#line 288 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1828 "syntax.tab.c"
    break;

  case 53: /* Exp: LP Exp RP  */
#line 291 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1836 "syntax.tab.c"
    break;

  case 54: /* Exp: MINUS Exp  */
#line 294 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1844 "syntax.tab.c"
    break;

  case 55: /* Exp: NOT Exp  */
#line 297 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1852 "syntax.tab.c"
    break;

  case 56: /* Exp: ID LP Args RP  */
#line 300 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1860 "syntax.tab.c"
    break;

  case 57: /* Exp: ID LP RP  */
#line 303 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1868 "syntax.tab.c"
    break;

  case 58: /* Exp: Exp LB Exp RB  */
#line 306 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1876 "syntax.tab.c"
    break;

  case 59: /* Exp: Exp DOT ID  */
#line 309 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1884 "syntax.tab.c"
    break;

  case 60: /* Exp: ID  */
#line 312 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 1, (yyvsp[0].node));
				}
#line 1892 "syntax.tab.c"
    break;

  case 61: /* Exp: INT  */
#line 315 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 1, (yyvsp[0].node));
				}
#line 1900 "syntax.tab.c"
    break;

  case 62: /* Exp: FLOAT  */
#line 318 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Exp", 1, (yyvsp[0].node));
				}
#line 1908 "syntax.tab.c"
    break;

  case 63: /* Args: Exp COMMA Args  */
#line 323 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Args", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
				}
#line 1916 "syntax.tab.c"
    break;

  case 64: /* Args: Exp  */
#line 326 "syntax.y"
                                {
					(yyval.node) = newNode((yyloc).first_line, NOT_A_TOKEN, "Args", 1, (yyvsp[0].node));
				}
#line 1924 "syntax.tab.c"
    break;


#line 1928 "syntax.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 331 "syntax.y"


void yyerror(const char* msg){
	fprintf(stderr, "Error type B at line %d: %s.\n", yylineno, msg);
}
