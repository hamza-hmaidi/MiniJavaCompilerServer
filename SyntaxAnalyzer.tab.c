/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "SyntaxAnalyzer.y" /* yacc.c:339  */

	
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "symtab.h"
	
    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);	
    int yylex(void);

    extern int line;

    int class_id = 0;
    int level = 0;
    bool isParam = false;   
    int method_call_index = -1;
    int expression_level = 0;

    //other

    #define YYERROR_VERBOSE 1
    


#line 94 "SyntaxAnalyzer.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "SyntaxAnalyzer.tab.h".  */
#ifndef YY_YY_SYNTAXANALYZER_TAB_H_INCLUDED
# define YY_YY_SYNTAXANALYZER_TAB_H_INCLUDED
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
    _PUBLIC = 258,
    _STATIC = 259,
    _CLASS = 260,
    _VOID = 261,
    _MAIN = 262,
    _EXTENDS = 263,
    _RETURN = 264,
    _SOP = 265,
    _LENGTH = 266,
    _THIS = 267,
    _NEW = 268,
    _IF = 269,
    _ELSE = 270,
    _WHILE = 271,
    _INTEGER = 272,
    _STRING = 273,
    _DATATYPE = 274,
    _OPENPARENT = 275,
    _CLOSEPARENT = 276,
    _OPENSQRBRACK = 277,
    _CLOSESQRBRACK = 278,
    _OPENBRAC = 279,
    _CLOSEBRAC = 280,
    _AND = 281,
    _OR = 282,
    _DOT = 283,
    _SEMICOLON = 284,
    _COMMA = 285,
    _DOUBLEQUOTE = 286,
    _SINGLEQUOTE = 287,
    _PLUS = 288,
    _MINUS = 289,
    _MULTIPLY = 290,
    _NOT = 291,
    _EQUAL = 292,
    _DIV = 293,
    _COMPOP = 294,
    _BOOLVALUE = 295,
    _INTEGERVALUE = 296,
    _IDENT = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXANALYZER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "SyntaxAnalyzer.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   1385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  419

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    79,    84,    85,    86,    87,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     104,   109,   110,   111,   114,   119,   120,   123,   124,   125,
     126,   127,   130,   138,   145,   152,   153,   154,   155,   158,
     163,   168,   173,   174,   175,   176,   179,   180,   181,   184,
     185,   186,   189,   190,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   225,   226,   227,   228,   233,   234,   235,   236,   237,
     238,   241,   242,   243,   246,   247,   250,   251,   252,   253,
     256,   262,   268,   272,   273,   277,   276,   290,   289,   304,
     305,   313,   314,   315,   322,   323,   324,   325,   326,   327,
     332,   338,   343,   351,   352,   353,   354,   355,   356,   357,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PUBLIC", "_STATIC", "_CLASS", "_VOID",
  "_MAIN", "_EXTENDS", "_RETURN", "_SOP", "_LENGTH", "_THIS", "_NEW",
  "_IF", "_ELSE", "_WHILE", "_INTEGER", "_STRING", "_DATATYPE",
  "_OPENPARENT", "_CLOSEPARENT", "_OPENSQRBRACK", "_CLOSESQRBRACK",
  "_OPENBRAC", "_CLOSEBRAC", "_AND", "_OR", "_DOT", "_SEMICOLON", "_COMMA",
  "_DOUBLEQUOTE", "_SINGLEQUOTE", "_PLUS", "_MINUS", "_MULTIPLY", "_NOT",
  "_EQUAL", "_DIV", "_COMPOP", "_BOOLVALUE", "_INTEGERVALUE", "_IDENT",
  "$accept", "program", "MainMethodParam", "MainClass", "SectionE_I",
  "ClassScope", "ClassDeclaration", "Type", "MethodType", "VarDeclaration",
  "SectionC_T", "SectionT_SCT", "MethodDeclaration", "Statement",
  "SectionC_E", "LogicOperator", "MathOperator", "SectionE_SCE",
  "UseFunction", "Expression", "$@1", "$@2", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -140

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     105,   -23,    25,   192,   454,    74,  -133,  -133,  -133,  -133,
      22,   224,  -133,   199,   226,   180,    32,   207,   364,   236,
     270,    20,  -133,  -133,  -133,    15,    15,    15,   303,   307,
     312,    16,   282,    67,   122,   126,    93,   311,   311,   311,
     324,   342,   344,   372,   213,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,    62,    62,   286,   291,   362,   395,   170,   459,
     462,   463,   466,   474,   227,  -133,  -133,   355,   214,   233,
     275,   475,   277,   482,   454,   454,   454,   454,   101,   101,
     101,   101,   101,   101,   101,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,   202,   202,   202,  -133,  -133,  -133,  -133,   440,
     137,   464,   484,   488,   491,   500,   502,    10,   125,   506,
     509,    91,   493,   511,    13,   515,   516,   517,   521,   522,
     524,   526,   365,   310,   310,  -133,   528,   532,   533,   377,
     519,   520,   536,   290,   159,   159,   159,   159,   159,   159,
     159,   159,   633,   125,   125,   306,   306,   306,   306,   306,
    -133,  -133,  -133,  -133,  -133,    83,   360,   393,   401,   159,
      99,   534,   538,   539,   558,   559,   560,   567,   571,   604,
     296,  -133,  -133,   654,   654,   654,   654,   654,   176,   176,
     176,   576,   176,   176,   176,   176,   176,   176,   325,   176,
     176,   176,   577,   578,   579,   581,   583,   585,   587,   588,
     594,   597,   333,   573,   614,   616,   618,    19,   260,  -133,
     169,   176,   589,   176,  -133,  -133,  -133,   885,   907,   921,
     565,   936,   951,   966,   981,   996,  1011,   565,   565,   843,
    1025,  1039,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   176,   176,   176,   176,   176,   176,
     613,   617,   672,   284,   257,   413,  1054,  -133,   691,   620,
     184,   176,    24,   429,   465,    85,   599,  -133,  -133,   609,
     531,   100,   666,   477,   666,   565,   138,   565,  -133,  -133,
     602,  -133,   557,    36,   495,  -133,  1068,  1082,  1097,  1111,
    1126,  1140,   176,   621,  -133,   623,   176,   176,   176,   624,
     136,   334,  -133,  -133,   449,   714,  -133,   635,  1162,   452,
    -133,  -133,    49,    49,  -133,  -133,  -133,  -133,   176,  -133,
    -133,   176,   176,  -133,  -133,  -133,  -133,   636,   229,   779,
     637,    14,  -133,  -133,  -133,   176,   176,   176,   176,   628,
     634,   640,   641,   644,   575,   352,  1180,  -133,  -133,  1198,
    1216,  1234,  -133,  -133,  -133,  -133,   565,   370,  -133,   627,
     866,   155,   733,   756,  1252,   565,   176,   802,   565,   565,
     565,  1270,  1288,  1306,  1324,   311,   311,   311,   311,   311,
     311,   311,   311,  -133,  -133,  -133,   406,  -133,  -133,  -133,
     620,   176,  -133,  -133,  -133,  -133,  -133,  1346,  -133,  -133,
    -133,  -133,  -133,  -133,   513,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   825,   866,   442,  -133,  -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    25,    26,    24,     1,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    38,    34,    37,    32,
      36,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    45,    41,    44,    39,
      43,    40,     0,     0,     0,    28,    29,    30,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,   121,   119,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     8,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    63,
       0,    82,     0,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,   136,   114,   122,     0,    76,    72,     0,   115,
     113,   102,     0,     0,    96,    97,    98,    99,     0,    94,
      95,     0,     0,    77,    78,    79,    75,     0,     0,     0,
       0,     0,    73,    74,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,     0,
       0,     0,   132,   133,   129,   111,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,   127,     0,   124,    67,   117,
       0,     0,   100,   118,   116,    85,    68,     0,    69,    70,
      66,    86,    87,    88,     0,    84,    55,    56,    57,    58,
      59,    60,    61,    54,     0,     0,     0,    92,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,   605,  -133,   660,   674,   348,   292,   622,   -14,
     294,   367,   -38,  -132,    59,  -133,  -133,   359,  -133,  -131,
    -133,  -133
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,   101,     4,    17,    11,    12,    36,    71,    37,
     125,   109,    56,   181,   392,   321,   318,   359,   263,   305,
     264,   265
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    58,   161,   162,   163,   164,   165,   166,   167,   168,
     170,   121,    38,    39,   132,   369,    32,    43,   -48,     6,
     248,    30,    44,    15,    31,   309,     7,   188,   249,   370,
      16,   122,    33,    23,    34,   310,   133,   337,    65,    66,
     -48,   203,   204,   205,   206,   207,   -23,   217,   218,   219,
     208,   221,   222,   223,   224,   225,   226,    35,   229,   230,
     231,   209,   210,    32,     6,   -48,   311,     8,    46,   211,
    -101,   -48,   -48,   338,    24,    13,   -48,   252,   -48,    33,
     256,    34,   258,   212,   155,   213,   -48,   -48,   268,   214,
     215,   216,   128,   156,    52,   278,   279,   157,    14,   158,
     189,   325,    99,   178,    35,   179,     1,   159,   -90,    47,
       2,   319,   129,   286,   287,   288,   289,   290,   291,   100,
     180,   190,    53,    48,   320,   160,   123,    50,   307,   326,
     308,   173,   174,   175,   176,   177,   191,   353,   113,   328,
     327,   330,   331,   332,   333,   334,   -51,   -90,   156,   303,
     209,   210,   157,   -90,   158,   124,   393,   354,   211,   114,
     155,   346,   159,   -90,    49,   349,   350,   351,    51,   156,
     253,    76,   212,   157,   213,   158,   394,   208,   214,   215,
     329,   360,   360,   159,   -90,   155,   254,   362,   209,   210,
     363,   364,     9,   -90,   156,    77,   211,   252,   157,   -90,
     158,   160,    19,    32,   371,   372,   373,   374,   159,   -90,
     212,   255,   213,   306,    63,    86,   214,   215,   216,    33,
      64,    34,    22,   -53,   388,    15,   160,    20,    83,    21,
     328,    25,    16,   396,    88,   397,   398,   399,   400,   156,
      28,   209,   210,   157,    35,   158,   250,    84,   -23,   366,
    -139,   179,  -139,   159,   -90,  -139,    87,  -139,   297,   414,
     415,   208,  -139,   212,  -139,   213,   180,  -139,  -139,   214,
     215,   367,   209,   210,    29,    89,    90,   250,    93,   298,
     211,  -139,  -139,  -139,   307,  -139,  -139,    67,  -139,  -139,
    -139,   153,    72,  -139,   212,  -139,   213,   201,  -139,  -139,
     214,   215,   251,    68,   295,    69,   296,    32,    68,    40,
      69,    32,    54,    41,    55,   -48,   -48,    91,    42,    85,
     -48,   202,   -48,    33,    45,    34,   227,    33,    70,    34,
     -48,    59,   154,    70,   242,   208,   -62,   406,   407,   408,
     409,   410,   411,   412,   413,   303,   209,   210,    35,    60,
     228,    61,    35,   381,   211,  -138,  -138,  -138,   243,  -138,
    -138,   182,  -138,  -138,  -138,    26,   141,  -138,   212,  -138,
     213,   208,  -138,  -138,   214,   215,   304,   382,   148,    62,
     183,   303,   209,   210,   108,   108,   108,    74,    27,   142,
     211,  -112,  -112,  -112,   184,  -112,  -112,    85,  -112,  -112,
    -112,   149,   186,  -112,   212,  -112,   213,   208,  -112,  -112,
     214,   215,   304,   185,   299,   143,   144,   303,   209,   210,
      75,   187,    95,    96,    97,    98,   211,  -128,  -128,  -128,
     312,  -128,  -128,   300,  -128,  -128,  -128,   171,   172,  -128,
     212,  -128,   213,   155,  -128,  -128,   214,   215,   304,   313,
    -103,   -90,   156,  -104,   -31,    10,   157,   -90,   158,     2,
     110,   111,   112,  -136,  -136,  -136,   159,   -90,  -136,  -103,
    -136,   306,  -104,   417,   418,  -136,  -136,  -136,   328,    78,
    -136,  -136,    79,    80,   160,   115,    81,   156,   303,   209,
     210,   157,   -90,   158,    82,    92,   208,   211,   314,   315,
     316,   159,    94,   317,   -83,   116,   303,   209,   210,   117,
     -83,   212,   118,   213,   208,   211,   130,   214,   215,   329,
     -83,   119,   -89,   120,   303,   209,   210,   126,   -89,   212,
     127,   213,   208,   211,   131,   214,   215,   304,   -89,   134,
     135,   136,   303,   209,   210,   137,   138,   212,   139,   213,
     140,   211,   145,   214,   215,   304,   146,   147,   208,   192,
     324,   150,   151,   193,   194,   212,   155,   213,   303,   209,
     210,   214,   215,   304,   -90,   156,   208,   211,   152,   157,
     -90,   158,   244,   195,   196,   197,   303,   209,   210,   159,
     -90,   212,   198,   213,   336,   211,   199,   214,   215,   304,
     380,   220,   232,   233,   234,   155,   235,   160,   236,   212,
     237,   213,   238,   239,   156,   214,   215,   304,   157,   240,
     158,   208,   241,   245,   178,   246,   179,   247,   159,   200,
     257,   303,   209,   210,   169,   292,   322,   293,   323,   335,
     211,   180,   347,   156,   348,   352,   160,   157,   389,   158,
     356,   365,   368,   375,   212,   155,   213,   159,   -90,   376,
     214,   215,   304,   -90,   156,   377,   378,   155,   157,   379,
     158,    18,   361,   259,     5,   160,   156,    73,   159,     0,
     157,   -90,   158,     0,   102,   103,   104,   105,   106,   107,
     159,     0,   259,   294,   261,  -135,   160,  -135,  -107,     0,
     262,  -135,  -135,     0,     0,  -105,  -105,  -105,   160,     0,
    -105,  -107,  -134,   261,  -134,   259,  -134,  -107,     0,   262,
    -134,  -134,     0,     0,  -105,  -105,  -105,     0,     0,  -105,
    -107,     0,     0,     0,   259,  -109,   261,   355,     0,  -109,
    -107,     0,   262,  -109,  -109,     0,     0,  -105,  -105,  -105,
       0,     0,  -105,  -107,  -106,   261,  -106,   259,  -106,  -106,
       0,   262,  -106,  -106,     0,     0,  -105,  -105,  -105,     0,
       0,  -105,  -106,     0,     0,     0,     0,  -108,   261,  -108,
     189,  -108,  -107,     0,   262,  -108,  -108,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107,     0,     0,     0,  -103,
    -122,   190,  -122,   189,     0,  -122,     0,  -122,     0,     0,
       0,     0,  -122,  -122,  -122,     0,   191,  -122,  -122,     0,
       0,     0,   293,  -122,   190,  -122,   390,     0,  -122,     0,
    -122,     0,     0,     0,     0,  -122,  -122,  -122,     0,   191,
    -122,  -122,     0,     0,   259,     0,   -93,   261,   355,     0,
       0,  -107,     0,   262,     0,   391,     0,     0,  -105,  -105,
    -105,     0,     0,  -105,  -107,   261,   280,   390,     0,  -107,
       0,   262,   281,     0,     0,     0,  -105,  -105,  -105,     0,
       0,  -105,  -107,     0,     0,     0,   259,   -93,   261,     0,
       0,     0,  -107,     0,   262,     0,   391,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107,   260,   261,   259,     0,
       0,  -107,     0,   262,     0,     0,     0,     0,  -105,  -105,
    -105,     0,   259,  -105,  -107,     0,     0,     0,     0,   261,
     266,     0,     0,  -107,     0,   262,     0,   259,     0,     0,
    -105,  -105,  -105,   261,     0,  -105,  -107,  -107,     0,   262,
     267,     0,   270,     0,  -105,  -105,  -105,   269,   261,  -105,
    -107,     0,  -107,     0,   262,     0,     0,   259,     0,  -105,
    -105,  -105,   271,   261,  -105,  -107,     0,  -107,     0,   262,
       0,     0,   273,     0,  -105,  -105,  -105,   272,   261,  -105,
    -107,     0,  -107,     0,   262,     0,     0,   259,     0,  -105,
    -105,  -105,   274,   261,  -105,  -107,     0,  -107,     0,   262,
       0,     0,   276,     0,  -105,  -105,  -105,   275,   261,  -105,
    -107,     0,  -107,     0,   262,     0,   282,     0,     0,  -105,
    -105,  -105,   277,   261,  -105,  -107,     0,  -107,     0,   262,
     284,     0,     0,     0,  -105,  -105,  -105,   261,   283,  -105,
    -107,  -107,     0,   262,     0,   301,     0,     0,  -105,  -105,
    -105,   261,     0,  -105,  -107,  -107,     0,   262,   285,   259,
       0,     0,  -105,  -105,  -105,   302,   261,  -105,  -107,     0,
    -107,     0,   262,   259,     0,     0,     0,  -105,  -105,  -105,
     261,     0,  -105,  -107,  -107,     0,   262,   339,   259,     0,
       0,  -105,  -105,  -105,   261,     0,  -105,  -107,  -107,     0,
     262,   340,   259,     0,     0,  -105,  -105,  -105,     0,   261,
    -105,  -107,     0,  -107,     0,   262,   341,   259,     0,     0,
    -105,  -105,  -105,   261,     0,  -105,  -107,  -107,     0,   262,
     342,   344,     0,     0,  -105,  -105,  -105,     0,   261,  -105,
    -107,     0,  -107,     0,   262,   343,     0,     0,     0,  -105,
    -105,  -105,   261,   357,  -105,  -107,  -107,     0,   262,   345,
       0,     0,     0,  -105,  -105,  -105,     0,     0,  -105,  -107,
       0,   259,     0,     0,   261,   358,     0,     0,  -107,     0,
     262,     0,     0,     0,     0,  -105,  -105,  -105,     0,   259,
    -105,  -107,   261,     0,     0,   383,  -107,     0,   262,     0,
       0,     0,     0,  -105,  -105,  -105,     0,   259,  -105,  -107,
     261,     0,     0,   384,  -107,     0,   262,     0,     0,     0,
       0,  -105,  -105,  -105,     0,   386,  -105,  -107,   261,     0,
       0,   385,  -107,     0,   262,     0,     0,     0,     0,  -105,
    -105,  -105,     0,   259,  -105,  -107,   261,     0,     0,   387,
    -107,     0,   262,     0,     0,     0,     0,  -105,  -105,  -105,
       0,   259,  -105,  -107,   261,     0,     0,     0,  -107,     0,
     262,   395,     0,     0,     0,  -105,  -105,  -105,     0,   259,
    -105,  -107,   261,     0,     0,     0,  -107,     0,   262,   401,
       0,     0,     0,  -105,  -105,  -105,     0,   259,  -105,  -107,
     261,     0,     0,     0,  -107,     0,   262,   402,     0,     0,
       0,  -105,  -105,  -105,     0,   404,  -105,  -107,   261,     0,
       0,     0,  -107,     0,   262,   403,     0,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107,   261,   301,     0,     0,
    -107,     0,   262,   405,     0,     0,     0,  -105,  -105,  -105,
       0,     0,  -105,  -107,     0,     0,     0,   416,   261,     0,
       0,     0,  -107,     0,   262,     0,     0,     0,     0,  -105,
    -105,  -105,     0,     0,  -105,  -107
};

static const yytype_int16 yycheck[] =
{
      38,    39,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     1,    26,    27,     1,     1,     1,     1,     3,    42,
       1,     1,     6,     1,     4,     1,     1,   159,     9,    15,
       8,    21,    17,     1,    19,    11,    23,     1,    52,    53,
      25,   173,   174,   175,   176,   177,    24,   178,   179,   180,
       1,   182,   183,   184,   185,   186,   187,    42,   189,   190,
     191,    12,    13,     1,    42,     3,    42,    42,     1,    20,
      21,     9,    10,    37,    42,     1,    14,   208,    16,    17,
     211,    19,   213,    34,     1,    36,    24,    25,   220,    40,
      41,    42,     1,    10,     1,   227,   228,    14,    24,    16,
       1,     1,     1,    20,    42,    22,     1,    24,    25,    42,
       5,    26,    21,   244,   245,   246,   247,   248,   249,    18,
      37,    22,    29,     1,    39,    42,     1,     1,   260,    29,
     261,   145,   146,   147,   148,   149,    37,     1,     1,     1,
     272,   273,   274,   275,   276,   277,    21,     9,    10,    11,
      12,    13,    14,    15,    16,    30,     1,    21,    20,    22,
       1,   292,    24,    25,    42,   296,   297,   298,    42,    10,
       1,     1,    34,    14,    36,    16,    21,     1,    40,    41,
      42,   312,   313,    24,    25,     1,    17,   318,    12,    13,
     321,   322,     0,     9,    10,    25,    20,   328,    14,    15,
      16,    42,     3,     1,   335,   336,   337,   338,    24,    25,
      34,    42,    36,    29,     1,     1,    40,    41,    42,    17,
       7,    19,    42,    21,   356,     1,    42,     1,     1,     3,
       1,    24,     8,   365,     1,   366,   368,   369,   370,    10,
       4,    12,    13,    14,    42,    16,    17,    20,    24,    20,
      21,    22,    23,    24,    25,    26,    42,    28,     1,   390,
     391,     1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    13,     4,    42,     1,    17,     1,    22,
      20,    21,    22,    23,   416,    25,    26,     1,    28,    29,
      30,     1,     1,    33,    34,    35,    36,     1,    38,    39,
      40,    41,    42,    17,    20,    19,    22,     1,    17,     6,
      19,     1,     1,     6,     3,     9,    10,    42,     6,    42,
      14,    25,    16,    17,    42,    19,     1,    17,    42,    19,
      24,     7,    42,    42,     1,     1,    25,   375,   376,   377,
     378,   379,   380,   381,   382,    11,    12,    13,    42,     7,
      25,     7,    42,     1,    20,    21,    22,    23,    25,    25,
      26,     1,    28,    29,    30,     1,     1,    33,    34,    35,
      36,     1,    38,    39,    40,    41,    42,    25,     1,     7,
      20,    11,    12,    13,    92,    93,    94,    25,    24,    24,
      20,    21,    22,    23,     1,    25,    26,    42,    28,    29,
      30,    24,     1,    33,    34,    35,    36,     1,    38,    39,
      40,    41,    42,    20,     1,   123,   124,    11,    12,    13,
      25,    20,    74,    75,    76,    77,    20,    21,    22,    23,
       1,    25,    26,    20,    28,    29,    30,   143,   144,    33,
      34,    35,    36,     1,    38,    39,    40,    41,    42,    20,
       1,     9,    10,     1,     0,     1,    14,    15,    16,     5,
      93,    94,    22,    21,    22,    23,    24,    25,    26,    20,
      28,    29,    20,   414,   415,    33,    34,    35,     1,    20,
      38,    39,    20,    20,    42,    21,    20,    10,    11,    12,
      13,    14,    15,    16,    20,    20,     1,    20,    33,    34,
      35,    24,    20,    38,     9,    21,    11,    12,    13,    21,
      15,    34,    21,    36,     1,    20,    23,    40,    41,    42,
      25,    21,     9,    21,    11,    12,    13,    21,    15,    34,
      21,    36,     1,    20,    23,    40,    41,    42,    25,    24,
      24,    24,    11,    12,    13,    24,    24,    34,    24,    36,
      24,    20,    24,    40,    41,    42,    24,    24,     1,    25,
      29,    42,    42,    25,    25,    34,     1,    36,    11,    12,
      13,    40,    41,    42,     9,    10,     1,    20,    42,    14,
      15,    16,     9,    25,    25,    25,    11,    12,    13,    24,
      25,    34,    25,    36,    37,    20,    25,    40,    41,    42,
      25,    25,    25,    25,    25,     1,    25,    42,    25,    34,
      25,    36,    25,    25,    10,    40,    41,    42,    14,    25,
      16,     1,    25,     9,    20,     9,    22,     9,    24,    25,
      41,    11,    12,    13,     1,    22,    37,    20,    29,    37,
      20,    37,    21,    10,    21,    21,    42,    14,    21,    16,
      15,    15,    15,    25,    34,     1,    36,    24,    25,    25,
      40,    41,    42,     9,    10,    25,    25,     1,    14,    25,
      16,    11,   313,     1,     0,    42,    10,    55,    24,    -1,
      14,    15,    16,    -1,    79,    80,    81,    82,    83,    84,
      24,    -1,     1,    21,    22,    23,    42,    25,    26,    -1,
      28,    29,    30,    -1,    -1,    33,    34,    35,    42,    -1,
      38,    39,    21,    22,    23,     1,    25,    26,    -1,    28,
      29,    30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,     1,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    30,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    39,    21,    22,    23,     1,    25,    26,
      -1,    28,    29,    30,    -1,    -1,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    21,    22,    23,
       1,    25,    26,    -1,    28,    29,    30,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,    20,
      21,    22,    23,     1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    -1,
      -1,    -1,    20,    21,    22,    23,     1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,    -1,    -1,     1,    -1,    21,    22,    23,    -1,
      -1,    26,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
      35,    -1,    -1,    38,    39,    22,    23,     1,    -1,    26,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    -1,    -1,     1,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    21,    22,     1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,     1,    38,    39,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    28,    -1,     1,    -1,    -1,
      33,    34,    35,    22,    -1,    38,    39,    26,    -1,    28,
      29,    -1,     1,    -1,    33,    34,    35,    21,    22,    38,
      39,    -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,
      34,    35,    21,    22,    38,    39,    -1,    26,    -1,    28,
      -1,    -1,     1,    -1,    33,    34,    35,    21,    22,    38,
      39,    -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,
      34,    35,    21,    22,    38,    39,    -1,    26,    -1,    28,
      -1,    -1,     1,    -1,    33,    34,    35,    21,    22,    38,
      39,    -1,    26,    -1,    28,    -1,     1,    -1,    -1,    33,
      34,    35,    21,    22,    38,    39,    -1,    26,    -1,    28,
       1,    -1,    -1,    -1,    33,    34,    35,    22,    23,    38,
      39,    26,    -1,    28,    -1,     1,    -1,    -1,    33,    34,
      35,    22,    -1,    38,    39,    26,    -1,    28,    29,     1,
      -1,    -1,    33,    34,    35,    21,    22,    38,    39,    -1,
      26,    -1,    28,     1,    -1,    -1,    -1,    33,    34,    35,
      22,    -1,    38,    39,    26,    -1,    28,    29,     1,    -1,
      -1,    33,    34,    35,    22,    -1,    38,    39,    26,    -1,
      28,    29,     1,    -1,    -1,    33,    34,    35,    -1,    22,
      38,    39,    -1,    26,    -1,    28,    29,     1,    -1,    -1,
      33,    34,    35,    22,    -1,    38,    39,    26,    -1,    28,
      29,     1,    -1,    -1,    33,    34,    35,    -1,    22,    38,
      39,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    22,     1,    38,    39,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      -1,     1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,     1,
      38,    39,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,    39,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,     1,    38,    39,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,     1,    38,    39,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,     1,    38,    39,    22,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,     1,
      38,    39,    22,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,    39,
      22,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,     1,    38,    39,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    22,     1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    39,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    44,    46,    48,    42,     1,    42,     0,
       1,    48,    49,     1,    24,     1,     8,    47,    47,     3,
       1,     3,    42,     1,    42,    24,     1,    24,     4,     4,
       1,     4,     1,    17,    19,    42,    50,    52,    52,    52,
       6,     6,     6,     1,     6,    42,     1,    42,     1,    42,
       1,    42,     1,    29,     1,     3,    55,    55,    55,     7,
       7,     7,     7,     1,     7,    52,    52,     1,    17,    19,
      42,    51,     1,    51,    25,    25,     1,    25,    20,    20,
      20,    20,    20,     1,    20,    42,     1,    42,     1,    42,
       1,    42,    20,     1,    20,    49,    49,    49,    49,     1,
      18,    45,    45,    45,    45,    45,    45,    45,    50,    54,
      54,    54,    22,     1,    22,    21,    21,    21,    21,    21,
      21,     1,    21,     1,    30,    53,    21,    21,     1,    21,
      23,    23,     1,    23,    24,    24,    24,    24,    24,    24,
      24,     1,    24,    50,    50,    24,    24,    24,     1,    24,
      42,    42,    42,     1,    42,     1,    10,    14,    16,    24,
      42,    56,    56,    56,    56,    56,    56,    56,    56,     1,
      56,    53,    53,    52,    52,    52,    52,    52,    20,    22,
      37,    56,     1,    20,     1,    20,     1,    20,    56,     1,
      22,    37,    25,    25,    25,    25,    25,    25,    25,    25,
      25,     1,    25,    56,    56,    56,    56,    56,     1,    12,
      13,    20,    34,    36,    40,    41,    42,    62,    62,    62,
      25,    62,    62,    62,    62,    62,    62,     1,    25,    62,
      62,    62,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,     1,    25,     9,     9,     9,     9,     1,     9,
      17,    42,    62,     1,    17,    42,    62,    41,    62,     1,
      21,    22,    28,    61,    63,    64,    23,    29,    56,    21,
       1,    21,    21,     1,    21,    21,     1,    21,    56,    56,
      23,    29,     1,    23,     1,    29,    62,    62,    62,    62,
      62,    62,    22,    20,    21,    20,    22,     1,    22,     1,
      20,     1,    21,    11,    42,    62,    29,    56,    62,     1,
      11,    42,     1,    20,    33,    34,    35,    38,    59,    26,
      39,    58,    37,    29,    29,     1,    29,    56,     1,    42,
      56,    56,    56,    56,    56,    37,    37,     1,    37,    29,
      29,    29,    29,    29,     1,    29,    62,    21,    21,    62,
      62,    62,    21,     1,    21,    23,    15,     1,    23,    60,
      62,    60,    62,    62,    62,    15,    20,    42,    15,     1,
      15,    62,    62,    62,    62,    25,    25,    25,    25,    25,
      25,     1,    25,    25,    25,    25,     1,    25,    56,    21,
       1,    30,    57,     1,    21,    29,    56,    62,    56,    56,
      56,    29,    29,    29,     1,    29,    55,    55,    55,    55,
      55,    55,    55,    55,    62,    62,    21,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    45,    45,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    47,    47,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    53,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    57,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    63,    62,    64,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     4,     4,     4,     4,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
       2,     2,     2,     0,     2,     2,     2,     7,     7,     7,
       7,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     0,     3,
       3,     0,     2,     0,    13,    13,    13,    13,    13,    13,
      13,    13,     0,     4,     4,     4,     7,     7,     7,     7,
       7,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     7,     7,     7,     7,     7,     7,
       0,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     2,     2,     0,     4,     0,     4,     3,
       4,     4,     4,     3,     3,     3,     5,     5,     5,     1,
       2,     1,     1,     1,     5,     5,     5,     5,     5,     4,
       4,     4,     4,     4,     2,     2,     3,     3,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 76 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { print_symtab();check_main(); printf("Analyze finished with success \n");}
#line 1713 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 80 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { 
                            insert_symbol("main","DECLARATION","METHOD","void",0,class_id);
                            set_param((yyvsp[0]),strcat((yyvsp[-3]),"[]"));   
                        }
#line 1722 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 84 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" String is needed  "); YYABORT;}
#line 1728 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 85 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 1734 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 86 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" CLose brackets is needed  "); YYABORT;}
#line 1740 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1746 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 1752 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Public is needed  "); YYABORT;}
#line 1758 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 93 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Static is needed  "); YYABORT;}
#line 1764 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 94 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Void is needed  "); YYABORT;}
#line 1770 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 95 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Main is needed  "); YYABORT;}
#line 1776 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open parentheses is needed  "); YYABORT;}
#line 1782 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 1788 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 1794 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Statement is needed  "); YYABORT;}
#line 1800 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close brackets is needed  "); YYABORT;}
#line 1806 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" close brackets is needed  "); YYABORT;}
#line 1812 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            insert_symbol((yyvsp[0]),"EXTENSION","CLASS","IDENT",0,class_id);
                            level = 0;
                        }
#line 1821 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 109 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Extends is needed  "); YYABORT;}
#line 1827 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 110 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1833 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 111 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {level = 0;}
#line 1839 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {   
                            class_id +=1; 
                            lookup_class((yyvsp[0]),class_id);
                        }
#line 1848 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 119 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Class is needed  "); YYABORT;}
#line 1854 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 120 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1860 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 1866 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close brackets is needed  "); YYABORT;}
#line 1872 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            if(isParam)
                                set_param((yyvsp[0]),(yyvsp[-1]));
                            else 
                                lookup_variable((yyvsp[0]),(yyvsp[-1]),level,class_id);
                                
                        }
#line 1884 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 139 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            if(isParam)
                                set_param((yyvsp[0]),(yyvsp[-1]));
                            else 
                                lookup_variable((yyvsp[0]),(yyvsp[-1]),level,class_id);
                        }
#line 1895 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 146 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            if(isParam)
                                set_param((yyvsp[0]),(yyvsp[-1]));
                            else 
                                lookup_variable((yyvsp[0]),(yyvsp[-1]),level,class_id);
                        }
#line 1906 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 152 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Valid Type is needed  "); YYABORT;}
#line 1912 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 153 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1918 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 154 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1924 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 155 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1930 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 159 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            lookup_method((yyvsp[0]),(yyvsp[-1]),class_id);
                            isParam = true;
                        }
#line 1939 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 164 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            lookup_method((yyvsp[0]),(yyvsp[-1]),class_id);
                            isParam = true;
                        }
#line 1948 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 169 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            lookup_method((yyvsp[0]),(yyvsp[-1]),class_id);
                            isParam = true;
                        }
#line 1957 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 173 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Valid Type is needed  "); YYABORT;}
#line 1963 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 174 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1969 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 175 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1975 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 176 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 1981 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 180 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Semi colon is needed  "); YYABORT;}
#line 1987 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Comma is needed  "); YYABORT;}
#line 1993 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 189 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { isParam = false; level = 1;}
#line 1999 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 190 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { isParam = false; level = 1;}
#line 2005 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 194 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Public is needed  "); YYABORT;}
#line 2011 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 195 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open parentheses is needed  "); YYABORT;}
#line 2017 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 196 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 2023 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 197 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 2029 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 198 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Return is needed  "); YYABORT;}
#line 2035 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 199 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Semi colon is needed  "); YYABORT;}
#line 2041 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 200 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close brackets is needed  "); YYABORT;}
#line 2047 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 205 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 2053 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 206 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close brackets is needed  "); YYABORT;}
#line 2059 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 208 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" If brackets is needed  "); YYABORT;}
#line 2065 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 209 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open parentheses brackets is needed  "); YYABORT;}
#line 2071 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 210 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 2077 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 211 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Else is needed  "); YYABORT;}
#line 2083 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 213 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" While is needed  "); YYABORT;}
#line 2089 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 214 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open parentheses is needed  "); YYABORT;}
#line 2095 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 215 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 2101 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 217 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" System.out.println is needed  "); YYABORT;}
#line 2107 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 218 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open parentheses is needed  "); YYABORT;}
#line 2113 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 219 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 2119 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 220 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Semi colon is needed  "); YYABORT;}
#line 2125 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 222 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            lookup_declarations((yyvsp[-3]),"ASSIGNMENT","VARIABLE",level,class_id);
                        }
#line 2133 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 225 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 2139 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 226 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Equal operator is needed  "); YYABORT;}
#line 2145 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 227 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Semi colon is needed  "); YYABORT;}
#line 2151 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 229 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            lookup_declarations((yyvsp[-6]),"ASSIGNMENT","VARIABLE",level,class_id);
                            
                        }
#line 2160 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 233 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 2166 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 234 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 2172 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 235 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close brackets is needed  "); YYABORT;}
#line 2178 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 236 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Equal operator is needed  "); YYABORT;}
#line 2184 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 237 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Semi colon is needed  "); YYABORT;}
#line 2190 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 242 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Comma is needed  "); YYABORT;}
#line 2196 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 257 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            method_call_index = -1;
                            expression_level=0;
                        }
#line 2205 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 262 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            method_call_index = -1;
                            expression_level=0;
                        }
#line 2214 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 269 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { 
                            method_call_index = insert_symbol((yyvsp[0]),"USE","METHOD","DOT_IDENT",0,class_id);
                        }
#line 2222 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 272 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Dot is needed  "); YYABORT;}
#line 2228 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 273 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 2234 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 277 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        }
#line 2244 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 283 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_call_param(method_call_index,"EXP","int");
                            }                              
                        }
#line 2255 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 290 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        }
#line 2265 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 296 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                          
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_call_param(method_call_index,"EXP","bool");
                            }
                                
                        }
#line 2278 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 304 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Comparison operator is needed  "); YYABORT;}
#line 2284 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 306 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            
                            if(method_call_index != -1) {
                                insert_call_param(method_call_index,"EXP","int[]");
                            }
      
                        }
#line 2296 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 313 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 2302 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 314 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close brackets is needed  "); YYABORT;}
#line 2308 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 316 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            if(method_call_index != -1) {
                                insert_call_param(method_call_index,"EXP","int");
                            }
                
                        }
#line 2319 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 322 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Dot is needed  "); YYABORT;}
#line 2325 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 323 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Length is needed  "); YYABORT;}
#line 2331 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 325 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open parentheses is needed  "); YYABORT;}
#line 2337 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 326 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 2343 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 328 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_call_param(method_call_index,(yyvsp[0]),"int");
                        }
#line 2352 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 333 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_call_param(method_call_index,strcat("-",(yyvsp[0])),"int");
                        }
#line 2362 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 339 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_call_param(method_call_index,(yyvsp[0]),"bool");
                        }
#line 2371 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 344 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_call_param(method_call_index,(yyvsp[0]),"IDENT");

                            lookup_declarations((yyvsp[0]),"USE","VARIABLE",level,class_id);
                        }
#line 2383 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 353 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" New is needed  "); YYABORT;}
#line 2389 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 354 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Integer type is needed  "); YYABORT;}
#line 2395 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 355 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open brackets is needed  "); YYABORT;}
#line 2401 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 356 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close brackets is needed  "); YYABORT;}
#line 2407 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 358 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    {
                            insert_symbol((yyvsp[-2]),"INSTANTIATION","VARIABLE","NEW_IDENT",0,class_id);                          
                        }
#line 2415 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 361 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" New is needed  "); YYABORT;}
#line 2421 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 362 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Identifier is needed  "); YYABORT;}
#line 2427 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 363 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Open parentheses is needed  "); YYABORT;}
#line 2433 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 364 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 2439 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 366 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Not operator is needed  "); YYABORT;}
#line 2445 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 368 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" open parentheses is needed  "); YYABORT;}
#line 2451 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 369 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Close parentheses is needed  "); YYABORT;}
#line 2457 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 370 "SyntaxAnalyzer.y" /* yacc.c:1646  */
    { yyerror (" Integer Value or boolean value or identifier or this   is needed  "); YYABORT;}
#line 2463 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
    break;


#line 2467 "SyntaxAnalyzer.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 373 "SyntaxAnalyzer.y" /* yacc.c:1906  */
 

    int yyerror(char const *msg) {
        
        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        if (yyparse() == 0){
            printf("Texte correct\n");
        }
            
    }
