DI                  [0-9]|[0-9][0-9_]*[0-9]
H                [0-9a-fA-F]|[0-9a-fA-F][0-9a-fA-F_]*[0-9a-fA-F]
O              [0-7]|[0-7][0-7_]*[0-7]
BinaryDigits             [0-1]|[0-1][0-1_]*[0-1]
Exp                      [eE][+-]?{DI}

ES           "\\b"|"\\s"|"\\t"|"\\n"|"\\f"|"\\r"|"\\\""|"\\\'"|"\\\\"|"\\"[0-3]?[0-7]{1,2}
UIC          "\\"[u]+[0-9a-fA-F]{4}



%{
	#include <bits/stdc++.h>
    #include "parser.tab.h"
    #define HANDLE(X) return X;

    #define CONCATENATE(X) \
        const char* s1 = #X "("; \
        const char* s2 = ")"; \
        size_t new_len = strlen(yytext) + strlen(s1) + strlen(s2); \
        char* new_ch = (char*)malloc(new_len + 1); \
        strcpy(new_ch, s1); \
        strcat(new_ch, yytext); \
        strcat(new_ch, s2); \
        yylval.ST.sym = strdup(new_ch); \
        free(new_ch); \



%}

%option noyywrap
%option yylineno

%%

[ \t\f\n\r]+                              { /* whitespaces */ }

\/\*([^*]|\*+[^/])*\*+\/                  { ;/* Multiline Comment  *? make it lazy to add as less characters as possible */ }

\/\/[^\r\n]*                              { /* Singleline Comment using the definition of InputCharacter */}


"continue"                       { CONCATENATE(Keyword) HANDLE(CONTINUE) /* Reserved Keywords */ }
"for"                            { CONCATENATE(Keyword) HANDLE(FOR) /* Reserved Keywords */ }   
"assert"                         { CONCATENATE(Keyword) HANDLE(ASSERT) /* Reserved Keywords */ }         
"if"                             { CONCATENATE(Keyword) HANDLE(IF) /* Reserved Keywords */ }       
"package"                        { CONCATENATE(Keyword) HANDLE(PACKAGE) /* Reserved Keywords */ }        
"synchronized"                   { CONCATENATE(Keyword) HANDLE(SYNCRO) /* Reserved Keywords */ }            
"boolean"                        { CONCATENATE(Keyword) HANDLE(BOOLEAN) /* Reserved Keywords */ }        
"do"                             { CONCATENATE(Keyword) HANDLE(DO) /* Reserved Keywords */ }           
"private"                        { CONCATENATE(Keyword) HANDLE(PRIVATE) /* Reserved Keywords */ }           
"this"                           { CONCATENATE(Keyword) HANDLE(THIS) /* Reserved Keywords */ }             
"break"                          { CONCATENATE(Keyword) HANDLE(BREAK) /* Reserved Keywords */ }               
"double"                         { CONCATENATE(Keyword) HANDLE(DOUBLE) /* Reserved Keywords */ }               
"implements"                     { CONCATENATE(Keyword) HANDLE(IMPLEMENTS) /* Reserved Keywords */ }                 
"throw"                          { CONCATENATE(Keyword) HANDLE(THROW) /* Reserved Keywords */ }            
"else"                           { CONCATENATE(Keyword) HANDLE(ELSE) /* Reserved Keywords */ }           
"public"                         { CONCATENATE(Keyword) HANDLE(PUBLIC) /* Reserved Keywords */ }               
"throws"                         { CONCATENATE(Keyword) HANDLE(THROWS) /* Reserved Keywords */ }                 
"enum"                           { CONCATENATE(Keyword) HANDLE(ENUM) /* Reserved Keywords */ }                 
"return"                         { CONCATENATE(Keyword) HANDLE(RETURN) /* Reserved Keywords */ }                         
"extends"                        { CONCATENATE(Keyword) HANDLE(EXTENDS) /* Reserved Keywords */ }               
"int"                            { CONCATENATE(Keyword) HANDLE(INT) /* Reserved Keywords */ }             
"final"                          { CONCATENATE(Keyword) HANDLE(FINAL) /* Reserved Keywords */ }              
"static"                         { CONCATENATE(Keyword) HANDLE(STATIC) /* Reserved Keywords */ }                      
"void"                           { CONCATENATE(Keyword) HANDLE(VOID) /* Reserved Keywords */ }                                         
"class"                          { CONCATENATE(Keyword) HANDLE(CLASS) /* Reserved Keywords */ }                      
"long"                           { CONCATENATE(Keyword) HANDLE(LONG) /* Reserved Keywords */ }                       
"float"                          { CONCATENATE(Keyword) HANDLE(FLOAT) /* Reserved Keywords */ }                        
"super"                          { CONCATENATE(Keyword) HANDLE(SUPER) /* Reserved Keywords */ }                      
"while"                          { CONCATENATE(Keyword) HANDLE(WHILE) /* Reserved Keywords */ }                                               
"new"                            { CONCATENATE(Keyword) HANDLE(NEW) /* Reserved Keywords */ }  
"permits"                        { CONCATENATE(Keyword) HANDLE(PERMITS) /* Contextual Keyword */ }   
"var"                            { CONCATENATE(Keyword) HANDLE(VAR) /* Contextual Keyword */ }      
"record"                         { CONCATENATE(Keyword) HANDLE(RECORD) /* Contextual Keyword */ }         
"yield"                          { CONCATENATE(Keyword) HANDLE(YIELD) /* Contextual Keyword */ }           





(0|[1-9]({DI}?|[_]+{DI}))([lL]?)                             { CONCATENATE(Literal) HANDLE(IntegerLiteral) /* Decimal interger literal */ }
(0[xX]{H})([lL]?)                                            { CONCATENATE(Literal) HANDLE(IntegerLiteral) /* Hex interger literal */ }
(0({O}|[_]+{O}))([lL]?)                                      { CONCATENATE(Literal) HANDLE(IntegerLiteral) /* Octal interger literal */ }
(0[bB]{BinaryDigits})([lL]?)                                 { CONCATENATE(Literal) HANDLE(IntegerLiteral) /* Binary interger literal */ }

{DI}[.]{DI}?{Exp}?[fFdD]?                                    { CONCATENATE(Literal) HANDLE(FloatingPointLiteral) /* Decimal float literal */ }                                
[.]{DI}{Exp}?[fFdD]?                                         { CONCATENATE(Literal) HANDLE(FloatingPointLiteral) /* Decimal float literal */ }
{DI}{Exp}[fFdD]?                                             { CONCATENATE(Literal) HANDLE(FloatingPointLiteral) /* Decimal float literal */ }
{DI}{Exp}?[fFdD]                                             { CONCATENATE(Literal) HANDLE(FloatingPointLiteral) /* Decimal float literal */ }

0[xX]{H}[.]?[pP][+-]?{DI}[fFdD]?                             { CONCATENATE(Literal) HANDLE(FloatingPointLiteral) /* Hex float literal */ } 
0[xX]{H}?[.]{H}[pP][+-]?{DI}[fFdD]?                          { CONCATENATE(Literal) HANDLE(FloatingPointLiteral) /* Hex float literal */ } 

"true"|"false"                                               { CONCATENATE(Literal) HANDLE(BooleanLiteral) /* Boolean literal */ } 

"\'"({ES}|{UIC}|[^\'\\\n\r])"\'"                             { CONCATENATE(Literal) HANDLE(CharacterLiteral) /* Character literal */ }
"\""({ES}|{UIC}|[^\"\\\n\r])*"\""                            { CONCATENATE(Literal) HANDLE(StringLiteral) /* String literal */ } 

"\"\"\""[ \t\f]*(\r\n|[\r\n])({ES}|{UIC}|[^\\])*"\"\"\""     { CONCATENATE(Literal) HANDLE(TextBlock) /* TextBlock */ }

"null"                                                       { CONCATENATE(Literal) HANDLE(NullLiteral) /* Null literal */ }







"..."                                                         {CONCATENATE(OP) HANDLE(DOTDOTDOT)}
"=="                                                          {CONCATENATE(OP) HANDLE(EQ)}
">="                                                          {CONCATENATE(OP) HANDLE(GQ)}
"<="                                                          {CONCATENATE(OP) HANDLE(LQ)}
"!="                                                          {CONCATENATE(OP) HANDLE(NE)}
"&&"                                                          {CONCATENATE(OP) HANDLE(AND)}
"||"                                                          {CONCATENATE(OP) HANDLE(OR) /* OPERATORS END */}
"++"                                                           {CONCATENATE(OP) HANDLE(INCRE) /*OPERATORS BEGIN*/}
"--"                                                           {CONCATENATE(OP) HANDLE(DECRE)}
"<<"                                                           {CONCATENATE(OP) HANDLE(LL)}
">>>"                                                          {CONCATENATE(OP) HANDLE(GGG) /*OPERATORS BEGIN*/}
">>"                                                           {CONCATENATE(OP) HANDLE(GG) /* OPERATORS END */}



"+="                                                           {CONCATENATE(OP) HANDLE(ASSIGN)}
"-="                                                           {CONCATENATE(OP) HANDLE(ASSIGN)}
"*="                                                           {CONCATENATE(OP) HANDLE(ASSIGN)}
"/="                                                           {CONCATENATE(OP) HANDLE(ASSIGN)}
"&="                                                           {CONCATENATE(OP) HANDLE(ASSIGN)}


"("                                                           {CONCATENATE(Separator) HANDLE(OPEN) /*SEPARRATORS BEGIN*/}
")"                                                           {CONCATENATE(Separator) HANDLE(CLOSE)}
"{"                                                           {CONCATENATE(Separator) HANDLE(OBRAC)}
"}"                                                           {CONCATENATE(Separator) HANDLE(CBRAC)}
"["                                                           {CONCATENATE(Separator) HANDLE(SQOPEN)}
"]"                                                           {CONCATENATE(Separator) HANDLE(SQCLOSE)}
";"                                                           {CONCATENATE(Separator) HANDLE(SEMICOLON)}
","                                                           {CONCATENATE(Separator) HANDLE(COMMA)}
"."                                                           {CONCATENATE(Separator) HANDLE(DOT)}
"="                                                           {CONCATENATE(OP) HANDLE(EQUAL) /*OPERATORS BEGIN*/}
">"                                                           {CONCATENATE(OP) HANDLE(GT)}
"<"                                                           {CONCATENATE(OP) HANDLE(LT)}
"!"                                                           {CONCATENATE(OP) HANDLE(NOT)}
"~"                                                           {CONCATENATE(OP) HANDLE(NEG)}
"?"                                                           {CONCATENATE(OP) HANDLE(QUES)}
":"                                                           {CONCATENATE(Separator) HANDLE(COLON)}



"+"                                                            {CONCATENATE(OP) HANDLE(PLUS)}
"-"                                                            {CONCATENATE(OP) HANDLE(MINUS)}
"*"                                                            {CONCATENATE(OP) HANDLE(MULT)}
"/"                                                            {CONCATENATE(OP) HANDLE(DIV)}
"&"                                                            {CONCATENATE(OP) HANDLE(BITAND)}
"|"                                                            {CONCATENATE(OP) HANDLE(BITOR)}
"^"                                                            {CONCATENATE(OP) HANDLE(BITCAP)}
"%"                                                            {CONCATENATE(OP) HANDLE(PERCENT)}



[a-zA-Z$_][a-zA-Z0-9$_]*                                      { CONCATENATE(ID) HANDLE(Identifier) }





<<EOF>>                 { HANDLE(YYEOF) }

.                       { printf("Line %d : Error: Illegal character \'%c\' \n", yylineno, yytext[0]); HANDLE(YYerror)}

%%