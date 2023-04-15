%{


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
    
%}

%union{
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

}

%token <ST> OBRAC //({})
%token <ST> CBRAC //({})
%token <ST> COMMA
%token <ST> VAR 
%token <ST> ASSIGN //(*=, /= , +=, -=, &=)
%token <ST> EQUAL //(=)
%token <ST> COLON 
%token <ST> QUES //(?)
%token <ST> OR 
%token <ST> AND //(&&)
%token <ST> BITOR
%token <ST> BITCAP //(^)
%token <ST> BITAND //(&)
%token <ST> EQ //(==)
%token <ST> NE //(!=)
%token <ST> LT //(<)
%token <ST> GT //(>)
%token <ST> LQ //(<=)
%token <ST> GQ //(>=)
%token <ST> LL //(<<)
%token <ST> GG //(>>)
%token <ST> GGG //(>>>)
%token <ST> PLUS //(+)
%token <ST> MINUS //(-)
%token <ST> MULT //(*)
%token <ST> DIV //(/)
%token <ST> PERCENT //(%)
%token <ST> INCRE //(++)
%token <ST> DECRE //(--)
%token <ST> NOT //(!)
%token <ST> NEG //(~)
%token <ST> OPEN //()
%token <ST> CLOSE //()
%token <ST> SEMICOLON //(;)
%token <ST> IF
%token <ST> ELSE
%token <ST> ASSERT
%token <ST> WHILE
%token <ST> FOR
%token <ST> DO
%token <ST> YIELD
%token <ST> RETURN
%token <ST> CONTINUE
%token <ST> SYNCRO    //(synchronized)
%token <ST> BREAK
%token <ST> THROW
%token <ST> Identifier
%token <ST> THIS
%token <ST> SQOPEN //([])
%token <ST> SQCLOSE //([])
%token <ST> DOT //(.)
%token <ST> BOOLEAN
%token <ST> CLASS
%token <ST> VOID
%token <ST> NEW
%token <ST> SUPER
%token <ST> IntegerLiteral
%token <ST> FloatingPointLiteral
%token <ST> BooleanLiteral
%token <ST> CharacterLiteral
%token <ST> StringLiteral
%token <ST> TextBlock
%token <ST> NullLiteral
%token <ST> EXTENDS
%token <ST> INT
%token <ST> LONG
%token <ST> FLOAT
%token <ST> DOUBLE
%token <ST> CHAR
%token <ST> PUBLIC
%token <ST> PRIVATE
%token <ST> STATIC
%token <ST> FINAL
%token <ST> IMPLEMENTS
%token <ST> PERMITS
%token <ST> DOTDOTDOT
%token <ST> THROWS
%token <ST> ENUM
%token <ST> RECORD
%token <ST> PACKAGE

%type <STT> CompilationUnit
%type <STT> OrdinaryCompilationUnit
%type <STT> TopLevelClassDeclarations
%type <STT> PackageDeclaration
%type <STT> TopLevelClassDeclaration
%type <STT> Literal
%type <STT> Type
%type <STT> Dims
%type <STT> TypeName
%type <STT> TypeNameList
%type <STT> ClassDeclaration
%type <STT> NormalClassDeclaration
%type <STT> AccessModifier
%type <STT> ClassExtends
%type <STT> ClassImplements
%type <STT> ClassPermits
%type <STT> ClassBody
%type <STT> ClassBodyDeclarations
%type <STT> ClassBodyDeclaration
%type <STT> ClassMemberDeclaration
%type <STT> FieldDeclaration
%type <STT> VariableDeclaratorList
%type <STT> VariableDeclarator
%type <STT> VariableDeclaratorId
%type <STT> VariableInitializer
%type <STT> MethodDeclaration
%type <STT> MethodHeader
%type <STT> MethodDeclarator
%type <STT> ReceiverParameter
%type <STT> FormalParameterList
%type <STT> FormalParameter
%type <STT> VariableArityParameter
%type <STT> Throws
%type <STT> MethodBody
%type <STT> InstanceInitializer
%type <STT> StaticInitializer
%type <STT> ConstructorDeclaration
%type <STT> ConstructorDeclarator
%type <STT> SimpleTypeName
%type <STT> ConstructorBody
%type <STT> ExplicitConstructorInvocation
%type <STT> EnumDeclaration
%type <STT> EnumBody
%type <STT> EnumConstantList
%type <STT> EnumConstant
%type <STT> EnumBodyDeclarations
%type <STT> RecordDeclaration
%type <STT> RecordHeader
%type <STT> RecordComponentList
%type <STT> RecordComponent
%type <STT> VariableArityRecordComponent
%type <STT> RecordBody
%type <STT> RecordBodyDeclarations
%type <STT> RecordBodyDeclaration
%type <STT> CompactConstructorDeclaration
%type <STT> ArrayInitializer
%type <STT> VariableInitializerList
%type <STT> Block
%type <STT> BlockStatements
%type <STT> BlockStatement
%type <STT> LocalClassDeclaration
%type <STT> LocalVariableDeclarationStatement
%type <STT> LocalVariableDeclaration
%type <STT> LocalVariableType
%type <STT> Statement
%type <STT> StatementNoShortIf
%type <STT> StatementWithoutTrailingSubstatement
%type <STT> EmptyStatement
%type <STT> LabeledStatement
%type <STT> LabeledStatementNoShortIf
%type <STT> ExpressionStatement
%type <STT> StatementExpression
%type <STT> IfThenStatement
%type <STT> IfThenElseStatement
%type <STT> IfThenElseStatementNoShortIf
%type <STT> AssertStatement
%type <STT> WhileStatement
%type <STT> WhileStatementNoShortIf
%type <STT> DoStatement
%type <STT> ForStatement
%type <STT> ForStatementNoShortIf
%type <STT> BasicForStatement
%type <STT> BasicForStatementNoShortIf
%type <STT> ForInit
%type <STT> ForUpdate
%type <STT> StatementExpressionList
%type <STT> EnhancedForStatement
%type <STT> EnhancedForStatementNoShortIf
%type <STT> BreakStatement
%type <STT> YieldStatement
%type <STT> ContinueStatement
%type <STT> ReturnStatement
%type <STT> ThrowStatement
%type <STT> SynchronizedStatement
%type <STT> Primary
%type <STT> PrimaryNoNewArray
%type <STT> ClassLiteral
%type <STT> ClassInstanceCreationExpression
%type <STT> UnqualifiedClassInstanceCreationExpression
%type <STT> ClassTypeToInstantiate
%type <STT> FieldAccess
%type <STT> ArrayAccess
%type <STT> MethodInvocation
%type <STT> ArgumentList
%type <STT> ArrayCreationExpression
%type <STT> DimExprs
%type <STT> DimExpr
%type <STT> Expression
%type <STT> AssignmentExpression
%type <STT> Assignment
%type <STT> LeftHandSide
%type <STT> ConditionalExpression
%type <STT> ConditionalOrExpression
%type <STT> ConditionalAndExpression
%type <STT> InclusiveOrExpression
%type <STT> ExclusiveOrExpression
%type <STT> AndExpression
%type <STT> EqualityExpression
%type <STT> RelationalExpression
%type <STT> ShiftExpression
%type <STT> AdditiveExpression
%type <STT> MultiplicativeExpression
%type <STT> UnaryExpression
%type <STT> PreIncrementExpression
%type <STT> PreDecrementExpression
%type <STT> UnaryExpressionNotPlusMinus
%type <STT> PostfixExpression
%type <STT> PostIncrementExpression
%type <STT> PostDecrementExpression
%type <STT> CastExpression
%type <STT> ObjectDeclaration

%type <STT> ID_TOKEN
%type <STT> IDD_TOKEN
%type <STT> ArrayInitializer_X
%type <STT> FOR_TOKEN 
%type <STT> WHILE_TOKEN 
%type <STT> CLOSE_TOKEN
%type <STT> IF_ELSE

%type <STT> TYPE_TOKEN
%type <STT> VOID_TOKEN
%type <STT> ARRTYPE_TOKEN




/* %glr-parser */

/* %expect 4 */
%%
CompilationUnit
    : OrdinaryCompilationUnit
    {$$.num = CN("input");AC($$.num,$1.num);startNode = $$.num;}
;

OrdinaryCompilationUnit
    : TopLevelClassDeclarations
    {$$.num = $1.num;;} 
    | PackageDeclaration TopLevelClassDeclarations
    {$$.num = CN("OrdinaryCompilationUnit"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

TopLevelClassDeclarations
    : %empty 
    {$$.num = CN("TopLevelClassDeclarations");int a = CN("empty");AC($$.num,a);}
    | TopLevelClassDeclarations TopLevelClassDeclaration
    {$$.num = CN("TopLevelClassDeclarations"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

PackageDeclaration
    : PACKAGE TypeName SEMICOLON
    {$$.num = CN("PackageDeclaration"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

TopLevelClassDeclaration
    : ClassDeclaration
    {$1.num = $$.num;}
    | SEMICOLON
    {$$.num = CN($1.sym); $1.num = $$.num;}
;

Literal
    : IntegerLiteral
    {  $$.type = TOCHAR("int");    $$.num = CN($1.sym,"int");$1.num = $$.num;}
    | FloatingPointLiteral
    {    $$.type = TOCHAR("float");  $$.num = CN($1.sym,"float"); $1.num = $$.num;}
    | BooleanLiteral
    {$$.type = TOCHAR("bool");   $$.num = CN($1.sym,"bool"); $1.num = $$.num;}
    | CharacterLiteral
    {  $$.type = TOCHAR("char");   $$.num = CN($1.sym,"char"); $1.num = $$.num;}
    | StringLiteral
    {  $$.type = TOCHAR("string");  $$.num = CN($1.sym,"string"); $1.num = $$.num;}
    | TextBlock
    {  $$.type = TOCHAR("textblock");   $$.num = CN($1.sym,"textblock"); $1.num = $$.num;}
    | NullLiteral
    {  $$.type = TOCHAR("null");  $$.num = CN($1.sym,"null"); $1.num = $$.num;}
;


/* ---------------------------------IDENTIFIER KA JHOL JHAL------------------------------------------*/

ID_TOKEN
    :Identifier { $$.line = yylineno;  $$.sym = $1.sym; $$.value = TOCHAR(add($1.sym,yylineno,-1,-1));    $$.num = CN($1.sym); $1.num = $$.num;}
;

IDD_TOKEN
    :Identifier { $$.line = yylineno; $$.sym = $1.sym ;$$.value = TOCHAR(add($1.sym,yylineno,-1,-1)); start($$.value);    $$.num = CN($1.sym); $1.num = $$.num;}
;

TYPE_TOKEN
    :Type {T.push_back(make_pair($1.size,$1.type)); $$.type = $1.type; $$.size = $1.size; OFFV.push_back(offset);offset+=$1.size;         $1.num = $$.num;}

VOID_TOKEN
    :VOID {T.push_back(make_pair(0,"void")); $$.type = TOCHAR("void"); $$.size = 0; OFFV.push_back(offset);         $$.num = CN($1.sym); $1.num = $$.num;}

/* ----------------------------------IDENTIFIER KA JHOL JHAL ---------------------------------------- */



Type
    : INT
    { $$.size = 4;$$.type = TOCHAR("int");                   $$.num = CN($1.sym);$1.num = $$.num;}
    | LONG
    {$$.size = 8; $$.type = TOCHAR("long");                   $$.num = CN($1.sym);$1.num = $$.num;}
    | FLOAT
    {$$.size = 4;$$.type = TOCHAR("float");                   $$.num = CN($1.sym);$1.num = $$.num;}
    | DOUBLE
    {$$.size = 8;$$.type = TOCHAR("double");                   $$.num = CN($1.sym);$1.num = $$.num;}
    | BOOLEAN
    {$$.size = 1;$$.type = TOCHAR("bool");                   $$.num = CN($1.sym);$1.num = $$.num;}
    | CHAR
    {$$.size = 1;$$.type = TOCHAR("char");                   $$.num = CN($1.sym);$1.num = $$.num;}
;

Dims
    : SQOPEN SQCLOSE 
    {  $$.type = TOCHAR("[]");         $$.num = CN("Dims"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); }
    | Dims SQOPEN SQCLOSE
    {  $$.type = TOCHAR(string($1.type)+"[]");          $$.num = CN("Dims");$2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num);  AC($$.num,$2.num); AC($$.num,$3.num);}
;

TypeName
    : Identifier 
    { $$.sym = $1.sym;      TNVALUE = ($1.sym);$$.value = TOCHAR(add($1.sym,yylineno,-1,-1));      $$.num = CN($1.sym); $1.num = $$.num;}
    | TypeName DOT Identifier 
    {$$.sym = TOCHAR(string($1.sym) + "." + string($3.sym));     TNVALUE = ($3.sym);$$.value = TOCHAR(add($3.sym,yylineno,-1,-1));         $$.num = CN("TypeName"); AC($$.num,$1.num); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$2.num); AC($$.num,$3.num);}
;

TypeNameList
    : TypeName
    {$$.sym = $1.sym;                                                            $1.num = $$.num;}
    | TypeNameList COMMA TypeName
    { $$.sym = TOCHAR(string($1.sym) + "," + string($3.sym));                     $$.num = CN("TypeNameList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

/* Class */
ClassDeclaration
    : NormalClassDeclaration
    {$1.num = $$.num;}
    | EnumDeclaration
    {$1.num = $$.num;}
    | RecordDeclaration
    {$1.num = $$.num;}
;

NormalClassDeclaration
    : AccessModifier CLASS ID_TOKEN ClassExtends ClassImplements ClassPermits {start($3.value);} ClassBody {close();lookta($3.sym,$3.sym,OFFV.back(),0,"class");}
    {$$.num = CN("NormalClassDeclaration"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num); AC($$.num,$8.num);}
    | CLASS ID_TOKEN ClassExtends ClassImplements ClassPermits {start($2.value);} ClassBody {close(); lookta($2.sym,$2.sym,OFFV.back(),0,"class");} 
    {$$.num = CN("NormalClassDeclaration"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$7.num);}

;


AccessModifier
    : PUBLIC
    {$$.num = CN($1.sym); $1.num = $$.num;}
    | PRIVATE
    {$$.num = CN($1.sym); $1.num = $$.num;}
;

ClassExtends
    : %empty
    {$$.num = CN("ClassExtends");int a = CN("empty");AC($$.num,a);}
    | EXTENDS TypeName 
    {$$.num = CN("ClassExtends"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

ClassImplements
    : %empty
    {$$.num = CN("ClassImplements");int a = CN("empty");AC($$.num,a);}
    | IMPLEMENTS TypeNameList
    {$$.num = CN("ClassImplements"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

ClassPermits
    : %empty
    {$$.num = CN("ClassPermits");int a = CN("empty");AC($$.num,a);}
    | PERMITS TypeNameList
    {$$.num = CN("ClassPermits"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

ClassBody
    : OBRAC ClassBodyDeclarations CBRAC
    {$$.num = CN("ClassBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

ClassBodyDeclarations
    : %empty
    {$$.num = CN("ClassBodyDeclarations");int a = CN("empty");AC($$.num,a);}
    | ClassBodyDeclarations ClassBodyDeclaration
    {$$.num = CN("ClassBodyDeclarations"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

ClassBodyDeclaration
    : ClassMemberDeclaration
    {$1.num = $$.num;}
    | InstanceInitializer
    {$1.num = $$.num;}
    | StaticInitializer
    {$1.num = $$.num;}
    | ConstructorDeclaration
    {$1.num = $$.num;}
;

ClassMemberDeclaration
    : FieldDeclaration
    {$1.num = $$.num;}
    | MethodDeclaration
    {$1.num = $$.num;}
    | ClassDeclaration
    {$1.num = $$.num;}
    | SEMICOLON
    {$$.num = CN($1.sym); $1.num = $$.num;}
    | ObjectDeclaration
    {$1.num = $$.num;}
;

ObjectDeclaration
    : TypeName ID_TOKEN EQUAL NEW IDD_TOKEN OPEN CLOSE SEMICOLON {close();lookta($2.sym,"object",OFFV.back(),0,$5.sym);} 
    {$$.num = CN("ObjectDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num);$3.num = CN($3.sym); AC($$.num,$3.num);$4.num = CN($4.sym); AC($$.num,$4.num);AC($$.num,$5.num); $6.num = CN($6.sym); AC($$.num,$6.num); $7.num = CN($7.sym); AC($$.num,$7.num); $8.num = CN($8.sym); AC($$.num,$8.num);}
    | TypeName ID_TOKEN EQUAL TypeName DOT NEW IDD_TOKEN OPEN CLOSE SEMICOLON {close();lookta($2.sym,"object",OFFV.back(),0,$7.sym);}
    {$$.num = CN("ObjectDeclaration"); AC($$.num,$1.num);AC($$.num,$2.num);$3.num = CN($3.sym); AC($$.num,$3.num);AC($$.num,$4.num); $5.num = CN($5.sym); AC($$.num,$5.num); $6.num = CN($6.sym); AC($$.num,$6.num); AC($$.num,$7.num); $8.num = CN($8.sym); AC($$.num,$8.num); $9.num = CN($9.sym); AC($$.num,$9.num); $10.num = CN($10.sym); AC($$.num,$10.num);}
    | TypeName ID_TOKEN EQUAL TypeName DOT NEW IDD_TOKEN OPEN ArgumentList CLOSE SEMICOLON  {close();lookta($2.sym,"object",OFFV.back(),0,$7.sym);}
    {$$.num = CN("ObjectDeclaration"); AC($$.num,$1.num);AC($$.num,$2.num);$3.num = CN($3.sym); AC($$.num,$3.num);AC($$.num,$4.num);$5.num = CN($5.sym); AC($$.num,$5.num); $6.num = CN($6.sym); AC($$.num,$6.num); AC($$.num,$7.num);$8.num = CN($8.sym); AC($$.num,$8.num); AC($$.num,$9.num);$10.num = CN($10.sym); AC($$.num,$10.num); $11.num = CN($11.sym); AC($$.num,$11.num);}
    | TypeName ID_TOKEN EQUAL NEW IDD_TOKEN OPEN ArgumentList CLOSE SEMICOLON  {close();lookta($2.sym,"object",OFFV.back(),0,$5.sym);}
    {$$.num = CN("ObjectDeclaration"); AC($$.num,$1.num);AC($$.num,$2.num);$3.num = CN($3.sym); AC($$.num,$3.num);$4.num = CN($4.sym); AC($$.num,$4.num);AC($$.num,$5.num); $6.num = CN($6.sym); AC($$.num,$6.num); AC($$.num,$7.num);$8.num = CN($8.sym); AC($$.num,$8.num); $9.num = CN($9.sym); AC($$.num,$9.num);}
;



FieldDeclaration
    : AccessModifier TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | AccessModifier STATIC TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $2.num = CN($2.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | STATIC TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | AccessModifier FINAL TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $2.num = CN($2.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | FINAL TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | AccessModifier STATIC FINAL TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $2.num = CN($2.sym); $3.num = CN($3.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | STATIC FINAL TYPE_TOKEN VariableDeclaratorList SEMICOLON {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FieldDeclaration"); $1.num = CN($1.sym); $2.num = CN($2.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

VariableDeclaratorList
    : VariableDeclarator
    {$1.num = $$.num;}
    | VariableDeclaratorList COMMA VariableDeclarator
    {$$.num = CN("VariableDeclaratorList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

VariableDeclarator
    : VariableDeclaratorId
    {$1.num = $$.num;} 
    | VariableDeclaratorId EQUAL VariableInitializer
    {$$.num = CN("VariableDeclarator"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

VariableDeclaratorId
    : Identifier  
    {lookd(($1).sym,yylineno); ADD($1.sym,yylineno,OFFV.back(),T.back().first,T.back().second); $$.type = TOCHAR(T.back().second);             $$.num = CN($1.sym); $1.num = $$.num;}
    | Identifier Dims
    {lookd($1.sym,yylineno); ADD($1.sym,yylineno,OFFV.back(),T.back().first,T.back().second+string($2.type));             $$.num = CN("VariableDeclaratorId"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

VariableInitializer
    : Expression
    {$1.num = $$.num;}
    | ArrayInitializer_X
    {$1.num = $$.num;}
;

MethodDeclaration
    : AccessModifier MethodHeader MethodBody {close();lookdprevadded($2.sym,$2.line);lookta($2.sym, T.back().second+string($2.dimcount),OFFV.back(),T.back().first,"method"); OFFV.pop_back();T.pop_back();}
    {$$.num = CN("MethodDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | MethodHeader MethodBody {close();lookdprevadded($2.sym,$2.line);lookta($2.sym, T.back().second +string($2.dimcount),OFFV.back(),T.back().first,"method"); OFFV.pop_back();T.pop_back();}
    {$$.num = CN("MethodDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num);}
    | AccessModifier STATIC MethodHeader MethodBody {close();lookdprevadded($3.sym,$3.line);lookta($3.sym, T.back().second+string($3.dimcount),OFFV.back(),T.back().first,"method");OFFV.pop_back();T.pop_back();}
    {$$.num = CN("MethodDeclaration"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | STATIC MethodHeader MethodBody {close();lookdprevadded($2.sym,$2.line);lookta($2.sym, T.back().second +string($2.dimcount),OFFV.back(),T.back().first,"method");OFFV.pop_back();T.pop_back();}
    {$$.num = CN("MethodDeclaration"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

MethodHeader
    : TYPE_TOKEN MethodDeclarator
    {  $$.sym = $2.sym;   $$.dimcount = $2.dimcount; $$.line = $2.line;           $$.num = CN("MethodHeader"); AC($$.num,$1.num); AC($$.num,$2.num);}
    | TYPE_TOKEN MethodDeclarator Throws
    { $$.sym = $2.sym;   $$.dimcount = $2.dimcount; $$.line = $2.line;           $$.num = CN("MethodHeader"); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | VOID_TOKEN MethodDeclarator
    { $$.sym = $2.sym;   $$.dimcount = $2.dimcount;  $$.line = $2.line;           $$.num = CN("MethodHeader");  AC($$.num,$1.num); AC($$.num,$2.num);}
    | VOID_TOKEN MethodDeclarator Throws
    { $$.sym = $2.sym;   $$.dimcount = $2.dimcount;  $$.line = $2.line;               $$.num = CN("MethodHeader");  AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

MethodDeclarator
    : IDD_TOKEN OPEN CLOSE 
    { $$.sym = $1.sym;   $$.dimcount = TOCHAR("");  $$.line = $1.line;                           $$.num = CN("MethodDeclarator");  $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | IDD_TOKEN OPEN ReceiverParameter COMMA CLOSE
    { $$.sym = $1.sym;   $$.dimcount = TOCHAR("");   $$.line = $1.line;                          $$.num = CN("MethodDeclarator");  $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);} 
    | IDD_TOKEN OPEN FormalParameterList CLOSE
    { $$.sym = $1.sym;   $$.dimcount = TOCHAR("");   $$.line = $1.line ;                         $$.num = CN("MethodDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | IDD_TOKEN OPEN ReceiverParameter COMMA FormalParameterList CLOSE
    { $$.sym = $1.sym;    $$.dimcount = TOCHAR("");    $$.line = $1.line;                        $$.num = CN("MethodDeclarator");  $2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | IDD_TOKEN OPEN CLOSE Dims
    { $$.sym = $1.sym;   $$.dimcount = $4.type;     $$.line = $1.line    ;                   $$.num = CN("MethodDeclarator"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | IDD_TOKEN OPEN ReceiverParameter COMMA CLOSE Dims
    { $$.sym = $1.sym;   $$.dimcount = $6.type;    $$.line = $1.line ;                        $$.num = CN("MethodDeclarator");  $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | IDD_TOKEN OPEN FormalParameterList CLOSE Dims
    { $$.sym = $1.sym;   $$.dimcount = $5.type;  $$.line = $1.line;                           $$.num = CN("MethodDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | IDD_TOKEN OPEN ReceiverParameter COMMA FormalParameterList CLOSE Dims
    { $$.sym = $1.sym;  $$.dimcount = $7.type;   $$.line = $1.line;                         $$.num = CN("MethodDeclarator");$2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num); AC($$.num,$7.num);}
;



ReceiverParameter
    : TYPE_TOKEN THIS
    {$$.num = CN("ReceiverParameter"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | TYPE_TOKEN Identifier DOT THIS {ADD($2.sym,yylineno,-1,-1);}
    {$$.num = CN("ReceiverParameter"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
;

FormalParameterList
    : FormalParameter
    {$1.num = $$.num;}
    | FormalParameterList COMMA FormalParameter
    {$$.num = CN("FormalParameterList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

FormalParameter
    : FINAL TYPE_TOKEN VariableDeclaratorId {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FormalParameter"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | TYPE_TOKEN VariableDeclaratorId {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("FormalParameter"); AC($$.num,$1.num); AC($$.num,$2.num);}
    | VariableArityParameter
    {$$.num = CN("FormalParameter"); AC($$.num,$1.num);}
;

VariableArityParameter
    : FINAL TYPE_TOKEN DOTDOTDOT Identifier { lookd($4.sym,yylineno);ADD($4.sym,yylineno,OFFV.back(),$2.size,$2.type); OFFV.pop_back();T.pop_back();}
    {$$.num = CN("VariableArityParameter"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | TYPE_TOKEN DOTDOTDOT Identifier {lookd($3.sym,yylineno);ADD($3.sym,yylineno,OFFV.back(),$1.size,$1.type);OFFV.pop_back();T.pop_back();}
    {$$.num = CN("VariableArityParameter"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;


Throws
    : THROWS TypeNameList
    {$$.num = CN("Throws"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

MethodBody
    : Block
    {$1.num = $$.num;}
    | SEMICOLON
    {$$.num = CN($1.sym); $1.num = $$.num;}
;

InstanceInitializer
    :{start(add("INSTANCE_INITIALIZER_BLOCK",yylineno,OFFV.back(),0,"INSTANCE"));} Block
    {close(); $2.num = $$.num;}
;

StaticInitializer
    : STATIC {start(add("STATIC_INITIALIZER_BLOCK",yylineno,OFFV.back(),-1));} Block
    {close();    $$.num = CN("StaticInitializer"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$3.num);}
;

ConstructorDeclaration
    : AccessModifier ConstructorDeclarator ConstructorBody {close();}
    {$$.num = CN("ConstructorDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | AccessModifier ConstructorDeclarator Throws ConstructorBody {close();}
    {$$.num = CN("ConstructorDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | ConstructorDeclarator ConstructorBody {close();}
    {$$.num = CN("ConstructorDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num);}
    | ConstructorDeclarator Throws ConstructorBody {close();}
    {$$.num = CN("ConstructorDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

ConstructorDeclarator
    : SimpleTypeName OPEN  CLOSE
    {$$.num = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | SimpleTypeName OPEN ReceiverParameter COMMA CLOSE
    {$$.num = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | SimpleTypeName OPEN FormalParameterList CLOSE
    {$$.num = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | SimpleTypeName OPEN ReceiverParameter COMMA FormalParameterList CLOSE
    {$$.num = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
;

SimpleTypeName
    : Identifier 
    {$$.value = TOCHAR(add($1.sym,yylineno,-1,-1));start($$.value);   $$.num = CN($1.sym); $1.num = $$.num;}
;

ConstructorBody
    : OBRAC CBRAC
    {$$.num = CN("ConstructorBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | OBRAC ExplicitConstructorInvocation CBRAC
    {$$.num = CN("ConstructorBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OBRAC BlockStatements CBRAC
    {$$.num = CN("ConstructorBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OBRAC ExplicitConstructorInvocation BlockStatements CBRAC
    {$$.num = CN("ConstructorBody"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
;

ExplicitConstructorInvocation
    : THIS OPEN CLOSE SEMICOLON
    {$$.num = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | THIS OPEN  {start(add($1.sym,yylineno,-1,-1));} ArgumentList CLOSE SEMICOLON {close();}
    {$$.num = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$4.num); AC($$.num,$5.num);AC($$.num,$6.num); }
    | SUPER OPEN CLOSE SEMICOLON
    {$$.num = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | SUPER OPEN  {start(add($1.sym,yylineno,-1,-1));} ArgumentList CLOSE SEMICOLON {close();}
    {$$.num = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$4.num); AC($$.num,$5.num);AC($$.num,$6.num); }
    | TypeName  DOT SUPER OPEN CLOSE SEMICOLON
    {$$.num = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | TypeName DOT SUPER OPEN {start($1.value);} ArgumentList CLOSE SEMICOLON {close();}
    {$$.num = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $7.num = CN($7.sym); $8.num = CN($8.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$6.num); AC($$.num,$7.num); AC($$.num,$8.num);}
    | Primary DOT SUPER OPEN CLOSE SEMICOLON
    {$$.num = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | Primary DOT SUPER OPEN  {start($1.value);} ArgumentList CLOSE SEMICOLON {close();}
    {$$.num = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $7.num = CN($7.sym); $8.num = CN($8.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$6.num); AC($$.num,$7.num); AC($$.num,$8.num);}
;


EnumDeclaration
    : AccessModifier ENUM ID_TOKEN ClassImplements {start($3.value);} EnumBody{close();}
    {$$.num = CN("EnumDeclaration"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$6.num);}
    | ENUM ID_TOKEN ClassImplements {start($2.value);} EnumBody {close();}
    {$$.num = CN("EnumDeclaration"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$5.num);}
;

EnumBody
    : OBRAC CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | OBRAC EnumConstantList CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OBRAC COMMA CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OBRAC EnumConstantList COMMA CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | OBRAC EnumBodyDeclarations CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OBRAC EnumConstantList EnumBodyDeclarations CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | OBRAC COMMA EnumBodyDeclarations CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | OBRAC EnumConstantList COMMA EnumBodyDeclarations CBRAC
    {$$.num = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

EnumConstantList
    : EnumConstant
    {$1.num = $$.num;}
    | EnumConstantList COMMA EnumConstant
    {$$.num = CN("EnumConstantList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

EnumConstant
    : Identifier
    {ADD($1.sym,yylineno,-1,-1);     $$.num = CN($1.sym); $1.num = $$.num;}
    | IDD_TOKEN ClassBody {close();}
    {$$.num = CN("EnumConstant");  AC($$.num,$1.num); AC($$.num,$2.num);}
    | IDD_TOKEN OPEN CLOSE {close();}
    {$$.num = CN("EnumConstant"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | IDD_TOKEN OPEN CLOSE ClassBody {close();}
    {$$.num = CN("EnumConstant"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | IDD_TOKEN OPEN ArgumentList CLOSE {close();}
    {$$.num = CN("EnumConstant"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);} 
    | IDD_TOKEN OPEN ArgumentList CLOSE ClassBody {close();}
    {$$.num = CN("EnumConstant");  $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

EnumBodyDeclarations
    : SEMICOLON ClassBodyDeclarations
    {$$.num = CN("EnumBodyDeclarations"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

RecordDeclaration
    : AccessModifier RECORD IDD_TOKEN RecordHeader {close();} ClassImplements {start($3.value);} RecordBody {close();}
    {$$.num = CN("RecordDeclaration"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$6.num); AC($$.num,$8.num);}
    | RECORD IDD_TOKEN RecordHeader {close();} ClassImplements {start($3.value);} RecordBody {close();}
    {$$.num = CN("RecordDeclaration"); $1.num = CN($1.sym);AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$5.num); AC($$.num,$7.num);}
;

RecordHeader
    : OPEN CLOSE
    {$$.num = CN("RecordHeader"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | OPEN RecordComponentList CLOSE
    {$$.num = CN("RecordHeader"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

RecordComponentList
    : RecordComponent
    {$1.num = $$.num;}
    | RecordComponentList COMMA RecordComponent
    {$$.num = CN("RecordComponentList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

RecordComponent
    : TYPE_TOKEN Identifier
    {ADD($2.sym,yylineno,-1,-1);      $$.num = CN("RecordComponent"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | VariableArityRecordComponent
    {$1.num = $$.num;}
;

VariableArityRecordComponent
    : TYPE_TOKEN DOTDOTDOT Identifier
    {ADD($3.sym,yylineno,-1,-1);      $$.num = CN("VariableArityRecordComponent"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

RecordBody
    : OBRAC CBRAC
    {$$.num = CN("RecordBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | OBRAC RecordBodyDeclarations CBRAC
    {$$.num = CN("RecordBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

RecordBodyDeclarations
    : RecordBodyDeclaration
    {$1.num = $$.num;}
    | RecordBodyDeclarations RecordBodyDeclaration
    {$$.num = CN("RecordBodyDeclarations"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

RecordBodyDeclaration
    : ClassBodyDeclaration
    {$1.num = $$.num;}
    | CompactConstructorDeclaration
    {$1.num = $$.num;}
;

CompactConstructorDeclaration
    : AccessModifier SimpleTypeName ConstructorBody {close();}
    {$$.num = CN("CompactConstructorDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | SimpleTypeName ConstructorBody {close();}
    {$$.num = CN("CompactConstructorDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num);}
;


/* Array */
ArrayInitializer_X
    :  OBRAC CBRAC
    {$$.num = CN("ArrayInitializer_X"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | OBRAC VariableInitializerList CBRAC
    {$$.num = CN("ArrayInitializer_X"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OBRAC COMMA CBRAC
    {$$.num = CN("ArrayInitializer_X"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OBRAC VariableInitializerList COMMA CBRAC
    {$$.num = CN("ArrayInitializer_X"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
;

ArrayInitializer
    :{temp = add("ARRAYINITIALIZER",yylineno,OFFV.back(),0,"ARRAYINITIALIZER");start(temp);} ArrayInitializer_X {close(); $$.value = TOCHAR(temp);$$.num = $2.num;}
;

VariableInitializerList
    : VariableInitializer
    {$1.num = $$.num;}
    | VariableInitializerList COMMA VariableInitializer
    {$$.num = CN("VariableInitializerList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;



/* Statament */
Block
    : OBRAC CBRAC
    {$$.num = CN("Block"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | OBRAC BlockStatements CBRAC
    {$$.num = CN("Block"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

BlockStatements
    : BlockStatement
    {$1.num = $$.num;}
    | BlockStatements BlockStatement
    {$$.num = CN("BlockStatements"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

BlockStatement
    : LocalClassDeclaration
    {$1.num = $$.num;}
    | LocalVariableDeclarationStatement
    {$1.num = $$.num;}
    | ObjectDeclaration
    {$1.num = $$.num;}
    | Statement
    {$1.num = $$.num;}
;

LocalClassDeclaration
    : ClassDeclaration
    {$1.num = $$.num;}
;

LocalVariableDeclarationStatement
    : LocalVariableDeclaration SEMICOLON
    {$$.num = CN("LocalVariableDeclarationStatement"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

LocalVariableDeclaration
    : FINAL LocalVariableType VariableDeclaratorList {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("LocalVariableDeclaration"); $1.num = CN($1.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | LocalVariableType VariableDeclaratorList {OFFV.pop_back();T.pop_back();}
    {$$.num = CN("LocalVariableDeclaration"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

LocalVariableType
    : TYPE_TOKEN 
    {$1.num = $$.num;}
    | VAR 
    {$$.num = CN($1.sym); $1.num = $$.num;}
;

Statement
    : StatementWithoutTrailingSubstatement
    {$1.num = $$.num;}
    | LabeledStatement
    {$1.num = $$.num;}
    | IfThenStatement
    {$1.num = $$.num;}
    | IfThenElseStatement
    {$1.num = $$.num;}
    | WhileStatement
    {$1.num = $$.num;}
    | ForStatement
    {$1.num = $$.num;}
;

StatementNoShortIf
    : StatementWithoutTrailingSubstatement
    {$1.num = $$.num;}
    | LabeledStatementNoShortIf
    {$1.num = $$.num;}
    | IfThenElseStatementNoShortIf
    {$1.num = $$.num;}
    | WhileStatementNoShortIf
    {$1.num = $$.num;}
    | ForStatementNoShortIf
    {$1.num = $$.num;}
;

StatementWithoutTrailingSubstatement
    : Block
    {$1.num = $$.num;}
    | EmptyStatement
    {$1.num = $$.num;}
    | ExpressionStatement
    {$1.num = $$.num;}
    | AssertStatement
    {$1.num = $$.num;}
    | DoStatement
    {$1.num = $$.num;}
    | BreakStatement
    {$1.num = $$.num;}
    | ContinueStatement
    {$1.num = $$.num;}
    | ReturnStatement
    {$1.num = $$.num;}
    | SynchronizedStatement
    {$1.num = $$.num;}
    | ThrowStatement
    {$1.num = $$.num;}
    | YieldStatement
    {$1.num = $$.num;}
;

EmptyStatement
    : SEMICOLON
    {$$.num = CN($1.sym); $1.num = $$.num;}
;

LabeledStatement
    : Identifier COLON Statement
    { ADD($1.sym,yylineno,-1,-1);  $$.num = CN("LabeledStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

LabeledStatementNoShortIf
    : Identifier COLON StatementNoShortIf
    {ADD($1.sym,yylineno,-1,-1);  $$.num = CN("LabeledStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

ExpressionStatement
    : StatementExpression SEMICOLON
    {$$.num = CN("ExpressionStatement"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
;

StatementExpression
    : Assignment
    {$1.num = $$.num;}
    | PreIncrementExpression
    {$1.num = $$.num;}
    | PreDecrementExpression
    {$1.num = $$.num;}
    | PostIncrementExpression
    {$1.num = $$.num;}
    | PostDecrementExpression
    {$1.num = $$.num;}
    | MethodInvocation
    {$1.num = $$.num;}
    | ClassInstanceCreationExpression
    {$1.num = $$.num;}
;

IfThenStatement
    : IF OPEN Expression CLOSE_TOKEN Statement {close();}
    {$$.num = CN("IfThenStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

CLOSE_TOKEN
    :{start(add("IFBLOCK",yylineno,OFFV.back(),0,"IFBLOCK"));} CLOSE  {$$.num = CN($2.sym); $2.num = $$.num; }

IfThenElseStatement
    : IF_ELSE Statement {close();}
    {$$.num = CN("IfThenElseStatement"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

IfThenElseStatementNoShortIf
    : IF_ELSE StatementNoShortIf {close();}
    {$$.num = CN("IfThenElseStatementNoShortIf"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

IF_ELSE
    :IF OPEN Expression CLOSE_TOKEN StatementNoShortIf {close();}ELSE {start(add("ELSEBLOCK",yylineno,OFFV.back(),0,"ELSEBLOCK"));}
    {$$.num = CN("IF_ELSE"); $1.num = CN($1.sym); $2.num = CN($2.sym); $7.num = CN($7.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$7.num);}
;

AssertStatement
    : ASSERT Expression SEMICOLON
    {$$.num = CN("AssertStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | ASSERT Expression COLON Expression SEMICOLON
    {$$.num = CN("AssertStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

WhileStatement
    : WHILE_TOKEN OPEN Expression CLOSE Statement {close();}
    {$$.num = CN("WhileStatement"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

WhileStatementNoShortIf
    : WHILE_TOKEN OPEN Expression CLOSE StatementNoShortIf {close();}
    {$$.num = CN("WhileStatement"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

WHILE_TOKEN
: WHILE
{start(add("WHILELOOP",yylineno,OFFV.back(),0,"WHILELOOP"));$$.num = CN($1.sym); $1.num = $$.num;}
;


DoStatement
    : DO Statement WHILE OPEN Expression CLOSE SEMICOLON
    {$$.num = CN("DoStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); $7.num = CN($7.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num); AC($$.num, $7.num);}
;

ForStatement
    : BasicForStatement
    {$1.num = $$.num;}
    | EnhancedForStatement
    {$1.num = $$.num;}
;

ForStatementNoShortIf
    : BasicForStatementNoShortIf
    {$1.num = $$.num;}
    | EnhancedForStatementNoShortIf
    {$1.num = $$.num;}
;

BasicForStatement
    : FOR_TOKEN OPEN SEMICOLON SEMICOLON CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement"); ; $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON SEMICOLON CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement"); ; $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num); AC($$.num,$7.num);}
    | FOR_TOKEN OPEN SEMICOLON Expression SEMICOLON CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$6.num = CN($6.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON Expression SEMICOLON CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$7.num = CN($7.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);AC($$.num,$8.num);}
    | FOR_TOKEN OPEN SEMICOLON SEMICOLON ForUpdate CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$3.num = CN($3.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON SEMICOLON ForUpdate CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$4.num = CN($4.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num); AC($$.num,$8.num);}
    | FOR_TOKEN OPEN SEMICOLON Expression SEMICOLON ForUpdate CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num); AC($$.num,$8.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON Expression SEMICOLON ForUpdate CLOSE Statement {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$8.num = CN($8.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num); AC($$.num,$8.num); AC($$.num,$9.num);}
;

BasicForStatementNoShortIf
    : FOR_TOKEN OPEN SEMICOLON SEMICOLON CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON SEMICOLON CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement"); ; $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num); AC($$.num,$7.num);}
    | FOR_TOKEN OPEN SEMICOLON Expression SEMICOLON CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$6.num = CN($6.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON Expression SEMICOLON CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$7.num = CN($7.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);AC($$.num,$8.num);}
    | FOR_TOKEN OPEN SEMICOLON SEMICOLON ForUpdate CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$3.num = CN($3.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON SEMICOLON ForUpdate CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$4.num = CN($4.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num); AC($$.num,$8.num);}
    | FOR_TOKEN OPEN SEMICOLON Expression SEMICOLON ForUpdate CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num); AC($$.num,$8.num);}
    | FOR_TOKEN OPEN ForInit SEMICOLON Expression SEMICOLON ForUpdate CLOSE StatementNoShortIf {close();}
    {$$.num = CN("BasicForStatement");;$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$8.num = CN($8.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num); AC($$.num,$8.num); AC($$.num,$9.num);}
;




FOR_TOKEN
: FOR
{start(add("FORLOOP",yylineno,OFFV.back(),0,"FORLOOP"));$$.num = CN($1.sym); $1.num = $$.num;}
;


ForInit
    : StatementExpressionList
    {$1.num = $$.num;}
    | LocalVariableDeclaration
    {$1.num = $$.num;}
;

ForUpdate
    : StatementExpressionList
    {$1.num = $$.num;}
;

StatementExpressionList
    : StatementExpression 
    {$1.num = $$.num;}
    | StatementExpressionList COMMA StatementExpression
    {$$.num = CN("StatementExpressionList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}

;

EnhancedForStatement
    : FOR_TOKEN OPEN LocalVariableDeclaration COLON Expression CLOSE Statement {close();}
    {$$.num = CN("EnhancedForStatement");$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);}
;

EnhancedForStatementNoShortIf
    : FOR_TOKEN OPEN LocalVariableDeclaration COLON Expression CLOSE StatementNoShortIf {close();}
    {$$.num = CN("EnhancedForStatement");$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$.num,$1.num);AC($$.num,$2.num);AC($$.num,$3.num);AC($$.num,$4.num);AC($$.num,$5.num);AC($$.num,$6.num);AC($$.num,$7.num);}

;

BreakStatement
    : BREAK SEMICOLON
    {$$.num = CN("BreakStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | BREAK Identifier SEMICOLON
    {  ADD($2.sym,yylineno,OFFV.back(),0);   $$.num = CN("BreakStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

YieldStatement
    : YIELD Expression SEMICOLON
    {$$.num = CN("YieldStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}

;

ContinueStatement
    : CONTINUE SEMICOLON
    {$$.num = CN("ContinueStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | CONTINUE Identifier SEMICOLON
    {ADD($2.sym,yylineno,OFFV.back(),0);$$.num = CN("ContinueStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}    
;

ReturnStatement
    : RETURN SEMICOLON
    {$$.num = CN("ReturnStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num);}
    | RETURN Expression SEMICOLON
    {$$.num = CN("ReturnStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

ThrowStatement
    : THROW Expression SEMICOLON
    {$$.num = CN("ThrowStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

SynchronizedStatement
    : SYNCRO {start(add($1.sym,yylineno,OFFV.back(),0));} OPEN Expression CLOSE Block {close();}
    {$$.num = CN("SynchronizedStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
;    


/* Expression */
Primary
    : PrimaryNoNewArray
    {$1.num = $$.num;}
    | ArrayCreationExpression
    {$1.num = $$.num;}
;

PrimaryNoNewArray
    : Literal
    {$1.num = $$.num;}
    | ClassLiteral
    {$1.num = $$.num;}
    | THIS
    {$$.num=CN($1.sym);$1.num = $$.num;}
    | TypeName DOT THIS
    {$$.num = CN("PrimaryNoNewArray"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | OPEN Expression CLOSE
    {$$.num = CN("PrimaryNoNewArray"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | ClassInstanceCreationExpression
    {$1.num = $$.num;}
    | FieldAccess
    {$1.num = $$.num;}
    | ArrayAccess
    {$1.num = $$.num;}
    | MethodInvocation
    {$1.num = $$.num;}
;

ClassLiteral
    : TypeName DOT CLASS
    {$$.num = CN("ClassLiteral"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | TypeName Dims DOT CLASS
    {$$.num = CN("ClassLiteral"); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);} 
    | TYPE_TOKEN DOT CLASS
    {$$.num = CN("ClassLiteral"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | TYPE_TOKEN Dims DOT CLASS
    {$$.num = CN("ClassLiteral"); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);} 
    | VOID_TOKEN DOT CLASS
    {$$.num = CN("ClassLiteral"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

ClassInstanceCreationExpression
    : UnqualifiedClassInstanceCreationExpression
    {$1.num = $$.num;}
    | TypeName DOT UnqualifiedClassInstanceCreationExpression
    {$$.num = CN("ClassInstanceCreationExpression"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | Primary DOT UnqualifiedClassInstanceCreationExpression
    {$$.num = CN("ClassInstanceCreationExpression"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

UnqualifiedClassInstanceCreationExpression
    : NEW ClassTypeToInstantiate OPEN CLOSE {close();}
    {$$.num = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | NEW ClassTypeToInstantiate OPEN ArgumentList CLOSE {close();}
    {$$.num = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | NEW ClassTypeToInstantiate OPEN CLOSE ClassBody {close();}
    {$$.num = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | NEW ClassTypeToInstantiate OPEN ArgumentList CLOSE ClassBody {close();}
    {$$.num = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
;

ClassTypeToInstantiate
    : TypeName 
    {start($1.value);$1.num = $$.num;}
;

FieldAccess
    : Primary DOT Identifier { ADD($3.sym,yylineno,OFFV.back(),0);}
    {$$.num = CN("FieldAccess"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | SUPER DOT Identifier  { ADD($3.sym,yylineno,OFFV.back(),0);}
    {$$.num = CN("FieldAccess"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | TypeName DOT SUPER DOT Identifier  { ADD($5.sym,yylineno,OFFV.back(),0);}
    {$$.num = CN("FieldAccess"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
;

ArrayAccess
    : TypeName SQOPEN Expression SQCLOSE
    {$$.num = CN("ArrayAccess"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | PrimaryNoNewArray SQOPEN Expression SQCLOSE
    {$$.num = CN("ArrayAccess"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
;

MethodInvocation
    : Identifier OPEN CLOSE {close();}
     {$$.num = CN("MethodInvocation");$1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | Identifier OPEN ArgumentList CLOSE 
      {$$.num = CN("MethodInvocation");$1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
    | TypeName DOT Identifier OPEN CLOSE 
      {$$.num = CN("MethodInvocation"); $2.num = CN($2.sym);$3.num = CN($3.sym);$4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | TypeName DOT Identifier OPEN ArgumentList CLOSE 
    {$$.num = CN("MethodInvocation"); $2.num = CN($2.sym);$3.num = CN($3.sym);  $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | Primary DOT Identifier OPEN CLOSE 
     {$$.num = CN("MethodInvocation"); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | Primary DOT Identifier OPEN ArgumentList CLOSE 
    {$$.num = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym);$4.num = CN($4.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | SUPER DOT Identifier OPEN CLOSE 
    {$$.num = CN("MethodInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym);$3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | SUPER DOT Identifier OPEN ArgumentList CLOSE 
    {$$.num = CN("MethodInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym);$3.num = CN($3.sym);$4.num = CN($4.sym); $6.num = CN($6.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num);}
    | TypeName DOT SUPER DOT Identifier OPEN CLOSE 
    {$$.num = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym);$5.num = CN($5.sym);$6.num = CN($6.sym); $7.num = CN($7.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num); AC($$.num,$7.num);}
    | TypeName DOT SUPER DOT Identifier OPEN ArgumentList CLOSE 
    {$$.num = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym);$5.num = CN($5.sym); $6.num = CN($6.sym); $8.num = CN($8.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num); AC($$.num,$6.num); AC($$.num,$7.num); AC($$.num,$8.num);}
;




ArgumentList
    : Expression
    {$1.num = $$.num;}
    | ArgumentList COMMA Expression
    {$$.num = CN("ArgumentList"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

ArrayCreationExpression
    : NEW ARRTYPE_TOKEN DimExprs 
    {lookta($2.sym,T.back().second+string($3.dimcount),OFFV.back(),T.back().first,"array");  OFFV.pop_back();T.pop_back();        $$.num = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | NEW ARRTYPE_TOKEN DimExprs Dims
    {  lookta($2.sym,T.back().second+string($3.dimcount)+string($4.type),OFFV.back(),T.back().first,"array"); OFFV.pop_back();T.pop_back();        $$.num = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);AC($$.num,$4.num);}
    | NEW TypeName DimExprs
    {$$.num = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | NEW TypeName DimExprs Dims
    {$$.num = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);AC($$.num,$4.num);}
    | NEW ARRTYPE_TOKEN  Dims ArrayInitializer
    {  lookta($2.sym,T.back().second +string($3.type),OFFV.back(),T.back().first,"array"); OFFV.pop_back();T.pop_back();       $$.num = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);AC($$.num,$4.num);}
    | NEW TypeName Dims ArrayInitializer
    {$$.num = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);AC($$.num,$4.num);}
;

ARRTYPE_TOKEN
    :TYPE_TOKEN {$$.type = $1.type; $$.line = yylineno; $$.sym = TOCHAR("ARRAYCREATION"+to_string(counterarr)); ADD($$.sym,yylineno,OFFV.back(),0,"ARRAYCREATION");counterarr++;            $1.num = $$.num;} 



DimExprs
    : DimExpr 
    { $$.dimcount = $1.dimcount;          $1.num = $$.num;}
    | DimExprs DimExpr
     { $$.dimcount = TOCHAR(string($1.dimcount)+string($2.dimcount));                             $$.num = CN("DimExprs"); AC($$.num,$1.num); AC($$.num,$2.num);}
;

DimExpr
    : SQOPEN Expression SQCLOSE 
    {$$.dimcount = TOCHAR("[]");                       $$.num = CN("DimExpr"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

Expression
    : AssignmentExpression
    {$1.num = $$.num;}
;

AssignmentExpression
    : ConditionalExpression
    {$1.num = $$.num;}
    | Assignment
    {$1.num = $$.num;}
;

Assignment
    : LeftHandSide ASSIGN Expression
    {$$.num = CN("Assignment"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
    | LeftHandSide EQUAL Expression
    {$$.num = CN("Assignment"); $2.num = CN($2.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num);}
;

LeftHandSide
    : TypeName
    {$1.num = $$.num;}
    | FieldAccess
    {$1.num = $$.num;}
    | ArrayAccess
    {$1.num = $$.num;}
;

ConditionalExpression
    : ConditionalOrExpression QUES Expression COLON ConditionalExpression
    {$$.num = CN("ConditionalExpression"); $2.num = CN($2.sym); $4.num = CN($4.sym);AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num); AC($$.num,$5.num);}
    | ConditionalOrExpression
    {$1.num = $$.num;}
;

ConditionalOrExpression
    : ConditionalAndExpression
    {$1.num = $$.num;}
    | ConditionalOrExpression OR ConditionalAndExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

ConditionalAndExpression
    : InclusiveOrExpression
    {$1.num = $$.num;}
    | ConditionalAndExpression AND InclusiveOrExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

InclusiveOrExpression
    : ExclusiveOrExpression
    {$1.num = $$.num;}
    | InclusiveOrExpression BITOR ExclusiveOrExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

ExclusiveOrExpression
    : AndExpression
    {$1.num = $$.num;}
    | ExclusiveOrExpression BITCAP AndExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

AndExpression
    : EqualityExpression
    {$1.num = $$.num;}
    | AndExpression BITAND EqualityExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

EqualityExpression
    : RelationalExpression
    {$1.num = $$.num;}
    | EqualityExpression EQ RelationalExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | EqualityExpression NE RelationalExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

RelationalExpression
    : ShiftExpression
    {$1.num = $$.num;}
    | RelationalExpression LT ShiftExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | RelationalExpression GT ShiftExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | RelationalExpression LQ ShiftExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | RelationalExpression GQ ShiftExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;


ShiftExpression
    : AdditiveExpression
    {$1.num = $$.num;}
    | ShiftExpression LL AdditiveExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | ShiftExpression GG AdditiveExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | ShiftExpression GGG AdditiveExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

AdditiveExpression
    : MultiplicativeExpression
    {$1.num = $$.num;}
    | AdditiveExpression PLUS MultiplicativeExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | AdditiveExpression MINUS MultiplicativeExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;


MultiplicativeExpression
    : UnaryExpression
    {$1.num = $$.num;}
    | MultiplicativeExpression MULT UnaryExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | MultiplicativeExpression DIV UnaryExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
    | MultiplicativeExpression PERCENT UnaryExpression
    {$$.num = CN($2.sym);$2.num = $$.num;AC($$.num,$1.num);AC($$.num,$3.num);}
;

UnaryExpression
    : PreIncrementExpression
    {$1.num = $$.num;}
    | PreDecrementExpression
    {$1.num = $$.num;}
    | PLUS UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $1.num = $$.num; AC($$.num,$2.num);
    }
    | MINUS UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $1.num = $$.num; AC($$.num,$2.num);
    }
    | UnaryExpressionNotPlusMinus
    {$1.num = $$.num;}
;

PreIncrementExpression
    : INCRE UnaryExpression
    {
        const char* s = "(pre)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $1.num = $$.num; AC($$.num,$2.num);
    }
;

PreDecrementExpression
    : DECRE UnaryExpression
    {
        const char* s = "(pre)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $1.num = $$.num; AC($$.num,$2.num);
    }
;

UnaryExpressionNotPlusMinus
    : PostfixExpression
    {$1.num = $$.num;}
    | NEG UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $1.num = $$.num; AC($$.num,$2.num);
    }
    | NOT UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $1.num = $$.num; AC($$.num,$2.num);
    }
    | CastExpression
    {$1.num = $$.num;}
;

PostfixExpression
    : Primary
    {$1.num = $$.num;}
    | TypeName
    {$1.num = $$.num;}
    | PostIncrementExpression
    {$1.num = $$.num;}
    | PostDecrementExpression
    {$1.num = $$.num;}
;

PostIncrementExpression
    : PostfixExpression INCRE
    {
        const char* s = "(post)";;
        size_t new_len = strlen($2.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $2.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $2.num = $$.num; AC($$.num,$1.num);}
;

PostDecrementExpression
    : PostfixExpression DECRE
    {
        const char* s = "(post)";
        size_t new_len = strlen($2.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $2.sym);
        strcat(new_ch, s);
        $$.num = CN(new_ch); $2.num = $$.num; AC($$.num,$1.num);}
;

CastExpression
    : OPEN TYPE_TOKEN CLOSE UnaryExpression
    {$$.num = CN("CastExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$.num,$1.num); AC($$.num,$2.num); AC($$.num,$3.num); AC($$.num,$4.num);}
;



%%


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
