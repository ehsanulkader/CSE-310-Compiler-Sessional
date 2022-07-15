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
#line 1 "1805067.y"

#include<bits/stdc++.h>
#include "symboltable.cpp"

using namespace std;

int yyparse(void);
int yylex(void);
extern FILE *yyin;

FILE *fp;
ofstream logout;
ofstream errout;

extern int line_count;
extern int error_count;
SymbolTable symbolTable(30); // bucketsize = 30
string return_type;

void printRuleInLog(ofstream& logout, int line, string rule) {
    logout<<"Line "<<line<<": "<<rule<<"\n\n";
}

void printCodeInLog(ofstream& logout, string code) {
    logout<<code<<"\n\n";
}

void printError(ofstream& errout, int line, string error) {
    errout<<"Error at line "<<line<<": "<<error<<"\n\n";
}

vector<string> split(string input, char delimiter) {
    istringstream ss(input);
    vector<string>output;
	string token;
	while(getline(ss, token, delimiter)) {
    	output.push_back(token);
	}
    return output;
}


bool isArray(string input) {
    if ((input.find("[") != string::npos) && (input.find("]") != string::npos))
        return true;
    return false;
}

string extractArrayName(string input) {
    istringstream ss(input);
    string arrayName;
    getline(ss, arrayName, '[');
    return arrayName;
}

int extractArraySize(string input) {
    unsigned first = input.find("[");
    unsigned last = input.find("]");
    string arraySize = input.substr(first+1,last-first-1);
    return stoi(arraySize);
}

vector<Parameter> extractParameterList(string input) {
    vector<string>tempList = split(input,',');
    vector<Parameter>parameterList;
    for (int i = 0; i < tempList.size(); i++) {
        vector<string>temp = split(tempList[i], ' ');
        parameterList.push_back(Parameter(temp[1],temp[0]));
    }
    return parameterList;
}

void yyerror(char *s)
{
	error_count++;
	printError(logout, line_count, "Syntax error");
	printError(errout, line_count, "Syntax error");
}



#line 153 "y.tab.c"

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
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    WHILE = 261,                   /* WHILE  */
    DO = 262,                      /* DO  */
    RETURN = 263,                  /* RETURN  */
    CONTINUE = 264,                /* CONTINUE  */
    PRINTLN = 265,                 /* PRINTLN  */
    INCOP = 266,                   /* INCOP  */
    DECOP = 267,                   /* DECOP  */
    ASSIGNOP = 268,                /* ASSIGNOP  */
    NOT = 269,                     /* NOT  */
    LPAREN = 270,                  /* LPAREN  */
    RPAREN = 271,                  /* RPAREN  */
    LCURL = 272,                   /* LCURL  */
    RCURL = 273,                   /* RCURL  */
    LTHIRD = 274,                  /* LTHIRD  */
    RTHIRD = 275,                  /* RTHIRD  */
    COMMA = 276,                   /* COMMA  */
    SEMICOLON = 277,               /* SEMICOLON  */
    ID = 278,                      /* ID  */
    INT = 279,                     /* INT  */
    FLOAT = 280,                   /* FLOAT  */
    DOUBLE = 281,                  /* DOUBLE  */
    CHAR = 282,                    /* CHAR  */
    VOID = 283,                    /* VOID  */
    ADDOP = 284,                   /* ADDOP  */
    MULOP = 285,                   /* MULOP  */
    RELOP = 286,                   /* RELOP  */
    LOGICOP = 287,                 /* LOGICOP  */
    CONST_INT = 288,               /* CONST_INT  */
    CONST_FLOAT = 289,             /* CONST_FLOAT  */
    CONST_CHAR = 290,              /* CONST_CHAR  */
    LOWER_THAN_ELSE = 291          /* LOWER_THAN_ELSE  */
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
#define FOR 260
#define WHILE 261
#define DO 262
#define RETURN 263
#define CONTINUE 264
#define PRINTLN 265
#define INCOP 266
#define DECOP 267
#define ASSIGNOP 268
#define NOT 269
#define LPAREN 270
#define RPAREN 271
#define LCURL 272
#define RCURL 273
#define LTHIRD 274
#define RTHIRD 275
#define COMMA 276
#define SEMICOLON 277
#define ID 278
#define INT 279
#define FLOAT 280
#define DOUBLE 281
#define CHAR 282
#define VOID 283
#define ADDOP 284
#define MULOP 285
#define RELOP 286
#define LOGICOP 287
#define CONST_INT 288
#define CONST_FLOAT 289
#define CONST_CHAR 290
#define LOWER_THAN_ELSE 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 83 "1805067.y"

	SymbolInfo* symbolInfo;

#line 282 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
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
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_DO = 7,                         /* DO  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_PRINTLN = 10,                   /* PRINTLN  */
  YYSYMBOL_INCOP = 11,                     /* INCOP  */
  YYSYMBOL_DECOP = 12,                     /* DECOP  */
  YYSYMBOL_ASSIGNOP = 13,                  /* ASSIGNOP  */
  YYSYMBOL_NOT = 14,                       /* NOT  */
  YYSYMBOL_LPAREN = 15,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 16,                    /* RPAREN  */
  YYSYMBOL_LCURL = 17,                     /* LCURL  */
  YYSYMBOL_RCURL = 18,                     /* RCURL  */
  YYSYMBOL_LTHIRD = 19,                    /* LTHIRD  */
  YYSYMBOL_RTHIRD = 20,                    /* RTHIRD  */
  YYSYMBOL_COMMA = 21,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 22,                 /* SEMICOLON  */
  YYSYMBOL_ID = 23,                        /* ID  */
  YYSYMBOL_INT = 24,                       /* INT  */
  YYSYMBOL_FLOAT = 25,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 26,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 27,                      /* CHAR  */
  YYSYMBOL_VOID = 28,                      /* VOID  */
  YYSYMBOL_ADDOP = 29,                     /* ADDOP  */
  YYSYMBOL_MULOP = 30,                     /* MULOP  */
  YYSYMBOL_RELOP = 31,                     /* RELOP  */
  YYSYMBOL_LOGICOP = 32,                   /* LOGICOP  */
  YYSYMBOL_CONST_INT = 33,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 34,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_CHAR = 35,                /* CONST_CHAR  */
  YYSYMBOL_LOWER_THAN_ELSE = 36,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_start = 38,                     /* start  */
  YYSYMBOL_program = 39,                   /* program  */
  YYSYMBOL_unit = 40,                      /* unit  */
  YYSYMBOL_func_declaration = 41,          /* func_declaration  */
  YYSYMBOL_func_definition = 42,           /* func_definition  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_parameter_list = 45,            /* parameter_list  */
  YYSYMBOL_compound_statement = 46,        /* compound_statement  */
  YYSYMBOL_var_declaration = 47,           /* var_declaration  */
  YYSYMBOL_type_specifier = 48,            /* type_specifier  */
  YYSYMBOL_declaration_list = 49,          /* declaration_list  */
  YYSYMBOL_statements = 50,                /* statements  */
  YYSYMBOL_statement = 51,                 /* statement  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_expression_statement = 53,      /* expression_statement  */
  YYSYMBOL_variable = 54,                  /* variable  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_logic_expression = 56,          /* logic_expression  */
  YYSYMBOL_rel_expression = 57,            /* rel_expression  */
  YYSYMBOL_simple_expression = 58,         /* simple_expression  */
  YYSYMBOL_term = 59,                      /* term  */
  YYSYMBOL_unary_expression = 60,          /* unary_expression  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_argument_list = 62,             /* argument_list  */
  YYSYMBOL_arguments = 63                  /* arguments  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   105,   105,   112,   118,   127,   133,   139,   147,   172,
     197,   196,   269,   268,   328,   334,   340,   346,   355,   365,
     384,   426,   432,   439,   447,   454,   460,   466,   474,   480,
     488,   494,   501,   501,   510,   516,   522,   528,   534,   546,
     560,   566,   575,   598,   627,   633,   657,   664,   680,   686,
     695,   701,   714,   720,   758,   765,   772,   780,   786,   835,
     841,   848,   855,   861,   869,   876,   883,   890
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "FOR",
  "WHILE", "DO", "RETURN", "CONTINUE", "PRINTLN", "INCOP", "DECOP",
  "ASSIGNOP", "NOT", "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD",
  "RTHIRD", "COMMA", "SEMICOLON", "ID", "INT", "FLOAT", "DOUBLE", "CHAR",
  "VOID", "ADDOP", "MULOP", "RELOP", "LOGICOP", "CONST_INT", "CONST_FLOAT",
  "CONST_CHAR", "LOWER_THAN_ELSE", "$accept", "start", "program", "unit",
  "func_declaration", "func_definition", "$@1", "$@2", "parameter_list",
  "compound_statement", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "$@3",
  "expression_statement", "variable", "expression", "logic_expression",
  "rel_expression", "simple_expression", "term", "unary_expression",
  "factor", "argument_list", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -73,   -73,   -73,    14,     1,   -73,   -73,   -73,   -73,
       4,   -73,   -73,    21,    36,    -6,   -16,    11,   -73,     2,
      -1,    18,    28,    34,   -73,    38,    42,     1,   -73,   -73,
      27,    70,   -73,   -73,    38,    43,    45,    54,    55,    59,
      99,    62,    99,    99,   -73,   -73,    24,    99,   -73,   -73,
     -73,    56,   102,   -73,    38,   -73,    39,    61,   -73,    65,
      25,    57,   -73,   -73,   -73,   -73,   -73,    99,    67,    99,
      64,    68,    51,   -73,    86,    99,    99,   -73,    87,   -73,
     -73,   -73,   -73,   -73,    99,   -73,    99,    99,    99,    99,
      93,    67,    95,   -73,   103,   -73,   -73,   105,    94,    98,
     -73,   -73,    57,   100,   -73,   134,    99,   134,   101,   -73,
      99,   -73,   130,   122,   -73,   -73,   -73,   134,   134,   -73,
     -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    21,    22,    23,     0,     2,     4,     6,     7,     5,
       0,     1,     3,    26,     0,     0,     0,     0,    20,    12,
       0,    17,     0,    24,     9,     0,    10,     0,    16,    27,
       0,    32,    13,     8,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    40,    42,     0,    60,    61,
      30,     0,    32,    28,     0,    31,    57,     0,    44,    46,
      48,    50,    52,    56,    11,    14,    25,     0,     0,     0,
       0,     0,    57,    55,     0,    65,     0,    54,    26,    18,
      29,    33,    62,    63,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    39,     0,    59,    67,     0,    64,     0,
      45,    47,    51,    49,    53,    32,     0,    32,     0,    58,
       0,    43,    35,     0,    37,    38,    66,    32,    32,    36,
      34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   -73,   136,   -73,   -73,   -73,   -73,   -73,   -23,
      16,     8,   -73,   -73,   -46,   -73,   -59,   -42,   -39,   -72,
      60,    63,    58,   -40,   -73,   -73,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,    34,    25,    20,    32,
      50,    51,    14,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    97,    98
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      72,    70,    73,    96,    74,    72,    80,    77,    10,    91,
      19,    64,   100,    10,    11,    26,     9,    22,     1,     2,
      27,     9,     3,    21,    24,     1,     2,    13,    90,     3,
      92,    81,   106,    72,    23,    35,    15,    99,   116,    75,
      16,    28,    72,    76,    72,    72,    72,    72,    29,   104,
      82,    83,    84,    30,    87,    31,    88,    17,    18,   112,
      36,   114,    82,    83,    33,    66,    65,   113,    72,    67,
      68,   119,   120,    37,    69,    38,    39,    71,    40,    78,
      41,    42,    43,    85,    42,    43,    93,    89,    44,    45,
      46,    94,    45,    46,     1,     2,    47,    86,     3,    47,
      48,    49,    95,    48,    49,    37,    16,    38,    39,   105,
      40,   107,    41,    42,    43,   110,    42,    43,   111,   108,
      79,   109,    46,   115,    45,    46,     1,     2,    47,    87,
       3,    47,    48,    49,   117,    48,    49,    37,   118,    38,
      39,    12,    40,     0,    41,   102,   101,     0,    42,    43,
       0,   103,     0,     0,     0,     0,    45,    46,     1,     2,
       0,     0,     3,    47,     0,     0,     0,    48,    49
};

static const yytype_int8 yycheck[] =
{
      42,    40,    42,    75,    43,    47,    52,    47,     0,    68,
      16,    34,    84,     5,     0,    16,     0,    33,    24,    25,
      21,     5,    28,    15,    22,    24,    25,    23,    67,    28,
      69,    54,    91,    75,    23,    27,    15,    76,   110,    15,
      19,    23,    84,    19,    86,    87,    88,    89,    20,    89,
      11,    12,    13,    19,    29,    17,    31,    21,    22,   105,
      33,   107,    11,    12,    22,    20,    23,   106,   110,    15,
      15,   117,   118,     3,    15,     5,     6,    15,     8,    23,
      10,    14,    15,    22,    14,    15,    22,    30,    18,    22,
      23,    23,    22,    23,    24,    25,    29,    32,    28,    29,
      33,    34,    16,    33,    34,     3,    19,     5,     6,    16,
       8,    16,    10,    14,    15,    21,    14,    15,    20,    16,
      18,    16,    23,    22,    22,    23,    24,    25,    29,    29,
      28,    29,    33,    34,     4,    33,    34,     3,    16,     5,
       6,     5,     8,    -1,    10,    87,    86,    -1,    14,    15,
      -1,    88,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    24,    25,    28,    38,    39,    40,    41,    42,    47,
      48,     0,    40,    23,    49,    15,    19,    21,    22,    16,
      45,    48,    33,    23,    22,    44,    16,    21,    23,    20,
      19,    17,    46,    22,    43,    48,    33,     3,     5,     6,
       8,    10,    14,    15,    18,    22,    23,    29,    33,    34,
      47,    48,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    46,    23,    20,    15,    15,    15,
      55,    15,    54,    60,    55,    15,    19,    60,    23,    18,
      51,    46,    11,    12,    13,    22,    32,    29,    31,    30,
      55,    53,    55,    22,    23,    16,    56,    62,    63,    55,
      56,    57,    59,    58,    60,    16,    53,    16,    16,    16,
      21,    20,    51,    55,    51,    22,    56,     4,    16,    51,
      51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    41,
      43,    42,    44,    42,    45,    45,    45,    45,    46,    46,
      47,    48,    48,    48,    49,    49,    49,    49,    50,    50,
      51,    51,    52,    51,    51,    51,    51,    51,    51,    51,
      53,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     5,
       0,     7,     0,     6,     4,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     3,     6,     1,     4,     1,     2,
       1,     1,     0,     2,     7,     5,     7,     5,     5,     3,
       1,     2,     1,     4,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     2,     2,     1,     1,     4,     3,
       1,     1,     2,     2,     1,     0,     3,     1
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
  case 2: /* start: program  */
#line 106 "1805067.y"
        {
		//write your code in this block in all the similar blocks below
		printRuleInLog(logout, line_count, "start : program");
	}
#line 1417 "y.tab.c"
    break;

  case 3: /* program: program unit  */
#line 113 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-1].symbolInfo)->getSymbolName() + "\n" + (yyvsp[0].symbolInfo)->getSymbolName(), "program");
		printRuleInLog(logout, line_count, "program : program unit");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1427 "y.tab.c"
    break;

  case 4: /* program: unit  */
#line 119 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "program : unit");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());

	}
#line 1438 "y.tab.c"
    break;

  case 5: /* unit: var_declaration  */
#line 128 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "unit : var_declaration");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1448 "y.tab.c"
    break;

  case 6: /* unit: func_declaration  */
#line 134 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "unit : func_declaration");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1458 "y.tab.c"
    break;

  case 7: /* unit: func_definition  */
#line 140 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "unit : func_definition");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1468 "y.tab.c"
    break;

  case 8: /* func_declaration: type_specifier ID LPAREN parameter_list RPAREN SEMICOLON  */
#line 148 "1805067.y"
        {
		return_type  = (yyvsp[-5].symbolInfo)->getSymbolName();
		SymbolInfo* temp_func = symbolTable.lookupAll((yyvsp[-4].symbolInfo)->getSymbolName());
		if(temp_func == nullptr) {	//function isn't declared yet
			vector<Parameter> parameter_list = extractParameterList((yyvsp[-2].symbolInfo)->getSymbolName());
			FunctionData* func_data = new FunctionData();
			vector<Parameter> declared_list = extractParameterList((yyvsp[-2].symbolInfo)->getSymbolName());
			func_data->setParameterList(declared_list);
			temp_func = new SymbolInfo((yyvsp[-4].symbolInfo)->getSymbolName(),"ID");
			temp_func->setDtype(return_type);
			temp_func->setFunctionData(func_data);
			symbolTable.insert(temp_func);
			symbolTable.enterScope();
			symbolTable.exitScope();
		} else {	//multiple declaration
			error_count++;
			printError(errout, line_count, "Multiple declaration of " + (yyvsp[-4].symbolInfo)->getSymbolName());
			printError(logout, line_count, "Multiple declaration of " + (yyvsp[-4].symbolInfo)->getSymbolName());
		}
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-5].symbolInfo)->getSymbolName() + " " + (yyvsp[-4].symbolInfo)->getSymbolName() + "(" + (yyvsp[-2].symbolInfo)->getSymbolName() + ");", "func_declaration");
		(yyval.symbolInfo)->setDtype(return_type);
		printRuleInLog(logout, line_count, "func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1497 "y.tab.c"
    break;

  case 9: /* func_declaration: type_specifier ID LPAREN RPAREN SEMICOLON  */
#line 173 "1805067.y"
        {
		string return_type = (yyvsp[-4].symbolInfo)->getSymbolName();
		SymbolInfo* temp_func = symbolTable.lookupAll((yyvsp[-3].symbolInfo)->getSymbolName());
		if(temp_func == nullptr) {	//function isn't declared yet
			FunctionData* func_data = new FunctionData();
			temp_func = new SymbolInfo((yyvsp[-3].symbolInfo)->getSymbolName(),"ID");
			temp_func->setDtype(return_type);
			temp_func->setFunctionData(func_data);
			symbolTable.insert(temp_func);
			symbolTable.enterScope();
			symbolTable.exitScope();
		} else {	//multiple declaration
			error_count++;
			printError(errout, line_count, "Multiple declaration of " + (yyvsp[-3].symbolInfo)->getSymbolName());
			printError(logout, line_count, "Multiple declaration of " + (yyvsp[-3].symbolInfo)->getSymbolName());
		}
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-4].symbolInfo)->getSymbolName() + " " + (yyvsp[-3].symbolInfo)->getSymbolName() + "();", "func_declaration");
		(yyval.symbolInfo)->setDtype(return_type);
		printRuleInLog(logout, line_count, "func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1523 "y.tab.c"
    break;

  case 10: /* $@1: %empty  */
#line 197 "1805067.y"
        {
		string return_type = (yyvsp[-4].symbolInfo)->getSymbolName();
		SymbolInfo* temp_func = symbolTable.lookupAll((yyvsp[-3].symbolInfo)->getSymbolName());
		vector<Parameter> defined_list = extractParameterList((yyvsp[-1].symbolInfo)->getSymbolName());	
		if(temp_func == nullptr) {	//function ID isn't declared yet
			FunctionData* func_data = new FunctionData();
			func_data->setParameterList(defined_list);
			func_data->setDefined(true);
			temp_func = new SymbolInfo((yyvsp[-3].symbolInfo)->getSymbolName(),"ID");
			temp_func->setDtype(return_type);
			temp_func->setFunctionData(func_data);
			symbolTable.insert(temp_func);
		} else { //function ID has been declared
			FunctionData* func_data = temp_func->getFunctionData();
			
			if(func_data == nullptr) {	//ID is not a function
				error_count++;
				printError(errout, line_count, "Multiple declaration of " + temp_func->getSymbolName());
				printError(logout, line_count, "Multiple declaration of " + temp_func->getSymbolName());
			} else if(func_data->isDefined()) {	//ID is a function and defined
				
				error_count++;
				printError(errout, line_count, "Redefinition of " + temp_func->getSymbolName());
				printError(logout, line_count, "Redefinition of " + temp_func->getSymbolName());
			} else {					
					vector<Parameter> declared_list = func_data->getParameterList();
					if(return_type != temp_func->getDtype()){
						error_count++;
						printError(errout, line_count, "Return type mismatch with function declaration in function " + temp_func->getSymbolName());
						printError(logout, line_count, "Return type mismatch with function declaration in function " + temp_func->getSymbolName());
					}
					if(declared_list.size() != defined_list.size()) {
						error_count++;
						printError(errout, line_count, "Total number of arguments mismatch with declaration in function var" + temp_func->getSymbolName());
						printError(logout, line_count, "Total number of arguments mismatch with declaration in function var" + temp_func->getSymbolName());
					}
					
					int smaller_size = min(declared_list.size(),defined_list.size());
					for (int i = 0; i < smaller_size ; i++) {
						if (declared_list[i].getParameterType() != defined_list[i].getParameterType()) {
							error_count++;
							printError(errout, line_count, "Type mismatch with function declaration in function " + temp_func->getSymbolName());
							printError(logout, line_count, "Type mismatch with function declaration in function " + temp_func->getSymbolName());
						}
					}
					
			}
		}	
		symbolTable.enterScope();

		for(int i = 0; i < defined_list.size(); i++) {
			SymbolInfo* temp_symbol = new SymbolInfo(defined_list[i].getParameterName(), "ID");
			temp_symbol->setDtype(defined_list[i].getParameterType());
			if(!symbolTable.insert(temp_symbol)) {
				error_count++;
				printError(errout, line_count, "Multiple declaration of " + temp_symbol->getSymbolName() +" in parameter");
				printError(logout, line_count, "Multiple declaration of " + temp_symbol->getSymbolName() +" in parameter");
			}
		}
		// $$ = new SymbolInfo($1->getSymbolName() + " " + $2->getSymbolName() + "(" + $4->getSymbolName() + ")" + $6->getSymbolName(), "func_definition");
		// $$->setDtype(return_type);
		// printRuleInLog(logout, line_count, "func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement");
		// printCodeInLog(logout, $$->getSymbolName());
	}
#line 1592 "y.tab.c"
    break;

  case 11: /* func_definition: type_specifier ID LPAREN parameter_list RPAREN $@1 compound_statement  */
#line 262 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-6].symbolInfo)->getSymbolName() + " " + (yyvsp[-5].symbolInfo)->getSymbolName() + "(" + (yyvsp[-3].symbolInfo)->getSymbolName() + ")" + (yyvsp[0].symbolInfo)->getSymbolName(), "func_definition");
		(yyval.symbolInfo)->setDtype(return_type);
		printRuleInLog(logout, line_count, "func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1603 "y.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 269 "1805067.y"
        {
		string return_type = (yyvsp[-3].symbolInfo)->getSymbolName();
		SymbolInfo* temp_func = symbolTable.lookupAll((yyvsp[-2].symbolInfo)->getSymbolName());
		if(temp_func == nullptr) {	//function ID isn't declared yet
			FunctionData* func_data = new FunctionData();
			func_data->setDefined(true);
			temp_func = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName(),"ID");
			temp_func->setFunctionData(func_data);
			symbolTable.insert(temp_func);
		} else { //function ID has been declared
			FunctionData* func_data = temp_func->getFunctionData(); 	
			if(func_data == nullptr) {	//ID is not a function
				error_count++;
				printError(errout, line_count, "Multiple declaration of " + temp_func->getSymbolName()+", redeclared as function");
				printError(logout, line_count, "Multiple declaration of " + temp_func->getSymbolName()+", redeclared as function");
			} else {	//ID is a function
				if(func_data->isDefined()) { 
					error_count++;
					printError(errout, line_count, "Redefinition of  of " + temp_func->getSymbolName());
					printError(logout, line_count, "Redefinition of  of " + temp_func->getSymbolName());
				} else {
					vector<Parameter> declared_list = func_data->getParameterList();
					//bool error_flag = false;
					if(declared_list.size() != 0) {
						error_count++;
						//error_flag = true;
						printError(errout, line_count, "Total number of arguments mismatch with declaration in function var" + temp_func->getSymbolName());
						printError(logout, line_count, "Total number of arguments mismatch with declaration in function var" + temp_func->getSymbolName());
					}
					
					if(return_type != temp_func->getDtype()) {
						//error_flag = true;
						error_count++;
						printError(errout, line_count, "Return type mismatch with function declaration in function " + temp_func->getSymbolName());
						printError(logout, line_count, "Return type mismatch with function declaration in function " + temp_func->getSymbolName());
					}

					// if(!error_flag) {
					// 	//symbolTable.enterScope();
					// }
				}
			}
		}
		symbolTable.enterScope();
		// $$ = new SymbolInfo($1->getSymbolName() + " " + $2->getSymbolName() + "()" + $5->getSymbolName(), "func_definition");
		// $$->setDtype(return_type);
		// printRuleInLog(logout, line_count, "func_definition : type_specifier ID LPAREN RPAREN compound_statement");
		// printCodeInLog(logout, $$->getSymbolName());
		
	}
#line 1658 "y.tab.c"
    break;

  case 13: /* func_definition: type_specifier ID LPAREN RPAREN $@2 compound_statement  */
#line 320 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-5].symbolInfo)->getSymbolName() + " " + (yyvsp[-4].symbolInfo)->getSymbolName() + "()" + (yyvsp[0].symbolInfo)->getSymbolName(), "func_definition");
		(yyval.symbolInfo)->setDtype(return_type);
		printRuleInLog(logout, line_count, "func_definition : type_specifier ID LPAREN RPAREN compound_statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1669 "y.tab.c"
    break;

  case 14: /* parameter_list: parameter_list COMMA type_specifier ID  */
#line 329 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-3].symbolInfo)->getSymbolName() + "," + (yyvsp[-1].symbolInfo)->getSymbolName() + " " + (yyvsp[0].symbolInfo)->getSymbolName(), "parameter_list");
		printRuleInLog(logout, line_count, "parameter_list : parameter_list COMMA type_specifier ID");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1679 "y.tab.c"
    break;

  case 15: /* parameter_list: parameter_list COMMA type_specifier  */
#line 335 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + "," + (yyvsp[0].symbolInfo)->getSymbolName(), "parameter_list");
		printRuleInLog(logout, line_count, "parameter_list : parameter_list COMMA type_specifier");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1689 "y.tab.c"
    break;

  case 16: /* parameter_list: type_specifier ID  */
#line 341 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-1].symbolInfo)->getSymbolName() + " " + (yyvsp[0].symbolInfo)->getSymbolName(), "parameter_list");
		printRuleInLog(logout, line_count, "parameter_list : type_specifier ID");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1699 "y.tab.c"
    break;

  case 17: /* parameter_list: type_specifier  */
#line 347 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[0].symbolInfo)->getSymbolName(), "parameter_list");
		printRuleInLog(logout, line_count, "parameter_list : type_specifier");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1709 "y.tab.c"
    break;

  case 18: /* compound_statement: LCURL statements RCURL  */
#line 356 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("{\n" + (yyvsp[-1].symbolInfo)->getSymbolName() + "\n}", "compound_statement");
		printRuleInLog(logout, line_count, "compound_statement : LCURL statements RCURL");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
		cout<<"print from compound statement\n";
		//symbolTable.printAllScopeTable();
		symbolTable.printAllScopeTable(logout);
		symbolTable.exitScope();
	}
#line 1723 "y.tab.c"
    break;

  case 19: /* compound_statement: LCURL RCURL  */
#line 366 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("{}", "compound_statement");
		printRuleInLog(logout, line_count, "compound_statement : LCURL RCURL");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
		cout<<"print from compound statement\n";
		//symbolTable.printAllScopeTable();
		symbolTable.printAllScopeTable(logout);
		symbolTable.exitScope();
		cout<<"print from compound statement end\n";
	}
#line 1738 "y.tab.c"
    break;

  case 20: /* var_declaration: type_specifier declaration_list SEMICOLON  */
#line 385 "1805067.y"
        {
		string varType = (yyvsp[-2].symbolInfo)->getSymbolName();
		cout<<"var_declaration : type_specifier declaration_list SEMICOLON\n";
		if (varType == "void") {
			error_count++;
			printError(errout, line_count, "Variable type cannot be void");
			printError(logout, line_count, "Variable type cannot be void");
		} else{
			vector<string> varList = split((yyvsp[-1].symbolInfo)->getSymbolName(), ',');
			for (string var: varList) {
				SymbolInfo* temp = new SymbolInfo();
				cout<<"variable list "<<var<<"\n";
				if (isArray(var)) {
					string varName = extractArrayName(var);
					temp->setSymbolName(varName);
					temp->setSymbolType("ID");
					int size = extractArraySize(var);
					ArrayData* arrayData = new ArrayData(size);
					temp->setDtype(varType);
					temp->setArrayData(arrayData);
					cout<<varName<<" "<<size<<"\n";
		 		} else {
						temp = new SymbolInfo(var, "ID");
						temp->setDtype(varType);
				}
				bool flag = symbolTable.insert(temp);
				if (!flag) {
					error_count++;
					printError(errout, line_count, "Multiple declaration of " + temp->getSymbolName());
					printError(logout, line_count, "Multiple declaration of " + temp->getSymbolName());
				} 

			}
		}
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + " " + (yyvsp[-1].symbolInfo)->getSymbolName() + ";", "var_declaration");
		(yyval.symbolInfo)->setDtype((yyvsp[-2].symbolInfo)->getSymbolName());
		printRuleInLog(logout, line_count, "var_declaration : type_specifier declaration_list SEMICOLON");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1782 "y.tab.c"
    break;

  case 21: /* type_specifier: INT  */
#line 427 "1805067.y"
        {
		(yyval.symbolInfo)= new SymbolInfo("int","INT");
		printRuleInLog(logout, line_count, "type_specifier : INT");	
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1792 "y.tab.c"
    break;

  case 22: /* type_specifier: FLOAT  */
#line 433 "1805067.y"
        {
		(yyval.symbolInfo)= new SymbolInfo("float","FLOAT");
		printRuleInLog(logout, line_count, "type_specifier : FLOAT");			
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());

	}
#line 1803 "y.tab.c"
    break;

  case 23: /* type_specifier: VOID  */
#line 440 "1805067.y"
        {
		(yyval.symbolInfo)= new SymbolInfo("void","VOID");
		printRuleInLog(logout, line_count, "type_specifier : VOID");		
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1813 "y.tab.c"
    break;

  case 24: /* declaration_list: declaration_list COMMA ID  */
#line 448 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + "," + (yyvsp[0].symbolInfo)->getSymbolName(), "declaration_list");
		printRuleInLog(logout, line_count, "declaration_list : declaration_list COMMA ID");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());

	}
#line 1824 "y.tab.c"
    break;

  case 25: /* declaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD  */
#line 455 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-5].symbolInfo)->getSymbolName() + "," + (yyvsp[-3].symbolInfo)->getSymbolName() + "[" + (yyvsp[-1].symbolInfo)->getSymbolName() + "]", "declaration_list");
		printRuleInLog(logout, line_count, "declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1834 "y.tab.c"
    break;

  case 26: /* declaration_list: ID  */
#line 461 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "declaration_list : ID");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1844 "y.tab.c"
    break;

  case 27: /* declaration_list: ID LTHIRD CONST_INT RTHIRD  */
#line 467 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-3].symbolInfo)->getSymbolName() + "[" + (yyvsp[-1].symbolInfo)->getSymbolName() + "]", "declaration_list");
		printRuleInLog(logout, line_count, "declaration_list : ID LTHIRD CONST_INT RTHIRD");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1854 "y.tab.c"
    break;

  case 28: /* statements: statement  */
#line 475 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "statements : statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1864 "y.tab.c"
    break;

  case 29: /* statements: statements statement  */
#line 481 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-1].symbolInfo)->getSymbolName() + "\n" + (yyvsp[0].symbolInfo)->getSymbolName(), "statements");
		printRuleInLog(logout, line_count, "statements : statements statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1874 "y.tab.c"
    break;

  case 30: /* statement: var_declaration  */
#line 489 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "statement : var_declaration");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1884 "y.tab.c"
    break;

  case 31: /* statement: expression_statement  */
#line 495 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "statement : expression_statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1894 "y.tab.c"
    break;

  case 32: /* $@3: %empty  */
#line 501 "1805067.y"
        {
		symbolTable.enterScope();
	}
#line 1902 "y.tab.c"
    break;

  case 33: /* statement: $@3 compound_statement  */
#line 505 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo); 	//$$ = $2;
		printRuleInLog(logout, line_count, "statement : compound_statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1912 "y.tab.c"
    break;

  case 34: /* statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement  */
#line 511 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("for (" + (yyvsp[-4].symbolInfo)->getSymbolName() + (yyvsp[-3].symbolInfo)->getSymbolName() + (yyvsp[-2].symbolInfo)->getSymbolName() + ")" + (yyvsp[0].symbolInfo)->getSymbolName(), "statement");
		printRuleInLog(logout, line_count, "statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1922 "y.tab.c"
    break;

  case 35: /* statement: IF LPAREN expression RPAREN statement  */
#line 517 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("if (" + (yyvsp[-2].symbolInfo)->getSymbolName() + ")" + (yyvsp[0].symbolInfo)->getSymbolName(), "statement");
		printRuleInLog(logout, line_count, "statement : IF LPAREN expression RPAREN statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1932 "y.tab.c"
    break;

  case 36: /* statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 523 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("if (" + (yyvsp[-4].symbolInfo)->getSymbolName() + ")" + (yyvsp[-2].symbolInfo)->getSymbolName() + "\nelse\n" + (yyvsp[0].symbolInfo)->getSymbolName(), "statement");
		printRuleInLog(logout, line_count, "statement : IF LPAREN expression RPAREN statement ELSE statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1942 "y.tab.c"
    break;

  case 37: /* statement: WHILE LPAREN expression RPAREN statement  */
#line 529 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("while (" + (yyvsp[-2].symbolInfo)->getSymbolName() + ")" + (yyvsp[0].symbolInfo)->getSymbolName(), "statement");
		printRuleInLog(logout, line_count, "statement : WHILE LPAREN expression RPAREN statement");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1952 "y.tab.c"
    break;

  case 38: /* statement: PRINTLN LPAREN ID RPAREN SEMICOLON  */
#line 535 "1805067.y"
        {
		SymbolInfo* temp = symbolTable.lookupAll((yyvsp[-2].symbolInfo)->getSymbolName());
		if(temp == nullptr) {
			error_count++;
			printError(errout, line_count, "Undeclared variable " + (yyvsp[-2].symbolInfo)->getSymbolName());
			printError(logout, line_count, "Undeclared variable " + (yyvsp[-2].symbolInfo)->getSymbolName());
		}
		(yyval.symbolInfo) = new SymbolInfo("printf(" + (yyvsp[-2].symbolInfo)->getSymbolName() + ");", "statement");
		printRuleInLog(logout, line_count, "statement : PRINTLN LPAREN ID RPAREN SEMICOLON");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1968 "y.tab.c"
    break;

  case 39: /* statement: RETURN expression SEMICOLON  */
#line 547 "1805067.y"
        {
		if ((yyvsp[-1].symbolInfo)->getDtype() == "void") {
			error_count++;
			printError(errout,line_count, "void function used in expression");
			printError(logout,line_count, "void function used in expression");
		}
		(yyval.symbolInfo) = new SymbolInfo("return " + (yyvsp[-1].symbolInfo)->getSymbolName() + ";", "statement");
		(yyval.symbolInfo)->setDtype((yyvsp[-1].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "statement : RETURN expression SEMICOLON");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 1984 "y.tab.c"
    break;

  case 40: /* expression_statement: SEMICOLON  */
#line 561 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo(";", "expression_statement");
		printRuleInLog(logout, line_count, "expression_statement : SEMICOLON");
		printCodeInLog(logout, ";");
	}
#line 1994 "y.tab.c"
    break;

  case 41: /* expression_statement: expression SEMICOLON  */
#line 567 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-1].symbolInfo)->getSymbolName() + ";", "expression_statement");
		(yyval.symbolInfo)->setDtype((yyvsp[-1].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "expression_statement : expression SEMICOLON");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2005 "y.tab.c"
    break;

  case 42: /* variable: ID  */
#line 576 "1805067.y"
        {
		cout<<line_count<<" variable : ID "<<(yyvsp[0].symbolInfo)->getSymbolName()<<"\n";
		SymbolInfo* temp = symbolTable.lookupAll((yyvsp[0].symbolInfo)->getSymbolName());
		if(temp == nullptr) {
			error_count++;
			printError(errout, line_count, "Undeclared variable " + (yyvsp[0].symbolInfo)->getSymbolName());
			printError(logout, line_count, "Undeclared variable " + (yyvsp[0].symbolInfo)->getSymbolName());
		} else {
			if (temp->getArrayData() == nullptr) { // if it is not an array do nothing
				
			} else {	// if it is an array
				error_count++;
				printError(errout, line_count, "Type mismatch, " + temp->getSymbolName() + " is an array");
				printError(logout, line_count, "Type mismatch, " + temp->getSymbolName() + " is an array");
			}
		}
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		(yyval.symbolInfo)->setDtype((yyvsp[0].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "variable : ID");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
		
	}
#line 2032 "y.tab.c"
    break;

  case 43: /* variable: ID LTHIRD expression RTHIRD  */
#line 599 "1805067.y"
        {
		cout<<line_count<<" variable: ID LTHIRD expression RTHIRD "<<(yyvsp[-3].symbolInfo)->getSymbolName()<<"\n";
		SymbolInfo* temp = symbolTable.lookupAll((yyvsp[-3].symbolInfo)->getSymbolName());
		if(temp == nullptr) {
			error_count++;
			printError(errout, line_count, "Undeclared variable " + (yyvsp[-3].symbolInfo)->getSymbolName());
			printError(logout, line_count, "Undeclared variable " + (yyvsp[-3].symbolInfo)->getSymbolName());
		} else {
			if (temp->getArrayData() == nullptr) { // if it is not an array
				cout<<line_count<<" "<< temp->getSymbolName()<<" not an array\n";
				error_count++;
				printError(errout, line_count, "Type mismatch, " + temp->getSymbolName() + " is not an array");
				printError(logout, line_count, "Type mismatch, " + temp->getSymbolName() + " is not an array");
			} else {	// if it is an array
				if ((yyvsp[-1].symbolInfo)->getDtype() != "int") {
					error_count++;
					printError(errout, line_count, "Expression inside third brackets not an integer");
					printError(logout, line_count, "Expression inside third brackets not an integer");
				}
			}
		}
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-3].symbolInfo)->getSymbolName() + "[" + (yyvsp[-1].symbolInfo)->getSymbolName() + "]","variable");
		(yyval.symbolInfo)->setDtype((yyvsp[-3].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "variable : ID LTHIRD expression RTHIRD");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2063 "y.tab.c"
    break;

  case 44: /* expression: logic_expression  */
#line 628 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "expression : logic_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2073 "y.tab.c"
    break;

  case 45: /* expression: variable ASSIGNOP logic_expression  */
#line 634 "1805067.y"
        {
		string left_operand = (yyvsp[-2].symbolInfo)->getDtype();
		string right_operand = (yyvsp[0].symbolInfo)->getDtype();
		if((yyvsp[-2].symbolInfo)->getDtype()=="" || (yyvsp[0].symbolInfo)->getDtype()=="") {
			
		} else if(left_operand != right_operand) {
            if((yyvsp[-2].symbolInfo)->getDtype()=="void" || (yyvsp[0].symbolInfo)->getDtype()=="void") {
				//DO NOTHING, AS IT HAS BEEN HANDLED
			} else if(left_operand == "float" && right_operand == "int") {
					
			} else {
				error_count++;
				printError(errout, line_count,  "Type mismatch");
				printError(logout, line_count,  "Type mismatch");
			}
        }
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + "=" + (yyvsp[0].symbolInfo)->getSymbolName(), "expression");
		(yyval.symbolInfo)->setDtype((yyvsp[-2].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "expression : variable ASSIGNOP logic_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2099 "y.tab.c"
    break;

  case 46: /* logic_expression: rel_expression  */
#line 658 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "logic_expression : rel_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());

	}
#line 2110 "y.tab.c"
    break;

  case 47: /* logic_expression: rel_expression LOGICOP rel_expression  */
#line 665 "1805067.y"
        {
		string left_operand = (yyvsp[-2].symbolInfo)->getDtype();
		string right_operand = (yyvsp[0].symbolInfo)->getDtype();
		if(left_operand != "int" || right_operand != "int") {
            error_count++;
            printError(errout, line_count, "Non-Integer operand on modulus operator");
			printError(logout, line_count, "Non-Integer operand on modulus operator");
        } 
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + (yyvsp[-1].symbolInfo)->getSymbolName() + (yyvsp[0].symbolInfo)->getSymbolName(), "logic_expression");
		(yyval.symbolInfo)->setDtype("int");
		printRuleInLog(logout, line_count, "logic_expression : rel_expression LOGICOP rel_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2128 "y.tab.c"
    break;

  case 48: /* rel_expression: simple_expression  */
#line 681 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "rel_expression : simple_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2138 "y.tab.c"
    break;

  case 49: /* rel_expression: simple_expression RELOP simple_expression  */
#line 687 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + (yyvsp[-1].symbolInfo)->getSymbolName() + (yyvsp[0].symbolInfo)->getSymbolName(), "rel_expression");
		(yyval.symbolInfo)->setDtype("int");
		printRuleInLog(logout, line_count, "rel_expression : simple_expression RELOP simple_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2149 "y.tab.c"
    break;

  case 50: /* simple_expression: term  */
#line 696 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "simple_expression : term");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2159 "y.tab.c"
    break;

  case 51: /* simple_expression: simple_expression ADDOP term  */
#line 702 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + (yyvsp[-1].symbolInfo)->getSymbolName() + (yyvsp[0].symbolInfo)->getSymbolName(), "simple_expression");
		if (((yyvsp[-2].symbolInfo)->getDtype() == "float") || ((yyvsp[0].symbolInfo)->getDtype() == "float")) {
			(yyval.symbolInfo)->setDtype("float");
		} else {
			(yyval.symbolInfo)->setDtype("int");
		}	
		printRuleInLog(logout, line_count, "simple_expression : simple_expression ADDOP term");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2174 "y.tab.c"
    break;

  case 52: /* term: unary_expression  */
#line 715 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "term : unary_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2184 "y.tab.c"
    break;

  case 53: /* term: term MULOP unary_expression  */
#line 721 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() + (yyvsp[-1].symbolInfo)->getSymbolName() + (yyvsp[0].symbolInfo)->getSymbolName(), "term");
		string left_operand = (yyvsp[-2].symbolInfo)->getDtype();
		string right_operand = (yyvsp[0].symbolInfo)->getDtype();
		if((yyvsp[-1].symbolInfo)->getSymbolName() == "%") {
            if((yyvsp[0].symbolInfo)->getSymbolName() == "0") {
				error_count++;
                printError(errout, line_count, "Modulus by Zero");
				printError(logout, line_count, "Modulus by Zero");
            } else if(left_operand != "int" || right_operand != "int") {
                error_count++;
                printError(errout, line_count, "Non-Integer operand on modulus operator");
				printError(logout, line_count, "Non-Integer operand on modulus operator");
            } 
			(yyval.symbolInfo)->setDtype("int");
        } else {  							// MULOP = * or MULOP = /
			if ((yyvsp[-1].symbolInfo)->getSymbolName() == "/") {
				if ((yyvsp[0].symbolInfo)->getSymbolName() == "0") {
					error_count++;
					printError(errout, line_count, "Division by Zero");
					printError(logout, line_count, "Division by Zero");
				}
			}

			if (left_operand == "float" || right_operand == "float") {
				(yyval.symbolInfo)->setDtype("float");
			} else {
				(yyval.symbolInfo)->setDtype("int");
			}												

		}
		
		printRuleInLog(logout, line_count, "term : term MULOP unary_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2224 "y.tab.c"
    break;

  case 54: /* unary_expression: ADDOP unary_expression  */
#line 759 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-1].symbolInfo)->getSymbolName() + (yyvsp[0].symbolInfo)->getSymbolName(), "unary_expression");
		(yyval.symbolInfo)->setDtype((yyvsp[0].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "unary_expression : ADDOP unary_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2235 "y.tab.c"
    break;

  case 55: /* unary_expression: NOT unary_expression  */
#line 766 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("!" + (yyvsp[0].symbolInfo)->getSymbolName(), "unary_expression");
		(yyval.symbolInfo)->setDtype("int");
		printRuleInLog(logout, line_count, "unary_expression : NOT unary_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2246 "y.tab.c"
    break;

  case 56: /* unary_expression: factor  */
#line 773 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "unary_expression : factor");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2256 "y.tab.c"
    break;

  case 57: /* factor: variable  */
#line 781 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "factor : variable");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2266 "y.tab.c"
    break;

  case 58: /* factor: ID LPAREN argument_list RPAREN  */
#line 787 "1805067.y"
        {
		SymbolInfo* func_called;
		func_called = symbolTable.lookupAll((yyvsp[-3].symbolInfo)->getSymbolName());
		if (func_called == nullptr) {
			error_count++;
			printError(errout, line_count, "Undeclared function " + (yyvsp[-3].symbolInfo)->getSymbolName());
			printError(logout, line_count, "Undeclared function " + (yyvsp[-3].symbolInfo)->getSymbolName());
		} else {
			if (func_called->getFunctionData() == nullptr) {
				error_count++;
				printError(errout, line_count, func_called->getSymbolName() + " is not a function");
				printError(logout, line_count, func_called->getSymbolName() + " is not a function");
			} else {	
				vector<string> arg_dtype_list = split((yyvsp[-1].symbolInfo)->getDtype(), ',');
				FunctionData* func_data = func_called->getFunctionData();
				vector<Parameter> parameter_list = func_data->getParameterList();
				if (func_called->getDtype() == "void") {
					error_count++;
					printError(errout,line_count, "Void function used in expression");
					printError(logout,line_count, "Void function used in expression");
				} else if (parameter_list.size() != arg_dtype_list.size()) {
					error_count++;
					printError(errout, line_count, "Total number of arguments mismatch with declaration in function " + func_called->getSymbolName());
					printError(logout, line_count, "Total number of arguments mismatch with declaration in function " + func_called->getSymbolName());
				} else {
					cout<<line_count<<" debug "<<parameter_list.size()<<" "<<arg_dtype_list.size()<<endl;
					for (int i = 0; i < arg_dtype_list.size(); i++) {
						if (arg_dtype_list[i] != parameter_list[i].getParameterType()) {
							cout<<line_count<<" debug "<<parameter_list[i].getParameterType()<<" "<<arg_dtype_list[i]<<endl;
							if(parameter_list[i].getParameterType() == "float" && arg_dtype_list[i] == "int") {
								cout<<line_count<<" debug if";
							} else {
								error_count++;
								cout<<line_count<<" debug else";
								printError(errout, line_count,  to_string(i+1) + "th argument mismatch in function " + func_called->getSymbolName());
								printError(logout, line_count, 	to_string(i+1) + "th argument mismatch in function " + func_called->getSymbolName());
							}
						}
					}
				}
			}
		}
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-3].symbolInfo)->getSymbolName() + "(" + (yyvsp[-1].symbolInfo)->getSymbolName() + ")", "factor");
		(yyval.symbolInfo)->setDtype((yyvsp[-3].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "factor : ID LPAREN argument_list RPAREN");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());

	}
#line 2319 "y.tab.c"
    break;

  case 59: /* factor: LPAREN expression RPAREN  */
#line 836 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("(" + (yyvsp[-1].symbolInfo)->getSymbolName() + ")", (yyvsp[-1].symbolInfo)->getSymbolType());
		printRuleInLog(logout, line_count, "factor : LPAREN expression RPAREN");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2329 "y.tab.c"
    break;

  case 60: /* factor: CONST_INT  */
#line 842 "1805067.y"
        {
		(yyval.symbolInfo) = yylval.symbolInfo;
		(yyval.symbolInfo)->setDtype("int");
		printRuleInLog(logout, line_count, "factor : CONST_INT");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2340 "y.tab.c"
    break;

  case 61: /* factor: CONST_FLOAT  */
#line 849 "1805067.y"
        {
		(yyval.symbolInfo) = yylval.symbolInfo;
		(yyval.symbolInfo)->setDtype("float");
		printRuleInLog(logout, line_count, "factor : CONST_FLOAT");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2351 "y.tab.c"
    break;

  case 62: /* factor: variable INCOP  */
#line 856 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-1].symbolInfo)->getSymbolName() + "++", (yyvsp[-1].symbolInfo)->getSymbolType());
		printRuleInLog(logout, line_count, "factor : variable INCOP");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2361 "y.tab.c"
    break;

  case 63: /* factor: variable DECOP  */
#line 862 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-1].symbolInfo)->getSymbolName() + "--", (yyvsp[-1].symbolInfo)->getSymbolType());
		printRuleInLog(logout, line_count, "factor : variable DECOP");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2371 "y.tab.c"
    break;

  case 64: /* argument_list: arguments  */
#line 870 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "argument_list : arguments");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2381 "y.tab.c"
    break;

  case 65: /* argument_list: %empty  */
#line 876 "1805067.y"
        {
		(yyval.symbolInfo) = new SymbolInfo("", "void");
		printRuleInLog(logout, line_count, "argument_list : ");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2391 "y.tab.c"
    break;

  case 66: /* arguments: arguments COMMA logic_expression  */
#line 884 "1805067.y"
        { 
		(yyval.symbolInfo) = new SymbolInfo((yyvsp[-2].symbolInfo)->getSymbolName() +"," + (yyvsp[0].symbolInfo)->getSymbolName(), "arguments");
		(yyval.symbolInfo)->setDtype((yyvsp[-2].symbolInfo)->getDtype() + "," + (yyvsp[0].symbolInfo)->getDtype());
		printRuleInLog(logout, line_count, "arguments : arguments COMMA logic_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2402 "y.tab.c"
    break;

  case 67: /* arguments: logic_expression  */
#line 891 "1805067.y"
        {
		(yyval.symbolInfo) = (yyvsp[0].symbolInfo);
		printRuleInLog(logout, line_count, "arguments : logic_expression");
		printCodeInLog(logout, (yyval.symbolInfo)->getSymbolName());
	}
#line 2412 "y.tab.c"
    break;


#line 2416 "y.tab.c"

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

#line 898 "1805067.y"

int main(int argc,char *argv[])
{

	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		exit(1);
	}

	logout.open("log.txt");
	errout.open("error.txt");
	yyin=fp;
	yyparse();
	symbolTable.printAllScopeTable(logout);
	logout<<"Total lines: "<<line_count<<"\n";
	logout<<"Total errors: "<<error_count<<"\n";
	logout.close();
	errout.close();
	
	return 0;
}

