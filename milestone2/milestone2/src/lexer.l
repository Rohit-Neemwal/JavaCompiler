DI                  [0-9]|[0-9][0-9_]*[0-9]
H                [0-9a-fA-F]|[0-9a-fA-F][0-9a-fA-F_]*[0-9a-fA-F]
O              [0-7]|[0-7][0-7_]*[0-7]
BinaryDigits             [0-1]|[0-1][0-1_]*[0-1]
Exp                      [eE][+-]?{DI}

ES           "\\b"|"\\s"|"\\t"|"\\n"|"\\f"|"\\r"|"\\\""|"\\\'"|"\\\\"|"\\"[0-3]?[0-7]{1,2}
UIC          "\\"[u]+[0-9a-fA-F]{4}



%{
	#include <bits/stdc++.h>
    // #include "parser.tab.h"
    #include "grammer.tab.h"
    #include "table.h"
    #define HANDLE(X) return X;

    // #define CONCATENATE(X) \
    //     const char* s1 = #X "("; \
    //     const char* s2 = ")"; \
    //     size_t new_len = strlen(yytext) + strlen(s1) + strlen(s2); \
    //     char* new_ch = (char*)malloc(new_len + 1); \
    //     strcpy(new_ch, s1); \
    //     strcat(new_ch, yytext); \
    //     strcat(new_ch, s2); \
    //     yylval.ST.sym = strdup(new_ch); \
    //     free(new_ch); \



%}

%option noyywrap
%option yylineno

%%

[ \t\f\n\r]+                              { /* whitespaces */ }

\/\*([^*]|\*+[^/])*\*+\/                  { ;/* Multiline Comment  *? make it lazy to add as less characters as possible */ }

\/\/[^\r\n]*                              { /* Singleline Comment using the definition of InputCharacter */}


"continue"                       {  yylval.ST.sym = strdup(yytext); HANDLE(CONTINUE) /* Reserved Keywords */ }
"for"                            {  yylval.ST.sym = strdup(yytext); HANDLE(FOR) /* Reserved Keywords */ }   
"assert"                         {  yylval.ST.sym = strdup(yytext); HANDLE(ASSERT) /* Reserved Keywords */ }         
"if"                             {  yylval.ST.sym = strdup(yytext); HANDLE(IF) /* Reserved Keywords */ }       
"package"                        {  yylval.ST.sym = strdup(yytext); HANDLE(PACKAGE) /* Reserved Keywords */ }        
"synchronized"                   {  yylval.ST.sym = strdup(yytext); HANDLE(SYNCRO) /* Reserved Keywords */ }            
"boolean"                        {  yylval.ST.sym = strdup(yytext); HANDLE(BOOLEAN) /* Reserved Keywords */ }        
"do"                             {  yylval.ST.sym = strdup(yytext); HANDLE(DO) /* Reserved Keywords */ }           
"private"                        {  yylval.ST.sym = strdup(yytext); HANDLE(PRIVATE) /* Reserved Keywords */ }           
"this"                           {  yylval.ST.sym = strdup(yytext); HANDLE(THIS) /* Reserved Keywords */ }             
"break"                          {  yylval.ST.sym = strdup(yytext); HANDLE(BREAK) /* Reserved Keywords */ }               
"double"                         {  yylval.ST.sym = strdup(yytext); HANDLE(DOUBLE) /* Reserved Keywords */ }               
"implements"                     {  yylval.ST.sym = strdup(yytext); HANDLE(IMPLEMENTS) /* Reserved Keywords */ }                 
"throw"                          {  yylval.ST.sym = strdup(yytext); HANDLE(THROW) /* Reserved Keywords */ }            
"else"                           {  yylval.ST.sym = strdup(yytext); HANDLE(ELSE) /* Reserved Keywords */ }           
"public"                         {  yylval.ST.sym = strdup(yytext); HANDLE(PUBLIC) /* Reserved Keywords */ }               
"throws"                         {  yylval.ST.sym = strdup(yytext); HANDLE(THROWS) /* Reserved Keywords */ }                 
"enum"                           {  yylval.ST.sym = strdup(yytext); HANDLE(ENUM) /* Reserved Keywords */ }                 
"return"                         {  yylval.ST.sym = strdup(yytext); HANDLE(RETURN) /* Reserved Keywords */ }                         
"extends"                        {  yylval.ST.sym = strdup(yytext); HANDLE(EXTENDS) /* Reserved Keywords */ }               
"int"                            {  yylval.ST.sym = strdup(yytext); HANDLE(INT) /* Reserved Keywords */ }             
"final"                          {  yylval.ST.sym = strdup(yytext); HANDLE(FINAL) /* Reserved Keywords */ }              
"static"                         {  yylval.ST.sym = strdup(yytext); HANDLE(STATIC) /* Reserved Keywords */ }                      
"void"                           {  yylval.ST.sym = strdup(yytext); HANDLE(VOID) /* Reserved Keywords */ }                                         
"class"                          {  yylval.ST.sym = strdup(yytext); HANDLE(CLASS) /* Reserved Keywords */ }                      
"long"                           {  yylval.ST.sym = strdup(yytext); HANDLE(LONG) /* Reserved Keywords */ }                       
"float"                          {  yylval.ST.sym = strdup(yytext); HANDLE(FLOAT) /* Reserved Keywords */ }                        
"super"                          {  yylval.ST.sym = strdup(yytext); HANDLE(SUPER) /* Reserved Keywords */ }                      
"while"                          {  yylval.ST.sym = strdup(yytext); HANDLE(WHILE) /* Reserved Keywords */ }                                               
"new"                            {  yylval.ST.sym = strdup(yytext); HANDLE(NEW) /* Reserved Keywords */ }  
"permits"                        {  yylval.ST.sym = strdup(yytext); HANDLE(PERMITS) /* Contextual Keyword */ }   
"var"                            {  yylval.ST.sym = strdup(yytext); HANDLE(VAR) /* Contextual Keyword */ }      
"record"                         {  yylval.ST.sym = strdup(yytext); HANDLE(RECORD) /* Contextual Keyword */ }         
"yield"                          {  yylval.ST.sym = strdup(yytext); HANDLE(YIELD) /* Contextual Keyword */ }    


"char"                          {  yylval.ST.sym = strdup(yytext); HANDLE(CHAR) /* Contextual Keyword */ } 





(0|[1-9]({DI}?|[_]+{DI}))([lL]?)                             {  yylval.ST.sym = strdup(yytext); HANDLE(IntegerLiteral) /* Decimal interger literal */ }
(0[xX]{H})([lL]?)                                            {  yylval.ST.sym = strdup(yytext); HANDLE(IntegerLiteral) /* Hex interger literal */ }
(0({O}|[_]+{O}))([lL]?)                                      {  yylval.ST.sym = strdup(yytext); HANDLE(IntegerLiteral) /* Octal interger literal */ }
(0[bB]{BinaryDigits})([lL]?)                                 {  yylval.ST.sym = strdup(yytext); HANDLE(IntegerLiteral) /* Binary interger literal */ }

{DI}[.]{DI}?{Exp}?[fFdD]?                                    {  yylval.ST.sym = strdup(yytext); HANDLE(FloatingPointLiteral) /* Decimal float literal */ }                                
[.]{DI}{Exp}?[fFdD]?                                         {  yylval.ST.sym = strdup(yytext); HANDLE(FloatingPointLiteral) /* Decimal float literal */ }
{DI}{Exp}[fFdD]?                                             {  yylval.ST.sym = strdup(yytext); HANDLE(FloatingPointLiteral) /* Decimal float literal */ }
{DI}{Exp}?[fFdD]                                             {  yylval.ST.sym = strdup(yytext); HANDLE(FloatingPointLiteral) /* Decimal float literal */ }

0[xX]{H}[.]?[pP][+-]?{DI}[fFdD]?                             {  yylval.ST.sym = strdup(yytext); HANDLE(FloatingPointLiteral) /* Hex float literal */ } 
0[xX]{H}?[.]{H}[pP][+-]?{DI}[fFdD]?                          {  yylval.ST.sym = strdup(yytext); HANDLE(FloatingPointLiteral) /* Hex float literal */ } 

"true"|"false"                                               {  yylval.ST.sym = strdup(yytext); HANDLE(BooleanLiteral) /* Boolean literal */ } 

"\'"({ES}|{UIC}|[^\'\\\n\r])"\'"                             {  yylval.ST.sym = strdup(yytext); HANDLE(CharacterLiteral) /* Character literal */ }
"\""({ES}|{UIC}|[^\"\\\n\r])*"\""                            {  yylval.ST.sym = strdup(yytext); HANDLE(StringLiteral) /* String literal */ } 

"\"\"\""[ \t\f]*(\r\n|[\r\n])({ES}|{UIC}|[^\\])*"\"\"\""     {  yylval.ST.sym = strdup(yytext); HANDLE(TextBlock) /* TextBlock */ }

"null"                                                       {  yylval.ST.sym = strdup(yytext); HANDLE(NullLiteral) /* Null literal */ }







"..."                                                         { yylval.ST.sym = strdup(yytext); HANDLE(DOTDOTDOT)}
"=="                                                          { yylval.ST.sym = strdup(yytext); HANDLE(EQ)}
">="                                                          { yylval.ST.sym = strdup(yytext); HANDLE(GQ)}
"<="                                                          { yylval.ST.sym = strdup(yytext); HANDLE(LQ)}
"!="                                                          { yylval.ST.sym = strdup(yytext); HANDLE(NE)}
"&&"                                                          { yylval.ST.sym = strdup(yytext); HANDLE(AND)}
"||"                                                          { yylval.ST.sym = strdup(yytext); HANDLE(OR) /* OPERATORS END */}
"++"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(INCRE) /*OPERATORS BEGIN*/}
"--"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(DECRE)}
"<<"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(LL)}
">>>"                                                          { yylval.ST.sym = strdup(yytext); HANDLE(GGG) /*OPERATORS BEGIN*/}
">>"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(GG) /* OPERATORS END */}



"+="                                                           { yylval.ST.sym = strdup(yytext); HANDLE(ASSIGN)}
"-="                                                           { yylval.ST.sym = strdup(yytext); HANDLE(ASSIGN)}
"*="                                                           { yylval.ST.sym = strdup(yytext); HANDLE(ASSIGN)}
"/="                                                           { yylval.ST.sym = strdup(yytext); HANDLE(ASSIGN)}
"&="                                                           { yylval.ST.sym = strdup(yytext); HANDLE(ASSIGN)}


"("                                                           { yylval.ST.sym = strdup(yytext); HANDLE(OPEN) /*SEPARRATORS BEGIN*/}
")"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(CLOSE)}
"{"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(OBRAC)}
"}"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(CBRAC)}
"["                                                           { yylval.ST.sym = strdup(yytext); HANDLE(SQOPEN)}
"]"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(SQCLOSE)}
";"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(SEMICOLON)}
","                                                           { yylval.ST.sym = strdup(yytext); HANDLE(COMMA)}
"."                                                           { yylval.ST.sym = strdup(yytext); HANDLE(DOT)}
"="                                                           { yylval.ST.sym = strdup(yytext); HANDLE(EQUAL) /*OPERATORS BEGIN*/}
">"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(GT)}
"<"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(LT)}
"!"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(NOT)}
"~"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(NEG)}
"?"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(QUES)}
":"                                                           { yylval.ST.sym = strdup(yytext); HANDLE(COLON)}



"+"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(PLUS)}
"-"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(MINUS)}
"*"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(MULT)}
"/"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(DIV)}
"&"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(BITAND)}
"|"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(BITOR)}
"^"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(BITCAP)}
"%"                                                            { yylval.ST.sym = strdup(yytext); HANDLE(PERCENT)}



[a-zA-Z$_][a-zA-Z0-9$_]*                                      {  yylval.ST.sym = strdup(yytext); HANDLE(Identifier) }







.                       { printf("Line %d : Error: Illegal character \'%c\' \n", yylineno, yytext[0]);}

%%