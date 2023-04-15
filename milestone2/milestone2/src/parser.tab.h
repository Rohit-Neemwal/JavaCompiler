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


#line 160 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
