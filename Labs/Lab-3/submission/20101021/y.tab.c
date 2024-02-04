/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "20101021.y"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "symbol_info.h"
#include "TreeNode.h"
#define YYSTYPE symbol_info*
int count=1;
std::string str="";

extern int yyparse(void);
extern int yylex(void);

extern FILE *yyin;

extern YYSTYPE yylval;

std::ofstream outlog;

int lines = 1;

TreeNode* rootNode = nullptr;

void yyerror(const char *s)
{
    outlog << "At line " << lines << " " << s << std::endl << std::endl;
}


/* Line 371 of yacc.c  */
#line 100 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     WHILE = 261,
     DO = 262,
     BREAK = 263,
     INT = 264,
     CHAR = 265,
     FLOAT = 266,
     DOUBLE = 267,
     VOID = 268,
     RETURN = 269,
     SWITCH = 270,
     CASE = 271,
     DEFAULT = 272,
     CONTINUE = 273,
     PRINTF = 274,
     ADDOP = 275,
     MULOP = 276,
     INCOP = 277,
     DECOP = 278,
     RELOP = 279,
     ASSIGNOP = 280,
     LOGICOP = 281,
     NOT = 282,
     LPAREN = 283,
     RPAREN = 284,
     LCURL = 285,
     RCURL = 286,
     LTHIRD = 287,
     RTHIRD = 288,
     COMMA = 289,
     SEMICOLON = 290,
     CONST_INT = 291,
     CONST_FLOAT = 292,
     ID = 293,
     LOWER_THAN_ELSE = 294
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define INT 264
#define CHAR 265
#define FLOAT 266
#define DOUBLE 267
#define VOID 268
#define RETURN 269
#define SWITCH 270
#define CASE 271
#define DEFAULT 272
#define CONTINUE 273
#define PRINTF 274
#define ADDOP 275
#define MULOP 276
#define INCOP 277
#define DECOP 278
#define RELOP 279
#define ASSIGNOP 280
#define LOGICOP 281
#define NOT 282
#define LPAREN 283
#define RPAREN 284
#define LCURL 285
#define RCURL 286
#define LTHIRD 287
#define RTHIRD 288
#define COMMA 289
#define SEMICOLON 290
#define CONST_INT 291
#define CONST_FLOAT 292
#define ID 293
#define LOWER_THAN_ELSE 294



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 244 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    19,    25,    30,
      34,    37,    39,    43,    46,    50,    52,    54,    56,    60,
      67,    69,    74,    76,    78,    81,    83,    85,    87,    95,
     101,   109,   115,   121,   125,   127,   130,   132,   137,   139,
     143,   145,   149,   151,   155,   157,   161,   163,   167,   170,
     173,   175,   177,   182,   186,   188,   190,   193,   196,   198,
     199,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    41,    42,    -1,    42,    -1,    46,    -1,
      43,    -1,    47,    49,    28,    44,    29,    45,    -1,    47,
      49,    28,    29,    45,    -1,    44,    34,    47,    38,    -1,
      44,    34,    47,    -1,    47,    38,    -1,    47,    -1,    30,
      50,    31,    -1,    30,    31,    -1,    47,    48,    35,    -1,
       9,    -1,    11,    -1,    13,    -1,    48,    34,    49,    -1,
      48,    34,    49,    32,    36,    33,    -1,    49,    -1,    49,
      32,    36,    33,    -1,    38,    -1,    51,    -1,    50,    51,
      -1,    46,    -1,    52,    -1,    45,    -1,     5,    28,    52,
      52,    54,    29,    51,    -1,     3,    28,    54,    29,    51,
      -1,     3,    28,    54,    29,    51,     4,    51,    -1,     6,
      28,    54,    29,    51,    -1,    19,    28,    49,    29,    35,
      -1,    14,    54,    35,    -1,    35,    -1,    54,    35,    -1,
      49,    -1,    49,    32,    54,    33,    -1,    55,    -1,    53,
      25,    55,    -1,    56,    -1,    56,    26,    56,    -1,    57,
      -1,    57,    24,    57,    -1,    58,    -1,    57,    20,    58,
      -1,    59,    -1,    58,    21,    59,    -1,    20,    59,    -1,
      27,    59,    -1,    60,    -1,    53,    -1,    49,    28,    61,
      29,    -1,    28,    54,    29,    -1,    36,    -1,    37,    -1,
      53,    22,    -1,    53,    23,    -1,    62,    -1,    -1,    62,
      34,    55,    -1,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    50,    62,    68,    76,    87,   100,   110,
     119,   127,   136,   145,   154,   164,   169,   174,   182,   191,
     203,   209,   219,   226,   232,   240,   245,   250,   255,   262,
     269,   276,   282,   288,   306,   312,   321,   325,   335,   341,
     349,   354,   363,   368,   378,   384,   394,   400,   411,   418,
     426,   433,   437,   446,   454,   459,   464,   471,   480,   485,
     493,   501
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BREAK", "INT", "CHAR", "FLOAT", "DOUBLE", "VOID", "RETURN", "SWITCH",
  "CASE", "DEFAULT", "CONTINUE", "PRINTF", "ADDOP", "MULOP", "INCOP",
  "DECOP", "RELOP", "ASSIGNOP", "LOGICOP", "NOT", "LPAREN", "RPAREN",
  "LCURL", "RCURL", "LTHIRD", "RTHIRD", "COMMA", "SEMICOLON", "CONST_INT",
  "CONST_FLOAT", "ID", "LOWER_THAN_ELSE", "$accept", "program", "unit",
  "func_definition", "parameter_list", "compound_statement",
  "var_declaration", "type_specifier", "declaration_list", "id_name",
  "statements", "statement", "expression_statement", "variable",
  "expression", "logic_expression", "rel_expression", "simple_expression",
  "term", "unary_expression", "factor", "argument_list", "arguments", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    44,    44,
      44,    44,    45,    45,    46,    47,    47,    47,    48,    48,
      48,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     6,     5,     4,     3,
       2,     1,     3,     2,     3,     1,     1,     1,     3,     6,
       1,     4,     1,     1,     2,     1,     1,     1,     7,     5,
       7,     5,     5,     3,     1,     2,     1,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     2,     2,
       1,     1,     4,     3,     1,     1,     2,     2,     1,     0,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,    16,    17,     0,     3,     5,     4,     0,     1,
       2,    22,     0,    20,     0,    14,     0,     0,    18,     0,
       0,    11,     0,     0,     0,     7,     0,     0,    10,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      34,    54,    55,    27,    25,     0,    36,     0,    23,    26,
      51,     0,    38,    40,    42,    44,    46,    50,     6,     9,
      19,     0,     0,     0,     0,     0,    51,    48,    49,     0,
      20,    59,     0,    12,    24,    56,    57,     0,    35,     0,
       0,     0,     0,     8,     0,     0,     0,    33,     0,    53,
      61,     0,    58,     0,    39,    41,    45,    43,    47,     0,
       0,     0,     0,    52,     0,    37,    29,     0,    31,    32,
      60,     0,     0,    30,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    20,    43,    44,    45,    12,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    91,    92
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -57
static const yytype_int16 yypact[] =
{
       9,   -57,   -57,   -57,    16,   -57,   -57,   -57,   -19,   -57,
     -57,   -57,     4,    33,   -19,   -57,     1,   -10,    -4,    22,
       3,    21,    29,    42,    44,   -57,    22,     9,   -57,   -57,
      51,    59,    62,    64,   104,    81,   104,   104,   104,   -57,
     -57,   -57,   -57,   -57,   -57,   -19,    41,    80,   -57,   -57,
     125,    78,   -57,    86,    77,    93,   -57,   -57,   -57,    82,
     -57,   104,    68,   104,    88,   -19,    54,   -57,   -57,    97,
      96,   104,   104,   -57,   -57,   -57,   -57,   104,   -57,   104,
     104,   104,   104,   -57,   105,    68,   108,   -57,   109,   -57,
     -57,   110,    99,   112,   -57,   -57,    93,   129,   -57,   116,
     104,   116,   120,   -57,   104,   -57,   152,   128,   -57,   -57,
     -57,   116,   116,   -57,   -57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -57,   154,   -57,   -57,    -2,    98,     7,   -57,    -5,
     -57,   -45,   -49,   -36,   -30,   -56,    83,    79,    84,   -31,
     -57,   -57,   -57
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      66,    66,    74,    13,    64,    67,    68,     8,    69,    18,
       1,     8,     2,    85,     3,    90,     9,    25,     1,    11,
       2,    94,     3,    21,    58,     1,    22,     2,    23,     3,
      19,    84,    26,    86,    59,    66,   100,    27,    14,    15,
      70,    66,    93,    66,    66,    66,    66,    31,   110,    32,
      33,    98,    24,     1,   106,     2,   108,     3,    34,    28,
      88,    16,    29,    35,    36,    17,   113,   114,    66,    71,
     107,    37,    38,    72,    24,    39,    75,    76,    30,    40,
      41,    42,    11,    31,    60,    32,    33,    61,    36,     1,
      62,     2,    63,     3,    34,    37,    38,    80,     7,    35,
      36,    81,     7,    40,    41,    42,    11,    37,    38,    65,
      24,    73,    79,    78,    82,    40,    41,    42,    11,    31,
      83,    32,    33,    87,    36,     1,    89,     2,    17,     3,
      34,    37,    38,   104,    99,    35,    36,   101,   102,   103,
      41,    42,    11,    37,    38,   105,    24,    75,    76,    80,
      77,    40,    41,    42,    11,   109,   111,   112,    10,     0,
      97,     0,    95,     0,    96
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-57)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      36,    37,    47,     8,    34,    36,    37,     0,    38,    14,
       9,     4,    11,    62,    13,    71,     0,    19,     9,    38,
      11,    77,    13,    16,    26,     9,    36,    11,    32,    13,
      29,    61,    29,    63,    27,    71,    85,    34,    34,    35,
      45,    77,    72,    79,    80,    81,    82,     3,   104,     5,
       6,    82,    30,     9,    99,    11,   101,    13,    14,    38,
      65,    28,    33,    19,    20,    32,   111,   112,   104,    28,
     100,    27,    28,    32,    30,    31,    22,    23,    36,    35,
      36,    37,    38,     3,    33,     5,     6,    28,    20,     9,
      28,    11,    28,    13,    14,    27,    28,    20,     0,    19,
      20,    24,     4,    35,    36,    37,    38,    27,    28,    28,
      30,    31,    26,    35,    21,    35,    36,    37,    38,     3,
      38,     5,     6,    35,    20,     9,    29,    11,    32,    13,
      14,    27,    28,    34,    29,    19,    20,    29,    29,    29,
      36,    37,    38,    27,    28,    33,    30,    22,    23,    20,
      25,    35,    36,    37,    38,    35,     4,    29,     4,    -1,
      81,    -1,    79,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    13,    41,    42,    43,    46,    47,     0,
      42,    38,    48,    49,    34,    35,    28,    32,    49,    29,
      44,    47,    36,    32,    30,    45,    29,    34,    38,    33,
      36,     3,     5,     6,    14,    19,    20,    27,    28,    31,
      35,    36,    37,    45,    46,    47,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    45,    47,
      33,    28,    28,    28,    54,    28,    53,    59,    59,    54,
      49,    28,    32,    31,    51,    22,    23,    25,    35,    26,
      20,    24,    21,    38,    54,    52,    54,    35,    49,    29,
      55,    61,    62,    54,    55,    56,    58,    57,    59,    29,
      52,    29,    29,    29,    34,    33,    51,    54,    51,    35,
      55,     4,    29,    51,    51
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 43 "20101021.y"
    {
		TreeNode* node = TreeNode::createNonTerminalNode("program");
		node->addChild((yyvsp[(1) - (2)])->getNode());
		node->addChild((yyvsp[(2) - (2)])->getNode());
		(yyval) = new symbol_info("program", "non_terminal", node);
		rootNode = node;
	}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 51 "20101021.y"
    {
      TreeNode* node = TreeNode::createNonTerminalNode("program");
        node->addChild((yyvsp[(1) - (1)])->getNode());
        (yyval) = new symbol_info("program", "non_terminal", node);
        if (!rootNode) {
            rootNode = node; 
        }
		                                        
	}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 63 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("var_declaration_unit");
        node->addChild((yyvsp[(1) - (1)])->getNode());
        (yyval) = new symbol_info("var_declaration_unit", "non_terminal", node);
    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 69 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("func_definition_unit");
        node->addChild((yyvsp[(1) - (1)])->getNode());
        (yyval) = new symbol_info("func_definition_unit", "non_terminal", node);
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 77 "20101021.y"
    {	
			TreeNode* node = TreeNode::createNonTerminalNode("func_definition"); 
			node->addChild((yyvsp[(1) - (6)])->getNode());
			node->addChild((yyvsp[(2) - (6)])->getNode());
			node->addChild(TreeNode::createTerminalNode("LPAREN", "("));
			node->addChild((yyvsp[(4) - (6)])->getNode());
			node->addChild(TreeNode::createTerminalNode("RPAREN", ")"));
			node->addChild((yyvsp[(6) - (6)])->getNode());
			(yyval) = new symbol_info("func_definition", "non_terminal", node);
		}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 88 "20101021.y"
    {
			 TreeNode* node = TreeNode::createNonTerminalNode("func_definition");
        node->addChild((yyvsp[(1) - (5)])->getNode());
        node->addChild((yyvsp[(2) - (5)])->getNode());
        node->addChild(TreeNode::createTerminalNode("LPAREN", "("));
        node->addChild(TreeNode::createTerminalNode("RPAREN", ")"));
        node->addChild((yyvsp[(5) - (5)])->getNode());
        (yyval) = new symbol_info("func_definition", "non_terminal", node);
    }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 101 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("parameter_list");
        node->addChild((yyvsp[(1) - (4)])->getNode());
        node->addChild(TreeNode::createTerminalNode("COMMA", ","));
        node->addChild((yyvsp[(3) - (4)])->getNode());
        node->addChild(TreeNode::createTerminalNode("ID", (yyvsp[(4) - (4)])->getname().c_str()));
        (yyval) = new symbol_info("parameter_list", "non_terminal", node);
			
		}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 111 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("parameter_list");
        node->addChild((yyvsp[(1) - (3)])->getNode()); 
        node->addChild(TreeNode::createTerminalNode("COMMA", ","));
        node->addChild((yyvsp[(3) - (3)])->getNode()); 
        (yyval) = new symbol_info("parameter_list", "non_terminal", node);
			
		}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 120 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("parameter");
        node->addChild((yyvsp[(1) - (2)])->getNode());
        node->addChild(TreeNode::createTerminalNode("ID", (yyvsp[(2) - (2)])->getname().c_str()));
        (yyval) = new symbol_info("parameter", "non_terminal", node);
			
		}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 128 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("parameter");
        node->addChild((yyvsp[(1) - (1)])->getNode());
        (yyval) = new symbol_info("parameter", "non_terminal", node);
			
		}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 137 "20101021.y"
    { 
        TreeNode* node = TreeNode::createNonTerminalNode("compound_statement");
        node->addChild(TreeNode::createTerminalNode("LCURL", "{"));
        node->addChild((yyvsp[(2) - (3)])->getNode()); // The 'statements' inside the curly braces
        node->addChild(TreeNode::createTerminalNode("RCURL", "}"));
        (yyval) = new symbol_info("compound_statement", "non_terminal", node);
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 146 "20101021.y"
    { 
        TreeNode* node = TreeNode::createNonTerminalNode("compound_statement");
        node->addChild(TreeNode::createTerminalNode("LCURL", "{"));
        node->addChild(TreeNode::createTerminalNode("RCURL", "}"));
        (yyval) = new symbol_info("compound_statement", "non_terminal", node);
 			
		}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 155 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("var_declaration");
        node->addChild((yyvsp[(1) - (3)])->getNode());
        node->addChild((yyvsp[(2) - (3)])->getNode()); 
        node->addChild(TreeNode::createTerminalNode("SEMICOLON", ";")); 
        (yyval) = new symbol_info("var_declaration", "non_terminal", node);
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 165 "20101021.y"
    {
        TreeNode* node = TreeNode::createTerminalNode("type", "int");
        (yyval) = new symbol_info("INT", "terminal", node);
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 170 "20101021.y"
    {
        TreeNode* node = TreeNode::createTerminalNode("type", "float");
        (yyval) = new symbol_info("FLOAT", "terminal", node);
    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 175 "20101021.y"
    {
        TreeNode* node = TreeNode::createTerminalNode("type", "void");
        (yyval) = new symbol_info("VOID", "terminal", node);
    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 183 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("declaration_list");
        node->addChild((yyvsp[(1) - (3)])->getNode());
        node->addChild(TreeNode::createTerminalNode("COMMA", ","));
        node->addChild((yyvsp[(3) - (3)])->getNode());
        (yyval) = new symbol_info("declaration_list", "non_terminal", node);
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 192 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("declaration_list");
        node->addChild((yyvsp[(1) - (6)])->getNode()); // Previous declaration list
        node->addChild(TreeNode::createTerminalNode("COMMA", ","));
        node->addChild((yyvsp[(3) - (6)])->getNode()); // Identifier name
        node->addChild(TreeNode::createTerminalNode("LTHIRD", "["));
        node->addChild(TreeNode::createTerminalNode("CONST_INT", (yyvsp[(5) - (6)])->getname().c_str()));
        node->addChild(TreeNode::createTerminalNode("RTHIRD", "]"));
        (yyval) = new symbol_info("declaration_list", "non_terminal", node);
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 204 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("declaration");
        node->addChild((yyvsp[(1) - (1)])->getNode()); // Identifier name
        (yyval) = new symbol_info("declaration", "non_terminal", node);
    }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 210 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("declaration");
        node->addChild((yyvsp[(1) - (4)])->getNode()); // Identifier name
        node->addChild(TreeNode::createTerminalNode("LTHIRD", "["));
        node->addChild(TreeNode::createTerminalNode("CONST_INT", (yyvsp[(3) - (4)])->getname().c_str()));
        node->addChild(TreeNode::createTerminalNode("RTHIRD", "]"));
        (yyval) = new symbol_info("declaration", "non_terminal", node);
    }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 220 "20101021.y"
    {
        TreeNode* node = TreeNode::createTerminalNode("id", (yyvsp[(1) - (1)])->getname().c_str());
        (yyval) = new symbol_info("id", "terminal", node);
    }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 227 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("statements");
        node->addChild((yyvsp[(1) - (1)])->getNode());
        (yyval) = new symbol_info("statements", "non_terminal", node);
    }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 233 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("statements");
        node->addChild((yyvsp[(1) - (2)])->getNode()); 
        node->addChild((yyvsp[(2) - (2)])->getNode());
        (yyval) = new symbol_info("statements", "non_terminal", node);
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 241 "20101021.y"
    {
        (yyval) = (yyvsp[(1) - (1)]); 
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 246 "20101021.y"
    {
        (yyval) = (yyvsp[(1) - (1)]);
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 251 "20101021.y"
    {
        (yyval) = (yyvsp[(1) - (1)]); 
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 256 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("for_loop");

        (yyval) = new symbol_info("for_loop", "non_terminal", node);
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 263 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("if_statement");

        (yyval) = new symbol_info("if_statement", "non_terminal", node);
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 270 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("if_else_statement");

        (yyval) = new symbol_info("if_else_statement", "non_terminal", node);
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 277 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("while_loop");

        (yyval) = new symbol_info("while_loop", "non_terminal", node);
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 283 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("printf_statement");

        (yyval) = new symbol_info("printf_statement", "non_terminal", node);
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 289 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("return_statement");


        node->addChild(TreeNode::createTerminalNode("RETURN", "return"));

        node->addChild((yyvsp[(2) - (3)])->getNode());


        node->addChild(TreeNode::createTerminalNode("SEMICOLON", ";"));

       
        (yyval) = new symbol_info("return_statement", "non_terminal", node);
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 307 "20101021.y"
    {
        TreeNode* node = TreeNode::createTerminalNode("empty_statement", ";");
        (yyval) = new symbol_info("empty_statement", "terminal", node);
    }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 313 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("expression_statement");
        node->addChild((yyvsp[(1) - (2)])->getNode()); // The expression TreeNode
        node->addChild(TreeNode::createTerminalNode("SEMICOLON", ";"));
        (yyval) = new symbol_info("expression_statement", "non_terminal", node);
    }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 322 "20101021.y"
    {
	    (yyval) = (yyvsp[(1) - (1)]);
	 }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 326 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("array_access");
        node->addChild((yyvsp[(1) - (4)])->getNode()); // Identifier name
        node->addChild(TreeNode::createTerminalNode("LTHIRD", "["));
        node->addChild((yyvsp[(3) - (4)])->getNode()); // Expression within brackets
        node->addChild(TreeNode::createTerminalNode("RTHIRD", "]"));
        (yyval) = new symbol_info("array_access", "non_terminal", node);
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 336 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("expression");
        node->addChild((yyvsp[(1) - (1)])->getNode()); 
        (yyval) = new symbol_info("expression", "non_terminal", node);
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 342 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("assignment_expression");
        node->addChild((yyvsp[(1) - (3)])->getNode());
        node->addChild(TreeNode::createTerminalNode("ASSIGNOP", "="));
        node->addChild((yyvsp[(3) - (3)])->getNode()); 
        (yyval) = new symbol_info("assignment_expression", "non_terminal", node);
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 350 "20101021.y"
    {
        (yyval) = (yyvsp[(1) - (1)]);
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 355 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("logic_expression");
        node->addChild((yyvsp[(1) - (3)])->getNode()); 
        node->addChild(TreeNode::createTerminalNode("LOGICOP", (yyvsp[(2) - (3)])->getname().c_str())); 
        node->addChild((yyvsp[(3) - (3)])->getNode());
        (yyval) = new symbol_info("logic_expression", "non_terminal", node);
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 364 "20101021.y"
    {
        
        (yyval) = (yyvsp[(1) - (1)]);
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 369 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("rel_expression");
        node->addChild((yyvsp[(1) - (3)])->getNode()); 
        node->addChild(TreeNode::createTerminalNode("RELOP", (yyvsp[(2) - (3)])->getname().c_str())); 
        node->addChild((yyvsp[(3) - (3)])->getNode()); 
        (yyval) = new symbol_info("rel_expression", "non_terminal", node);
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 379 "20101021.y"
    {
	    	TreeNode* node = TreeNode::createNonTerminalNode("simple_expression");
			node->addChild((yyvsp[(1) - (1)])->getNode());
			(yyval) = new symbol_info("simple_expression", "non_terminal", node);
	      }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 385 "20101021.y"
    {
	    	TreeNode* node = TreeNode::createNonTerminalNode("simple_expression");
			node->addChild((yyvsp[(1) - (3)])->getNode());
			node->addChild(TreeNode::createTerminalNode("ADDOP", (yyvsp[(2) - (3)])->getname().c_str()));
			node->addChild((yyvsp[(3) - (3)])->getNode());
			(yyval) = new symbol_info("simple_expression", "non_terminal", node);
	      }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 395 "20101021.y"
    {

        (yyval) = (yyvsp[(1) - (1)]);
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 401 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("term");
        node->addChild((yyvsp[(1) - (3)])->getNode()); // First term TreeNode
        node->addChild(TreeNode::createTerminalNode("MULOP", (yyvsp[(2) - (3)])->getname().c_str())); 
        node->addChild((yyvsp[(3) - (3)])->getNode()); // Unary expression TreeNode
        (yyval) = new symbol_info("term", "non_terminal", node);
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 412 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("unary_expression");
        node->addChild(TreeNode::createTerminalNode("ADDOP", (yyvsp[(1) - (2)])->getname().c_str())); 
        node->addChild((yyvsp[(2) - (2)])->getNode());
        (yyval) = new symbol_info("unary_expression", "non_terminal", node);
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 419 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("unary_expression");
        node->addChild(TreeNode::createTerminalNode("NOT", "not"));
        node->addChild((yyvsp[(2) - (2)])->getNode()); 
        (yyval) = new symbol_info("unary_expression", "non_terminal", node);
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 427 "20101021.y"
    {
	    	(yyval) = (yyvsp[(1) - (1)]);
	     }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 434 "20101021.y"
    {
	    (yyval) = (yyvsp[(1) - (1)]);
	}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 438 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("function_call");
        node->addChild((yyvsp[(1) - (4)])->getNode());
        node->addChild(TreeNode::createTerminalNode("LPAREN", "("));
        node->addChild((yyvsp[(3) - (4)])->getNode());
        node->addChild(TreeNode::createTerminalNode("RPAREN", ")"));
        (yyval) = new symbol_info("function_call", "non_terminal", node);
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 447 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("paren_expression");
        node->addChild(TreeNode::createTerminalNode("LPAREN", "("));
        node->addChild((yyvsp[(2) - (3)])->getNode());
        node->addChild(TreeNode::createTerminalNode("RPAREN", ")"));
        (yyval) = new symbol_info("paren_expression", "non_terminal", node);
    }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 455 "20101021.y"
    {
        TreeNode* node = TreeNode::createTerminalNode("const_int", (yyvsp[(1) - (1)])->getname().c_str());
        (yyval) = new symbol_info("const_int", "terminal", node);
    }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 460 "20101021.y"
    {
        TreeNode* node = TreeNode::createTerminalNode("const_float", (yyvsp[(1) - (1)])->getname().c_str());
        (yyval) = new symbol_info("const_float", "terminal", node);
    }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 465 "20101021.y"
    {
	    TreeNode* node = TreeNode::createNonTerminalNode("increment_expression");
		node->addChild((yyvsp[(1) - (2)])->getNode());
		node->addChild(TreeNode::createTerminalNode("INCOP", "++"));
		(yyval) = new symbol_info("increment_expression", "non_terminal", node);
	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 472 "20101021.y"
    {
	    TreeNode* node = TreeNode::createNonTerminalNode("decrement_expression");
		node->addChild((yyvsp[(1) - (2)])->getNode());
		node->addChild(TreeNode::createTerminalNode("DECOP", "--"));
		(yyval) = new symbol_info("decrement_expression", "non_terminal", node);
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 481 "20101021.y"
    {
        (yyval) = (yyvsp[(1) - (1)]); 
    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 485 "20101021.y"
    {
        TreeNode* node = TreeNode::createNonTerminalNode("empty_argument_list");
        (yyval) = new symbol_info("empty_argument_list", "non_terminal", node);
       
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 494 "20101021.y"
    {
				TreeNode* node = TreeNode::createNonTerminalNode("argument_list");
				node->addChild((yyvsp[(1) - (3)])->getNode());
				node->addChild(TreeNode::createTerminalNode("COMMA", ","));
				node->addChild((yyvsp[(3) - (3)])->getNode());
				(yyval) = new symbol_info("argument_list", "non_terminal", node);
		  }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 502 "20101021.y"
    {
				TreeNode* node = TreeNode::createNonTerminalNode("argument_list");
				node->addChild((yyvsp[(1) - (1)])->getNode());
				(yyval) = new symbol_info("argument_list", "non_terminal", node);
		  }
    break;


/* Line 1792 of yacc.c  */
#line 2199 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 508 "20101021.y"


int main(int argc, char *argv[])
{
    if (argc != 2) 
    {
        std::cout << "Please input file name" << std::endl;
        return 0;
    }
    yyin = fopen(argv[1], "r");
    outlog.open("my_log.txt", std::ios::trunc);

    if (yyin == NULL)
    {
        std::cout << "Couldn't open file" << std::endl;
        return 0;
    }

    yyparse();

    if (rootNode) {
        rootNode->postOrderTraversal(outlog);
    }

    outlog.close();
    fclose(yyin);

    return 0;
}
