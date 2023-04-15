/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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



#include <bits/stdc++.h>
#include "table.cpp"
using namespace std;

extern int yylineno;
extern Table current_table;
extern int countt;

map<int,string> label;
map<int,vector<int>> children;
int startNode, curNode = 0;

int yylex(void);
void yyerror(char const *);
int CN(string a , string b = "");
void AC(int, int);
char* TOCHAR(string s);


vector<pair<int,string>> T;
vector<int>OFFV;


string temp;

string TNVALUE;

int counterarr=0;

int offset;
    

#line 106 "parser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OBRAC = 258,
    CBRAC = 259,
    COMMA = 260,
    VAR = 261,
    ASSIGN = 262,
    EQUAL = 263,
    COLON = 264,
    QUES = 265,
    OR = 266,
    AND = 267,
    BITOR = 268,
    BITCAP = 269,
    BITAND = 270,
    EQ = 271,
    NE = 272,
    LT = 273,
    GT = 274,
    LQ = 275,
    GQ = 276,
    LL = 277,
    GG = 278,
    GGG = 279,
    PLUS = 280,
    MINUS = 281,
    MULT = 282,
    DIV = 283,
    PERCENT = 284,
    INCRE = 285,
    DECRE = 286,
    NOT = 287,
    NEG = 288,
    OPEN = 289,
    CLOSE = 290,
    SEMICOLON = 291,
    IF = 292,
    ELSE = 293,
    ASSERT = 294,
    WHILE = 295,
    FOR = 296,
    DO = 297,
    YIELD = 298,
    RETURN = 299,
    CONTINUE = 300,
    SYNCRO = 301,
    BREAK = 302,
    THROW = 303,
    Identifier = 304,
    THIS = 305,
    SQOPEN = 306,
    SQCLOSE = 307,
    DOT = 308,
    BOOLEAN = 309,
    CLASS = 310,
    VOID = 311,
    NEW = 312,
    SUPER = 313,
    IntegerLiteral = 314,
    FloatingPointLiteral = 315,
    BooleanLiteral = 316,
    CharacterLiteral = 317,
    StringLiteral = 318,
    TextBlock = 319,
    NullLiteral = 320,
    EXTENDS = 321,
    INT = 322,
    LONG = 323,
    FLOAT = 324,
    DOUBLE = 325,
    CHAR = 326,
    PUBLIC = 327,
    PRIVATE = 328,
    STATIC = 329,
    FINAL = 330,
    IMPLEMENTS = 331,
    PERMITS = 332,
    DOTDOTDOT = 333,
    THROWS = 334,
    ENUM = 335,
    RECORD = 336,
    PACKAGE = 337
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "parser.y"

     struct{
        int num;
        char* type;
        char* value;
        char* sym;
        int line;
        char* dimcount;
        int size;
    }STT;    

    struct{
        int num;
        char* sym;
        char* type;
        int size;
    }ST;


#line 261 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3907

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  237
/* YYNRULES -- Number of rules.  */
#define YYNRULES  469
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  817

#define YYUNDEFTOK  2
#define YYMAXUTOK   337


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   290,   290,   295,   297,   302,   304,   309,   314,   316,
     321,   323,   325,   327,   329,   331,   333,   341,   345,   349,
     352,   359,   361,   363,   365,   367,   369,   374,   376,   381,
     383,   388,   390,   396,   398,   400,   405,   405,   405,   407,
     407,   407,   414,   416,   421,   423,   428,   430,   435,   437,
     442,   447,   449,   454,   456,   458,   460,   465,   467,   469,
     471,   473,   478,   478,   480,   480,   482,   482,   484,   484,
     491,   491,   493,   493,   495,   495,   497,   497,   499,   499,
     501,   501,   503,   503,   505,   505,   510,   512,   517,   519,
     524,   526,   531,   533,   538,   538,   540,   540,   542,   542,
     544,   544,   549,   551,   553,   555,   560,   562,   564,   566,
     568,   570,   572,   574,   581,   583,   583,   588,   590,   595,
     595,   597,   597,   599,   604,   604,   606,   606,   612,   617,
     619,   624,   624,   629,   629,   634,   634,   636,   636,   638,
     638,   640,   640,   645,   647,   649,   651,   656,   661,   663,
     665,   667,   672,   674,   674,   674,   676,   678,   678,   678,
     680,   682,   682,   682,   684,   686,   686,   686,   692,   692,
     692,   694,   694,   694,   699,   701,   703,   705,   707,   709,
     711,   713,   718,   720,   725,   727,   727,   729,   729,   731,
     731,   733,   733,   735,   735,   740,   745,   745,   745,   745,
     747,   747,   747,   747,   752,   754,   759,   761,   766,   768,
     773,   778,   780,   785,   787,   792,   794,   799,   799,   801,
     801,   808,   810,   812,   814,   819,   819,   823,   825,   833,
     835,   840,   842,   847,   849,   851,   853,   858,   863,   868,
     868,   870,   870,   875,   877,   882,   884,   886,   888,   890,
     892,   897,   899,   901,   903,   905,   910,   912,   914,   916,
     918,   920,   922,   924,   926,   928,   930,   935,   940,   945,
     950,   955,   957,   959,   961,   963,   965,   967,   972,   972,
     977,   977,   980,   980,   985,   985,   990,   990,   990,   995,
     997,  1002,  1002,  1007,  1007,  1012,  1018,  1023,  1025,  1030,
    1032,  1037,  1037,  1039,  1039,  1041,  1041,  1043,  1043,  1045,
    1045,  1047,  1047,  1049,  1049,  1051,  1051,  1056,  1056,  1058,
    1058,  1060,  1060,  1062,  1062,  1064,  1064,  1066,  1066,  1068,
    1068,  1070,  1070,  1078,  1084,  1086,  1091,  1096,  1098,  1104,
    1104,  1109,  1109,  1115,  1117,  1122,  1128,  1130,  1135,  1137,
    1142,  1147,  1147,  1147,  1154,  1156,  1161,  1163,  1165,  1167,
    1169,  1171,  1173,  1175,  1177,  1182,  1184,  1186,  1188,  1190,
    1195,  1197,  1199,  1204,  1204,  1206,  1206,  1208,  1208,  1210,
    1210,  1215,  1220,  1220,  1222,  1222,  1224,  1224,  1229,  1231,
    1236,  1236,  1238,  1240,  1242,  1244,  1246,  1248,  1250,  1252,
    1254,  1262,  1264,  1269,  1271,  1273,  1275,  1277,  1279,  1284,
    1289,  1291,  1296,  1301,  1306,  1308,  1313,  1315,  1320,  1322,
    1324,  1329,  1331,  1336,  1338,  1343,  1345,  1350,  1352,  1357,
    1359,  1364,  1366,  1371,  1373,  1375,  1380,  1382,  1384,  1386,
    1388,  1394,  1396,  1398,  1400,  1405,  1407,  1409,  1415,  1417,
    1419,  1421,  1426,  1428,  1430,  1439,  1448,  1453,  1465,  1477,
    1479,  1488,  1497,  1502,  1504,  1506,  1508,  1513,  1524,  1535
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OBRAC", "CBRAC", "COMMA", "VAR",
  "ASSIGN", "EQUAL", "COLON", "QUES", "OR", "AND", "BITOR", "BITCAP",
  "BITAND", "EQ", "NE", "LT", "GT", "LQ", "GQ", "LL", "GG", "GGG", "PLUS",
  "MINUS", "MULT", "DIV", "PERCENT", "INCRE", "DECRE", "NOT", "NEG",
  "OPEN", "CLOSE", "SEMICOLON", "IF", "ELSE", "ASSERT", "WHILE", "FOR",
  "DO", "YIELD", "RETURN", "CONTINUE", "SYNCRO", "BREAK", "THROW",
  "Identifier", "THIS", "SQOPEN", "SQCLOSE", "DOT", "BOOLEAN", "CLASS",
  "VOID", "NEW", "SUPER", "IntegerLiteral", "FloatingPointLiteral",
  "BooleanLiteral", "CharacterLiteral", "StringLiteral", "TextBlock",
  "NullLiteral", "EXTENDS", "INT", "LONG", "FLOAT", "DOUBLE", "CHAR",
  "PUBLIC", "PRIVATE", "STATIC", "FINAL", "IMPLEMENTS", "PERMITS",
  "DOTDOTDOT", "THROWS", "ENUM", "RECORD", "PACKAGE", "$accept",
  "CompilationUnit", "OrdinaryCompilationUnit",
  "TopLevelClassDeclarations", "PackageDeclaration",
  "TopLevelClassDeclaration", "Literal", "ID_TOKEN", "IDD_TOKEN",
  "TYPE_TOKEN", "VOID_TOKEN", "Type", "Dims", "TypeName", "TypeNameList",
  "ClassDeclaration", "NormalClassDeclaration", "$@1", "$@2", "$@3", "$@4",
  "AccessModifier", "ClassExtends", "ClassImplements", "ClassPermits",
  "ClassBody", "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "ObjectDeclaration", "$@5", "$@6", "$@7",
  "$@8", "FieldDeclaration", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14",
  "$@15", "$@16", "VariableDeclaratorList", "VariableDeclarator",
  "VariableDeclaratorId", "VariableInitializer", "MethodDeclaration",
  "$@17", "$@18", "$@19", "$@20", "MethodHeader", "MethodDeclarator",
  "ReceiverParameter", "$@21", "FormalParameterList", "FormalParameter",
  "$@22", "$@23", "VariableArityParameter", "$@24", "$@25", "Throws",
  "MethodBody", "InstanceInitializer", "$@26", "StaticInitializer", "$@27",
  "ConstructorDeclaration", "$@28", "$@29", "$@30", "$@31",
  "ConstructorDeclarator", "SimpleTypeName", "ConstructorBody",
  "ExplicitConstructorInvocation", "$@32", "$@33", "$@34", "$@35", "$@36",
  "$@37", "$@38", "$@39", "EnumDeclaration", "$@40", "$@41", "$@42",
  "$@43", "EnumBody", "EnumConstantList", "EnumConstant", "$@44", "$@45",
  "$@46", "$@47", "$@48", "EnumBodyDeclarations", "RecordDeclaration",
  "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "RecordHeader",
  "RecordComponentList", "RecordComponent", "VariableArityRecordComponent",
  "RecordBody", "RecordBodyDeclarations", "RecordBodyDeclaration",
  "CompactConstructorDeclaration", "$@55", "$@56", "ArrayInitializer_X",
  "ArrayInitializer", "$@57", "VariableInitializerList", "Block",
  "BlockStatements", "BlockStatement", "LocalClassDeclaration",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration", "$@58",
  "$@59", "LocalVariableType", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "$@60", "CLOSE_TOKEN", "$@61",
  "IfThenElseStatement", "$@62", "IfThenElseStatementNoShortIf", "$@63",
  "IF_ELSE", "$@64", "$@65", "AssertStatement", "WhileStatement", "$@66",
  "WhileStatementNoShortIf", "$@67", "WHILE_TOKEN", "DoStatement",
  "ForStatement", "ForStatementNoShortIf", "BasicForStatement", "$@68",
  "$@69", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75",
  "BasicForStatementNoShortIf", "$@76", "$@77", "$@78", "$@79", "$@80",
  "$@81", "$@82", "$@83", "FOR_TOKEN", "ForInit", "ForUpdate",
  "StatementExpressionList", "EnhancedForStatement", "$@84",
  "EnhancedForStatementNoShortIf", "$@85", "BreakStatement",
  "YieldStatement", "ContinueStatement", "ReturnStatement",
  "ThrowStatement", "SynchronizedStatement", "$@86", "$@87", "Primary",
  "PrimaryNoNewArray", "ClassLiteral", "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "$@88", "$@89", "$@90",
  "$@91", "ClassTypeToInstantiate", "FieldAccess", "$@92", "$@93", "$@94",
  "ArrayAccess", "MethodInvocation", "$@95", "ArgumentList",
  "ArrayCreationExpression", "ARRTYPE_TOKEN", "DimExprs", "DimExpr",
  "Expression", "AssignmentExpression", "Assignment", "LeftHandSide",
  "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PreIncrementExpression",
  "PreDecrementExpression", "UnaryExpressionNotPlusMinus",
  "PostfixExpression", "PostIncrementExpression",
  "PostDecrementExpression", "CastExpression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337
};
# endif

#define YYPACT_NINF (-486)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-467)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -52,   -17,   109,  -486,   228,  -486,  -486,   287,  -486,  -486,
      94,  -486,  -486,    94,    97,  -486,  -486,  -486,   284,  -486,
    -486,   228,  -486,   101,  -486,    87,   138,  -486,   195,    94,
      94,    97,  -486,   -17,   138,   -17,  -486,   743,  -486,    87,
     138,   195,   220,   210,   220,   338,   282,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,    -4,  -486,    64,  -486,  -486,   138,
     138,  -486,  -486,   -17,  -486,   -17,   161,  -486,  -486,   300,
    1060,  -486,  -486,   210,   282,   138,   338,   359,   220,  -486,
      30,  -486,    37,    78,   113,  -486,   367,  -486,  -486,  -486,
     365,  -486,  -486,  -486,  -486,  -486,  -486,   403,  2360,  2795,
    -486,  -486,    56,   407,  -486,  2388,  -486,   359,  -486,   365,
    2416,  -486,  -486,  -486,   149,  -486,   958,  1060,   374,    97,
      40,  -486,   859,  -486,  -486,  -486,  -486,  -486,    34,  -486,
     433,  -486,  -486,    21,   408,  3500,  3500,  3500,  3500,  3500,
    3500,  3500,   359,   427,  -486,   934,   401,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,   -26,   411,    35,   416,   422,
    -486,  -486,  -486,   218,   323,  -486,    79,  -486,  -486,  -486,
    -486,   368,  -486,   324,   467,   470,   479,   480,   503,   513,
     465,   420,   525,  -486,  -486,  -486,  -486,   494,  -486,  -486,
    -486,  -486,  -486,  -486,   497,  -486,  -486,   859,  -486,   189,
    2444,  -486,  -486,  -486,  -486,  -486,  -486,  1060,   374,    34,
     433,   449,   327,   473,   188,  -486,   496,   430,   430,   508,
    -486,  1018,  1060,   374,    34,    21,  1922,  -486,  -486,  -486,
    -486,  2021,   -17,   519,  -486,   559,   328,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,   319,   502,  -486,  -486,  2842,
    -486,   331,   509,   505,   510,   518,   524,   373,   529,  2889,
     364,   386,   -21,  3500,  3500,   359,  3500,  3500,  3500,  3500,
    3500,  3500,  3500,  3500,  3500,  3500,  3500,  3500,  3500,  3500,
    3500,  3500,  3500,  3500,  3500,  3500,  3500,  3500,  -486,  -486,
    -486,   189,  -486,  -486,  -486,  -486,  -486,   449,   194,  -486,
    -486,   523,   196,   540,   676,   449,  -486,  2748,  -486,  -486,
      46,  1060,   374,    34,   449,   198,  -486,   519,  -486,  -486,
    -486,  3500,  -486,   558,  3500,  -486,  -486,  2556,  3500,  2936,
      58,  -486,   242,  3500,   311,   361,   -26,   307,  -486,  -486,
    -486,  2094,  -486,  -486,  -486,   557,   449,  -486,  -486,  -486,
    -486,  -486,   561,  -486,  -486,  2556,  -486,  -486,   564,  -486,
    -486,  -486,   567,  -486,  -486,  -486,  -486,  -486,  -486,  -486,
     123,   146,  -486,  -486,  -486,   494,   498,   536,  -486,  -486,
     571,    53,   487,  2167,  2240,   553,   338,  -486,  -486,  -486,
    1060,   266,   603,   200,  -486,  -486,  3500,  -486,  -486,  -486,
     208,  2889,   540,   505,  -486,  2983,   540,   505,   575,  -486,
    -486,   560,   555,  -486,   562,   583,  -486,  -486,   -17,   566,
    -486,   568,   588,  -486,   579,  -486,  -486,  -486,  -486,  -486,
     623,   467,   470,   479,   480,   503,   513,   513,   465,   465,
     465,   465,   420,   420,   420,   525,   525,  -486,  -486,  -486,
    -486,  -486,   201,  -486,  -486,  -486,   523,   628,   212,  -486,
    -486,  2652,  -486,  -486,  -486,    97,   584,   449,   202,  -486,
     206,  -486,  -486,  -486,  -486,  3500,   244,   596,   604,  -486,
     605,  -486,   606,   611,  -486,   610,   619,  2556,  -486,   449,
    -486,  -486,  -486,   642,  -486,  -486,  3500,  2472,   615,   621,
     413,  -486,  2313,  -486,   360,  -486,   153,   429,  -486,   613,
    -486,   787,  1038,  -486,  -486,  -486,  -486,   607,  -486,   657,
     540,  -486,   359,   217,  -486,   540,  3030,  -486,  -486,  -486,
    -486,  3077,   220,   616,  -486,  3124,  -486,  -486,  -486,  3500,
    -486,  -486,  -486,  -486,   540,   807,   523,  -486,   663,  -486,
     573,   637,    98,   213,  -486,  -486,  -486,  -486,  -486,  -486,
    3500,  -486,   640,  -486,  -486,  -486,  3500,  -486,  -486,  -486,
     642,  -486,  -486,   644,  3171,   668,  -486,   648,   675,   649,
    3500,   652,  3500,   175,  -486,   655,   641,  -486,   645,  -486,
    -486,  -486,   240,   241,  -486,  -486,  -486,  -486,  -486,   359,
    -486,   246,  -486,   255,   660,  -486,   257,  -486,  -486,   523,
     267,   540,  -486,  -486,  2700,  3218,    97,  -486,  -486,  -486,
    2604,   656,   661,  3500,   664,  -486,  2556,  1437,   665,  3500,
    3265,  3836,  -486,   270,  -486,   272,   667,   670,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  3312,  -486,
    -486,   540,   523,  -486,  -486,   671,   277,   666,  -486,   318,
    -486,  -486,   677,  -486,  -486,  2604,  -486,   669,  -486,  -486,
     672,  -486,  -486,  -486,   673,   433,  -486,  2556,   674,   675,
    3542,   681,  3584,   682,  -486,   685,   686,   687,  3500,   691,
    3500,  -486,  -486,  -486,  -486,   279,   540,  -486,   696,  3359,
    2604,  -486,   679,  -486,  3500,  2514,   698,  -486,  -486,  -486,
    2556,  2556,   700,  2556,  2556,   702,  3626,  -486,  -486,  -486,
     290,  -486,   291,  -486,  -486,  -486,   705,   306,  -486,  -486,
    -486,   703,  3406,   733,   712,  -486,  -486,  -486,  -486,  -486,
    2556,  -486,  -486,  2556,  2556,   715,  -486,  -486,   716,   717,
    -486,  -486,   718,  -486,  2604,  3668,   719,  3500,  3453,  -486,
    -486,  -486,  -486,  -486,  -486,  -486,  2556,  -486,  -486,  -486,
    -486,  -486,  2604,   721,  3710,   722,  3752,   723,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,  2604,  2604,   725,
    2604,  2604,   726,  3794,  -486,  -486,  -486,  -486,  2604,  -486,
    -486,  2604,  2604,   728,  -486,  -486,  -486,  -486,  -486,  -486,
    -486,  2604,  -486,  -486,  -486,  -486,  -486
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       5,     0,     0,     2,     3,     5,    29,     0,     1,     9,
       0,    42,    43,     0,     0,     6,     8,    33,     0,    34,
      35,     4,     7,     0,    17,    44,    46,    18,     0,     0,
       0,     0,    30,     0,    46,     0,   171,     0,   200,    44,
      46,     0,    45,    48,    31,    47,     0,   204,    25,    21,
      22,    23,    24,    26,     0,    19,     0,   206,   209,    46,
      46,   168,   196,     0,    39,     0,     0,   172,   208,     0,
       0,   205,   201,    48,     0,    46,    49,     0,    32,   174,
       0,    51,   184,     0,     0,   182,     0,   173,   210,   207,
       0,    36,   169,   197,    51,    40,   176,     0,   131,     0,
     185,   175,     0,     0,   178,   131,   202,     0,   170,     0,
     131,    41,   180,    60,    29,    20,   133,     0,     0,     0,
       0,    59,     0,    52,    53,    61,    57,    58,     0,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,    29,   358,     0,     0,    10,    11,    12,
      13,    14,    15,    16,   356,     0,     0,   464,   463,   354,
     357,   361,   370,   362,   363,   364,     0,   355,   401,   413,
     415,     0,   414,   422,   423,   425,   427,   429,   431,   433,
     436,   441,   445,   448,   452,   453,   456,   459,   465,   466,
     462,   186,   177,   183,     0,   179,   211,     0,   215,     0,
     131,   213,   216,   203,    37,   198,    50,     0,     0,     0,
       0,     0,    90,     0,     0,    86,    88,   102,   104,     0,
     147,     0,     0,     0,     0,     0,     0,   130,    96,   129,
     132,     0,     0,     0,   139,     0,   464,   362,   363,   454,
     455,   457,   458,   461,   460,     0,     0,   189,   188,     0,
     409,   381,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   467,   468,
     181,     0,   219,   212,   214,    38,   199,     0,     0,   100,
     134,    90,     0,    91,     0,     0,    72,     0,   103,   105,
       0,     0,     0,     0,     0,     0,    94,     0,   135,   229,
     244,     0,   267,     0,     0,   295,   333,     0,     0,     0,
       0,   351,     0,     0,    29,     0,   243,   418,   237,   235,
     256,     0,   231,   233,   234,     0,     0,   236,   245,   257,
     246,   258,     0,   247,   248,     0,   259,   249,     0,   260,
     250,   297,     0,   298,   261,   266,   262,   263,   265,   264,
     361,   364,   271,   272,   273,     0,   274,   275,    97,   148,
     358,     0,   418,     0,     0,   463,   128,   141,   140,   143,
       0,     0,     0,     0,   117,   123,     0,   360,   190,   390,
       0,     0,   225,   405,   410,     0,   225,   403,   384,    27,
     367,     0,     0,   369,     0,    30,   359,   365,     0,     0,
     371,     0,   382,   372,     0,   402,   193,   192,   416,   417,
       0,   424,   426,   428,   430,   432,   434,   435,   437,   438,
     439,   440,   442,   443,   444,   446,   447,   449,   450,   451,
     217,   220,     0,    76,   101,    80,   106,     0,     0,    87,
      73,     0,    89,    93,    92,     0,     0,     0,     0,    98,
       0,    70,    95,   137,   136,     0,     0,     0,     0,   348,
       0,   346,     0,     0,   343,     0,     0,     0,   243,     0,
     230,   232,   238,   241,   270,   282,     0,     0,   153,   157,
       0,   149,     0,   150,     0,   142,     0,    90,   114,     0,
     121,     0,     0,   145,   469,   391,   392,     0,   408,     0,
     406,   411,   373,     0,   407,   404,     0,   385,    28,   368,
     388,     0,   381,     0,   366,     0,   383,   389,   194,     0,
     218,    84,    77,    81,   110,     0,   108,   221,     0,   227,
       0,     0,     0,     0,    74,    99,    78,    71,   138,   280,
       0,   289,     0,   345,   349,   347,     0,   344,   350,   268,
     239,   242,   283,     0,     0,   335,   337,     0,   334,     0,
       0,     0,     0,     0,   151,     0,     0,   119,     0,   126,
     122,   144,     0,     0,   118,   412,   226,   377,   374,   375,
     397,     0,   393,     0,   386,   395,     0,   421,    85,   107,
       0,   112,   223,   222,     0,     0,     0,    82,    75,    79,
       0,     0,     0,     0,     0,   240,     0,     0,     0,     0,
       0,     0,   152,     0,   156,     0,   161,   165,   124,   120,
     115,   127,   146,   378,   379,   376,   398,   394,     0,   387,
     396,   111,   109,   224,   228,     0,     0,     0,    83,    29,
     278,   286,   245,   252,   253,     0,   254,     0,   255,   299,
       0,   300,   281,   290,     0,     0,   291,     0,     0,   336,
       0,     0,     0,     0,   338,     0,     0,     0,     0,     0,
       0,   125,   116,   380,   399,     0,   113,    62,     0,     0,
       0,   279,     0,   284,     0,     0,     0,   352,   292,   301,
       0,     0,     0,     0,     0,     0,     0,   154,   158,   160,
       0,   164,     0,   400,    63,    68,     0,     0,   269,   287,
     285,     0,     0,   335,     0,   296,   353,   302,   309,   305,
       0,   339,   303,     0,     0,     0,   155,   159,     0,     0,
      69,    64,     0,   288,     0,     0,     0,     0,     0,   310,
     306,   313,   340,   304,   311,   307,     0,   162,   166,    65,
      66,   293,     0,     0,     0,     0,     0,     0,   314,   312,
     308,   315,   163,   167,    67,   294,   317,     0,     0,     0,
       0,     0,     0,     0,   316,   318,   325,   321,     0,   341,
     319,     0,     0,     0,   326,   322,   329,   342,   320,   327,
     323,     0,   330,   328,   324,   331,   332
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -486,  -486,  -486,   759,  -486,  -486,  -486,   356,   -12,   -37,
     -59,  -486,   -97,  1509,   -42,    27,  -486,  -486,  -486,  -486,
    -486,   -43,   727,    16,   692,   -78,   678,   -56,  -486,   -33,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,
    -486,  -486,  -486,  -201,   463,  -377,  -446,  -486,  -486,  -486,
    -486,  -486,   -81,   650,   475,  -486,  -295,   259,  -486,  -486,
    -486,  -486,  -486,   234,  -186,  -486,  -486,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,   -96,   -58,  -181,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,
    -486,   706,  -486,   683,  -486,  -486,  -486,  -486,  -486,   249,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,   740,  -486,   704,
    -486,   680,  -486,   586,  -486,  -486,  -486,   265,   382,  -486,
    -486,  -127,  -211,  -325,  -486,  -486,  -485,  -486,  -486,   456,
    1097,  -215,  -288,  -486,  -486,  -486,  -486,  -419,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,  -486,  -115,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,    33,  -486,  -486,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,  -486,   163,    89,  -225,  -484,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,
    -486,  -486,   565,  -486,  -486,   -62,  -256,  -486,  -486,  -486,
    -486,  -486,   119,  -486,  -486,  -486,  1663,    93,  -486,  -232,
    -486,  -486,   539,  -305,  -133,  -486,   -88,  -486,   256,  -486,
     530,   531,   537,   528,   542,   314,   268,   281,   298,   -16,
     280,   435,  -486,   614,   769,   956,  -486
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    15,   154,   219,   213,   155,
     156,    55,   261,   157,    45,   338,    17,   107,   295,    77,
     111,    18,    34,    36,    64,    95,    98,   123,   124,   339,
     724,   769,   784,   750,   126,   557,   460,   618,   542,   619,
     543,   658,   608,   214,   215,   216,   462,   127,   472,   378,
     555,   454,   128,   217,   392,   692,   393,   394,   639,   590,
     395,   691,   641,   233,   228,   129,   130,   131,   210,   132,
     474,   558,   388,   505,   133,   134,   234,   383,   580,   746,
     582,   747,   688,   782,   690,   783,    19,    74,   108,    46,
      87,    67,    84,    85,   191,   248,   398,   427,   538,    86,
      20,    75,   109,   296,    59,    90,   203,    38,    56,    57,
      58,   106,   200,   201,   202,   540,   451,   463,   518,   519,
     550,   340,   341,   342,   343,   344,   345,   625,   571,   346,
     347,   661,   348,   349,   350,   663,   351,   352,   353,   701,
     620,   621,   354,   572,   664,   730,   355,   702,   753,   356,
     357,   708,   666,   785,   358,   359,   360,   668,   361,   737,
     763,   760,   780,   759,   779,   778,   794,   669,   795,   808,
     805,   814,   804,   813,   812,   816,   362,   577,   678,   679,
     363,   762,   671,   807,   364,   365,   366,   367,   368,   369,
     483,   736,   158,   159,   160,   161,   162,   598,   645,   643,
     693,   252,   163,   536,   527,   649,   164,   165,   515,   166,
     167,   253,   403,   404,   168,   169,   372,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,   229,    28,   230,   420,   100,   423,   298,   246,   458,
     302,   170,   575,   578,   510,   549,   491,   400,   292,    41,
     384,    76,   315,   299,   231,   255,   225,   256,   422,   204,
       1,    16,     6,    54,    96,   209,   418,   226,   316,   119,
     -18,   224,  -418,  -418,   318,    68,   119,   199,    16,   198,
      43,   119,   387,   170,    83,   122,    61,   119,   257,   491,
     192,   118,   197,   119,   247,   125,    81,   122,   118,    70,
     227,   -18,   125,   118,    69,    72,    73,   125,   576,   208,
     211,    94,   229,   300,   264,   223,   259,   499,   260,    24,
      83,    93,    81,    23,   481,     6,   452,   229,   521,    71,
     232,   225,   521,   465,   245,    82,   254,   482,   250,     8,
     450,   468,    99,   470,   265,   303,   224,   101,   102,   239,
     240,   241,   242,   243,   244,   121,   414,   469,  -277,   587,
     424,   425,   121,   428,   429,   430,   473,   121,   119,   291,
     313,   119,   199,    24,   198,   493,    27,    32,   257,    81,
      32,  -276,  -147,    33,   402,   616,   406,   197,  -277,  -277,
     223,   170,   119,   118,   370,    79,    80,   125,   654,   370,
     297,   170,   502,   523,   464,   170,   170,   491,   170,   170,
     170,  -276,  -276,  -147,   312,   314,   229,   426,   246,   336,
     386,   476,   231,   305,   336,   478,   480,    81,   391,   305,
     486,   305,   301,   305,   303,   512,   305,   305,   576,   636,
      82,   305,   684,   264,    35,   510,   593,   512,   305,   170,
     733,   578,   264,   235,   306,  -419,  -419,   121,   533,    37,
     453,   586,   455,   170,   471,   513,   170,   541,   554,   257,
     170,   170,   556,   516,   420,   170,   512,   546,   423,   617,
     610,   264,   599,   560,   237,   237,   237,   237,   237,   237,
     264,   576,   264,   576,     9,   370,   553,   391,   517,   447,
     448,   449,   512,    23,   467,   264,   642,   264,   484,   370,
     561,   646,   264,    10,   264,    66,   576,    63,   570,   301,
     647,   485,   650,   370,   601,   264,   264,   576,   488,   603,
      11,    12,   652,   606,   336,   685,   520,   686,    13,    14,
     525,   264,   698,   170,   723,   507,   508,   170,   509,   371,
     487,   370,   370,    22,   371,   748,   749,   700,   464,    97,
    -420,  -420,   662,   103,   268,   269,   576,  -464,  -464,    29,
      23,   752,   559,    65,   509,   249,   336,   336,   633,    88,
     635,   194,   249,   506,   396,   576,    24,   576,   259,   544,
     260,   -18,    94,   573,    30,    31,    25,   320,   105,    26,
     255,   104,   256,   170,   576,   266,   267,   662,   255,   259,
     514,   260,   401,   656,    23,    39,    40,   170,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   112,   170,   422,
     303,   195,   662,   415,   416,    48,   695,   418,   585,   417,
     371,   418,   419,   212,   411,   370,   412,   622,    49,    50,
      51,    52,    53,   624,   371,   370,   226,   411,   170,   421,
     370,   628,   235,   170,   597,   283,   284,   170,   371,   611,
     703,   308,   309,   551,   254,   712,   720,   715,   722,   317,
     336,   249,   415,   416,   258,   336,   662,   727,   417,   262,
     418,   583,   170,   263,   592,   592,   371,   371,   170,   270,
     255,   464,   588,   271,   662,   728,   170,   280,   281,   282,
     674,   745,   170,   272,   170,   273,   681,   683,   301,   662,
     662,   290,   662,   662,   307,   665,   373,   304,   592,   232,
     662,   373,   651,   662,   662,   237,   310,  -464,  -464,   274,
     275,   644,   231,   662,   288,   289,   170,   170,  -465,  -465,
     773,   276,   277,   278,   279,   170,    24,   397,   259,   771,
     500,   170,   170,   405,   438,   439,   440,   441,   707,   789,
     665,   792,   285,   286,   287,   696,   401,   786,   370,   408,
     170,   442,   443,   444,   370,   370,  -466,  -466,   803,   370,
     409,   731,   796,   797,   255,   799,   800,   613,   614,   410,
     371,   445,   446,   806,   413,   665,   809,   810,   436,   437,
     371,   411,   475,   492,   389,   371,   815,   494,   496,   756,
     170,   497,   170,   370,   657,   498,   504,   373,   511,   526,
     529,   170,   528,    48,   530,   370,   170,   531,   370,   533,
     370,   373,   535,   534,   775,   777,    49,    50,    51,    52,
      53,   537,   539,   545,   390,   373,   562,   552,   370,   665,
     563,   564,   565,   370,   170,   566,   567,   305,   370,   370,
     579,   370,   370,   667,   370,   568,   581,   665,   237,   595,
     461,   374,   589,   373,   373,   604,   374,   612,   336,   170,
     170,   615,   665,   665,   623,   665,   665,   629,   370,   626,
     631,   370,   370,   665,   630,   632,   665,   665,   634,   637,
     638,   672,   370,   370,   648,   640,   665,   673,   667,   675,
     699,   680,   687,   704,   370,   689,   705,   697,   706,   710,
     370,   456,   370,   371,   370,  -251,   713,   729,   716,   371,
     371,   717,   718,   719,   371,   370,   370,   721,   370,   370,
      48,   370,   725,   667,   735,   740,   370,   743,   754,   370,
     370,   751,   757,    49,    50,    51,    52,    53,   758,   370,
     766,   390,   767,   768,   770,   774,   787,   790,   371,   793,
     798,   801,   374,   811,    21,    91,    60,   373,   459,   218,
     371,   594,   110,   371,    89,   371,   374,   373,    47,   457,
      92,    62,   373,   670,   596,   193,   294,   667,   524,   205,
     374,   489,   407,   371,   734,   607,   385,    48,   371,   431,
     434,   432,     0,   371,   371,   667,   371,   371,   433,   371,
      49,    50,    51,    52,    53,   435,     0,     0,   374,   374,
     667,   667,   591,   667,   667,     0,     0,     0,   670,     0,
       0,   667,     0,   371,   667,   667,   371,   371,     0,     0,
     375,    48,   609,     0,   667,   375,     0,   371,   371,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,   371,
       0,    48,   390,   670,     0,   371,     0,   371,     0,   371,
       0,     0,     0,     0,    49,    50,    51,    52,    53,     0,
     371,   371,   390,   371,   371,     0,   371,     0,     0,     0,
       0,   371,     0,     0,   371,   371,     0,     0,     0,     0,
     373,     0,     0,     0,   371,     0,   373,   373,   220,     0,
       0,   373,     0,    48,    29,   115,     0,   670,     0,     0,
       0,     0,   374,     0,     0,     0,    49,    50,    51,    52,
      53,     0,   374,   221,   222,   670,     0,   374,     0,    30,
      31,   375,     0,     0,     0,   373,     0,     0,     0,     0,
     670,   670,     0,   670,   670,   375,     0,   373,     0,     0,
     373,   670,   373,     0,   670,   670,     0,     0,     0,   375,
       0,     0,     0,     0,   670,     0,     0,     0,     0,     0,
     373,     0,     0,     6,     0,   373,     0,     0,    48,     0,
     373,   373,     0,   373,   373,   376,   373,   375,   375,     0,
     376,    49,    50,    51,    52,    53,     0,     0,     0,     0,
       0,     0,    48,     0,   115,     0,     0,     0,     0,     0,
     373,     0,     0,   373,   373,    49,    50,    51,    52,    53,
       0,     0,     0,   207,   373,   373,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,     0,     0,     0,
       0,     0,   373,     0,   373,   374,   373,     0,     0,     0,
       0,   374,   374,     0,     0,     0,   374,   373,   373,     0,
     373,   373,    48,   373,   115,     0,     0,     0,   373,     0,
       0,   373,   373,     0,     0,    49,    50,    51,    52,    53,
       0,   373,    48,   311,     0,     0,   376,     0,     0,     0,
     374,   375,     0,     0,     0,    49,    50,    51,    52,    53,
     376,   375,   374,   390,    48,   374,   375,   374,     0,     0,
       0,     0,     0,     0,   376,     0,     0,    49,    50,    51,
      52,    53,     0,     0,     0,   374,     0,     0,     0,     0,
     374,     0,     0,     0,     0,   374,   374,     0,   374,   374,
       0,   374,   376,   376,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   374,     0,     0,   374,   374,
       0,     0,   377,     0,     0,     0,     0,   377,     0,   374,
     374,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   374,     0,     0,     0,     0,     0,   374,     0,   374,
       0,   374,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   374,   374,     0,   374,   374,     0,   374,     0,
       0,     0,     0,   374,   375,     0,   374,   374,     0,     0,
     375,   375,     0,     0,     0,   375,   374,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,     0,     0,     0,
       0,   376,     0,     0,     0,     0,     0,     0,     0,   375,
       0,     0,     0,   377,     0,     0,     0,     0,     0,     0,
       0,   375,     0,     0,   375,     0,   375,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   377,     0,     0,   375,     0,     0,     0,     0,   375,
       0,     0,     0,     0,   375,   375,     0,   375,   375,     0,
     375,     0,     0,     0,     0,     0,     0,     0,     0,   377,
     377,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   375,     0,     0,   375,   375,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   375,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     375,     0,     0,     0,     0,     0,   375,     0,   375,   376,
     375,     0,     0,     0,     0,   376,   376,     0,     0,     0,
     376,   375,   375,     0,   375,   375,     0,   375,     0,     0,
       0,     0,   375,     0,     0,   375,   375,     0,     0,     0,
       0,     0,     0,     0,   477,   375,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,     0,     0,     0,     0,
       0,     0,     0,   377,     0,     0,   376,     0,     0,   376,
       0,   376,   495,   377,     0,     0,     0,     0,   377,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,   376,
       0,   321,   677,     0,   376,     0,     0,     0,     0,   376,
     376,     0,   376,   376,     0,   376,   143,   144,     0,     0,
       0,    48,     0,   115,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,    49,    50,    51,    52,    53,   376,
       7,     0,   376,   376,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   376,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   376,     0,     0,     0,     0,
       0,   376,    42,   376,    44,   376,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,   376,     0,   376,
     376,     0,   376,     0,     0,     0,     0,   376,     0,     0,
     376,   376,    44,     0,    78,     0,   377,     0,     0,     0,
     376,     0,   377,   377,   569,     0,     0,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,     0,   120,
       0,   377,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   377,     0,     0,   377,     0,   377,     0,
       0,     0,     0,     0,   236,   236,   236,   236,   236,   236,
       0,     0,     0,     0,   251,     0,   377,     0,     0,     0,
       0,   377,     0,     0,     0,     0,   377,   377,     0,   377,
     377,     0,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   377,     0,     0,   377,
     377,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     377,   377,     0,     0,     0,     0,     0,   660,     0,     0,
       0,     0,   377,   676,     0,     0,     0,     0,   377,     0,
     377,     0,   377,     0,     0,   337,     0,     0,     0,     0,
     382,    44,     0,   377,   377,     0,   377,   377,     0,   377,
       0,     0,     0,     0,   377,     0,     0,   377,   377,     0,
       0,     0,   495,     0,     0,     0,     0,   377,     0,     0,
       0,     0,     0,     0,   709,     0,     0,     0,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   569,   238,   238,
     238,   238,   238,   238,     0,     0,     0,   738,   739,     0,
     741,   742,     0,     0,     0,     0,     0,     0,     0,   466,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   761,     0,     0,
     764,   765,     0,     0,     0,     0,     0,     0,     0,     0,
     337,   676,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   781,     0,     0,     0,     0,     0,   709,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   738,   739,     0,   741,   742,     0,
       0,     0,   337,   337,     0,   761,     0,     0,   764,   765,
       0,     0,     0,     0,     0,   236,     0,     0,   781,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   319,   532,   320,     0,
       0,     0,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,     0,   137,   138,     0,     0,   321,     0,   322,   323,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   144,     0,     0,     0,    48,    10,   115,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,    49,
      50,    51,    52,    53,    11,    12,     0,   335,     0,     0,
       0,     0,    13,    14,     0,     0,     0,     0,     0,     0,
       0,   337,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   226,   379,     0,   320,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
       0,   137,   138,     0,     0,   321,     0,   322,   323,   238,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   380,     0,     0,     0,    48,    10,   115,   145,   381,
     147,   148,   149,   150,   151,   152,   153,     0,    49,    50,
      51,    52,    53,    11,    12,     0,   335,   226,   490,     0,
     320,    13,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,   138,     0,     0,   321,     0,
     322,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   144,     0,     0,     0,    48,    10,
     115,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,    49,    50,    51,    52,    53,    11,    12,     0,   335,
     226,   501,     0,   320,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,     0,
       0,   321,   238,   322,   323,     0,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   144,     0,     0,
       0,    48,    10,   115,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,    49,    50,    51,    52,    53,    11,
      12,     0,   335,   226,   503,     0,   320,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   138,     0,     0,   321,     0,   322,   323,     0,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     144,     0,     0,     0,    48,    10,   115,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,    49,    50,    51,
      52,    53,    11,    12,     0,   335,   226,   584,     0,   320,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,   138,     0,     0,   321,     0,   322,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   144,  -195,     0,     0,    48,    10,   115,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
      49,    50,    51,    52,    53,    11,    12,     0,   335,     0,
       0,     0,   196,    13,    14,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
       0,     0,     0,     0,    48,    10,   115,     0,     0,     0,
     206,     0,     0,     0,   113,     0,     0,    49,    50,    51,
      52,    53,    11,    12,   116,   117,     0,   114,     0,     0,
      13,    14,    48,    10,   115,     0,     0,     0,   293,     0,
       0,     0,   113,     0,     0,    49,    50,    51,    52,    53,
      11,    12,   116,   117,     0,   114,     0,     0,    13,    14,
      48,    10,   115,     0,     0,     0,     0,     0,   320,     0,
     113,     0,     0,    49,    50,    51,    52,    53,    11,    12,
     116,   117,     0,   114,     0,     0,    13,    14,    48,    10,
     115,     0,   137,   138,     0,     0,   321,     0,   574,     0,
       0,    49,    50,    51,    52,    53,    11,    12,   116,   117,
     320,   143,   144,     0,    13,    14,    48,     0,   115,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,    49,
      50,    51,    52,    53,   137,   138,     0,   335,   321,     0,
     732,     0,     0,     0,     0,     0,     0,     0,     0,   226,
       0,     0,     0,   143,   144,     0,     0,     0,    48,     0,
     115,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,    49,    50,    51,    52,    53,   137,   138,     0,   335,
     321,     0,   322,   323,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   144,   226,     0,     0,
      48,     0,   115,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,    49,    50,    51,    52,    53,     0,     0,
       0,     0,     0,     0,   137,   138,     0,     0,   321,     0,
     322,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   659,   144,   461,   547,   548,    48,     0,
     115,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,    49,    50,    51,    52,    53,     0,   135,   136,     0,
       0,     0,   137,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,   144,   461,   653,     0,    48,     0,   115,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,    49,
      50,    51,    52,    53,     0,   135,   136,     0,     0,     0,
     137,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
     144,   461,     0,     0,    48,     0,   115,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,    49,    50,    51,
      52,    53,     0,   135,   136,     0,     0,     0,   137,   138,
     139,   140,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   144,     0,
       0,     0,    48,     0,   115,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,    49,    50,    51,    52,    53,
     135,   136,     0,     0,     0,   137,   138,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,    48,
       0,   115,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,    49,    50,    51,    52,    53,   135,   136,     0,
       0,     0,   137,   138,   139,   140,   141,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,    48,     0,   115,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,    49,
      50,    51,    52,    53,   135,   136,     0,     0,     0,   137,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,   144,
       0,   409,     0,    48,     0,   115,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,    49,    50,    51,    52,
      53,   135,   136,     0,     0,     0,   137,   138,   139,   140,
     141,     0,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   144,     0,     0,     0,
      48,     0,   115,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,    49,    50,    51,    52,    53,   135,   136,
       0,     0,     0,   137,   138,   139,   140,   141,   522,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   144,     0,     0,     0,    48,     0,   115,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
      49,    50,    51,    52,    53,   135,   136,     0,     0,     0,
     137,   138,   139,   140,   141,   600,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
     144,     0,     0,     0,    48,     0,   115,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,    49,    50,    51,
      52,    53,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   602,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,   144,     0,     0,
       0,    48,     0,   115,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,    49,    50,    51,    52,    53,   135,
     136,     0,     0,     0,   137,   138,   139,   140,   141,   605,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,    48,     0,
     115,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,    49,    50,    51,    52,    53,   135,   136,     0,     0,
       0,   137,   138,   139,   140,   141,     0,   627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,   144,     0,     0,     0,    48,     0,   115,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,    49,    50,
      51,    52,    53,   135,   136,     0,     0,     0,   137,   138,
     139,   140,   141,   655,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   144,     0,
       0,     0,    48,     0,   115,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,    49,    50,    51,    52,    53,
     135,   136,     0,     0,     0,   137,   138,   139,   140,   141,
       0,   682,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,   144,     0,     0,     0,    48,
       0,   115,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,    49,    50,    51,    52,    53,   135,   136,     0,
       0,     0,   137,   138,   139,   140,   141,   694,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,    48,     0,   115,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,    49,
      50,    51,    52,    53,   135,   136,     0,     0,     0,   137,
     138,   139,   140,   141,   726,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,   144,
       0,     0,     0,    48,     0,   115,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,    49,    50,    51,    52,
      53,   135,   136,     0,     0,     0,   137,   138,   139,   140,
     141,     0,   755,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   144,     0,     0,     0,
      48,     0,   115,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,    49,    50,    51,    52,    53,   135,   136,
       0,     0,     0,   137,   138,   139,   140,   141,     0,   776,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   144,     0,     0,     0,    48,     0,   115,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
      49,    50,    51,    52,    53,   135,   136,     0,     0,     0,
     137,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
     144,     0,     0,     0,    48,     0,   115,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,    49,    50,    51,
      52,    53,   137,   138,     0,     0,   321,   711,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,    48,     0,   115,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,    49,
      50,    51,    52,    53,   137,   138,     0,     0,   321,   714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,    48,     0,
     115,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,    49,    50,    51,    52,    53,   137,   138,     0,     0,
     321,   744,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   144,     0,     0,     0,
      48,     0,   115,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,    49,    50,    51,    52,    53,   137,   138,
       0,     0,   321,   772,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   144,     0,
       0,     0,    48,     0,   115,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,    49,    50,    51,    52,    53,
     137,   138,     0,     0,   321,   788,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
     144,     0,     0,     0,    48,     0,   115,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,    49,    50,    51,
      52,    53,   137,   138,     0,     0,   321,   791,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,   144,     0,     0,     0,    48,     0,   115,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,    49,
      50,    51,    52,    53,   137,   138,     0,     0,   321,   802,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,   144,     0,     0,     0,    48,     0,
     115,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,    49,    50,    51,    52,    53,   137,   138,     0,     0,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   144,     0,     0,     0,
      48,     0,   115,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,    49,    50,    51,    52,    53
};

static const yytype_int16 yycheck[] =
{
      37,   128,    14,   130,   260,    83,   262,   208,   141,   304,
     211,    99,   497,   497,   391,   461,   341,   249,   199,    31,
     231,    63,   223,   209,     3,    51,   122,    53,    49,   107,
      82,     4,    49,    70,     4,   116,    57,     3,   224,    98,
       3,   122,     7,     8,   225,    49,   105,   105,    21,   105,
      34,   110,   233,   141,    66,    98,    40,   116,   155,   384,
       4,    98,   105,   122,   142,    98,    36,   110,   105,     5,
      36,    34,   105,   110,    78,    59,    60,   110,   497,   116,
     117,     3,   209,   210,     5,   122,    51,    34,    53,    49,
     102,    75,    36,    53,    36,    49,   297,   224,   403,    35,
      79,   197,   407,    57,   141,    49,    53,    49,   145,     0,
     291,   312,    34,   314,    35,   212,   197,     4,     5,   135,
     136,   137,   138,   139,   140,    98,   259,   313,     5,   506,
     263,   264,   105,   266,   267,   268,   317,   110,   197,   197,
     221,   200,   200,    49,   200,   346,    49,    49,   245,    36,
      49,     5,     3,    66,   251,    57,   253,   200,    35,    36,
     197,   249,   221,   200,   226,     4,     5,   200,   614,   231,
     207,   259,   383,   405,   307,   263,   264,   502,   266,   267,
     268,    35,    36,    34,   221,   222,   313,   265,   321,   226,
     232,   324,     3,     5,   231,   328,   329,    36,   235,     5,
     333,     5,    49,     5,   301,     5,     5,     5,   627,    34,
      49,     5,   631,     5,    76,   592,   511,     5,     5,   307,
     705,   705,     5,    34,    36,     7,     8,   200,    53,    34,
      36,    78,    36,   321,    36,    35,   324,    36,    36,   336,
     328,   329,    36,    35,   500,   333,     5,    35,   504,    36,
     545,     5,    35,     9,   135,   136,   137,   138,   139,   140,
       5,   680,     5,   682,    36,   327,   467,   304,   401,   285,
     286,   287,     5,    53,   311,     5,    35,     5,    36,   341,
      36,    35,     5,    55,     5,     3,   705,    77,   489,    49,
      35,    49,    35,   355,   526,     5,     5,   716,   335,   531,
      72,    73,    35,   535,   341,    35,   403,    35,    80,    81,
     407,     5,    35,   401,    35,    49,    50,   405,    78,   226,
       9,   383,   384,    36,   231,    35,    35,     9,   461,    80,
       7,     8,   620,    84,    10,    11,   755,    30,    31,    55,
      53,    35,   475,     5,    78,    34,   383,   384,   580,    49,
     582,   102,    34,   390,    35,   774,    49,   776,    51,   456,
      53,    34,     3,   496,    80,    81,    10,     6,     3,    13,
      51,     4,    53,   461,   793,     7,     8,   665,    51,    51,
     396,    53,    51,   615,    53,    29,    30,   475,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,     4,   496,    49,
     507,     4,   700,    49,    50,    54,   648,    57,    58,    55,
     327,    57,    58,    49,    51,   487,    53,   560,    67,    68,
      69,    70,    71,   566,   341,   497,     3,    51,   526,    53,
     502,   574,    34,   531,   522,    25,    26,   535,   355,   546,
     665,   217,   218,   465,    53,   680,   688,   682,   690,   225,
     497,    34,    49,    50,    53,   502,   754,   699,    55,    53,
      57,    58,   560,    51,   511,   512,   383,   384,   566,    12,
      51,   614,    53,    13,   772,   700,   574,    22,    23,    24,
     623,   716,   580,    14,   582,    15,   629,   630,    49,   787,
     788,     4,   790,   791,     8,   620,   226,    34,   545,    79,
     798,   231,   609,   801,   802,   396,     8,    30,    31,    16,
      17,   599,     3,   811,    30,    31,   614,   615,    30,    31,
     755,    18,    19,    20,    21,   623,    49,    35,    51,   754,
      53,   629,   630,    34,   276,   277,   278,   279,   675,   774,
     665,   776,    27,    28,    29,   652,    51,   772,   620,    49,
     648,   280,   281,   282,   626,   627,    30,    31,   793,   631,
      52,   704,   787,   788,    51,   790,   791,     4,     5,    55,
     487,   283,   284,   798,    55,   700,   801,   802,   274,   275,
     497,    51,    34,    36,    35,   502,   811,    36,    34,   732,
     688,    34,   690,   665,   616,    34,    53,   327,     5,    34,
      55,   699,    52,    54,    52,   677,   704,    34,   680,    53,
     682,   341,    34,    55,   757,   758,    67,    68,    69,    70,
      71,    52,     9,     5,    75,   355,    40,    53,   700,   754,
      36,    36,    36,   705,   732,    34,    36,     5,   710,   711,
      35,   713,   714,   620,   716,    36,    35,   772,   539,    52,
       3,   226,    49,   383,   384,    49,   231,     4,   705,   757,
     758,    34,   787,   788,    34,   790,   791,     9,   740,    35,
       5,   743,   744,   798,    36,    36,   801,   802,    36,    34,
      49,    35,   754,   755,    34,    50,   811,    36,   665,    35,
      34,    36,    35,    34,   766,    35,    34,    36,    35,    35,
     772,    35,   774,   620,   776,    38,    35,    38,    36,   626,
     627,    36,    36,    36,   631,   787,   788,    36,   790,   791,
      54,   793,    36,   700,    36,    35,   798,    35,    35,   801,
     802,    36,     9,    67,    68,    69,    70,    71,    36,   811,
      35,    75,    36,    36,    36,    36,    35,    35,   665,    36,
      35,    35,   327,    35,     5,    73,    39,   487,   305,   119,
     677,   512,    94,   680,    70,   682,   341,   497,    35,   304,
      74,    41,   502,   620,   519,   102,   200,   754,   406,   109,
     355,   335,   253,   700,   705,   539,   231,    54,   705,   269,
     272,   270,    -1,   710,   711,   772,   713,   714,   271,   716,
      67,    68,    69,    70,    71,   273,    -1,    -1,   383,   384,
     787,   788,    35,   790,   791,    -1,    -1,    -1,   665,    -1,
      -1,   798,    -1,   740,   801,   802,   743,   744,    -1,    -1,
     226,    54,    35,    -1,   811,   231,    -1,   754,   755,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,   766,
      -1,    54,    75,   700,    -1,   772,    -1,   774,    -1,   776,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    -1,
     787,   788,    75,   790,   791,    -1,   793,    -1,    -1,    -1,
      -1,   798,    -1,    -1,   801,   802,    -1,    -1,    -1,    -1,
     620,    -1,    -1,    -1,   811,    -1,   626,   627,    49,    -1,
      -1,   631,    -1,    54,    55,    56,    -1,   754,    -1,    -1,
      -1,    -1,   487,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    -1,   497,    74,    75,   772,    -1,   502,    -1,    80,
      81,   327,    -1,    -1,    -1,   665,    -1,    -1,    -1,    -1,
     787,   788,    -1,   790,   791,   341,    -1,   677,    -1,    -1,
     680,   798,   682,    -1,   801,   802,    -1,    -1,    -1,   355,
      -1,    -1,    -1,    -1,   811,    -1,    -1,    -1,    -1,    -1,
     700,    -1,    -1,    49,    -1,   705,    -1,    -1,    54,    -1,
     710,   711,    -1,   713,   714,   226,   716,   383,   384,    -1,
     231,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
     740,    -1,    -1,   743,   744,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    75,   754,   755,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   766,    -1,    -1,    -1,
      -1,    -1,   772,    -1,   774,   620,   776,    -1,    -1,    -1,
      -1,   626,   627,    -1,    -1,    -1,   631,   787,   788,    -1,
     790,   791,    54,   793,    56,    -1,    -1,    -1,   798,    -1,
      -1,   801,   802,    -1,    -1,    67,    68,    69,    70,    71,
      -1,   811,    54,    75,    -1,    -1,   327,    -1,    -1,    -1,
     665,   487,    -1,    -1,    -1,    67,    68,    69,    70,    71,
     341,   497,   677,    75,    54,   680,   502,   682,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,    -1,    67,    68,    69,
      70,    71,    -1,    -1,    -1,   700,    -1,    -1,    -1,    -1,
     705,    -1,    -1,    -1,    -1,   710,   711,    -1,   713,   714,
      -1,   716,   383,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   740,    -1,    -1,   743,   744,
      -1,    -1,   226,    -1,    -1,    -1,    -1,   231,    -1,   754,
     755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   766,    -1,    -1,    -1,    -1,    -1,   772,    -1,   774,
      -1,   776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   787,   788,    -1,   790,   791,    -1,   793,    -1,
      -1,    -1,    -1,   798,   620,    -1,   801,   802,    -1,    -1,
     626,   627,    -1,    -1,    -1,   631,   811,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   665,
      -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   677,    -1,    -1,   680,    -1,   682,   341,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,    -1,   700,    -1,    -1,    -1,    -1,   705,
      -1,    -1,    -1,    -1,   710,   711,    -1,   713,   714,    -1,
     716,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   740,    -1,    -1,   743,   744,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   754,   755,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     766,    -1,    -1,    -1,    -1,    -1,   772,    -1,   774,   620,
     776,    -1,    -1,    -1,    -1,   626,   627,    -1,    -1,    -1,
     631,   787,   788,    -1,   790,   791,    -1,   793,    -1,    -1,
      -1,    -1,   798,    -1,    -1,   801,   802,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,   811,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   665,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,   677,    -1,    -1,   680,
      -1,   682,   355,   497,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,   700,
      -1,    34,    35,    -1,   705,    -1,    -1,    -1,    -1,   710,
     711,    -1,   713,   714,    -1,   716,    49,    50,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    68,    69,    70,    71,   740,
       1,    -1,   743,   744,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   754,   755,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   766,    -1,    -1,    -1,    -1,
      -1,   772,    33,   774,    35,   776,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   787,   788,    -1,   790,
     791,    -1,   793,    -1,    -1,    -1,    -1,   798,    -1,    -1,
     801,   802,    63,    -1,    65,    -1,   620,    -1,    -1,    -1,
     811,    -1,   626,   627,   487,    -1,    -1,   631,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,   665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   677,    -1,    -1,   680,    -1,   682,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,   145,    -1,   700,    -1,    -1,    -1,
      -1,   705,    -1,    -1,    -1,    -1,   710,   711,    -1,   713,
     714,    -1,   716,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   740,    -1,    -1,   743,
     744,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
     754,   755,    -1,    -1,    -1,    -1,    -1,   620,    -1,    -1,
      -1,    -1,   766,   626,    -1,    -1,    -1,    -1,   772,    -1,
     774,    -1,   776,    -1,    -1,   226,    -1,    -1,    -1,    -1,
     231,   232,    -1,   787,   788,    -1,   790,   791,    -1,   793,
      -1,    -1,    -1,    -1,   798,    -1,    -1,   801,   802,    -1,
      -1,    -1,   665,    -1,    -1,    -1,    -1,   811,    -1,    -1,
      -1,    -1,    -1,    -1,   677,    -1,    -1,    -1,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   700,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,   710,   711,    -1,
     713,   714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   740,    -1,    -1,
     743,   744,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,   754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   766,    -1,    -1,    -1,    -1,    -1,   772,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   787,   788,    -1,   790,   791,    -1,
      -1,    -1,   383,   384,    -1,   798,    -1,    -1,   801,   802,
      -1,    -1,    -1,    -1,    -1,   396,    -1,    -1,   811,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,   418,     6,    -1,
      -1,    -1,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,    30,    31,    -1,    -1,    34,    -1,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   539,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    36,    37,   396,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    -1,    75,     3,     4,    -1,
       6,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    -1,    75,
       3,     4,    -1,     6,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,   539,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    -1,    75,     3,     4,    -1,     6,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    -1,    75,     3,     4,    -1,     6,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     4,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,     4,    80,    81,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    55,    56,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    36,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    49,    -1,    -1,
      80,    81,    54,    55,    56,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    36,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    49,    -1,    -1,    80,    81,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      36,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    49,    -1,    -1,    80,    81,    54,    55,
      56,    -1,    30,    31,    -1,    -1,    34,    -1,    36,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
       6,    49,    50,    -1,    80,    81,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    30,    31,    -1,    75,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    30,    31,    -1,    75,
      34,    -1,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     3,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     3,     4,     5,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    -1,    25,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,     3,     4,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    -1,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,     3,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    -1,    25,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    67,    68,    69,    70,    71,    25,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    67,    68,    69,    70,
      71,    25,    26,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    69,    70,    71,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    68,    69,    70,    71,    25,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    68,
      69,    70,    71,    25,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    67,    68,    69,    70,    71,    25,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    67,    68,    69,    70,
      71,    25,    26,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    69,    70,    71,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    68,    69,    70,    71,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    68,    69,    70,    71,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    82,    84,    85,    86,    87,    49,    96,     0,    36,
      55,    72,    73,    80,    81,    88,    98,    99,   104,   169,
     183,    86,    36,    53,    49,    90,    90,    49,    91,    55,
      80,    81,    49,    66,   105,    76,   106,    34,   190,    90,
      90,    91,    96,   106,    96,    97,   172,    35,    54,    67,
      68,    69,    70,    71,    92,    94,   191,   192,   193,   187,
     105,   106,   190,    77,   107,     5,     3,   174,    49,    78,
       5,    35,   106,   106,   170,   184,    97,   102,    96,     4,
       5,    36,    49,    91,   175,   176,   182,   173,    49,   192,
     188,   107,   174,   106,     3,   108,     4,   182,   109,    34,
     108,     4,     5,   182,     4,     3,   194,   100,   171,   185,
     109,   103,     4,    36,    49,    56,    74,    75,    92,    93,
      96,    98,   104,   110,   111,   112,   117,   130,   135,   148,
     149,   150,   152,   157,   158,    25,    26,    30,    31,    32,
      33,    34,    35,    49,    50,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    89,    92,    93,    96,   275,   276,
     277,   278,   279,   285,   289,   290,   292,   293,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   177,     4,   176,   182,     4,     4,   104,   110,   158,
     195,   196,   197,   189,   108,   194,     4,    75,    92,   135,
     151,    92,    49,    91,   126,   127,   128,   136,   136,    90,
      49,    74,    75,    92,   135,   157,     3,    36,   147,   204,
     204,     3,    79,   146,   159,    34,    96,   285,   289,   312,
     312,   312,   312,   312,   312,    92,   297,   108,   178,    34,
      92,    96,   284,   294,    53,    51,    53,    95,    53,    51,
      53,    95,    53,    51,     5,    35,     7,     8,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       4,   158,   159,     4,   196,   101,   186,    92,   126,   147,
     204,    49,   126,    95,    34,     5,    36,     8,   146,   146,
       8,    75,    92,   135,    92,   126,   147,   146,   159,     4,
       6,    34,    36,    37,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    75,    92,    96,    98,   112,
     204,   205,   206,   207,   208,   209,   212,   213,   215,   216,
     217,   219,   220,   221,   225,   229,   232,   233,   237,   238,
     239,   241,   259,   263,   267,   268,   269,   270,   271,   272,
     278,   290,   299,   313,   314,   316,   317,   318,   132,     4,
      50,    58,    96,   160,   205,   275,    97,   159,   155,    35,
      75,    92,   137,   139,   140,   143,    35,    35,   179,    35,
     292,    51,    95,   295,   296,    34,    95,   295,    49,    52,
      55,    51,    53,    55,   297,    49,    50,    55,    57,    58,
     279,    53,    49,   279,   297,   297,   108,   180,   297,   297,
     297,   303,   304,   305,   306,   307,   308,   308,   309,   309,
     309,   309,   310,   310,   310,   311,   311,   312,   312,   312,
     159,   199,   126,    36,   134,    36,    35,   137,   139,   127,
     119,     3,   129,   200,   297,    57,    96,    92,   126,   147,
     126,    36,   131,   159,   153,    34,   297,   213,   297,    36,
     297,    36,    49,   273,    36,    49,   297,     9,    92,   212,
       4,   206,    36,   126,    36,   213,    34,    34,    34,    34,
      53,     4,   205,     4,    53,   156,    92,    49,    50,    78,
     128,     5,     5,    35,   312,   291,    35,   297,   201,   202,
      95,   296,    35,   292,   201,    95,    34,   287,    52,    55,
      52,    34,    96,    53,    55,    34,   286,    52,   181,     9,
     198,    36,   121,   123,    95,     5,    35,     4,     5,   129,
     203,    91,    53,   126,    36,   133,    36,   118,   154,   297,
       9,    36,    40,    36,    36,    36,    34,    36,    36,   213,
     126,   211,   226,   297,    36,   209,   220,   260,   262,    35,
     161,    35,   163,    58,     4,    58,    78,   128,    53,    49,
     142,    35,    92,   139,   140,    52,   200,   108,   280,    35,
      35,   292,    35,   292,    49,    35,   292,   301,   125,    35,
     139,    95,     4,     4,     5,    34,    57,    36,   120,   122,
     223,   224,   297,    34,   297,   210,    35,    36,   297,     9,
      36,     5,    36,   292,    36,   292,    34,    34,    49,   141,
      50,   145,    35,   282,   108,   281,    35,    35,    34,   288,
      35,    95,    35,     4,   129,    35,   292,    91,   124,    49,
     213,   214,   215,   218,   227,   229,   235,   237,   240,   250,
     259,   265,    35,    36,   297,    35,   213,    35,   261,   262,
      36,   297,    36,   297,   220,    35,    35,    35,   165,    35,
     167,   144,   138,   283,    35,   292,    95,    36,    35,    34,
       9,   222,   230,   214,    34,    34,    35,   204,   234,   213,
      35,    35,   261,    35,    35,   261,    36,    36,    36,    36,
     292,    36,   292,    35,   113,    36,    35,   292,   214,    38,
     228,   297,    36,   209,   260,    36,   274,   242,   213,   213,
      35,   213,   213,    35,    35,   261,   162,   164,    35,    35,
     116,    36,    35,   231,    35,    36,   297,     9,    36,   246,
     244,   213,   264,   243,   213,   213,    35,    36,    36,   114,
      36,   214,    35,   261,    36,   297,    36,   297,   248,   247,
     245,   213,   166,   168,   115,   236,   214,    35,    35,   261,
      35,    35,   261,    36,   249,   251,   214,   214,    35,   214,
     214,    35,    35,   261,   255,   253,   214,   266,   252,   214,
     214,    35,   257,   256,   254,   214,   258
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,    83,    84,    85,    85,    86,    86,    87,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    90,    91,    92,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    98,   100,   101,    99,   102,
     103,    99,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   109,   109,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   113,   112,   114,   112,   115,   112,   116,   112,
     118,   117,   119,   117,   120,   117,   121,   117,   122,   117,
     123,   117,   124,   117,   125,   117,   126,   126,   127,   127,
     128,   128,   129,   129,   131,   130,   132,   130,   133,   130,
     134,   130,   135,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   138,   137,   139,   139,   141,
     140,   142,   140,   140,   144,   143,   145,   143,   146,   147,
     147,   149,   148,   151,   150,   153,   152,   154,   152,   155,
     152,   156,   152,   157,   157,   157,   157,   158,   159,   159,
     159,   159,   160,   161,   162,   160,   160,   163,   164,   160,
     160,   165,   166,   160,   160,   167,   168,   160,   170,   171,
     169,   172,   173,   169,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   176,   177,   176,   178,   176,   179,
     176,   180,   176,   181,   176,   182,   184,   185,   186,   183,
     187,   188,   189,   183,   190,   190,   191,   191,   192,   192,
     193,   194,   194,   195,   195,   196,   196,   198,   197,   199,
     197,   200,   200,   200,   200,   202,   201,   203,   203,   204,
     204,   205,   205,   206,   206,   206,   206,   207,   208,   210,
     209,   211,   209,   212,   212,   213,   213,   213,   213,   213,
     213,   214,   214,   214,   214,   214,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   216,   217,   218,
     219,   220,   220,   220,   220,   220,   220,   220,   222,   221,
     224,   223,   226,   225,   228,   227,   230,   231,   229,   232,
     232,   234,   233,   236,   235,   237,   238,   239,   239,   240,
     240,   242,   241,   243,   241,   244,   241,   245,   241,   246,
     241,   247,   241,   248,   241,   249,   241,   251,   250,   252,
     250,   253,   250,   254,   250,   255,   250,   256,   250,   257,
     250,   258,   250,   259,   260,   260,   261,   262,   262,   264,
     263,   266,   265,   267,   267,   268,   269,   269,   270,   270,
     271,   273,   274,   272,   275,   275,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   277,   277,   277,   277,   277,
     278,   278,   278,   280,   279,   281,   279,   282,   279,   283,
     279,   284,   286,   285,   287,   285,   288,   285,   289,   289,
     291,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   292,   292,   293,   293,   293,   293,   293,   293,   294,
     295,   295,   296,   297,   298,   298,   299,   299,   300,   300,
     300,   301,   301,   302,   302,   303,   303,   304,   304,   305,
     305,   306,   306,   307,   307,   307,   308,   308,   308,   308,
     308,   309,   309,   309,   309,   310,   310,   310,   311,   311,
     311,   311,   312,   312,   312,   312,   312,   313,   314,   315,
     315,   315,   315,   316,   316,   316,   316,   317,   318,   319
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     9,     0,
       0,     8,     1,     1,     0,     2,     0,     2,     0,     2,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     9,     0,    11,     0,    12,     0,    10,
       0,     5,     0,     4,     0,     6,     0,     5,     0,     6,
       0,     5,     0,     7,     0,     6,     1,     3,     1,     3,
       1,     2,     1,     1,     0,     4,     0,     3,     0,     5,
       0,     4,     2,     3,     2,     3,     3,     5,     4,     6,
       4,     6,     5,     7,     2,     0,     5,     1,     3,     0,
       4,     0,     3,     1,     0,     5,     0,     4,     2,     1,
       1,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       3,     0,     4,     3,     5,     4,     6,     1,     2,     3,
       3,     4,     4,     0,     0,     7,     4,     0,     0,     7,
       6,     0,     0,     9,     6,     0,     0,     9,     0,     0,
       7,     0,     0,     6,     2,     3,     3,     4,     3,     4,
       4,     5,     1,     3,     1,     0,     3,     0,     4,     0,
       5,     0,     5,     0,     6,     2,     0,     0,     0,     9,
       0,     0,     0,     8,     2,     3,     1,     3,     2,     1,
       3,     2,     3,     1,     2,     1,     1,     0,     4,     0,
       3,     2,     3,     3,     4,     0,     2,     1,     3,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     2,     0,
       4,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       0,     2,     0,     3,     0,     3,     0,     0,     8,     3,
       5,     0,     6,     0,     6,     1,     7,     1,     1,     1,
       1,     0,     7,     0,     8,     0,     8,     0,     9,     0,
       8,     0,     9,     0,     9,     0,    10,     0,     7,     0,
       8,     0,     8,     0,     9,     0,     8,     0,     9,     0,
       9,     0,    10,     1,     1,     1,     1,     1,     3,     0,
       8,     0,     8,     2,     3,     3,     2,     3,     2,     3,
       3,     0,     0,     7,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     3,     4,     3,     4,     3,
       1,     3,     3,     0,     5,     0,     6,     0,     6,     0,
       7,     1,     0,     4,     0,     4,     0,     6,     4,     4,
       0,     4,     4,     5,     6,     5,     6,     5,     6,     7,
       8,     1,     3,     3,     4,     3,     4,     4,     4,     1,
       1,     2,     3,     1,     1,     1,     3,     3,     1,     1,
       1,     5,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     2,     2,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 291 "parser.y"
    {(yyval.STT).num = CN("input");AC((yyval.STT).num,(yyvsp[0].STT).num);startNode = (yyval.STT).num;}
#line 2713 "parser.tab.c"
    break;

  case 3:
#line 296 "parser.y"
    {(yyval.STT).num = (yyvsp[0].STT).num;;}
#line 2719 "parser.tab.c"
    break;

  case 4:
#line 298 "parser.y"
    {(yyval.STT).num = CN("OrdinaryCompilationUnit"); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 2725 "parser.tab.c"
    break;

  case 5:
#line 303 "parser.y"
    {(yyval.STT).num = CN("TopLevelClassDeclarations");int a = CN("empty");AC((yyval.STT).num,a);}
#line 2731 "parser.tab.c"
    break;

  case 6:
#line 305 "parser.y"
    {(yyval.STT).num = CN("TopLevelClassDeclarations"); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 2737 "parser.tab.c"
    break;

  case 7:
#line 310 "parser.y"
    {(yyval.STT).num = CN("PackageDeclaration"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 2743 "parser.tab.c"
    break;

  case 8:
#line 315 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 2749 "parser.tab.c"
    break;

  case 9:
#line 317 "parser.y"
    {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2755 "parser.tab.c"
    break;

  case 10:
#line 322 "parser.y"
    {  (yyval.STT).type = TOCHAR("int");    (yyval.STT).num = CN((yyvsp[0].ST).sym,"int");(yyvsp[0].ST).num = (yyval.STT).num;}
#line 2761 "parser.tab.c"
    break;

  case 11:
#line 324 "parser.y"
    {    (yyval.STT).type = TOCHAR("float");  (yyval.STT).num = CN((yyvsp[0].ST).sym,"float"); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2767 "parser.tab.c"
    break;

  case 12:
#line 326 "parser.y"
    {(yyval.STT).type = TOCHAR("bool");   (yyval.STT).num = CN((yyvsp[0].ST).sym,"bool"); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2773 "parser.tab.c"
    break;

  case 13:
#line 328 "parser.y"
    {  (yyval.STT).type = TOCHAR("char");   (yyval.STT).num = CN((yyvsp[0].ST).sym,"char"); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2779 "parser.tab.c"
    break;

  case 14:
#line 330 "parser.y"
    {  (yyval.STT).type = TOCHAR("string");  (yyval.STT).num = CN((yyvsp[0].ST).sym,"string"); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2785 "parser.tab.c"
    break;

  case 15:
#line 332 "parser.y"
    {  (yyval.STT).type = TOCHAR("textblock");   (yyval.STT).num = CN((yyvsp[0].ST).sym,"textblock"); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2791 "parser.tab.c"
    break;

  case 16:
#line 334 "parser.y"
    {  (yyval.STT).type = TOCHAR("null");  (yyval.STT).num = CN((yyvsp[0].ST).sym,"null"); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2797 "parser.tab.c"
    break;

  case 17:
#line 341 "parser.y"
                { (yyval.STT).line = yylineno;  (yyval.STT).sym = (yyvsp[0].ST).sym; (yyval.STT).value = TOCHAR(add((yyvsp[0].ST).sym,yylineno,-1,-1));    (yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2803 "parser.tab.c"
    break;

  case 18:
#line 345 "parser.y"
                { (yyval.STT).line = yylineno; (yyval.STT).sym = (yyvsp[0].ST).sym ;(yyval.STT).value = TOCHAR(add((yyvsp[0].ST).sym,yylineno,-1,-1)); start((yyval.STT).value);    (yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2809 "parser.tab.c"
    break;

  case 19:
#line 349 "parser.y"
          {T.push_back(make_pair((yyvsp[0].STT).size,(yyvsp[0].STT).type)); (yyval.STT).type = (yyvsp[0].STT).type; (yyval.STT).size = (yyvsp[0].STT).size; OFFV.push_back(offset);offset+=(yyvsp[0].STT).size;         (yyvsp[0].STT).num = (yyval.STT).num;}
#line 2815 "parser.tab.c"
    break;

  case 20:
#line 352 "parser.y"
          {T.push_back(make_pair(0,"void")); (yyval.STT).type = TOCHAR("void"); (yyval.STT).size = 0; OFFV.push_back(offset);         (yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2821 "parser.tab.c"
    break;

  case 21:
#line 360 "parser.y"
    { (yyval.STT).size = 4;(yyval.STT).type = TOCHAR("int");                   (yyval.STT).num = CN((yyvsp[0].ST).sym);(yyvsp[0].ST).num = (yyval.STT).num;}
#line 2827 "parser.tab.c"
    break;

  case 22:
#line 362 "parser.y"
    {(yyval.STT).size = 8; (yyval.STT).type = TOCHAR("long");                   (yyval.STT).num = CN((yyvsp[0].ST).sym);(yyvsp[0].ST).num = (yyval.STT).num;}
#line 2833 "parser.tab.c"
    break;

  case 23:
#line 364 "parser.y"
    {(yyval.STT).size = 4;(yyval.STT).type = TOCHAR("float");                   (yyval.STT).num = CN((yyvsp[0].ST).sym);(yyvsp[0].ST).num = (yyval.STT).num;}
#line 2839 "parser.tab.c"
    break;

  case 24:
#line 366 "parser.y"
    {(yyval.STT).size = 8;(yyval.STT).type = TOCHAR("double");                   (yyval.STT).num = CN((yyvsp[0].ST).sym);(yyvsp[0].ST).num = (yyval.STT).num;}
#line 2845 "parser.tab.c"
    break;

  case 25:
#line 368 "parser.y"
    {(yyval.STT).size = 1;(yyval.STT).type = TOCHAR("bool");                   (yyval.STT).num = CN((yyvsp[0].ST).sym);(yyvsp[0].ST).num = (yyval.STT).num;}
#line 2851 "parser.tab.c"
    break;

  case 26:
#line 370 "parser.y"
    {(yyval.STT).size = 1;(yyval.STT).type = TOCHAR("char");                   (yyval.STT).num = CN((yyvsp[0].ST).sym);(yyvsp[0].ST).num = (yyval.STT).num;}
#line 2857 "parser.tab.c"
    break;

  case 27:
#line 375 "parser.y"
    {  (yyval.STT).type = TOCHAR("[]");         (yyval.STT).num = CN("Dims"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num); }
#line 2863 "parser.tab.c"
    break;

  case 28:
#line 377 "parser.y"
    {  (yyval.STT).type = TOCHAR(string((yyvsp[-2].STT).type)+"[]");          (yyval.STT).num = CN("Dims");(yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num);  AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 2869 "parser.tab.c"
    break;

  case 29:
#line 382 "parser.y"
    { (yyval.STT).sym = (yyvsp[0].ST).sym;      TNVALUE = ((yyvsp[0].ST).sym);(yyval.STT).value = TOCHAR(add((yyvsp[0].ST).sym,yylineno,-1,-1));      (yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2875 "parser.tab.c"
    break;

  case 30:
#line 384 "parser.y"
    {(yyval.STT).sym = TOCHAR(string((yyvsp[-2].STT).sym) + "." + string((yyvsp[0].ST).sym));     TNVALUE = ((yyvsp[0].ST).sym);(yyval.STT).value = TOCHAR(add((yyvsp[0].ST).sym,yylineno,-1,-1));         (yyval.STT).num = CN("TypeName"); AC((yyval.STT).num,(yyvsp[-2].STT).num); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 2881 "parser.tab.c"
    break;

  case 31:
#line 389 "parser.y"
    {(yyval.STT).sym = (yyvsp[0].STT).sym;                                                            (yyvsp[0].STT).num = (yyval.STT).num;}
#line 2887 "parser.tab.c"
    break;

  case 32:
#line 391 "parser.y"
    { (yyval.STT).sym = TOCHAR(string((yyvsp[-2].STT).sym) + "," + string((yyvsp[0].STT).sym));                     (yyval.STT).num = CN("TypeNameList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 2893 "parser.tab.c"
    break;

  case 33:
#line 397 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 2899 "parser.tab.c"
    break;

  case 34:
#line 399 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 2905 "parser.tab.c"
    break;

  case 35:
#line 401 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 2911 "parser.tab.c"
    break;

  case 36:
#line 405 "parser.y"
                                                                              {start((yyvsp[-3].STT).value);}
#line 2917 "parser.tab.c"
    break;

  case 37:
#line 405 "parser.y"
                                                                                                           {close();lookta((yyvsp[-5].STT).sym,(yyvsp[-5].STT).sym,OFFV.back(),0,"class");}
#line 2923 "parser.tab.c"
    break;

  case 38:
#line 406 "parser.y"
    {(yyval.STT).num = CN("NormalClassDeclaration"); (yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); AC((yyval.STT).num,(yyvsp[-8].STT).num); AC((yyval.STT).num,(yyvsp[-7].ST).num); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 2929 "parser.tab.c"
    break;

  case 39:
#line 407 "parser.y"
                                                               {start((yyvsp[-3].STT).value);}
#line 2935 "parser.tab.c"
    break;

  case 40:
#line 407 "parser.y"
                                                                                            {close(); lookta((yyvsp[-5].STT).sym,(yyvsp[-5].STT).sym,OFFV.back(),0,"class");}
#line 2941 "parser.tab.c"
    break;

  case 41:
#line 408 "parser.y"
    {(yyval.STT).num = CN("NormalClassDeclaration"); (yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); AC((yyval.STT).num,(yyvsp[-7].ST).num); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 2947 "parser.tab.c"
    break;

  case 42:
#line 415 "parser.y"
    {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2953 "parser.tab.c"
    break;

  case 43:
#line 417 "parser.y"
    {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 2959 "parser.tab.c"
    break;

  case 44:
#line 422 "parser.y"
    {(yyval.STT).num = CN("ClassExtends");int a = CN("empty");AC((yyval.STT).num,a);}
#line 2965 "parser.tab.c"
    break;

  case 45:
#line 424 "parser.y"
    {(yyval.STT).num = CN("ClassExtends"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 2971 "parser.tab.c"
    break;

  case 46:
#line 429 "parser.y"
    {(yyval.STT).num = CN("ClassImplements");int a = CN("empty");AC((yyval.STT).num,a);}
#line 2977 "parser.tab.c"
    break;

  case 47:
#line 431 "parser.y"
    {(yyval.STT).num = CN("ClassImplements"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 2983 "parser.tab.c"
    break;

  case 48:
#line 436 "parser.y"
    {(yyval.STT).num = CN("ClassPermits");int a = CN("empty");AC((yyval.STT).num,a);}
#line 2989 "parser.tab.c"
    break;

  case 49:
#line 438 "parser.y"
    {(yyval.STT).num = CN("ClassPermits"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 2995 "parser.tab.c"
    break;

  case 50:
#line 443 "parser.y"
    {(yyval.STT).num = CN("ClassBody"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3001 "parser.tab.c"
    break;

  case 51:
#line 448 "parser.y"
    {(yyval.STT).num = CN("ClassBodyDeclarations");int a = CN("empty");AC((yyval.STT).num,a);}
#line 3007 "parser.tab.c"
    break;

  case 52:
#line 450 "parser.y"
    {(yyval.STT).num = CN("ClassBodyDeclarations"); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3013 "parser.tab.c"
    break;

  case 53:
#line 455 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3019 "parser.tab.c"
    break;

  case 54:
#line 457 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3025 "parser.tab.c"
    break;

  case 55:
#line 459 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3031 "parser.tab.c"
    break;

  case 56:
#line 461 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3037 "parser.tab.c"
    break;

  case 57:
#line 466 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3043 "parser.tab.c"
    break;

  case 58:
#line 468 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3049 "parser.tab.c"
    break;

  case 59:
#line 470 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3055 "parser.tab.c"
    break;

  case 60:
#line 472 "parser.y"
    {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 3061 "parser.tab.c"
    break;

  case 61:
#line 474 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3067 "parser.tab.c"
    break;

  case 62:
#line 478 "parser.y"
                                                                 {close();lookta((yyvsp[-6].STT).sym,"object",OFFV.back(),0,(yyvsp[-3].STT).sym);}
#line 3073 "parser.tab.c"
    break;

  case 63:
#line 479 "parser.y"
    {(yyval.STT).num = CN("ObjectDeclaration"); AC((yyval.STT).num,(yyvsp[-8].STT).num); AC((yyval.STT).num,(yyvsp[-7].STT).num);(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].STT).num); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3079 "parser.tab.c"
    break;

  case 64:
#line 480 "parser.y"
                                                                              {close();lookta((yyvsp[-8].STT).sym,"object",OFFV.back(),0,(yyvsp[-3].STT).sym);}
#line 3085 "parser.tab.c"
    break;

  case 65:
#line 481 "parser.y"
    {(yyval.STT).num = CN("ObjectDeclaration"); AC((yyval.STT).num,(yyvsp[-10].STT).num);AC((yyval.STT).num,(yyvsp[-9].STT).num);(yyvsp[-8].ST).num = CN((yyvsp[-8].ST).sym); AC((yyval.STT).num,(yyvsp[-8].ST).num);AC((yyval.STT).num,(yyvsp[-7].STT).num); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3091 "parser.tab.c"
    break;

  case 66:
#line 482 "parser.y"
                                                                                            {close();lookta((yyvsp[-9].STT).sym,"object",OFFV.back(),0,(yyvsp[-4].STT).sym);}
#line 3097 "parser.tab.c"
    break;

  case 67:
#line 483 "parser.y"
    {(yyval.STT).num = CN("ObjectDeclaration"); AC((yyval.STT).num,(yyvsp[-11].STT).num);AC((yyval.STT).num,(yyvsp[-10].STT).num);(yyvsp[-9].ST).num = CN((yyvsp[-9].ST).sym); AC((yyval.STT).num,(yyvsp[-9].ST).num);AC((yyval.STT).num,(yyvsp[-8].STT).num);(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); AC((yyval.STT).num,(yyvsp[-7].ST).num); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].STT).num);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3103 "parser.tab.c"
    break;

  case 68:
#line 484 "parser.y"
                                                                               {close();lookta((yyvsp[-7].STT).sym,"object",OFFV.back(),0,(yyvsp[-4].STT).sym);}
#line 3109 "parser.tab.c"
    break;

  case 69:
#line 485 "parser.y"
    {(yyval.STT).num = CN("ObjectDeclaration"); AC((yyval.STT).num,(yyvsp[-9].STT).num);AC((yyval.STT).num,(yyvsp[-8].STT).num);(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); AC((yyval.STT).num,(yyvsp[-7].ST).num);(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].STT).num); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3115 "parser.tab.c"
    break;

  case 70:
#line 491 "parser.y"
                                                                 {OFFV.pop_back();T.pop_back();}
#line 3121 "parser.tab.c"
    break;

  case 71:
#line 492 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3127 "parser.tab.c"
    break;

  case 72:
#line 493 "parser.y"
                                                  {OFFV.pop_back();T.pop_back();}
#line 3133 "parser.tab.c"
    break;

  case 73:
#line 494 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3139 "parser.tab.c"
    break;

  case 74:
#line 495 "parser.y"
                                                                        {OFFV.pop_back();T.pop_back();}
#line 3145 "parser.tab.c"
    break;

  case 75:
#line 496 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3151 "parser.tab.c"
    break;

  case 76:
#line 497 "parser.y"
                                                         {OFFV.pop_back();T.pop_back();}
#line 3157 "parser.tab.c"
    break;

  case 77:
#line 498 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3163 "parser.tab.c"
    break;

  case 78:
#line 499 "parser.y"
                                                                       {OFFV.pop_back();T.pop_back();}
#line 3169 "parser.tab.c"
    break;

  case 79:
#line 500 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3175 "parser.tab.c"
    break;

  case 80:
#line 501 "parser.y"
                                                        {OFFV.pop_back();T.pop_back();}
#line 3181 "parser.tab.c"
    break;

  case 81:
#line 502 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3187 "parser.tab.c"
    break;

  case 82:
#line 503 "parser.y"
                                                                              {OFFV.pop_back();T.pop_back();}
#line 3193 "parser.tab.c"
    break;

  case 83:
#line 504 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3199 "parser.tab.c"
    break;

  case 84:
#line 505 "parser.y"
                                                               {OFFV.pop_back();T.pop_back();}
#line 3205 "parser.tab.c"
    break;

  case 85:
#line 506 "parser.y"
    {(yyval.STT).num = CN("FieldDeclaration"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3211 "parser.tab.c"
    break;

  case 86:
#line 511 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3217 "parser.tab.c"
    break;

  case 87:
#line 513 "parser.y"
    {(yyval.STT).num = CN("VariableDeclaratorList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3223 "parser.tab.c"
    break;

  case 88:
#line 518 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3229 "parser.tab.c"
    break;

  case 89:
#line 520 "parser.y"
    {(yyval.STT).num = CN("VariableDeclarator"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3235 "parser.tab.c"
    break;

  case 90:
#line 525 "parser.y"
    {lookd(((yyvsp[0].ST)).sym,yylineno); ADD((yyvsp[0].ST).sym,yylineno,OFFV.back(),T.back().first,T.back().second); (yyval.STT).type = TOCHAR(T.back().second);             (yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 3241 "parser.tab.c"
    break;

  case 91:
#line 527 "parser.y"
    {lookd((yyvsp[-1].ST).sym,yylineno); ADD((yyvsp[-1].ST).sym,yylineno,OFFV.back(),T.back().first,T.back().second+string((yyvsp[0].STT).type));             (yyval.STT).num = CN("VariableDeclaratorId"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3247 "parser.tab.c"
    break;

  case 92:
#line 532 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3253 "parser.tab.c"
    break;

  case 93:
#line 534 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3259 "parser.tab.c"
    break;

  case 94:
#line 538 "parser.y"
                                             {close();lookdprevadded((yyvsp[-1].STT).sym,(yyvsp[-1].STT).line);lookta((yyvsp[-1].STT).sym, T.back().second+string((yyvsp[-1].STT).dimcount),OFFV.back(),T.back().first,"method"); OFFV.pop_back();T.pop_back();}
#line 3265 "parser.tab.c"
    break;

  case 95:
#line 539 "parser.y"
    {(yyval.STT).num = CN("MethodDeclaration"); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3271 "parser.tab.c"
    break;

  case 96:
#line 540 "parser.y"
                              {close();lookdprevadded((yyvsp[0].STT).sym,(yyvsp[0].STT).line);lookta((yyvsp[0].STT).sym, T.back().second +string((yyvsp[0].STT).dimcount),OFFV.back(),T.back().first,"method"); OFFV.pop_back();T.pop_back();}
#line 3277 "parser.tab.c"
    break;

  case 97:
#line 541 "parser.y"
    {(yyval.STT).num = CN("MethodDeclaration"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3283 "parser.tab.c"
    break;

  case 98:
#line 542 "parser.y"
                                                    {close();lookdprevadded((yyvsp[-1].STT).sym,(yyvsp[-1].STT).line);lookta((yyvsp[-1].STT).sym, T.back().second+string((yyvsp[-1].STT).dimcount),OFFV.back(),T.back().first,"method");OFFV.pop_back();T.pop_back();}
#line 3289 "parser.tab.c"
    break;

  case 99:
#line 543 "parser.y"
    {(yyval.STT).num = CN("MethodDeclaration"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3295 "parser.tab.c"
    break;

  case 100:
#line 544 "parser.y"
                                     {close();lookdprevadded((yyvsp[-1].STT).sym,(yyvsp[-1].STT).line);lookta((yyvsp[-1].STT).sym, T.back().second +string((yyvsp[-1].STT).dimcount),OFFV.back(),T.back().first,"method");OFFV.pop_back();T.pop_back();}
#line 3301 "parser.tab.c"
    break;

  case 101:
#line 545 "parser.y"
    {(yyval.STT).num = CN("MethodDeclaration"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3307 "parser.tab.c"
    break;

  case 102:
#line 550 "parser.y"
    {  (yyval.STT).sym = (yyvsp[0].STT).sym;   (yyval.STT).dimcount = (yyvsp[0].STT).dimcount; (yyval.STT).line = (yyvsp[0].STT).line;           (yyval.STT).num = CN("MethodHeader"); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3313 "parser.tab.c"
    break;

  case 103:
#line 552 "parser.y"
    { (yyval.STT).sym = (yyvsp[-1].STT).sym;   (yyval.STT).dimcount = (yyvsp[-1].STT).dimcount; (yyval.STT).line = (yyvsp[-1].STT).line;           (yyval.STT).num = CN("MethodHeader"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3319 "parser.tab.c"
    break;

  case 104:
#line 554 "parser.y"
    { (yyval.STT).sym = (yyvsp[0].STT).sym;   (yyval.STT).dimcount = (yyvsp[0].STT).dimcount;  (yyval.STT).line = (yyvsp[0].STT).line;           (yyval.STT).num = CN("MethodHeader");  AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3325 "parser.tab.c"
    break;

  case 105:
#line 556 "parser.y"
    { (yyval.STT).sym = (yyvsp[-1].STT).sym;   (yyval.STT).dimcount = (yyvsp[-1].STT).dimcount;  (yyval.STT).line = (yyvsp[-1].STT).line;               (yyval.STT).num = CN("MethodHeader");  AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3331 "parser.tab.c"
    break;

  case 106:
#line 561 "parser.y"
    { (yyval.STT).sym = (yyvsp[-2].STT).sym;   (yyval.STT).dimcount = TOCHAR("");  (yyval.STT).line = (yyvsp[-2].STT).line;                           (yyval.STT).num = CN("MethodDeclarator");  (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3337 "parser.tab.c"
    break;

  case 107:
#line 563 "parser.y"
    { (yyval.STT).sym = (yyvsp[-4].STT).sym;   (yyval.STT).dimcount = TOCHAR("");   (yyval.STT).line = (yyvsp[-4].STT).line;                          (yyval.STT).num = CN("MethodDeclarator");  (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3343 "parser.tab.c"
    break;

  case 108:
#line 565 "parser.y"
    { (yyval.STT).sym = (yyvsp[-3].STT).sym;   (yyval.STT).dimcount = TOCHAR("");   (yyval.STT).line = (yyvsp[-3].STT).line ;                         (yyval.STT).num = CN("MethodDeclarator"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3349 "parser.tab.c"
    break;

  case 109:
#line 567 "parser.y"
    { (yyval.STT).sym = (yyvsp[-5].STT).sym;    (yyval.STT).dimcount = TOCHAR("");    (yyval.STT).line = (yyvsp[-5].STT).line;                        (yyval.STT).num = CN("MethodDeclarator");  (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3355 "parser.tab.c"
    break;

  case 110:
#line 569 "parser.y"
    { (yyval.STT).sym = (yyvsp[-3].STT).sym;   (yyval.STT).dimcount = (yyvsp[0].STT).type;     (yyval.STT).line = (yyvsp[-3].STT).line    ;                   (yyval.STT).num = CN("MethodDeclarator"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3361 "parser.tab.c"
    break;

  case 111:
#line 571 "parser.y"
    { (yyval.STT).sym = (yyvsp[-5].STT).sym;   (yyval.STT).dimcount = (yyvsp[0].STT).type;    (yyval.STT).line = (yyvsp[-5].STT).line ;                        (yyval.STT).num = CN("MethodDeclarator");  (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3367 "parser.tab.c"
    break;

  case 112:
#line 573 "parser.y"
    { (yyval.STT).sym = (yyvsp[-4].STT).sym;   (yyval.STT).dimcount = (yyvsp[0].STT).type;  (yyval.STT).line = (yyvsp[-4].STT).line;                           (yyval.STT).num = CN("MethodDeclarator"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3373 "parser.tab.c"
    break;

  case 113:
#line 575 "parser.y"
    { (yyval.STT).sym = (yyvsp[-6].STT).sym;  (yyval.STT).dimcount = (yyvsp[0].STT).type;   (yyval.STT).line = (yyvsp[-6].STT).line;                         (yyval.STT).num = CN("MethodDeclarator");(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3379 "parser.tab.c"
    break;

  case 114:
#line 582 "parser.y"
    {(yyval.STT).num = CN("ReceiverParameter"); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3385 "parser.tab.c"
    break;

  case 115:
#line 583 "parser.y"
                                     {ADD((yyvsp[-2].ST).sym,yylineno,-1,-1);}
#line 3391 "parser.tab.c"
    break;

  case 116:
#line 584 "parser.y"
    {(yyval.STT).num = CN("ReceiverParameter"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3397 "parser.tab.c"
    break;

  case 117:
#line 589 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3403 "parser.tab.c"
    break;

  case 118:
#line 591 "parser.y"
    {(yyval.STT).num = CN("FormalParameterList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3409 "parser.tab.c"
    break;

  case 119:
#line 595 "parser.y"
                                            {OFFV.pop_back();T.pop_back();}
#line 3415 "parser.tab.c"
    break;

  case 120:
#line 596 "parser.y"
    {(yyval.STT).num = CN("FormalParameter"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3421 "parser.tab.c"
    break;

  case 121:
#line 597 "parser.y"
                                      {OFFV.pop_back();T.pop_back();}
#line 3427 "parser.tab.c"
    break;

  case 122:
#line 598 "parser.y"
    {(yyval.STT).num = CN("FormalParameter"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3433 "parser.tab.c"
    break;

  case 123:
#line 600 "parser.y"
    {(yyval.STT).num = CN("FormalParameter"); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3439 "parser.tab.c"
    break;

  case 124:
#line 604 "parser.y"
                                            { lookd((yyvsp[0].ST).sym,yylineno);ADD((yyvsp[0].ST).sym,yylineno,OFFV.back(),(yyvsp[-2].STT).size,(yyvsp[-2].STT).type); OFFV.pop_back();T.pop_back();}
#line 3445 "parser.tab.c"
    break;

  case 125:
#line 605 "parser.y"
    {(yyval.STT).num = CN("VariableArityParameter"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3451 "parser.tab.c"
    break;

  case 126:
#line 606 "parser.y"
                                      {lookd((yyvsp[0].ST).sym,yylineno);ADD((yyvsp[0].ST).sym,yylineno,OFFV.back(),(yyvsp[-2].STT).size,(yyvsp[-2].STT).type);OFFV.pop_back();T.pop_back();}
#line 3457 "parser.tab.c"
    break;

  case 127:
#line 607 "parser.y"
    {(yyval.STT).num = CN("VariableArityParameter"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3463 "parser.tab.c"
    break;

  case 128:
#line 613 "parser.y"
    {(yyval.STT).num = CN("Throws"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3469 "parser.tab.c"
    break;

  case 129:
#line 618 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3475 "parser.tab.c"
    break;

  case 130:
#line 620 "parser.y"
    {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 3481 "parser.tab.c"
    break;

  case 131:
#line 624 "parser.y"
     {start(add("INSTANCE_INITIALIZER_BLOCK",yylineno,OFFV.back(),0,"INSTANCE"));}
#line 3487 "parser.tab.c"
    break;

  case 132:
#line 625 "parser.y"
    {close(); (yyvsp[0].STT).num = (yyval.STT).num;}
#line 3493 "parser.tab.c"
    break;

  case 133:
#line 629 "parser.y"
             {start(add("STATIC_INITIALIZER_BLOCK",yylineno,OFFV.back(),-1));}
#line 3499 "parser.tab.c"
    break;

  case 134:
#line 630 "parser.y"
    {close();    (yyval.STT).num = CN("StaticInitializer"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3505 "parser.tab.c"
    break;

  case 135:
#line 634 "parser.y"
                                                           {close();}
#line 3511 "parser.tab.c"
    break;

  case 136:
#line 635 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclaration"); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3517 "parser.tab.c"
    break;

  case 137:
#line 636 "parser.y"
                                                                  {close();}
#line 3523 "parser.tab.c"
    break;

  case 138:
#line 637 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclaration"); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3529 "parser.tab.c"
    break;

  case 139:
#line 638 "parser.y"
                                            {close();}
#line 3535 "parser.tab.c"
    break;

  case 140:
#line 639 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclaration"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3541 "parser.tab.c"
    break;

  case 141:
#line 640 "parser.y"
                                                   {close();}
#line 3547 "parser.tab.c"
    break;

  case 142:
#line 641 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclaration"); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3553 "parser.tab.c"
    break;

  case 143:
#line 646 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclarator"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3559 "parser.tab.c"
    break;

  case 144:
#line 648 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclarator"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3565 "parser.tab.c"
    break;

  case 145:
#line 650 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclarator"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3571 "parser.tab.c"
    break;

  case 146:
#line 652 "parser.y"
    {(yyval.STT).num = CN("ConstructorDeclarator"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3577 "parser.tab.c"
    break;

  case 147:
#line 657 "parser.y"
    {(yyval.STT).value = TOCHAR(add((yyvsp[0].ST).sym,yylineno,-1,-1));start((yyval.STT).value);   (yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 3583 "parser.tab.c"
    break;

  case 148:
#line 662 "parser.y"
    {(yyval.STT).num = CN("ConstructorBody"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3589 "parser.tab.c"
    break;

  case 149:
#line 664 "parser.y"
    {(yyval.STT).num = CN("ConstructorBody"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3595 "parser.tab.c"
    break;

  case 150:
#line 666 "parser.y"
    {(yyval.STT).num = CN("ConstructorBody"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3601 "parser.tab.c"
    break;

  case 151:
#line 668 "parser.y"
    {(yyval.STT).num = CN("ConstructorBody"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3607 "parser.tab.c"
    break;

  case 152:
#line 673 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3613 "parser.tab.c"
    break;

  case 153:
#line 674 "parser.y"
                 {start(add((yyvsp[-1].ST).sym,yylineno,-1,-1));}
#line 3619 "parser.tab.c"
    break;

  case 154:
#line 674 "parser.y"
                                                                                   {close();}
#line 3625 "parser.tab.c"
    break;

  case 155:
#line 675 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].ST).num); }
#line 3631 "parser.tab.c"
    break;

  case 156:
#line 677 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3637 "parser.tab.c"
    break;

  case 157:
#line 678 "parser.y"
                  {start(add((yyvsp[-1].ST).sym,yylineno,-1,-1));}
#line 3643 "parser.tab.c"
    break;

  case 158:
#line 678 "parser.y"
                                                                                    {close();}
#line 3649 "parser.tab.c"
    break;

  case 159:
#line 679 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].ST).num); }
#line 3655 "parser.tab.c"
    break;

  case 160:
#line 681 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3661 "parser.tab.c"
    break;

  case 161:
#line 682 "parser.y"
                              {start((yyvsp[-3].STT).value);}
#line 3667 "parser.tab.c"
    break;

  case 162:
#line 682 "parser.y"
                                                                              {close();}
#line 3673 "parser.tab.c"
    break;

  case 163:
#line 683 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-8].STT).num); AC((yyval.STT).num,(yyvsp[-7].ST).num); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3679 "parser.tab.c"
    break;

  case 164:
#line 685 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3685 "parser.tab.c"
    break;

  case 165:
#line 686 "parser.y"
                              {start((yyvsp[-3].STT).value);}
#line 3691 "parser.tab.c"
    break;

  case 166:
#line 686 "parser.y"
                                                                              {close();}
#line 3697 "parser.tab.c"
    break;

  case 167:
#line 687 "parser.y"
    {(yyval.STT).num = CN("ExplicitConstructorInvocation"); (yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-8].STT).num); AC((yyval.STT).num,(yyvsp[-7].ST).num); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3703 "parser.tab.c"
    break;

  case 168:
#line 692 "parser.y"
                                                   {start((yyvsp[-1].STT).value);}
#line 3709 "parser.tab.c"
    break;

  case 169:
#line 692 "parser.y"
                                                                              {close();}
#line 3715 "parser.tab.c"
    break;

  case 170:
#line 693 "parser.y"
    {(yyval.STT).num = CN("EnumDeclaration"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3721 "parser.tab.c"
    break;

  case 171:
#line 694 "parser.y"
                                    {start((yyvsp[-1].STT).value);}
#line 3727 "parser.tab.c"
    break;

  case 172:
#line 694 "parser.y"
                                                                {close();}
#line 3733 "parser.tab.c"
    break;

  case 173:
#line 695 "parser.y"
    {(yyval.STT).num = CN("EnumDeclaration"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3739 "parser.tab.c"
    break;

  case 174:
#line 700 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3745 "parser.tab.c"
    break;

  case 175:
#line 702 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3751 "parser.tab.c"
    break;

  case 176:
#line 704 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3757 "parser.tab.c"
    break;

  case 177:
#line 706 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3763 "parser.tab.c"
    break;

  case 178:
#line 708 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3769 "parser.tab.c"
    break;

  case 179:
#line 710 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3775 "parser.tab.c"
    break;

  case 180:
#line 712 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3781 "parser.tab.c"
    break;

  case 181:
#line 714 "parser.y"
    {(yyval.STT).num = CN("EnumBody"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3787 "parser.tab.c"
    break;

  case 182:
#line 719 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3793 "parser.tab.c"
    break;

  case 183:
#line 721 "parser.y"
    {(yyval.STT).num = CN("EnumConstantList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3799 "parser.tab.c"
    break;

  case 184:
#line 726 "parser.y"
    {ADD((yyvsp[0].ST).sym,yylineno,-1,-1);     (yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 3805 "parser.tab.c"
    break;

  case 185:
#line 727 "parser.y"
                          {close();}
#line 3811 "parser.tab.c"
    break;

  case 186:
#line 728 "parser.y"
    {(yyval.STT).num = CN("EnumConstant");  AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3817 "parser.tab.c"
    break;

  case 187:
#line 729 "parser.y"
                           {close();}
#line 3823 "parser.tab.c"
    break;

  case 188:
#line 730 "parser.y"
    {(yyval.STT).num = CN("EnumConstant"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3829 "parser.tab.c"
    break;

  case 189:
#line 731 "parser.y"
                                     {close();}
#line 3835 "parser.tab.c"
    break;

  case 190:
#line 732 "parser.y"
    {(yyval.STT).num = CN("EnumConstant"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3841 "parser.tab.c"
    break;

  case 191:
#line 733 "parser.y"
                                        {close();}
#line 3847 "parser.tab.c"
    break;

  case 192:
#line 734 "parser.y"
    {(yyval.STT).num = CN("EnumConstant"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 3853 "parser.tab.c"
    break;

  case 193:
#line 735 "parser.y"
                                                  {close();}
#line 3859 "parser.tab.c"
    break;

  case 194:
#line 736 "parser.y"
    {(yyval.STT).num = CN("EnumConstant");  (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3865 "parser.tab.c"
    break;

  case 195:
#line 741 "parser.y"
    {(yyval.STT).num = CN("EnumBodyDeclarations"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3871 "parser.tab.c"
    break;

  case 196:
#line 745 "parser.y"
                                                   {close();}
#line 3877 "parser.tab.c"
    break;

  case 197:
#line 745 "parser.y"
                                                                              {start((yyvsp[-3].STT).value);}
#line 3883 "parser.tab.c"
    break;

  case 198:
#line 745 "parser.y"
                                                                                                            {close();}
#line 3889 "parser.tab.c"
    break;

  case 199:
#line 746 "parser.y"
    {(yyval.STT).num = CN("RecordDeclaration"); (yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); AC((yyval.STT).num,(yyvsp[-8].STT).num); AC((yyval.STT).num,(yyvsp[-7].ST).num); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3895 "parser.tab.c"
    break;

  case 200:
#line 747 "parser.y"
                                    {close();}
#line 3901 "parser.tab.c"
    break;

  case 201:
#line 747 "parser.y"
                                                               {start((yyvsp[-2].STT).value);}
#line 3907 "parser.tab.c"
    break;

  case 202:
#line 747 "parser.y"
                                                                                             {close();}
#line 3913 "parser.tab.c"
    break;

  case 203:
#line 748 "parser.y"
    {(yyval.STT).num = CN("RecordDeclaration"); (yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym);AC((yyval.STT).num,(yyvsp[-7].ST).num); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 3919 "parser.tab.c"
    break;

  case 204:
#line 753 "parser.y"
    {(yyval.STT).num = CN("RecordHeader"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3925 "parser.tab.c"
    break;

  case 205:
#line 755 "parser.y"
    {(yyval.STT).num = CN("RecordHeader"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3931 "parser.tab.c"
    break;

  case 206:
#line 760 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3937 "parser.tab.c"
    break;

  case 207:
#line 762 "parser.y"
    {(yyval.STT).num = CN("RecordComponentList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3943 "parser.tab.c"
    break;

  case 208:
#line 767 "parser.y"
    {ADD((yyvsp[0].ST).sym,yylineno,-1,-1);      (yyval.STT).num = CN("RecordComponent"); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3949 "parser.tab.c"
    break;

  case 209:
#line 769 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3955 "parser.tab.c"
    break;

  case 210:
#line 774 "parser.y"
    {ADD((yyvsp[0].ST).sym,yylineno,-1,-1);      (yyval.STT).num = CN("VariableArityRecordComponent"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3961 "parser.tab.c"
    break;

  case 211:
#line 779 "parser.y"
    {(yyval.STT).num = CN("RecordBody"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3967 "parser.tab.c"
    break;

  case 212:
#line 781 "parser.y"
    {(yyval.STT).num = CN("RecordBody"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 3973 "parser.tab.c"
    break;

  case 213:
#line 786 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3979 "parser.tab.c"
    break;

  case 214:
#line 788 "parser.y"
    {(yyval.STT).num = CN("RecordBodyDeclarations"); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 3985 "parser.tab.c"
    break;

  case 215:
#line 793 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3991 "parser.tab.c"
    break;

  case 216:
#line 795 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 3997 "parser.tab.c"
    break;

  case 217:
#line 799 "parser.y"
                                                    {close();}
#line 4003 "parser.tab.c"
    break;

  case 218:
#line 800 "parser.y"
    {(yyval.STT).num = CN("CompactConstructorDeclaration"); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4009 "parser.tab.c"
    break;

  case 219:
#line 801 "parser.y"
                                     {close();}
#line 4015 "parser.tab.c"
    break;

  case 220:
#line 802 "parser.y"
    {(yyval.STT).num = CN("CompactConstructorDeclaration"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4021 "parser.tab.c"
    break;

  case 221:
#line 809 "parser.y"
    {(yyval.STT).num = CN("ArrayInitializer_X"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4027 "parser.tab.c"
    break;

  case 222:
#line 811 "parser.y"
    {(yyval.STT).num = CN("ArrayInitializer_X"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4033 "parser.tab.c"
    break;

  case 223:
#line 813 "parser.y"
    {(yyval.STT).num = CN("ArrayInitializer_X"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4039 "parser.tab.c"
    break;

  case 224:
#line 815 "parser.y"
    {(yyval.STT).num = CN("ArrayInitializer_X"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4045 "parser.tab.c"
    break;

  case 225:
#line 819 "parser.y"
     {temp = add("ARRAYINITIALIZER",yylineno,OFFV.back(),0,"ARRAYINITIALIZER");start(temp);}
#line 4051 "parser.tab.c"
    break;

  case 226:
#line 819 "parser.y"
                                                                                                                {close(); (yyval.STT).value = TOCHAR(temp);(yyval.STT).num = (yyvsp[0].STT).num;}
#line 4057 "parser.tab.c"
    break;

  case 227:
#line 824 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4063 "parser.tab.c"
    break;

  case 228:
#line 826 "parser.y"
    {(yyval.STT).num = CN("VariableInitializerList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 4069 "parser.tab.c"
    break;

  case 229:
#line 834 "parser.y"
    {(yyval.STT).num = CN("Block"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4075 "parser.tab.c"
    break;

  case 230:
#line 836 "parser.y"
    {(yyval.STT).num = CN("Block"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4081 "parser.tab.c"
    break;

  case 231:
#line 841 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4087 "parser.tab.c"
    break;

  case 232:
#line 843 "parser.y"
    {(yyval.STT).num = CN("BlockStatements"); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 4093 "parser.tab.c"
    break;

  case 233:
#line 848 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4099 "parser.tab.c"
    break;

  case 234:
#line 850 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4105 "parser.tab.c"
    break;

  case 235:
#line 852 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4111 "parser.tab.c"
    break;

  case 236:
#line 854 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4117 "parser.tab.c"
    break;

  case 237:
#line 859 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4123 "parser.tab.c"
    break;

  case 238:
#line 864 "parser.y"
    {(yyval.STT).num = CN("LocalVariableDeclarationStatement"); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4129 "parser.tab.c"
    break;

  case 239:
#line 868 "parser.y"
                                                     {OFFV.pop_back();T.pop_back();}
#line 4135 "parser.tab.c"
    break;

  case 240:
#line 869 "parser.y"
    {(yyval.STT).num = CN("LocalVariableDeclaration"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4141 "parser.tab.c"
    break;

  case 241:
#line 870 "parser.y"
                                               {OFFV.pop_back();T.pop_back();}
#line 4147 "parser.tab.c"
    break;

  case 242:
#line 871 "parser.y"
    {(yyval.STT).num = CN("LocalVariableDeclaration"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4153 "parser.tab.c"
    break;

  case 243:
#line 876 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4159 "parser.tab.c"
    break;

  case 244:
#line 878 "parser.y"
    {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 4165 "parser.tab.c"
    break;

  case 245:
#line 883 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4171 "parser.tab.c"
    break;

  case 246:
#line 885 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4177 "parser.tab.c"
    break;

  case 247:
#line 887 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4183 "parser.tab.c"
    break;

  case 248:
#line 889 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4189 "parser.tab.c"
    break;

  case 249:
#line 891 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4195 "parser.tab.c"
    break;

  case 250:
#line 893 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4201 "parser.tab.c"
    break;

  case 251:
#line 898 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4207 "parser.tab.c"
    break;

  case 252:
#line 900 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4213 "parser.tab.c"
    break;

  case 253:
#line 902 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4219 "parser.tab.c"
    break;

  case 254:
#line 904 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4225 "parser.tab.c"
    break;

  case 255:
#line 906 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4231 "parser.tab.c"
    break;

  case 256:
#line 911 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4237 "parser.tab.c"
    break;

  case 257:
#line 913 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4243 "parser.tab.c"
    break;

  case 258:
#line 915 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4249 "parser.tab.c"
    break;

  case 259:
#line 917 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4255 "parser.tab.c"
    break;

  case 260:
#line 919 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4261 "parser.tab.c"
    break;

  case 261:
#line 921 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4267 "parser.tab.c"
    break;

  case 262:
#line 923 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4273 "parser.tab.c"
    break;

  case 263:
#line 925 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4279 "parser.tab.c"
    break;

  case 264:
#line 927 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4285 "parser.tab.c"
    break;

  case 265:
#line 929 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4291 "parser.tab.c"
    break;

  case 266:
#line 931 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4297 "parser.tab.c"
    break;

  case 267:
#line 936 "parser.y"
    {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 4303 "parser.tab.c"
    break;

  case 268:
#line 941 "parser.y"
    { ADD((yyvsp[-2].ST).sym,yylineno,-1,-1);  (yyval.STT).num = CN("LabeledStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 4309 "parser.tab.c"
    break;

  case 269:
#line 946 "parser.y"
    {ADD((yyvsp[-2].ST).sym,yylineno,-1,-1);  (yyval.STT).num = CN("LabeledStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 4315 "parser.tab.c"
    break;

  case 270:
#line 951 "parser.y"
    {(yyval.STT).num = CN("ExpressionStatement"); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4321 "parser.tab.c"
    break;

  case 271:
#line 956 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4327 "parser.tab.c"
    break;

  case 272:
#line 958 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4333 "parser.tab.c"
    break;

  case 273:
#line 960 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4339 "parser.tab.c"
    break;

  case 274:
#line 962 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4345 "parser.tab.c"
    break;

  case 275:
#line 964 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4351 "parser.tab.c"
    break;

  case 276:
#line 966 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4357 "parser.tab.c"
    break;

  case 277:
#line 968 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4363 "parser.tab.c"
    break;

  case 278:
#line 972 "parser.y"
                                               {close();}
#line 4369 "parser.tab.c"
    break;

  case 279:
#line 973 "parser.y"
    {(yyval.STT).num = CN("IfThenStatement"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4375 "parser.tab.c"
    break;

  case 280:
#line 977 "parser.y"
     {start(add("IFBLOCK",yylineno,OFFV.back(),0,"IFBLOCK"));}
#line 4381 "parser.tab.c"
    break;

  case 281:
#line 977 "parser.y"
                                                                      {(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num; }
#line 4387 "parser.tab.c"
    break;

  case 282:
#line 980 "parser.y"
                        {close();}
#line 4393 "parser.tab.c"
    break;

  case 283:
#line 981 "parser.y"
    {(yyval.STT).num = CN("IfThenElseStatement"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4399 "parser.tab.c"
    break;

  case 284:
#line 985 "parser.y"
                                 {close();}
#line 4405 "parser.tab.c"
    break;

  case 285:
#line 986 "parser.y"
    {(yyval.STT).num = CN("IfThenElseStatementNoShortIf"); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4411 "parser.tab.c"
    break;

  case 286:
#line 990 "parser.y"
                                                       {close();}
#line 4417 "parser.tab.c"
    break;

  case 287:
#line 990 "parser.y"
                                                                      {start(add("ELSEBLOCK",yylineno,OFFV.back(),0,"ELSEBLOCK"));}
#line 4423 "parser.tab.c"
    break;

  case 288:
#line 991 "parser.y"
    {(yyval.STT).num = CN("IF_ELSE"); (yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-7].ST).num); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 4429 "parser.tab.c"
    break;

  case 289:
#line 996 "parser.y"
    {(yyval.STT).num = CN("AssertStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4435 "parser.tab.c"
    break;

  case 290:
#line 998 "parser.y"
    {(yyval.STT).num = CN("AssertStatement"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4441 "parser.tab.c"
    break;

  case 291:
#line 1002 "parser.y"
                                                  {close();}
#line 4447 "parser.tab.c"
    break;

  case 292:
#line 1003 "parser.y"
    {(yyval.STT).num = CN("WhileStatement"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4453 "parser.tab.c"
    break;

  case 293:
#line 1007 "parser.y"
                                                           {close();}
#line 4459 "parser.tab.c"
    break;

  case 294:
#line 1008 "parser.y"
    {(yyval.STT).num = CN("WhileStatement"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4465 "parser.tab.c"
    break;

  case 295:
#line 1013 "parser.y"
{start(add("WHILELOOP",yylineno,OFFV.back(),0,"WHILELOOP"));(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 4471 "parser.tab.c"
    break;

  case 296:
#line 1019 "parser.y"
    {(yyval.STT).num = CN("DoStatement"); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num, (yyvsp[0].ST).num);}
#line 4477 "parser.tab.c"
    break;

  case 297:
#line 1024 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4483 "parser.tab.c"
    break;

  case 298:
#line 1026 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4489 "parser.tab.c"
    break;

  case 299:
#line 1031 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4495 "parser.tab.c"
    break;

  case 300:
#line 1033 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4501 "parser.tab.c"
    break;

  case 301:
#line 1037 "parser.y"
                                                         {close();}
#line 4507 "parser.tab.c"
    break;

  case 302:
#line 1038 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement"); ; (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4513 "parser.tab.c"
    break;

  case 303:
#line 1039 "parser.y"
                                                                 {close();}
#line 4519 "parser.tab.c"
    break;

  case 304:
#line 1040 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement"); ; (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-7].STT).num); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4525 "parser.tab.c"
    break;

  case 305:
#line 1041 "parser.y"
                                                                    {close();}
#line 4531 "parser.tab.c"
    break;

  case 306:
#line 1042 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].STT).num);AC((yyval.STT).num,(yyvsp[-3].ST).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4537 "parser.tab.c"
    break;

  case 307:
#line 1043 "parser.y"
                                                                            {close();}
#line 4543 "parser.tab.c"
    break;

  case 308:
#line 1044 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-8].STT).num);AC((yyval.STT).num,(yyvsp[-7].ST).num);AC((yyval.STT).num,(yyvsp[-6].STT).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].STT).num);AC((yyval.STT).num,(yyvsp[-3].ST).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4549 "parser.tab.c"
    break;

  case 309:
#line 1045 "parser.y"
                                                                   {close();}
#line 4555 "parser.tab.c"
    break;

  case 310:
#line 1046 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4561 "parser.tab.c"
    break;

  case 311:
#line 1047 "parser.y"
                                                                           {close();}
#line 4567 "parser.tab.c"
    break;

  case 312:
#line 1048 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-8].STT).num);AC((yyval.STT).num,(yyvsp[-7].ST).num);AC((yyval.STT).num,(yyvsp[-6].STT).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4573 "parser.tab.c"
    break;

  case 313:
#line 1049 "parser.y"
                                                                              {close();}
#line 4579 "parser.tab.c"
    break;

  case 314:
#line 1050 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym);(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-8].STT).num);AC((yyval.STT).num,(yyvsp[-7].ST).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].STT).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4585 "parser.tab.c"
    break;

  case 315:
#line 1051 "parser.y"
                                                                                      {close();}
#line 4591 "parser.tab.c"
    break;

  case 316:
#line 1052 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-8].ST).num = CN((yyvsp[-8].ST).sym);(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-9].STT).num);AC((yyval.STT).num,(yyvsp[-8].ST).num);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].STT).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4597 "parser.tab.c"
    break;

  case 317:
#line 1056 "parser.y"
                                                                  {close();}
#line 4603 "parser.tab.c"
    break;

  case 318:
#line 1057 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4609 "parser.tab.c"
    break;

  case 319:
#line 1058 "parser.y"
                                                                          {close();}
#line 4615 "parser.tab.c"
    break;

  case 320:
#line 1059 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement"); ; (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-7].STT).num); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4621 "parser.tab.c"
    break;

  case 321:
#line 1060 "parser.y"
                                                                             {close();}
#line 4627 "parser.tab.c"
    break;

  case 322:
#line 1061 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].STT).num);AC((yyval.STT).num,(yyvsp[-3].ST).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4633 "parser.tab.c"
    break;

  case 323:
#line 1062 "parser.y"
                                                                                     {close();}
#line 4639 "parser.tab.c"
    break;

  case 324:
#line 1063 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-8].STT).num);AC((yyval.STT).num,(yyvsp[-7].ST).num);AC((yyval.STT).num,(yyvsp[-6].STT).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].STT).num);AC((yyval.STT).num,(yyvsp[-3].ST).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4645 "parser.tab.c"
    break;

  case 325:
#line 1064 "parser.y"
                                                                            {close();}
#line 4651 "parser.tab.c"
    break;

  case 326:
#line 1065 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4657 "parser.tab.c"
    break;

  case 327:
#line 1066 "parser.y"
                                                                                    {close();}
#line 4663 "parser.tab.c"
    break;

  case 328:
#line 1067 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym);(yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-8].STT).num);AC((yyval.STT).num,(yyvsp[-7].ST).num);AC((yyval.STT).num,(yyvsp[-6].STT).num);AC((yyval.STT).num,(yyvsp[-5].ST).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4669 "parser.tab.c"
    break;

  case 329:
#line 1068 "parser.y"
                                                                                       {close();}
#line 4675 "parser.tab.c"
    break;

  case 330:
#line 1069 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-7].ST).num = CN((yyvsp[-7].ST).sym);(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-8].STT).num);AC((yyval.STT).num,(yyvsp[-7].ST).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].STT).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4681 "parser.tab.c"
    break;

  case 331:
#line 1070 "parser.y"
                                                                                               {close();}
#line 4687 "parser.tab.c"
    break;

  case 332:
#line 1071 "parser.y"
    {(yyval.STT).num = CN("BasicForStatement");;(yyvsp[-8].ST).num = CN((yyvsp[-8].ST).sym);(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-9].STT).num);AC((yyval.STT).num,(yyvsp[-8].ST).num);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].STT).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4693 "parser.tab.c"
    break;

  case 333:
#line 1079 "parser.y"
{start(add("FORLOOP",yylineno,OFFV.back(),0,"FORLOOP"));(yyval.STT).num = CN((yyvsp[0].ST).sym); (yyvsp[0].ST).num = (yyval.STT).num;}
#line 4699 "parser.tab.c"
    break;

  case 334:
#line 1085 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4705 "parser.tab.c"
    break;

  case 335:
#line 1087 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4711 "parser.tab.c"
    break;

  case 336:
#line 1092 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4717 "parser.tab.c"
    break;

  case 337:
#line 1097 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4723 "parser.tab.c"
    break;

  case 338:
#line 1099 "parser.y"
    {(yyval.STT).num = CN("StatementExpressionList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 4729 "parser.tab.c"
    break;

  case 339:
#line 1104 "parser.y"
                                                                               {close();}
#line 4735 "parser.tab.c"
    break;

  case 340:
#line 1105 "parser.y"
    {(yyval.STT).num = CN("EnhancedForStatement");(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].STT).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4741 "parser.tab.c"
    break;

  case 341:
#line 1109 "parser.y"
                                                                                        {close();}
#line 4747 "parser.tab.c"
    break;

  case 342:
#line 1110 "parser.y"
    {(yyval.STT).num = CN("EnhancedForStatement");(yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym);(yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);AC((yyval.STT).num,(yyvsp[-7].STT).num);AC((yyval.STT).num,(yyvsp[-6].ST).num);AC((yyval.STT).num,(yyvsp[-5].STT).num);AC((yyval.STT).num,(yyvsp[-4].ST).num);AC((yyval.STT).num,(yyvsp[-3].STT).num);AC((yyval.STT).num,(yyvsp[-2].ST).num);AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4753 "parser.tab.c"
    break;

  case 343:
#line 1116 "parser.y"
    {(yyval.STT).num = CN("BreakStatement"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4759 "parser.tab.c"
    break;

  case 344:
#line 1118 "parser.y"
    {  ADD((yyvsp[-1].ST).sym,yylineno,OFFV.back(),0);   (yyval.STT).num = CN("BreakStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4765 "parser.tab.c"
    break;

  case 345:
#line 1123 "parser.y"
    {(yyval.STT).num = CN("YieldStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4771 "parser.tab.c"
    break;

  case 346:
#line 1129 "parser.y"
    {(yyval.STT).num = CN("ContinueStatement"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4777 "parser.tab.c"
    break;

  case 347:
#line 1131 "parser.y"
    {ADD((yyvsp[-1].ST).sym,yylineno,OFFV.back(),0);(yyval.STT).num = CN("ContinueStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4783 "parser.tab.c"
    break;

  case 348:
#line 1136 "parser.y"
    {(yyval.STT).num = CN("ReturnStatement"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4789 "parser.tab.c"
    break;

  case 349:
#line 1138 "parser.y"
    {(yyval.STT).num = CN("ReturnStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4795 "parser.tab.c"
    break;

  case 350:
#line 1143 "parser.y"
    {(yyval.STT).num = CN("ThrowStatement"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4801 "parser.tab.c"
    break;

  case 351:
#line 1147 "parser.y"
             {start(add((yyvsp[0].ST).sym,yylineno,OFFV.back(),0));}
#line 4807 "parser.tab.c"
    break;

  case 352:
#line 1147 "parser.y"
                                                                                      {close();}
#line 4813 "parser.tab.c"
    break;

  case 353:
#line 1148 "parser.y"
    {(yyval.STT).num = CN("SynchronizedStatement"); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4819 "parser.tab.c"
    break;

  case 354:
#line 1155 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4825 "parser.tab.c"
    break;

  case 355:
#line 1157 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4831 "parser.tab.c"
    break;

  case 356:
#line 1162 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4837 "parser.tab.c"
    break;

  case 357:
#line 1164 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4843 "parser.tab.c"
    break;

  case 358:
#line 1166 "parser.y"
    {(yyval.STT).num=CN((yyvsp[0].ST).sym);(yyvsp[0].ST).num = (yyval.STT).num;}
#line 4849 "parser.tab.c"
    break;

  case 359:
#line 1168 "parser.y"
    {(yyval.STT).num = CN("PrimaryNoNewArray"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4855 "parser.tab.c"
    break;

  case 360:
#line 1170 "parser.y"
    {(yyval.STT).num = CN("PrimaryNoNewArray"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4861 "parser.tab.c"
    break;

  case 361:
#line 1172 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4867 "parser.tab.c"
    break;

  case 362:
#line 1174 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4873 "parser.tab.c"
    break;

  case 363:
#line 1176 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4879 "parser.tab.c"
    break;

  case 364:
#line 1178 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4885 "parser.tab.c"
    break;

  case 365:
#line 1183 "parser.y"
    {(yyval.STT).num = CN("ClassLiteral"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4891 "parser.tab.c"
    break;

  case 366:
#line 1185 "parser.y"
    {(yyval.STT).num = CN("ClassLiteral"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4897 "parser.tab.c"
    break;

  case 367:
#line 1187 "parser.y"
    {(yyval.STT).num = CN("ClassLiteral"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4903 "parser.tab.c"
    break;

  case 368:
#line 1189 "parser.y"
    {(yyval.STT).num = CN("ClassLiteral"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4909 "parser.tab.c"
    break;

  case 369:
#line 1191 "parser.y"
    {(yyval.STT).num = CN("ClassLiteral"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 4915 "parser.tab.c"
    break;

  case 370:
#line 1196 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4921 "parser.tab.c"
    break;

  case 371:
#line 1198 "parser.y"
    {(yyval.STT).num = CN("ClassInstanceCreationExpression"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 4927 "parser.tab.c"
    break;

  case 372:
#line 1200 "parser.y"
    {(yyval.STT).num = CN("ClassInstanceCreationExpression"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 4933 "parser.tab.c"
    break;

  case 373:
#line 1204 "parser.y"
                                            {close();}
#line 4939 "parser.tab.c"
    break;

  case 374:
#line 1205 "parser.y"
    {(yyval.STT).num = CN("UnqualifiedClassInstanceCreationExpression"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 4945 "parser.tab.c"
    break;

  case 375:
#line 1206 "parser.y"
                                                         {close();}
#line 4951 "parser.tab.c"
    break;

  case 376:
#line 1207 "parser.y"
    {(yyval.STT).num = CN("UnqualifiedClassInstanceCreationExpression"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 4957 "parser.tab.c"
    break;

  case 377:
#line 1208 "parser.y"
                                                      {close();}
#line 4963 "parser.tab.c"
    break;

  case 378:
#line 1209 "parser.y"
    {(yyval.STT).num = CN("UnqualifiedClassInstanceCreationExpression"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4969 "parser.tab.c"
    break;

  case 379:
#line 1210 "parser.y"
                                                                   {close();}
#line 4975 "parser.tab.c"
    break;

  case 380:
#line 1211 "parser.y"
    {(yyval.STT).num = CN("UnqualifiedClassInstanceCreationExpression"); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 4981 "parser.tab.c"
    break;

  case 381:
#line 1216 "parser.y"
    {start((yyvsp[0].STT).value);(yyvsp[0].STT).num = (yyval.STT).num;}
#line 4987 "parser.tab.c"
    break;

  case 382:
#line 1220 "parser.y"
                             { ADD((yyvsp[0].ST).sym,yylineno,OFFV.back(),0);}
#line 4993 "parser.tab.c"
    break;

  case 383:
#line 1221 "parser.y"
    {(yyval.STT).num = CN("FieldAccess"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 4999 "parser.tab.c"
    break;

  case 384:
#line 1222 "parser.y"
                            { ADD((yyvsp[0].ST).sym,yylineno,OFFV.back(),0);}
#line 5005 "parser.tab.c"
    break;

  case 385:
#line 1223 "parser.y"
    {(yyval.STT).num = CN("FieldAccess"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 5011 "parser.tab.c"
    break;

  case 386:
#line 1224 "parser.y"
                                         { ADD((yyvsp[0].ST).sym,yylineno,OFFV.back(),0);}
#line 5017 "parser.tab.c"
    break;

  case 387:
#line 1225 "parser.y"
    {(yyval.STT).num = CN("FieldAccess"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 5023 "parser.tab.c"
    break;

  case 388:
#line 1230 "parser.y"
    {(yyval.STT).num = CN("ArrayAccess"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5029 "parser.tab.c"
    break;

  case 389:
#line 1232 "parser.y"
    {(yyval.STT).num = CN("ArrayAccess"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].STT).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5035 "parser.tab.c"
    break;

  case 390:
#line 1236 "parser.y"
                            {close();}
#line 5041 "parser.tab.c"
    break;

  case 391:
#line 1237 "parser.y"
     {(yyval.STT).num = CN("MethodInvocation");(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num);}
#line 5047 "parser.tab.c"
    break;

  case 392:
#line 1239 "parser.y"
      {(yyval.STT).num = CN("MethodInvocation");(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5053 "parser.tab.c"
    break;

  case 393:
#line 1241 "parser.y"
      {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);(yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5059 "parser.tab.c"
    break;

  case 394:
#line 1243 "parser.y"
    {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);  (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5065 "parser.tab.c"
    break;

  case 395:
#line 1245 "parser.y"
     {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5071 "parser.tab.c"
    break;

  case 396:
#line 1247 "parser.y"
    {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-5].STT).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5077 "parser.tab.c"
    break;

  case 397:
#line 1249 "parser.y"
    {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5083 "parser.tab.c"
    break;

  case 398:
#line 1251 "parser.y"
    {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5089 "parser.tab.c"
    break;

  case 399:
#line 1253 "parser.y"
    {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);(yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);(yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-6].STT).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5095 "parser.tab.c"
    break;

  case 400:
#line 1255 "parser.y"
    {(yyval.STT).num = CN("MethodInvocation"); (yyvsp[-6].ST).num = CN((yyvsp[-6].ST).sym); (yyvsp[-5].ST).num = CN((yyvsp[-5].ST).sym); (yyvsp[-4].ST).num = CN((yyvsp[-4].ST).sym);(yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-7].STT).num); AC((yyval.STT).num,(yyvsp[-6].ST).num); AC((yyval.STT).num,(yyvsp[-5].ST).num); AC((yyval.STT).num,(yyvsp[-4].ST).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5101 "parser.tab.c"
    break;

  case 401:
#line 1263 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5107 "parser.tab.c"
    break;

  case 402:
#line 1265 "parser.y"
    {(yyval.STT).num = CN("ArgumentList"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5113 "parser.tab.c"
    break;

  case 403:
#line 1270 "parser.y"
    {lookta((yyvsp[-1].STT).sym,T.back().second+string((yyvsp[0].STT).dimcount),OFFV.back(),T.back().first,"array");  OFFV.pop_back();T.pop_back();        (yyval.STT).num = CN("ArrayCreationExpression"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);  AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5119 "parser.tab.c"
    break;

  case 404:
#line 1272 "parser.y"
    {  lookta((yyvsp[-2].STT).sym,T.back().second+string((yyvsp[-1].STT).dimcount)+string((yyvsp[0].STT).type),OFFV.back(),T.back().first,"array"); OFFV.pop_back();T.pop_back();        (yyval.STT).num = CN("ArrayCreationExpression"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);  AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5125 "parser.tab.c"
    break;

  case 405:
#line 1274 "parser.y"
    {(yyval.STT).num = CN("ArrayCreationExpression"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym);  AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5131 "parser.tab.c"
    break;

  case 406:
#line 1276 "parser.y"
    {(yyval.STT).num = CN("ArrayCreationExpression"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);  AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5137 "parser.tab.c"
    break;

  case 407:
#line 1278 "parser.y"
    {  lookta((yyvsp[-2].STT).sym,T.back().second +string((yyvsp[-1].STT).type),OFFV.back(),T.back().first,"array"); OFFV.pop_back();T.pop_back();       (yyval.STT).num = CN("ArrayCreationExpression"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);  AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5143 "parser.tab.c"
    break;

  case 408:
#line 1280 "parser.y"
    {(yyval.STT).num = CN("ArrayCreationExpression"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym);  AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5149 "parser.tab.c"
    break;

  case 409:
#line 1284 "parser.y"
                {(yyval.STT).type = (yyvsp[0].STT).type; (yyval.STT).line = yylineno; (yyval.STT).sym = TOCHAR("ARRAYCREATION"+to_string(counterarr)); ADD((yyval.STT).sym,yylineno,OFFV.back(),0,"ARRAYCREATION");counterarr++;            (yyvsp[0].STT).num = (yyval.STT).num;}
#line 5155 "parser.tab.c"
    break;

  case 410:
#line 1290 "parser.y"
    { (yyval.STT).dimcount = (yyvsp[0].STT).dimcount;          (yyvsp[0].STT).num = (yyval.STT).num;}
#line 5161 "parser.tab.c"
    break;

  case 411:
#line 1292 "parser.y"
     { (yyval.STT).dimcount = TOCHAR(string((yyvsp[-1].STT).dimcount)+string((yyvsp[0].STT).dimcount));                             (yyval.STT).num = CN("DimExprs"); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5167 "parser.tab.c"
    break;

  case 412:
#line 1297 "parser.y"
    {(yyval.STT).dimcount = TOCHAR("[]");                       (yyval.STT).num = CN("DimExpr"); (yyvsp[-2].ST).num = CN((yyvsp[-2].ST).sym); (yyvsp[0].ST).num = CN((yyvsp[0].ST).sym); AC((yyval.STT).num,(yyvsp[-2].ST).num); AC((yyval.STT).num,(yyvsp[-1].STT).num); AC((yyval.STT).num,(yyvsp[0].ST).num);}
#line 5173 "parser.tab.c"
    break;

  case 413:
#line 1302 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5179 "parser.tab.c"
    break;

  case 414:
#line 1307 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5185 "parser.tab.c"
    break;

  case 415:
#line 1309 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5191 "parser.tab.c"
    break;

  case 416:
#line 1314 "parser.y"
    {(yyval.STT).num = CN("Assignment"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5197 "parser.tab.c"
    break;

  case 417:
#line 1316 "parser.y"
    {(yyval.STT).num = CN("Assignment"); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5203 "parser.tab.c"
    break;

  case 418:
#line 1321 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5209 "parser.tab.c"
    break;

  case 419:
#line 1323 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5215 "parser.tab.c"
    break;

  case 420:
#line 1325 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5221 "parser.tab.c"
    break;

  case 421:
#line 1330 "parser.y"
    {(yyval.STT).num = CN("ConditionalExpression"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym);AC((yyval.STT).num,(yyvsp[-4].STT).num); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5227 "parser.tab.c"
    break;

  case 422:
#line 1332 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5233 "parser.tab.c"
    break;

  case 423:
#line 1337 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5239 "parser.tab.c"
    break;

  case 424:
#line 1339 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5245 "parser.tab.c"
    break;

  case 425:
#line 1344 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5251 "parser.tab.c"
    break;

  case 426:
#line 1346 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5257 "parser.tab.c"
    break;

  case 427:
#line 1351 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5263 "parser.tab.c"
    break;

  case 428:
#line 1353 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5269 "parser.tab.c"
    break;

  case 429:
#line 1358 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5275 "parser.tab.c"
    break;

  case 430:
#line 1360 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5281 "parser.tab.c"
    break;

  case 431:
#line 1365 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5287 "parser.tab.c"
    break;

  case 432:
#line 1367 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5293 "parser.tab.c"
    break;

  case 433:
#line 1372 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5299 "parser.tab.c"
    break;

  case 434:
#line 1374 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5305 "parser.tab.c"
    break;

  case 435:
#line 1376 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5311 "parser.tab.c"
    break;

  case 436:
#line 1381 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5317 "parser.tab.c"
    break;

  case 437:
#line 1383 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5323 "parser.tab.c"
    break;

  case 438:
#line 1385 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5329 "parser.tab.c"
    break;

  case 439:
#line 1387 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5335 "parser.tab.c"
    break;

  case 440:
#line 1389 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5341 "parser.tab.c"
    break;

  case 441:
#line 1395 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5347 "parser.tab.c"
    break;

  case 442:
#line 1397 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5353 "parser.tab.c"
    break;

  case 443:
#line 1399 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5359 "parser.tab.c"
    break;

  case 444:
#line 1401 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5365 "parser.tab.c"
    break;

  case 445:
#line 1406 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5371 "parser.tab.c"
    break;

  case 446:
#line 1408 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5377 "parser.tab.c"
    break;

  case 447:
#line 1410 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5383 "parser.tab.c"
    break;

  case 448:
#line 1416 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5389 "parser.tab.c"
    break;

  case 449:
#line 1418 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5395 "parser.tab.c"
    break;

  case 450:
#line 1420 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5401 "parser.tab.c"
    break;

  case 451:
#line 1422 "parser.y"
    {(yyval.STT).num = CN((yyvsp[-1].ST).sym);(yyvsp[-1].ST).num = (yyval.STT).num;AC((yyval.STT).num,(yyvsp[-2].STT).num);AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5407 "parser.tab.c"
    break;

  case 452:
#line 1427 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5413 "parser.tab.c"
    break;

  case 453:
#line 1429 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5419 "parser.tab.c"
    break;

  case 454:
#line 1431 "parser.y"
    {
        const char* s = "(unary)";;
        size_t new_len = strlen((yyvsp[-1].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[-1].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[-1].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[0].STT).num);
    }
#line 5432 "parser.tab.c"
    break;

  case 455:
#line 1440 "parser.y"
    {
        const char* s = "(unary)";;
        size_t new_len = strlen((yyvsp[-1].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[-1].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[-1].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[0].STT).num);
    }
#line 5445 "parser.tab.c"
    break;

  case 456:
#line 1449 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5451 "parser.tab.c"
    break;

  case 457:
#line 1454 "parser.y"
    {
        const char* s = "(pre)";;
        size_t new_len = strlen((yyvsp[-1].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[-1].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[-1].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[0].STT).num);
    }
#line 5464 "parser.tab.c"
    break;

  case 458:
#line 1466 "parser.y"
    {
        const char* s = "(pre)";;
        size_t new_len = strlen((yyvsp[-1].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[-1].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[-1].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[0].STT).num);
    }
#line 5477 "parser.tab.c"
    break;

  case 459:
#line 1478 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5483 "parser.tab.c"
    break;

  case 460:
#line 1480 "parser.y"
    {
        const char* s = "(unary)";;
        size_t new_len = strlen((yyvsp[-1].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[-1].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[-1].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[0].STT).num);
    }
#line 5496 "parser.tab.c"
    break;

  case 461:
#line 1489 "parser.y"
    {
        const char* s = "(unary)";;
        size_t new_len = strlen((yyvsp[-1].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[-1].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[-1].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[0].STT).num);
    }
#line 5509 "parser.tab.c"
    break;

  case 462:
#line 1498 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5515 "parser.tab.c"
    break;

  case 463:
#line 1503 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5521 "parser.tab.c"
    break;

  case 464:
#line 1505 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5527 "parser.tab.c"
    break;

  case 465:
#line 1507 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5533 "parser.tab.c"
    break;

  case 466:
#line 1509 "parser.y"
    {(yyvsp[0].STT).num = (yyval.STT).num;}
#line 5539 "parser.tab.c"
    break;

  case 467:
#line 1514 "parser.y"
    {
        const char* s = "(post)";;
        size_t new_len = strlen((yyvsp[0].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[0].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[0].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 5551 "parser.tab.c"
    break;

  case 468:
#line 1525 "parser.y"
    {
        const char* s = "(post)";
        size_t new_len = strlen((yyvsp[0].ST).sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, (yyvsp[0].ST).sym);
        strcat(new_ch, s);
        (yyval.STT).num = CN(new_ch); (yyvsp[0].ST).num = (yyval.STT).num; AC((yyval.STT).num,(yyvsp[-1].STT).num);}
#line 5563 "parser.tab.c"
    break;

  case 469:
#line 1536 "parser.y"
    {(yyval.STT).num = CN("CastExpression"); (yyvsp[-3].ST).num = CN((yyvsp[-3].ST).sym); (yyvsp[-1].ST).num = CN((yyvsp[-1].ST).sym); AC((yyval.STT).num,(yyvsp[-3].ST).num); AC((yyval.STT).num,(yyvsp[-2].STT).num); AC((yyval.STT).num,(yyvsp[-1].ST).num); AC((yyval.STT).num,(yyvsp[0].STT).num);}
#line 5569 "parser.tab.c"
    break;


#line 5573 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1541 "parser.y"



void yyerror(char const *s){
	printf("Error : %s\n", s);
}


char* TOCHAR(string s) {
    char* charPtr = new char[s.length() + 1];
    strcpy(charPtr, s.c_str());
    return charPtr;
}



int CN(string lbl , string b) {

    if(b == ""){

	label[curNode] = lbl;
	vector<int> v;
	children[curNode] = v;
	// cout << "Node Created - " << lbl << endl;
	return curNode++;
    }
    else {
        label[curNode] = lbl + " ("+b+")";
	vector<int> v;
	children[curNode] = v;
	// cout << "Node Created - " << lbl << endl;
	return curNode++;
    }
}

void AC(int parent, int child) {
	children[parent].push_back(child);
	// cout << "Added Child - " << label[parent] << "->" << label[child] << endl;
}

void build_graph(char* outfile) {
	freopen(outfile, "w", stdout);
	cout << "// dot -Tps out.dot -o out.ps\n\n"
		 << "graph \"Abstract Syntax Tree\"\n"
		 << "{\n"
    	 << "\tfontname=\"Helvetica,Arial,sans-serif\"\n"
    	 << "\tnode [fontsize=10, width=\".2\", height=\".2\", margin=0]\n"
		 << "\tedge [fontsize=6]\n"
    	 << "\tgraph[fontsize=8];\n\n"
    	 << "\tlabel=\"Abstract Syntax Tree\"\n\n";
	
	queue<int> nodes;
	nodes.push(startNode);
	while (!nodes.empty()) {
		int node = nodes.front();
		nodes.pop();
		cout << "\tn" << node << " ;\n";
		cout << "\tn" << node << " [label=\"" << label[node] << "\"] ;\n";
		for (int child: children[node]) {
			cout << "\tn" << node << " -- " << 'n' << child << " ;\n";
			nodes.push(child);
		}
		cout << endl;
	}

	cout << "}" << endl;
}

int main(int argc, char *argv[]) {

    initialize();
    extern FILE *yyin;
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);
    cleantable();
    printme();


	build_graph(argv[2]);

    return 0;
}
