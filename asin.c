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
#line 1 "src/asin.y"

#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
#include "libgci.h"

void yyerror(const char *s);
extern int yylex(void);

#line 82 "asin.c"

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

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_BOOL = 4,                       /* BOOL  */
  YYSYMBOL_K_TRUE = 5,                     /* K_TRUE  */
  YYSYMBOL_K_FALSE = 6,                    /* K_FALSE  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_READ = 8,                       /* READ  */
  YYSYMBOL_PRINT = 9,                      /* PRINT  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_ID = 13,                        /* ID  */
  YYSYMBOL_CTE = 14,                       /* CTE  */
  YYSYMBOL_OP_LOGICO_AND = 15,             /* OP_LOGICO_AND  */
  YYSYMBOL_OP_LOGICO_OR = 16,              /* OP_LOGICO_OR  */
  YYSYMBOL_OP_IGUALDAD_EQ = 17,            /* OP_IGUALDAD_EQ  */
  YYSYMBOL_OP_IGUALDAD_NEQ = 18,           /* OP_IGUALDAD_NEQ  */
  YYSYMBOL_OP_RELACIONAL_GE = 19,          /* OP_RELACIONAL_GE  */
  YYSYMBOL_OP_RELACIONAL_LE = 20,          /* OP_RELACIONAL_LE  */
  YYSYMBOL_21_ = 21,                       /* ';'  */
  YYSYMBOL_22_ = 22,                       /* '='  */
  YYSYMBOL_23_ = 23,                       /* '['  */
  YYSYMBOL_24_ = 24,                       /* ']'  */
  YYSYMBOL_25_ = 25,                       /* '('  */
  YYSYMBOL_26_ = 26,                       /* ')'  */
  YYSYMBOL_27_ = 27,                       /* ','  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_30_ = 30,                       /* '>'  */
  YYSYMBOL_31_ = 31,                       /* '<'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_programa = 38,                  /* programa  */
  YYSYMBOL_inicio_globales = 39,           /* inicio_globales  */
  YYSYMBOL_salto_main = 40,                /* salto_main  */
  YYSYMBOL_listDecla = 41,                 /* listDecla  */
  YYSYMBOL_decla = 42,                     /* decla  */
  YYSYMBOL_declaVar = 43,                  /* declaVar  */
  YYSYMBOL_const = 44,                     /* const  */
  YYSYMBOL_tipoSimp = 45,                  /* tipoSimp  */
  YYSYMBOL_declaFunc = 46,                 /* declaFunc  */
  YYSYMBOL_47_1 = 47,                      /* @1  */
  YYSYMBOL_48_2 = 48,                      /* @2  */
  YYSYMBOL_paramForm = 49,                 /* paramForm  */
  YYSYMBOL_listParamForm = 50,             /* listParamForm  */
  YYSYMBOL_bloque = 51,                    /* bloque  */
  YYSYMBOL_52_3 = 52,                      /* @3  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_declaVarLocal = 54,             /* declaVarLocal  */
  YYSYMBOL_listInst = 55,                  /* listInst  */
  YYSYMBOL_inst = 56,                      /* inst  */
  YYSYMBOL_instExpre = 57,                 /* instExpre  */
  YYSYMBOL_instEntSal = 58,                /* instEntSal  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_instSelec = 61,                 /* instSelec  */
  YYSYMBOL_62_7 = 62,                      /* @7  */
  YYSYMBOL_63_8 = 63,                      /* @8  */
  YYSYMBOL_instIter = 64,                  /* instIter  */
  YYSYMBOL_65_9 = 65,                      /* @9  */
  YYSYMBOL_66_10 = 66,                     /* @10  */
  YYSYMBOL_67_11 = 67,                     /* @11  */
  YYSYMBOL_68_12 = 68,                     /* @12  */
  YYSYMBOL_69_13 = 69,                     /* $@13  */
  YYSYMBOL_expreOP = 70,                   /* expreOP  */
  YYSYMBOL_expre = 71,                     /* expre  */
  YYSYMBOL_expreLogic = 72,                /* expreLogic  */
  YYSYMBOL_expreIgual = 73,                /* expreIgual  */
  YYSYMBOL_expreRel = 74,                  /* expreRel  */
  YYSYMBOL_expreAd = 75,                   /* expreAd  */
  YYSYMBOL_expreMul = 76,                  /* expreMul  */
  YYSYMBOL_expreUna = 77,                  /* expreUna  */
  YYSYMBOL_expreSufi = 78,                 /* expreSufi  */
  YYSYMBOL_79_14 = 79,                     /* $@14  */
  YYSYMBOL_paramAct = 80,                  /* paramAct  */
  YYSYMBOL_listParamAct = 81,              /* listParamAct  */
  YYSYMBOL_82_15 = 82,                     /* $@15  */
  YYSYMBOL_opLogic = 83,                   /* opLogic  */
  YYSYMBOL_opIgual = 84,                   /* opIgual  */
  YYSYMBOL_opRel = 85,                     /* opRel  */
  YYSYMBOL_opAd = 86,                      /* opAd  */
  YYSYMBOL_opMul = 87,                     /* opMul  */
  YYSYMBOL_opUna = 88                      /* opUna  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


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
       2,     2,     2,    36,     2,     2,     2,     2,     2,     2,
      25,    26,    34,    32,    27,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    21,
      31,    22,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    46,    54,    62,    62,    63,    63,    66,
      71,    80,    92,    93,    94,    97,    97,   101,   106,   100,
     121,   122,   126,   132,   142,   149,   141,   163,   163,   164,
     164,   165,   165,   165,   165,   165,   166,   166,   170,   169,
     175,   174,   182,   187,   181,   197,   199,   204,   208,   210,
     196,   220,   220,   223,   224,   230,   240,   241,   249,   250,
     260,   261,   271,   272,   280,   281,   289,   290,   300,   301,
     302,   310,   317,   316,   328,   328,   330,   337,   336,   347,
     347,   348,   348,   349,   349,   349,   349,   350,   350,   351,
     351,   352,   352,   352
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "BOOL",
  "K_TRUE", "K_FALSE", "RETURN", "READ", "PRINT", "IF", "ELSE", "FOR",
  "ID", "CTE", "OP_LOGICO_AND", "OP_LOGICO_OR", "OP_IGUALDAD_EQ",
  "OP_IGUALDAD_NEQ", "OP_RELACIONAL_GE", "OP_RELACIONAL_LE", "';'", "'='",
  "'['", "']'", "'('", "')'", "','", "'{'", "'}'", "'>'", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'!'", "$accept", "programa", "inicio_globales",
  "salto_main", "listDecla", "decla", "declaVar", "const", "tipoSimp",
  "declaFunc", "@1", "@2", "paramForm", "listParamForm", "bloque", "@3",
  "$@4", "declaVarLocal", "listInst", "inst", "instExpre", "instEntSal",
  "$@5", "$@6", "instSelec", "@7", "@8", "instIter", "@9", "@10", "@11",
  "@12", "$@13", "expreOP", "expre", "expreLogic", "expreIgual",
  "expreRel", "expreAd", "expreMul", "expreUna", "expreSufi", "$@14",
  "paramAct", "listParamAct", "$@15", "opLogic", "opIgual", "opRel",
  "opAd", "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -89,     1,   -89,   -89,     7,   -89,   -89,     7,   -89,   -89,
      -8,   -89,   -89,    93,   -89,    55,    10,   -10,   -89,   -89,
     -89,    16,    19,     7,   -89,    37,    49,    40,   -89,   -89,
      41,   -89,     7,    44,   -89,   -89,   -89,   -89,     7,   -89,
      82,    13,    93,     3,    57,    72,    80,    87,    86,   -89,
       3,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,    79,    75,    69,   -17,    85,    91,   -89,   -89,    88,
     -89,    97,     3,     3,     3,     3,     3,   -89,    96,    42,
     -89,   -89,   -89,    88,   -89,   -89,    88,   -89,   -89,   -89,
     -89,    88,   -89,   -89,    88,   -89,   -89,    88,   -19,   -89,
      98,   101,   102,   103,   109,   -89,   -89,    99,     3,   -89,
     -89,    69,   -17,    85,    91,   -89,     3,   104,   -89,   -89,
     -89,   -89,   110,   107,   105,   -89,   111,   -89,   115,   116,
      71,     3,     3,   112,   -89,   -89,   -89,   -89,   127,   -89,
     -89,     3,   -89,   119,   -89,    71,   -89,   -89,   -89,     3,
     -89,   117,    71,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     4,     1,     0,    15,    16,     2,     5,     7,
       0,     8,     6,    17,     9,     0,     0,     0,    13,    14,
      12,     0,     0,    20,    10,     0,     0,     0,    21,    11,
      22,    18,     0,     0,    23,    24,    19,    27,    29,    28,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    37,
       0,    29,    93,    92,    91,    68,    30,    32,    33,    34,
      35,     0,    53,    56,    58,    60,    62,    64,    66,     0,
      25,     0,     0,     0,    51,     0,     0,    72,     0,     0,
      36,    79,    80,     0,    81,    82,     0,    85,    86,    83,
      84,     0,    87,    88,     0,    89,    90,     0,    70,    67,
       0,     0,     0,     0,     0,    52,    54,     0,    74,    69,
      31,    57,    59,    61,    63,    65,     0,     0,    38,    40,
      42,    45,    71,    76,     0,    75,     0,    26,     0,     0,
       0,     0,     0,     0,    73,    71,    39,    41,     0,    46,
      55,     0,    43,     0,    78,     0,    47,    44,    48,    51,
      49,     0,     0,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   -89,   -89,   134,   106,   130,    21,   -89,
     -89,   -89,   -89,   114,   -89,   -89,   -89,   -89,   100,   -88,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,    -7,   -43,   -89,    64,    62,    58,    56,
     -57,   -89,   -89,   -89,    11,   -89,   -89,   -89,   -89,   -89,
     -89,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     4,     7,     8,     9,    55,    10,    11,
      17,    33,    27,    28,    36,    37,   100,    38,    41,    56,
      57,    58,   128,   129,    59,   130,   145,    60,   131,   143,
     148,   149,   151,   104,    61,    62,    63,    64,    65,    66,
      67,    68,   108,   124,   125,   133,    83,    86,    91,    94,
      97,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,     3,    87,    88,   116,    13,    77,    78,    18,    19,
       5,     6,    99,    89,    90,    23,    48,    20,    18,    19,
      43,    44,    45,    46,    22,    47,    48,    20,    50,   102,
     103,   105,   106,   107,    49,    52,    53,    24,    50,    54,
     115,    51,   138,    25,    26,    52,    53,    18,    19,    54,
      44,    45,    46,    26,    47,    48,    20,   147,    29,    40,
      18,    19,    30,    49,   153,   123,    31,    50,    32,    20,
      51,   110,    35,   126,    52,    53,    18,    19,    54,    44,
      45,    46,    71,    47,    48,    20,    84,    85,   139,   140,
      81,    82,    49,    18,    19,    42,    50,    72,   123,    51,
      80,    98,    20,    52,    53,    73,   105,    54,    75,    76,
     101,    77,    74,    50,    14,    15,    16,    92,    93,   117,
      52,    53,   109,   122,    54,    95,    96,   118,   119,   120,
     121,   134,   132,   127,   -77,   135,   136,   137,   142,   141,
     146,    12,   150,   152,    39,    21,    34,   111,   112,   113,
     114,    79,   144
};

static const yytype_uint8 yycheck[] =
{
      43,     0,    19,    20,    23,    13,    25,    50,     5,     6,
       3,     4,    69,    30,    31,    25,    13,    14,     5,     6,
       7,     8,     9,    10,    14,    12,    13,    14,    25,    72,
      73,    74,    75,    76,    21,    32,    33,    21,    25,    36,
      97,    28,   130,    24,    23,    32,    33,     5,     6,    36,
       8,     9,    10,    32,    12,    13,    14,   145,    21,    38,
       5,     6,    13,    21,   152,   108,    26,    25,    27,    14,
      28,    29,    28,   116,    32,    33,     5,     6,    36,     8,
       9,    10,    25,    12,    13,    14,    17,    18,   131,   132,
      15,    16,    21,     5,     6,    13,    25,    25,   141,    28,
      21,    13,    14,    32,    33,    25,   149,    36,    22,    23,
      13,    25,    25,    25,    21,    22,    23,    32,    33,    21,
      32,    33,    26,    24,    36,    34,    35,    26,    26,    26,
      21,    26,    22,    29,    27,    24,    21,    21,    11,    27,
      21,     7,   149,    26,    38,    15,    32,    83,    86,    91,
      94,    51,   141
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,    40,     3,     4,    41,    42,    43,
      45,    46,    42,    13,    21,    22,    23,    47,     5,     6,
      14,    44,    14,    25,    21,    24,    45,    49,    50,    21,
      13,    26,    27,    48,    50,    28,    51,    52,    54,    43,
      45,    55,    13,     7,     8,     9,    10,    12,    13,    21,
      25,    28,    32,    33,    36,    44,    56,    57,    58,    61,
      64,    71,    72,    73,    74,    75,    76,    77,    78,    88,
      71,    25,    25,    25,    25,    22,    23,    25,    71,    55,
      21,    15,    16,    83,    17,    18,    84,    19,    20,    30,
      31,    85,    32,    33,    86,    34,    35,    87,    13,    77,
      53,    13,    71,    71,    70,    71,    71,    71,    79,    26,
      29,    73,    74,    75,    76,    77,    23,    21,    26,    26,
      26,    21,    24,    71,    80,    81,    71,    29,    59,    60,
      62,    65,    22,    82,    26,    24,    21,    21,    56,    71,
      71,    27,    11,    66,    81,    63,    21,    56,    67,    68,
      70,    69,    26,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    40,    41,    41,    42,    42,    43,
      43,    43,    44,    44,    44,    45,    45,    47,    48,    46,
      49,    49,    50,    50,    52,    53,    51,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    57,    57,    59,    58,
      60,    58,    62,    63,    61,    65,    66,    67,    68,    69,
      64,    70,    70,    71,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    78,    79,    78,    80,    80,    81,    82,    81,    83,
      83,    84,    84,    85,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     0,     1,     2,     1,     1,     3,
       5,     6,     1,     1,     1,     1,     1,     0,     0,     8,
       0,     1,     2,     4,     0,     0,     9,     0,     2,     0,
       2,     3,     1,     1,     1,     1,     2,     1,     0,     6,
       0,     6,     0,     0,     9,     0,     0,     0,     0,     0,
      14,     0,     1,     1,     3,     6,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     4,     0,     5,     0,     1,     1,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
  case 2: /* programa: inicio_globales salto_main listDecla  */
#line 36 "src/asin.y"
    {
        if (verTdS) mostrarTdS();
        SIMB sim = obtTdS("main");
        if (sim.t == T_ERROR) yyerror("Falta main");
        completaLans((yyvsp[-2].cent), crArgEnt(dvar));
        completaLans((yyvsp[-1].cent), crArgEtq(sim.d));
    }
#line 1275 "asin.c"
    break;

  case 3: /* inicio_globales: %empty  */
#line 46 "src/asin.y"
    {
        dvar = 0; niv = 0; cargaContexto(niv);
        (yyval.cent) = creaLans(si);
        emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
    }
#line 1285 "asin.c"
    break;

  case 4: /* salto_main: %empty  */
#line 54 "src/asin.y"
    {
        emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(1));
        (yyval.cent) = creaLans(si);
        emite(CALL, crArgNul(), crArgNul(), crArgEtq(-1));
        emite(FIN, crArgNul(), crArgNul(), crArgNul());
    }
#line 1296 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID ';'  */
#line 67 "src/asin.y"
    {
        if (!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, -1)) yyerror("ID repetido.");
        else dvar += TALLA_TIPO_SIMPLE;
    }
#line 1305 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID '=' const ';'  */
#line 72 "src/asin.y"
    {
        if ((yyvsp[-4].cent) != (yyvsp[-1].texp).t) yyerror("Error de tipos.");
        if (!insTdS((yyvsp[-3].ident), VARIABLE, (yyvsp[-4].cent), niv, dvar, -1)) yyerror("ID repetido.");
        else {
            emite(EASIG, crArgEnt((yyvsp[-1].texp).d), crArgNul(), crArgPos(niv, dvar));
            dvar += TALLA_TIPO_SIMPLE;
        }
    }
#line 1318 "asin.c"
    break;

  case 11: /* declaVar: tipoSimp ID '[' CTE ']' ';'  */
#line 81 "src/asin.y"
    {
        if ((yyvsp[-2].cent) <= 0) yyerror("Dimension no positiva.");
        else {
            int ref = insTdA((yyvsp[-5].cent), (yyvsp[-2].cent));
            if (!insTdS((yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, ref)) yyerror("ID repetido.");
            else dvar += (yyvsp[-2].cent) * TALLA_TIPO_SIMPLE;
        }
    }
#line 1331 "asin.c"
    break;

  case 12: /* const: CTE  */
#line 92 "src/asin.y"
        { (yyval.texp).t = T_ENTERO; (yyval.texp).d = (yyvsp[0].cent); }
#line 1337 "asin.c"
    break;

  case 13: /* const: K_TRUE  */
#line 93 "src/asin.y"
             { (yyval.texp).t = T_LOGICO; (yyval.texp).d = 1; }
#line 1343 "asin.c"
    break;

  case 14: /* const: K_FALSE  */
#line 94 "src/asin.y"
              { (yyval.texp).t = T_LOGICO; (yyval.texp).d = 0; }
#line 1349 "asin.c"
    break;

  case 15: /* tipoSimp: INT  */
#line 97 "src/asin.y"
              { (yyval.cent) = T_ENTERO; }
#line 1355 "asin.c"
    break;

  case 16: /* tipoSimp: BOOL  */
#line 97 "src/asin.y"
                                        { (yyval.cent) = T_LOGICO; }
#line 1361 "asin.c"
    break;

  case 17: /* @1: %empty  */
#line 101 "src/asin.y"
    {
        niv = 1; cargaContexto(niv);
        (yyval.cent) = si;
    }
#line 1370 "asin.c"
    break;

  case 18: /* @2: %empty  */
#line 106 "src/asin.y"
    {
        if (!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), 0, (yyvsp[-3].cent), (yyvsp[-1].lista).ref)) yyerror("ID repetido.");
        (yyval.cent) = dvar;
        dvar = 0;
    }
#line 1380 "asin.c"
    break;

  case 19: /* declaFunc: tipoSimp ID @1 '(' paramForm ')' @2 bloque  */
#line 112 "src/asin.y"
    {
        if (verTdS) mostrarTdS();
        descargaContexto(niv);
        niv = 0;
        dvar = (yyvsp[-1].cent);
    }
#line 1391 "asin.c"
    break;

  case 20: /* paramForm: %empty  */
#line 121 "src/asin.y"
    { (yyval.lista).ref = insTdD(-1, T_VACIO); (yyval.lista).talla = 0; }
#line 1397 "asin.c"
    break;

  case 21: /* paramForm: listParamForm  */
#line 122 "src/asin.y"
                    { (yyval.lista) = (yyvsp[0].lista); }
#line 1403 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID  */
#line 127 "src/asin.y"
    {
        (yyval.lista).ref = insTdD(-1, (yyvsp[-1].cent));
        (yyval.lista).talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
        insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, -(yyval.lista).talla, -1);
    }
#line 1413 "asin.c"
    break;

  case 23: /* listParamForm: tipoSimp ID ',' listParamForm  */
#line 133 "src/asin.y"
    {
        (yyval.lista).ref = insTdD((yyvsp[0].lista).ref, (yyvsp[-3].cent));
        (yyval.lista).talla = (yyvsp[0].lista).talla + TALLA_TIPO_SIMPLE;
        insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].cent), niv, -(yyval.lista).talla, -1);
    }
#line 1423 "asin.c"
    break;

  case 24: /* @3: %empty  */
#line 142 "src/asin.y"
    {
        emite(PUSHFP, crArgNul(), crArgNul(), crArgNul());
        emite(FPTOP, crArgNul(), crArgNul(), crArgNul());
        (yyval.cent) = creaLans(si);
        emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
    }
#line 1434 "asin.c"
    break;

  case 25: /* $@4: %empty  */
#line 149 "src/asin.y"
    {
        INF inf = obtTdD(-1);
        if (inf.tipo != (yyvsp[0].texp).t) yyerror("Tipo retorno incorrecto.");
        int off_ret = -(TALLA_SEGENLACES + inf.tsp + 1);
        emite(EASIG, crArgPos(niv, (yyvsp[0].texp).d), crArgNul(), crArgPos(niv, off_ret));
        completaLans((yyvsp[-4].cent), crArgEnt(dvar));
        if (dvar > 0) emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(dvar));
        emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
        if (strcmp(inf.nom, "main") == 0) emite(FIN, crArgNul(), crArgNul(), crArgNul());
        else emite(RET, crArgNul(), crArgNul(), crArgNul());
    }
#line 1450 "asin.c"
    break;

  case 38: /* $@5: %empty  */
#line 170 "src/asin.y"
    {
        SIMB sim = obtTdS((yyvsp[-1].ident));
        emite(EREAD, crArgNul(), crArgNul(), crArgPos(sim.n, sim.d));
    }
#line 1459 "asin.c"
    break;

  case 40: /* $@6: %empty  */
#line 175 "src/asin.y"
    {
        emite(EWRITE, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[-1].texp).d));
    }
#line 1467 "asin.c"
    break;

  case 42: /* @7: %empty  */
#line 182 "src/asin.y"
    {
        if ((yyvsp[-1].texp).t != T_LOGICO) yyerror("IF requiere logico");
        (yyval.cent) = creaLans(si);
        emite(EIGUAL, crArgPos(niv, (yyvsp[-1].texp).d), crArgEnt(0), crArgEtq(-1));
    }
#line 1477 "asin.c"
    break;

  case 43: /* @8: %empty  */
#line 187 "src/asin.y"
    {
        (yyval.cent) = creaLans(si);
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
        completaLans((yyvsp[-2].cent), crArgEtq(si));
    }
#line 1487 "asin.c"
    break;

  case 44: /* instSelec: IF '(' expre ')' @7 inst ELSE @8 inst  */
#line 192 "src/asin.y"
    { completaLans((yyvsp[-1].cent), crArgEtq(si)); }
#line 1493 "asin.c"
    break;

  case 45: /* @9: %empty  */
#line 197 "src/asin.y"
    { (yyval.cent) = si; }
#line 1499 "asin.c"
    break;

  case 46: /* @10: %empty  */
#line 199 "src/asin.y"
    {
        if ((yyvsp[0].texp).t != T_LOGICO) yyerror("FOR requiere logico");
        (yyval.cent) = creaLans(si);
        emite(EIGUAL, crArgPos(niv, (yyvsp[0].texp).d), crArgEnt(0), crArgEtq(-1));
    }
#line 1509 "asin.c"
    break;

  case 47: /* @11: %empty  */
#line 204 "src/asin.y"
    {
        (yyval.cent) = creaLans(si);
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(-1));
    }
#line 1518 "asin.c"
    break;

  case 48: /* @12: %empty  */
#line 208 "src/asin.y"
    { (yyval.cent) = si; }
#line 1524 "asin.c"
    break;

  case 49: /* $@13: %empty  */
#line 210 "src/asin.y"
    {
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-6].cent)));
        completaLans((yyvsp[-2].cent), crArgEtq(si));
    }
#line 1533 "asin.c"
    break;

  case 50: /* instIter: FOR '(' expreOP ';' @9 expre @10 ';' @11 @12 expreOP $@13 ')' inst  */
#line 214 "src/asin.y"
    {
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-4].cent)));
        completaLans((yyvsp[-7].cent), crArgEtq(si));
    }
#line 1542 "asin.c"
    break;

  case 51: /* expreOP: %empty  */
#line 220 "src/asin.y"
         { (yyval.texp).t = T_VACIO; }
#line 1548 "asin.c"
    break;

  case 52: /* expreOP: expre  */
#line 220 "src/asin.y"
                                     { (yyval.texp) = (yyvsp[0].texp); }
#line 1554 "asin.c"
    break;

  case 53: /* expre: expreLogic  */
#line 223 "src/asin.y"
               { (yyval.texp) = (yyvsp[0].texp); }
#line 1560 "asin.c"
    break;

  case 54: /* expre: ID '=' expre  */
#line 225 "src/asin.y"
    {
        SIMB sim = obtTdS((yyvsp[-2].ident));
        (yyval.texp).t = sim.t; (yyval.texp).d = sim.d;
        emite(EASIG, crArgPos(niv, (yyvsp[0].texp).d), crArgNul(), crArgPos(sim.n, sim.d));
    }
#line 1570 "asin.c"
    break;

  case 55: /* expre: ID '[' expre ']' '=' expre  */
#line 231 "src/asin.y"
    {
        SIMB sim = obtTdS((yyvsp[-5].ident)); DIM dim = obtTdA(sim.ref);
        (yyval.texp).t = dim.telem; (yyval.texp).d = creaVarTemp();
        emite(EVA, crArgPos(sim.n, sim.d), crArgPos(niv, (yyvsp[-3].texp).d), crArgPos(niv, (yyvsp[0].texp).d));
        emite(EASIG, crArgPos(niv, (yyvsp[0].texp).d), crArgNul(), crArgPos(niv, (yyval.texp).d));
    }
#line 1581 "asin.c"
    break;

  case 56: /* expreLogic: expreIgual  */
#line 240 "src/asin.y"
               { (yyval.texp) = (yyvsp[0].texp); }
#line 1587 "asin.c"
    break;

  case 57: /* expreLogic: expreLogic opLogic expreIgual  */
#line 242 "src/asin.y"
    {
        (yyval.texp).t = T_LOGICO; (yyval.texp).d = creaVarTemp();
        emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].texp).d), crArgPos(niv, (yyvsp[0].texp).d), crArgPos(niv, (yyval.texp).d));
    }
#line 1596 "asin.c"
    break;

  case 58: /* expreIgual: expreRel  */
#line 249 "src/asin.y"
             { (yyval.texp) = (yyvsp[0].texp); }
#line 1602 "asin.c"
    break;

  case 59: /* expreIgual: expreIgual opIgual expreRel  */
#line 251 "src/asin.y"
    {
        (yyval.texp).t = T_LOGICO; (yyval.texp).d = creaVarTemp();
        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.texp).d));
        emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].texp).d), crArgPos(niv, (yyvsp[0].texp).d), crArgEtq(si + 2));
        emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, (yyval.texp).d));
    }
#line 1613 "asin.c"
    break;

  case 60: /* expreRel: expreAd  */
#line 260 "src/asin.y"
            { (yyval.texp) = (yyvsp[0].texp); }
#line 1619 "asin.c"
    break;

  case 61: /* expreRel: expreRel opRel expreAd  */
#line 262 "src/asin.y"
    {
        (yyval.texp).t = T_LOGICO; (yyval.texp).d = creaVarTemp();
        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.texp).d));
        emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].texp).d), crArgPos(niv, (yyvsp[0].texp).d), crArgEtq(si + 2));
        emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, (yyval.texp).d));
    }
#line 1630 "asin.c"
    break;

  case 62: /* expreAd: expreMul  */
#line 271 "src/asin.y"
             { (yyval.texp) = (yyvsp[0].texp); }
#line 1636 "asin.c"
    break;

  case 63: /* expreAd: expreAd opAd expreMul  */
#line 273 "src/asin.y"
    {
        (yyval.texp).t = T_ENTERO; (yyval.texp).d = creaVarTemp();
        emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].texp).d), crArgPos(niv, (yyvsp[0].texp).d), crArgPos(niv, (yyval.texp).d));
    }
#line 1645 "asin.c"
    break;

  case 64: /* expreMul: expreUna  */
#line 280 "src/asin.y"
             { (yyval.texp) = (yyvsp[0].texp); }
#line 1651 "asin.c"
    break;

  case 65: /* expreMul: expreMul opMul expreUna  */
#line 282 "src/asin.y"
    {
        (yyval.texp).t = T_ENTERO; (yyval.texp).d = creaVarTemp();
        emite((yyvsp[-1].cent), crArgPos(niv, (yyvsp[-2].texp).d), crArgPos(niv, (yyvsp[0].texp).d), crArgPos(niv, (yyval.texp).d));
    }
#line 1660 "asin.c"
    break;

  case 66: /* expreUna: expreSufi  */
#line 289 "src/asin.y"
              { (yyval.texp) = (yyvsp[0].texp); }
#line 1666 "asin.c"
    break;

  case 67: /* expreUna: opUna expreUna  */
#line 291 "src/asin.y"
    {
        (yyval.texp).d = creaVarTemp(); (yyval.texp).t = (yyvsp[0].texp).t;
        if ((yyvsp[-1].cent) == '!') emite(EDIF, crArgEnt(1), crArgPos(niv, (yyvsp[0].texp).d), crArgPos(niv, (yyval.texp).d));
        else if ((yyvsp[-1].cent) == '-') emite(ESIG, crArgPos(niv, (yyvsp[0].texp).d), crArgNul(), crArgPos(niv, (yyval.texp).d));
        else emite(EASIG, crArgPos(niv, (yyvsp[0].texp).d), crArgNul(), crArgPos(niv, (yyval.texp).d));
    }
#line 1677 "asin.c"
    break;

  case 68: /* expreSufi: const  */
#line 300 "src/asin.y"
          { (yyval.texp).t = (yyvsp[0].texp).t; (yyval.texp).d = creaVarTemp(); emite(EASIG, crArgEnt((yyvsp[0].texp).d), crArgNul(), crArgPos(niv, (yyval.texp).d)); }
#line 1683 "asin.c"
    break;

  case 69: /* expreSufi: '(' expre ')'  */
#line 301 "src/asin.y"
                    { (yyval.texp) = (yyvsp[-1].texp); }
#line 1689 "asin.c"
    break;

  case 70: /* expreSufi: ID  */
#line 303 "src/asin.y"
    {
        SIMB sim = obtTdS((yyvsp[0].ident)); (yyval.texp).t = sim.t;
        if (sim.n < niv && sim.t != T_ARRAY) {
            (yyval.texp).d = creaVarTemp();
            emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, (yyval.texp).d));
        } else (yyval.texp).d = sim.d;
    }
#line 1701 "asin.c"
    break;

  case 71: /* expreSufi: ID '[' expre ']'  */
#line 311 "src/asin.y"
    {
        SIMB sim = obtTdS((yyvsp[-3].ident)); DIM dim = obtTdA(sim.ref);
        (yyval.texp).t = dim.telem; (yyval.texp).d = creaVarTemp();
        emite(EAV, crArgPos(sim.n, sim.d), crArgPos(niv, (yyvsp[-1].texp).d), crArgPos(niv, (yyval.texp).d));
    }
#line 1711 "asin.c"
    break;

  case 72: /* $@14: %empty  */
#line 317 "src/asin.y"
    { emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(1)); }
#line 1717 "asin.c"
    break;

  case 73: /* expreSufi: ID '(' $@14 paramAct ')'  */
#line 319 "src/asin.y"
    {
        SIMB sim = obtTdS((yyvsp[-4].ident)); INF inf = obtTdD(sim.ref);
        (yyval.texp).t = inf.tipo; (yyval.texp).d = creaVarTemp();
        emite(CALL, crArgNul(), crArgNul(), crArgEtq(sim.d));
        emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(inf.tsp));
        emite(EPOP, crArgNul(), crArgNul(), crArgPos(niv, (yyval.texp).d));
    }
#line 1729 "asin.c"
    break;

  case 74: /* paramAct: %empty  */
#line 328 "src/asin.y"
          { (yyval.lista).ref = insTdD(-1, T_VACIO); }
#line 1735 "asin.c"
    break;

  case 75: /* paramAct: listParamAct  */
#line 328 "src/asin.y"
                                                           { (yyval.lista) = (yyvsp[0].lista); }
#line 1741 "asin.c"
    break;

  case 76: /* listParamAct: expre  */
#line 331 "src/asin.y"
    {
        emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[0].texp).d));
        (yyval.lista).ref = insTdD(-1, (yyvsp[0].texp).t);
    }
#line 1750 "asin.c"
    break;

  case 77: /* $@15: %empty  */
#line 337 "src/asin.y"
    {
        emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[0].texp).d));
    }
#line 1758 "asin.c"
    break;

  case 78: /* listParamAct: expre $@15 ',' listParamAct  */
#line 341 "src/asin.y"
    {

        (yyval.lista).ref = insTdD((yyvsp[0].lista).ref, (yyvsp[-3].texp).t);
    }
#line 1767 "asin.c"
    break;

  case 79: /* opLogic: OP_LOGICO_AND  */
#line 347 "src/asin.y"
                       { (yyval.cent) = EMULT; }
#line 1773 "asin.c"
    break;

  case 80: /* opLogic: OP_LOGICO_OR  */
#line 347 "src/asin.y"
                                                      { (yyval.cent) = ESUM; }
#line 1779 "asin.c"
    break;

  case 81: /* opIgual: OP_IGUALDAD_EQ  */
#line 348 "src/asin.y"
                        { (yyval.cent) = EIGUAL; }
#line 1785 "asin.c"
    break;

  case 82: /* opIgual: OP_IGUALDAD_NEQ  */
#line 348 "src/asin.y"
                                                           { (yyval.cent) = EDIST; }
#line 1791 "asin.c"
    break;

  case 83: /* opRel: '>'  */
#line 349 "src/asin.y"
           { (yyval.cent) = EMAY; }
#line 1797 "asin.c"
    break;

  case 84: /* opRel: '<'  */
#line 349 "src/asin.y"
                                { (yyval.cent) = EMEN; }
#line 1803 "asin.c"
    break;

  case 85: /* opRel: OP_RELACIONAL_GE  */
#line 349 "src/asin.y"
                                                                  { (yyval.cent) = EMAYEQ; }
#line 1809 "asin.c"
    break;

  case 86: /* opRel: OP_RELACIONAL_LE  */
#line 349 "src/asin.y"
                                                                                                      { (yyval.cent) = EMENEQ; }
#line 1815 "asin.c"
    break;

  case 87: /* opAd: '+'  */
#line 350 "src/asin.y"
          { (yyval.cent) = ESUM; }
#line 1821 "asin.c"
    break;

  case 88: /* opAd: '-'  */
#line 350 "src/asin.y"
                               { (yyval.cent) = EDIF; }
#line 1827 "asin.c"
    break;

  case 89: /* opMul: '*'  */
#line 351 "src/asin.y"
           { (yyval.cent) = EMULT; }
#line 1833 "asin.c"
    break;

  case 90: /* opMul: '/'  */
#line 351 "src/asin.y"
                                 { (yyval.cent) = EDIVI; }
#line 1839 "asin.c"
    break;

  case 91: /* opUna: '!'  */
#line 352 "src/asin.y"
           { (yyval.cent) = '!'; }
#line 1845 "asin.c"
    break;

  case 92: /* opUna: '-'  */
#line 352 "src/asin.y"
                               { (yyval.cent) = '-'; }
#line 1851 "asin.c"
    break;

  case 93: /* opUna: '+'  */
#line 352 "src/asin.y"
                                                   { (yyval.cent) = '+'; }
#line 1857 "asin.c"
    break;


#line 1861 "asin.c"

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

#line 354 "src/asin.y"

