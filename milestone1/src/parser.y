
%{
    
#include <bits/stdc++.h>
using namespace std;

extern int yylineno;

map<int,string> label;
map<int,vector<int>> children;
int startNode, curNode = 0;

int yylex(void);
void yyerror(char const *);
int CN(string);
void AC(int, int);
    
%}

%union{
    int n;
    struct{
        int num;
        char* sym;
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

%type <n> CompilationUnit
%type <n> OrdinaryCompilationUnit
%type <n> TopLevelClassDeclarations
%type <n> PackageDeclaration
%type <n> TopLevelClassDeclaration
%type <n> Literal
%type <n> Type
%type <n> Dims
%type <n> TypeName
%type <n> TypeNameList
%type <n> ClassDeclaration
%type <n> NormalClassDeclaration
%type <n> AccessModifier
%type <n> ClassExtends
%type <n> ClassImplements
%type <n> ClassPermits
%type <n> ClassBody
%type <n> ClassBodyDeclarations
%type <n> ClassBodyDeclaration
%type <n> ClassMemberDeclaration
%type <n> FieldDeclaration
%type <n> VariableDeclaratorList
%type <n> VariableDeclarator
%type <n> VariableDeclaratorId
%type <n> VariableInitializer
%type <n> MethodDeclaration
%type <n> MethodHeader
%type <n> MethodDeclarator
%type <n> ReceiverParameter
%type <n> FormalParameterList
%type <n> FormalParameter
%type <n> VariableArityParameter
%type <n> Throws
%type <n> MethodBody
%type <n> InstanceInitializer
%type <n> StaticInitializer
%type <n> ConstructorDeclaration
%type <n> ConstructorDeclarator
%type <n> SimpleTypeName
%type <n> ConstructorBody
%type <n> ExplicitConstructorInvocation
%type <n> EnumDeclaration
%type <n> EnumBody
%type <n> EnumConstantList
%type <n> EnumConstant
%type <n> EnumBodyDeclarations
%type <n> RecordDeclaration
%type <n> RecordHeader
%type <n> RecordComponentList
%type <n> RecordComponent
%type <n> VariableArityRecordComponent
%type <n> RecordBody
%type <n> RecordBodyDeclarations
%type <n> RecordBodyDeclaration
%type <n> CompactConstructorDeclaration
%type <n> ArrayInitializer
%type <n> VariableInitializerList
%type <n> Block
%type <n> BlockStatements
%type <n> BlockStatement
%type <n> LocalClassDeclaration
%type <n> LocalVariableDeclarationStatement
%type <n> LocalVariableDeclaration
%type <n> LocalVariableType
%type <n> Statement
%type <n> StatementNoShortIf
%type <n> StatementWithoutTrailingSubstatement
%type <n> EmptyStatement
%type <n> LabeledStatement
%type <n> LabeledStatementNoShortIf
%type <n> ExpressionStatement
%type <n> StatementExpression
%type <n> IfThenStatement
%type <n> IfThenElseStatement
%type <n> IfThenElseStatementNoShortIf
%type <n> AssertStatement
%type <n> WhileStatement
%type <n> WhileStatementNoShortIf
%type <n> DoStatement
%type <n> ForStatement
%type <n> ForStatementNoShortIf
%type <n> BasicForStatement
%type <n> BasicForStatementNoShortIf
%type <n> ForInit
%type <n> ForUpdate
%type <n> StatementExpressionList
%type <n> EnhancedForStatement
%type <n> EnhancedForStatementNoShortIf
%type <n> BreakStatement
%type <n> YieldStatement
%type <n> ContinueStatement
%type <n> ReturnStatement
%type <n> ThrowStatement
%type <n> SynchronizedStatement
%type <n> Primary
%type <n> PrimaryNoNewArray
%type <n> ClassLiteral
%type <n> ClassInstanceCreationExpression
%type <n> UnqualifiedClassInstanceCreationExpression
%type <n> ClassTypeToInstantiate
%type <n> FieldAccess
%type <n> ArrayAccess
%type <n> MethodInvocation
%type <n> ArgumentList
%type <n> ArrayCreationExpression
%type <n> DimExprs
%type <n> DimExpr
%type <n> Expression
%type <n> AssignmentExpression
%type <n> Assignment
%type <n> LeftHandSide
%type <n> ConditionalExpression
%type <n> ConditionalOrExpression
%type <n> ConditionalAndExpression
%type <n> InclusiveOrExpression
%type <n> ExclusiveOrExpression
%type <n> AndExpression
%type <n> EqualityExpression
%type <n> RelationalExpression
%type <n> ShiftExpression
%type <n> AdditiveExpression
%type <n> MultiplicativeExpression
%type <n> UnaryExpression
%type <n> PreIncrementExpression
%type <n> PreDecrementExpression
%type <n> UnaryExpressionNotPlusMinus
%type <n> PostfixExpression
%type <n> PostIncrementExpression
%type <n> PostDecrementExpression
%type <n> CastExpression
%type <n> ObjectDeclaration



/* %glr-parser */

/* %expect 4 */
%%
CompilationUnit
    : OrdinaryCompilationUnit
    {$$ = CN("input");AC($$,$1);startNode = $$;}
;

OrdinaryCompilationUnit
    : TopLevelClassDeclarations
    {$$ = $1;;} 
    | PackageDeclaration TopLevelClassDeclarations
    {$$ = CN("OrdinaryCompilationUnit"); AC($$,$1); AC($$,$2);}
;

TopLevelClassDeclarations
    : %empty 
    {$$ = CN("TopLevelClassDeclarations");int a = CN("empty");AC($$,a);}
    | TopLevelClassDeclarations TopLevelClassDeclaration
    {$$ = CN("TopLevelClassDeclarations"); AC($$,$1); AC($$,$2);}
;

PackageDeclaration
    : PACKAGE TypeName SEMICOLON
    {$$ = CN("PackageDeclaration"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

TopLevelClassDeclaration
    : ClassDeclaration
    {$1 = $$;}
    | SEMICOLON
    {$$ = CN($1.sym); $1.num = $$;}
;

Literal
    : IntegerLiteral
    {$$ = CN($1.sym); $1.num = $$;}
    | FloatingPointLiteral
    {$$ = CN($1.sym); $1.num = $$;}
    | BooleanLiteral
    {$$ = CN($1.sym); $1.num = $$;}
    | CharacterLiteral
    {$$ = CN($1.sym); $1.num = $$;}
    | StringLiteral
    {$$ = CN($1.sym); $1.num = $$;}
    | TextBlock
    {$$ = CN($1.sym); $1.num = $$;}
    | NullLiteral
    {$$ = CN($1.sym); $1.num = $$;}
;

Type
    : INT
    {$$ = CN($1.sym);$1.num = $$;}
    | LONG
    {$$ = CN($1.sym);$1.num = $$;}
    | FLOAT
    {$$ = CN($1.sym);$1.num = $$;}
    | DOUBLE
    {$$ = CN($1.sym);$1.num = $$;}
    | BOOLEAN
    {$$ = CN($1.sym);$1.num = $$;}
;

Dims
    : SQOPEN SQCLOSE
    {$$ = CN("Dims"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num); }
    | Dims SQOPEN SQCLOSE
    {$$ = CN("Dims"); AC($$,$1); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$2.num); AC($$,$3.num);}
;

TypeName
    : Identifier
    {$$ = CN($1.sym); $1.num = $$;}
    | TypeName DOT Identifier
    {$$ = CN("TypeName"); AC($$,$1); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$2.num); AC($$,$3.num);}
;

TypeNameList
    : TypeName
    {$1 = $$;}
    | TypeNameList COMMA TypeName
    {$$ = CN("TypeNameList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

/* Class */
ClassDeclaration
    : NormalClassDeclaration
    {$1 = $$;}
    | EnumDeclaration
    {$1 = $$;}
    | RecordDeclaration
    {$1 = $$;}
;

NormalClassDeclaration
    : AccessModifier CLASS Identifier ClassExtends ClassImplements ClassPermits ClassBody
    {$$ = CN("NormalClassDeclaration"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4); AC($$,$5); AC($$,$6); AC($$,$7);}
    | CLASS Identifier ClassExtends ClassImplements ClassPermits ClassBody
    {$$ = CN("NormalClassDeclaration"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4); AC($$,$5); AC($$,$6);}

;

AccessModifier
    : PUBLIC
    {$$ = CN($1.sym); $1.num = $$;}
    | PRIVATE
    {$$ = CN($1.sym); $1.num = $$;}
;

ClassExtends
    : %empty
    {$$ = CN("ClassExtends");int a = CN("empty");AC($$,a);}
    | EXTENDS TypeName
    {$$ = CN("ClassExtends"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
;

ClassImplements
    : %empty
    {$$ = CN("ClassImplements");int a = CN("empty");AC($$,a);}
    | IMPLEMENTS TypeNameList
    {$$ = CN("ClassImplements"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
;

ClassPermits
    : %empty
    {$$ = CN("ClassPermits");int a = CN("empty");AC($$,a);}
    | PERMITS TypeNameList
    {$$ = CN("ClassPermits"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
;

ClassBody
    : OBRAC ClassBodyDeclarations CBRAC
    {$$ = CN("ClassBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

ClassBodyDeclarations
    : %empty
    {$$ = CN("ClassBodyDeclarations");int a = CN("empty");AC($$,a);}
    | ClassBodyDeclarations ClassBodyDeclaration
    {$$ = CN("ClassBodyDeclarations"); AC($$,$1); AC($$,$2);}
;

ClassBodyDeclaration
    : ClassMemberDeclaration
    {$1 = $$;}
    | InstanceInitializer
    {$1 = $$;}
    | StaticInitializer
    {$1 = $$;}
    | ConstructorDeclaration
    {$1 = $$;}
;

ClassMemberDeclaration
    : FieldDeclaration
    {$1 = $$;}
    | MethodDeclaration
    {$1 = $$;}
    | ClassDeclaration
    {$1 = $$;}
    | SEMICOLON
    {$$ = CN($1.sym); $1.num = $$;}
    | ObjectDeclaration
    {$1 = $$;}
;

ObjectDeclaration
    : TypeName Identifier EQUAL NEW Identifier OPEN CLOSE SEMICOLON
    {$$ = CN("ObjectDeclaration"); AC($$,$1);$2.num = CN($2.sym); AC($$,$2.num);$3.num = CN($3.sym); AC($$,$3.num);$4.num = CN($4.sym); AC($$,$4.num); $5.num = CN($5.sym); AC($$,$5.num); $6.num = CN($6.sym); AC($$,$6.num); $7.num = CN($7.sym); AC($$,$7.num); $8.num = CN($8.sym); AC($$,$8.num);}
    | TypeName Identifier EQUAL TypeName DOT NEW Identifier OPEN CLOSE SEMICOLON
    {$$ = CN("ObjectDeclaration"); AC($$,$1);$2.num = CN($2.sym); AC($$,$2.num);$3.num = CN($3.sym); AC($$,$3.num);AC($$,$4); $5.num = CN($5.sym); AC($$,$5.num); $6.num = CN($6.sym); AC($$,$6.num); $7.num = CN($7.sym); AC($$,$7.num); $8.num = CN($8.sym); AC($$,$8.num); $9.num = CN($9.sym); AC($$,$9.num); $10.num = CN($10.sym); AC($$,$10.num);}
    | TypeName Identifier EQUAL TypeName DOT NEW Identifier OPEN ArgumentList CLOSE SEMICOLON
    {$$ = CN("ObjectDeclaration"); AC($$,$1);$2.num = CN($2.sym); AC($$,$2.num);$3.num = CN($3.sym); AC($$,$3.num);AC($$,$4);$5.num = CN($5.sym); AC($$,$5.num); $6.num = CN($6.sym); AC($$,$6.num); $7.num = CN($7.sym); AC($$,$7.num);$8.num = CN($8.sym); AC($$,$8.num); AC($$,$9);$10.num = CN($10.sym); AC($$,$10.num); $11.num = CN($11.sym); AC($$,$11.num);}
    | TypeName Identifier EQUAL NEW Identifier OPEN ArgumentList CLOSE SEMICOLON
    {$$ = CN("ObjectDeclaration"); AC($$,$1);$2.num = CN($2.sym); AC($$,$2.num);$3.num = CN($3.sym); AC($$,$3.num);$4.num = CN($4.sym); AC($$,$4.num); $5.num = CN($5.sym); AC($$,$5.num); $6.num = CN($6.sym); AC($$,$6.num); AC($$,$7);$8.num = CN($8.sym); AC($$,$8.num); $9.num = CN($9.sym); AC($$,$9.num);}
;

FieldDeclaration
    : AccessModifier Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $4.num = CN($4.sym); AC($$,$1); AC($$,$2); AC($$,$3); AC($$,$4.num);}
    | Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $3.num = CN($3.sym); AC($$,$1); AC($$,$2); AC($$,$3.num);}
    | AccessModifier STATIC Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $2.num = CN($2.sym); $5.num = CN($5.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4); AC($$,$5.num);}
    | STATIC Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3); AC($$,$4.num);}
    | AccessModifier FINAL Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $2.num = CN($2.sym); $5.num = CN($5.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4); AC($$,$5.num);}
    | FINAL Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3); AC($$,$4.num);}
    | AccessModifier STATIC FINAL Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $2.num = CN($2.sym); $3.num = CN($3.sym); $6.num = CN($6.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4); AC($$,$5); AC($$,$6.num);}
    | STATIC FINAL Type VariableDeclaratorList SEMICOLON
    {$$ = CN("FieldDeclaration"); $1.num = CN($1.sym); $2.num = CN($2.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4); AC($$,$5.num);}
;

VariableDeclaratorList
    : VariableDeclarator
    {$1 = $$;}
    | VariableDeclaratorList COMMA VariableDeclarator
    {$$ = CN("VariableDeclaratorList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

VariableDeclarator
    : VariableDeclaratorId
    {$1 = $$;} 
    | VariableDeclaratorId EQUAL VariableInitializer
    {$$ = CN("VariableDeclarator"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

VariableDeclaratorId
    : Identifier
    {$$ = CN($1.sym); $1.num = $$;}
    | Identifier Dims
    {$$ = CN("VariableDeclaratorId"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
;

VariableInitializer
    : Expression
    {$1 = $$;}
    | ArrayInitializer
    {$1 = $$;}
;

MethodDeclaration
    : AccessModifier MethodHeader MethodBody
    {$$ = CN("MethodDeclaration"); AC($$,$1); AC($$,$2); AC($$,$3);}
    | MethodHeader MethodBody
    {$$ = CN("MethodDeclaration"); AC($$,$1); AC($$,$2);}
    | AccessModifier STATIC MethodHeader MethodBody
    {$$ = CN("MethodDeclaration"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4);}
    | STATIC MethodHeader MethodBody
    {$$ = CN("MethodDeclaration"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2); AC($$,$3);}
;

MethodHeader
    : Type MethodDeclarator
    {$$ = CN("MethodHeader"); AC($$,$1); AC($$,$2);}
    | Type MethodDeclarator Throws
    {$$ = CN("MethodHeader"); AC($$,$1); AC($$,$2); AC($$,$3);}
    | VOID MethodDeclarator
    {$$ = CN("MethodHeader"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
    | VOID MethodDeclarator Throws
    {$$ = CN("MethodHeader"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2); AC($$,$3);}
;

MethodDeclarator
    : Identifier OPEN CLOSE
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
    | Identifier OPEN ReceiverParameter COMMA CLOSE
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5.num);} 
    | Identifier OPEN FormalParameterList CLOSE
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num);}
    | Identifier OPEN ReceiverParameter COMMA FormalParameterList CLOSE
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5); AC($$,$6.num);}
    | Identifier OPEN CLOSE Dims
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4);}
    | Identifier OPEN ReceiverParameter COMMA CLOSE Dims
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5.num); AC($$,$6);}
    | Identifier OPEN FormalParameterList CLOSE Dims
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5);}
    | Identifier OPEN ReceiverParameter COMMA FormalParameterList CLOSE Dims
    {$$ = CN("MethodDeclarator"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5); AC($$,$6.num); AC($$,$7);}
;

ReceiverParameter
    : Type THIS
    {$$ = CN("ReceiverParameter"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num);}
    | Type Identifier DOT THIS
    {$$ = CN("ReceiverParameter"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num);}
;

FormalParameterList
    : FormalParameter
    {$1 = $$;}
    | FormalParameterList COMMA FormalParameter
    {$$ = CN("FormalParameterList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

FormalParameter
    : FINAL Type VariableDeclaratorId
    {$$ = CN("FormalParameter"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2); AC($$,$3);}
    | Type VariableDeclaratorId
    {$$ = CN("FormalParameter"); AC($$,$1); AC($$,$2);}
    | VariableArityParameter
    {$$ = CN("FormalParameter"); AC($$,$1);}
;

VariableArityParameter
    : FINAL Type DOTDOTDOT Identifier
    {$$ = CN("VariableArityParameter"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4.num);}
    | Type DOTDOTDOT Identifier
    {$$ = CN("VariableArityParameter"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num);}
;

Throws
    : THROWS TypeNameList
    {$$ = CN("Throws"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
;

MethodBody
    : Block
    {$1 = $$;}
    | SEMICOLON
    {$$ = CN($1.sym); $1.num = $$;}
;

InstanceInitializer
    : Block
    {$1 = $$;}
;

StaticInitializer
    : STATIC Block
    {$$ = CN("StaticInitializer"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
;

ConstructorDeclaration
    : AccessModifier ConstructorDeclarator ConstructorBody
    {$$ = CN("ConstructorDeclaration"); AC($$,$1); AC($$,$2); AC($$,$3);}
    | AccessModifier ConstructorDeclarator Throws ConstructorBody
    {$$ = CN("ConstructorDeclaration"); AC($$,$1); AC($$,$2); AC($$,$3); AC($$,$4);}
    | ConstructorDeclarator ConstructorBody
    {$$ = CN("ConstructorDeclaration"); AC($$,$1); AC($$,$2);}
    | ConstructorDeclarator Throws ConstructorBody
    {$$ = CN("ConstructorDeclaration"); AC($$,$1); AC($$,$2); AC($$,$3);}
;

ConstructorDeclarator
    : SimpleTypeName OPEN  CLOSE
    {$$ = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num);}
    | SimpleTypeName OPEN ReceiverParameter COMMA CLOSE
    {$$ = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5.num);}
    | SimpleTypeName OPEN FormalParameterList CLOSE
    {$$ = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4.num);}
    | SimpleTypeName OPEN ReceiverParameter COMMA FormalParameterList CLOSE
    {$$ = CN("ConstructorDeclarator"); $2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5); AC($$,$6.num);}
;

SimpleTypeName
    : Identifier
    {$$ = CN($1.sym); $1.num = $$;}
;

ConstructorBody
    : OBRAC CBRAC
    {$$ = CN("ConstructorBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | OBRAC ExplicitConstructorInvocation CBRAC
    {$$ = CN("ConstructorBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
    | OBRAC BlockStatements CBRAC
    {$$ = CN("ConstructorBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
    | OBRAC ExplicitConstructorInvocation BlockStatements CBRAC
    {$$ = CN("ConstructorBody"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3); AC($$,$4.num);}
;

ExplicitConstructorInvocation
    : THIS OPEN CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num);}
    | THIS OPEN ArgumentList CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5.num);}
    | SUPER OPEN CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num);}
    | SUPER OPEN ArgumentList CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5.num);}
    | TypeName DOT SUPER OPEN CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num); AC($$,$6.num);}
    | TypeName DOT SUPER OPEN ArgumentList CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); $7.num = CN($7.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5); AC($$,$6.num); AC($$,$7.num);}
    | Primary DOT SUPER OPEN CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num); AC($$,$6.num);}
    | Primary DOT SUPER OPEN ArgumentList CLOSE SEMICOLON
    {$$ = CN("ExplicitConstructorInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); $7.num = CN($7.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5); AC($$,$6.num); AC($$,$7.num);}
;

EnumDeclaration
    : AccessModifier ENUM Identifier ClassImplements EnumBody
    {$$ = CN("EnumDeclaration"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4); AC($$,$5);}
    | ENUM Identifier ClassImplements EnumBody
    {$$ = CN("EnumDeclaration"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4);}
;

EnumBody
    : OBRAC CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | OBRAC EnumConstantList CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
    | OBRAC COMMA CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
    | OBRAC EnumConstantList COMMA CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4.num);}
    | OBRAC EnumBodyDeclarations CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
    | OBRAC EnumConstantList EnumBodyDeclarations CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3); AC($$,$4.num);}
    | OBRAC COMMA EnumBodyDeclarations CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num);}
    | OBRAC EnumConstantList COMMA EnumBodyDeclarations CBRAC
    {$$ = CN("EnumBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4); AC($$,$5.num);}
;

EnumConstantList
    : EnumConstant
    {$1 = $$;}
    | EnumConstantList COMMA EnumConstant
    {$$ = CN("EnumConstantList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

EnumConstant
    : Identifier
    {$$ = CN($1.sym); $1.num = $$;}
    | Identifier ClassBody
    {$$ = CN("EnumConstant"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
    | Identifier OPEN CLOSE
    {$$ = CN("EnumConstant"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
    | Identifier OPEN CLOSE ClassBody
    {$$ = CN("EnumConstant"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4);}
    | Identifier OPEN ArgumentList CLOSE
    {$$ = CN("EnumConstant"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num);} 
    | Identifier OPEN ArgumentList CLOSE ClassBody
    {$$ = CN("EnumConstant"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5);}
;

EnumBodyDeclarations
    : SEMICOLON ClassBodyDeclarations
    {$$ = CN("EnumBodyDeclarations"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2);}
;

RecordDeclaration
    : AccessModifier RECORD Identifier RecordHeader ClassImplements RecordBody
    {$$ = CN("RecordDeclaration"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4); AC($$,$5); AC($$,$6);}
    | RECORD Identifier RecordHeader ClassImplements RecordBody
    {$$ = CN("RecordDeclaration"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4); AC($$,$5);}
;

RecordHeader
    : OPEN CLOSE
    {$$ = CN("RecordHeader"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | OPEN RecordComponentList CLOSE
    {$$ = CN("RecordHeader"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

RecordComponentList
    : RecordComponent
    {$1 = $$;}
    | RecordComponentList COMMA RecordComponent
    {$$ = CN("RecordComponentList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

RecordComponent
    : Type Identifier
    {$$ = CN("RecordComponent"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num);}
    | VariableArityRecordComponent
    {$1 = $$;}
;

VariableArityRecordComponent
    : Type DOTDOTDOT Identifier
    {$$ = CN("VariableArityRecordComponent"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num);}
;

RecordBody
    : OBRAC CBRAC
    {$$ = CN("RecordBody"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | OBRAC RecordBodyDeclarations CBRAC
    {$$ = CN("RecordBody"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

RecordBodyDeclarations
    : RecordBodyDeclaration
    {$1 = $$;}
    | RecordBodyDeclarations RecordBodyDeclaration
    {$$ = CN("RecordBodyDeclarations"); AC($$,$1); AC($$,$2);}
;

RecordBodyDeclaration
    : ClassBodyDeclaration
    {$1 = $$;}
    | CompactConstructorDeclaration
    {$1 = $$;}
;

CompactConstructorDeclaration
    : AccessModifier SimpleTypeName ConstructorBody
    {$$ = CN("CompactConstructorDeclaration"); AC($$,$1); AC($$,$2); AC($$,$3);}
    | SimpleTypeName ConstructorBody
    {$$ = CN("CompactConstructorDeclaration"); AC($$,$1); AC($$,$2);}
;


/* Array */
ArrayInitializer
    : OBRAC CBRAC
    {$$ = CN("ArrayInitializer"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | OBRAC VariableInitializerList CBRAC
    {$$ = CN("ArrayInitializer"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
    | OBRAC COMMA CBRAC
    {$$ = CN("ArrayInitializer"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
    | OBRAC VariableInitializerList COMMA CBRAC
    {$$ = CN("ArrayInitializer"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4.num);}
;

VariableInitializerList
    : VariableInitializer
    {$1 = $$;}
    | VariableInitializerList COMMA VariableInitializer
    {$$ = CN("VariableInitializerList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;



/* Statament */
Block
    : OBRAC CBRAC
    {$$ = CN("Block"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | OBRAC BlockStatements CBRAC
    {$$ = CN("Block"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

BlockStatements
    : BlockStatement
    {$1 = $$;}
    | BlockStatements BlockStatement
    {$$ = CN("BlockStatements"); AC($$,$1); AC($$,$2);}
;

BlockStatement
    : LocalClassDeclaration
    {$1 = $$;}
    | LocalVariableDeclarationStatement
    {$1 = $$;}
    | ObjectDeclaration
    {$1 = $$;}
    | Statement
    {$1 = $$;}
;

LocalClassDeclaration
    : ClassDeclaration
    {$1 = $$;}
;

LocalVariableDeclarationStatement
    : LocalVariableDeclaration SEMICOLON
    {$$ = CN("LocalVariableDeclarationStatement"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num);}
;

LocalVariableDeclaration
    : FINAL LocalVariableType VariableDeclaratorList
    {$$ = CN("LocalVariableDeclaration"); $1.num = CN($1.sym); AC($$,$1.num); AC($$,$2); AC($$,$3);}
    | LocalVariableType VariableDeclaratorList
    {$$ = CN("LocalVariableDeclaration"); AC($$,$1); AC($$,$2);}
;

LocalVariableType
    : Type
    {$1 = $$;}
    | VAR
    {$$ = CN($1.sym); $1.num = $$;}
;

Statement
    : StatementWithoutTrailingSubstatement
    {$1 = $$;}
    | LabeledStatement
    {$1 = $$;}
    | IfThenStatement
    {$1 = $$;}
    | IfThenElseStatement
    {$1 = $$;}
    | WhileStatement
    {$1 = $$;}
    | ForStatement
    {$1 = $$;}
;

StatementNoShortIf
    : StatementWithoutTrailingSubstatement
    {$1 = $$;}
    | LabeledStatementNoShortIf
    {$1 = $$;}
    | IfThenElseStatementNoShortIf
    {$1 = $$;}
    | WhileStatementNoShortIf
    {$1 = $$;}
    | ForStatementNoShortIf
    {$1 = $$;}
;

StatementWithoutTrailingSubstatement
    : Block
    {$1 = $$;}
    | EmptyStatement
    {$1 = $$;}
    | ExpressionStatement
    {$1 = $$;}
    | AssertStatement
    {$1 = $$;}
    | DoStatement
    {$1 = $$;}
    | BreakStatement
    {$1 = $$;}
    | ContinueStatement
    {$1 = $$;}
    | ReturnStatement
    {$1 = $$;}
    | SynchronizedStatement
    {$1 = $$;}
    | ThrowStatement
    {$1 = $$;}
    | YieldStatement
    {$1 = $$;}
;

EmptyStatement
    : SEMICOLON
    {$$ = CN($1.sym); $1.num = $$;}
;

LabeledStatement
    : Identifier COLON Statement
    {$$ = CN("LabeledStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3);}
;

LabeledStatementNoShortIf
    : Identifier COLON StatementNoShortIf
    {$$ = CN("LabeledStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3);}
;

ExpressionStatement
    : StatementExpression SEMICOLON
    {$$ = CN("ExpressionStatement"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num);}
;

StatementExpression
    : Assignment
    {$1 = $$;}
    | PreIncrementExpression
    {$1 = $$;}
    | PreDecrementExpression
    {$1 = $$;}
    | PostIncrementExpression
    {$1 = $$;}
    | PostDecrementExpression
    {$1 = $$;}
    | MethodInvocation
    {$1 = $$;}
    | ClassInstanceCreationExpression
    {$1 = $$;}
;

IfThenStatement
    : IF OPEN Expression CLOSE Statement
    {$$ = CN("IfThenStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5);}
;

IfThenElseStatement
    : IF OPEN Expression CLOSE StatementNoShortIf ELSE Statement
    {$$ = CN("IfThenElseStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5); AC($$,$6.num); AC($$,$7);}
;

IfThenElseStatementNoShortIf
    : IF OPEN Expression CLOSE StatementNoShortIf ELSE StatementNoShortIf
    {$$ = CN("IfThenElseStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5); AC($$,$6.num); AC($$,$7);}
;

AssertStatement
    : ASSERT Expression SEMICOLON
    {$$ = CN("AssertStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
    | ASSERT Expression COLON Expression SEMICOLON
    {$$ = CN("AssertStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4); AC($$,$5.num);}
;

WhileStatement
    : WHILE OPEN Expression CLOSE Statement
    {$$ = CN("WhileStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5);}
;

WhileStatementNoShortIf
    : WHILE OPEN Expression CLOSE StatementNoShortIf
    {$$ = CN("WhileStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5);}
;

DoStatement
    : DO Statement WHILE OPEN Expression CLOSE SEMICOLON
    {$$ = CN("DoStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); $7.num = CN($7.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4.num); AC($$,$5); AC($$,$6.num); AC($$, $7.num);}
;

ForStatement
    : BasicForStatement
    {$1 = $$;}
    | EnhancedForStatement
    {$1 = $$;}
;

ForStatementNoShortIf
    : BasicForStatementNoShortIf
    {$1 = $$;}
    | EnhancedForStatementNoShortIf
    {$1 = $$;}
;

BasicForStatement
    : FOR OPEN SEMICOLON SEMICOLON CLOSE Statement
    {$$ = CN("BasicForStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num); AC($$,$6);}
    | FOR OPEN ForInit SEMICOLON SEMICOLON CLOSE Statement
    {$$ = CN("BasicForStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5.num); AC($$,$6.num); AC($$,$7);}
    | FOR OPEN SEMICOLON Expression SEMICOLON CLOSE Statement
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$6.num = CN($6.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3.num);AC($$,$4);AC($$,$5.num);AC($$,$6.num);AC($$,$7);}
    | FOR OPEN ForInit SEMICOLON Expression SEMICOLON CLOSE Statement
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$7.num = CN($7.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7.num);AC($$,$8);}
    | FOR OPEN SEMICOLON SEMICOLON ForUpdate CLOSE Statement
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$3.num = CN($3.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3.num);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7);}
    | FOR OPEN ForInit SEMICOLON SEMICOLON ForUpdate CLOSE Statement
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5.num);AC($$,$6);AC($$,$7.num); AC($$,$8);}
    | FOR OPEN SEMICOLON Expression SEMICOLON ForUpdate CLOSE Statement
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3.num);AC($$,$4);AC($$,$5.num);AC($$,$6);AC($$,$7.num); AC($$,$8);}
    | FOR OPEN ForInit SEMICOLON Expression SEMICOLON ForUpdate CLOSE Statement
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$8.num = CN($8.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7); AC($$,$8.num); AC($$,$9);}
;

BasicForStatementNoShortIf
    : FOR OPEN SEMICOLON SEMICOLON CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num); AC($$,$6);}
    | FOR OPEN ForInit SEMICOLON SEMICOLON CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5.num); AC($$,$6.num); AC($$,$7);}
    | FOR OPEN SEMICOLON Expression SEMICOLON CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$6.num = CN($6.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3.num);AC($$,$4);AC($$,$5.num);AC($$,$6.num);AC($$,$7);}
    | FOR OPEN ForInit SEMICOLON Expression SEMICOLON CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$7.num = CN($7.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7.num);AC($$,$8);}
    | FOR OPEN SEMICOLON SEMICOLON ForUpdate CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$3.num = CN($3.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3.num);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7);}
    | FOR OPEN ForInit SEMICOLON SEMICOLON ForUpdate CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5.num);AC($$,$6);AC($$,$7.num); AC($$,$8);}
    | FOR OPEN SEMICOLON Expression SEMICOLON ForUpdate CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$3.num = CN($3.sym);$5.num = CN($5.sym);$7.num = CN($7.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3.num);AC($$,$4);AC($$,$5.num);AC($$,$6);AC($$,$7.num); AC($$,$8);}
    | FOR OPEN ForInit SEMICOLON Expression SEMICOLON ForUpdate CLOSE StatementNoShortIf
    {$$ = CN("BasicForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);$8.num = CN($8.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7); AC($$,$8.num); AC($$,$9);}
;

ForInit
    : StatementExpressionList
    {$1 = $$;}
    | LocalVariableDeclaration
    {$1 = $$;}
;

ForUpdate
    : StatementExpressionList
    {$1 = $$;}
;

StatementExpressionList
    : StatementExpression 
    {$1 = $$;}
    | StatementExpressionList COMMA StatementExpression
    {$$ = CN("StatementExpressionList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}

;

EnhancedForStatement
    : FOR OPEN LocalVariableDeclaration COLON Expression CLOSE Statement
    {$$ = CN("EnhancedForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7);}
;

EnhancedForStatementNoShortIf
    : FOR OPEN LocalVariableDeclaration COLON Expression CLOSE StatementNoShortIf
    {$$ = CN("EnhancedForStatement");$1.num = CN($1.sym);$2.num = CN($2.sym);$4.num = CN($4.sym);$6.num = CN($6.sym);AC($$,$1.num);AC($$,$2.num);AC($$,$3);AC($$,$4.num);AC($$,$5);AC($$,$6.num);AC($$,$7);}

;

BreakStatement
    : BREAK SEMICOLON
    {$$ = CN("BreakStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | BREAK Identifier SEMICOLON
    {$$ = CN("BreakStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
;

YieldStatement
    : YIELD Expression SEMICOLON
    {$$ = CN("YieldStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}

;

ContinueStatement
    : CONTINUE SEMICOLON
    {$$ = CN("ContinueStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | CONTINUE Identifier SEMICOLON
    {$$ = CN("ContinueStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}    
;

ReturnStatement
    : RETURN SEMICOLON
    {$$ = CN("ReturnStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); AC($$,$1.num); AC($$,$2.num);}
    | RETURN Expression SEMICOLON
    {$$ = CN("ReturnStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

ThrowStatement
    : THROW Expression SEMICOLON
    {$$ = CN("ThrowStatement"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

SynchronizedStatement
    : SYNCRO OPEN Expression CLOSE Block
    {$$ = CN("SynchronizedStatement"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num); AC($$,$5);}
;    


/* Expression */
Primary
    : PrimaryNoNewArray
    {$1 = $$;}
    | ArrayCreationExpression
    {$1 = $$;}
;

PrimaryNoNewArray
    : Literal
    {$1 = $$;}
    | ClassLiteral
    {$1 = $$;}
    | THIS
    {$$=CN($1.sym);$1.num = $$;}
    | TypeName DOT THIS
    {$$ = CN("PrimaryNoNewArray"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num);}
    | OPEN Expression CLOSE
    {$$ = CN("PrimaryNoNewArray"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
    | ClassInstanceCreationExpression
    {$1 = $$;}
    | FieldAccess
    {$1 = $$;}
    | ArrayAccess
    {$1 = $$;}
    | MethodInvocation
    {$1 = $$;}
;

ClassLiteral
    : TypeName DOT CLASS
    {$$ = CN("ClassLiteral"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num);}
    | TypeName Dims DOT CLASS
    {$$ = CN("ClassLiteral"); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1); AC($$,$2); AC($$,$3.num); AC($$,$4.num);} 
    | Type DOT CLASS
    {$$ = CN("ClassLiteral"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num);}
    | Type Dims DOT CLASS
    {$$ = CN("ClassLiteral"); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1); AC($$,$2); AC($$,$3.num); AC($$,$4.num);} 
    | VOID DOT CLASS
    {$$ = CN("ClassLiteral"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
;

ClassInstanceCreationExpression
    : UnqualifiedClassInstanceCreationExpression
    {$1 = $$;}
    | TypeName DOT UnqualifiedClassInstanceCreationExpression
    {$$ = CN("ClassInstanceCreationExpression"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
    | Primary DOT UnqualifiedClassInstanceCreationExpression
    {$$ = CN("ClassInstanceCreationExpression"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

UnqualifiedClassInstanceCreationExpression
    : NEW ClassTypeToInstantiate OPEN CLOSE
    {$$ = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4.num);}
    | NEW ClassTypeToInstantiate OPEN ArgumentList CLOSE 
    {$$ = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4); AC($$,$5.num);}
    | NEW ClassTypeToInstantiate OPEN CLOSE ClassBody
    {$$ = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4.num); AC($$,$5);}
    | NEW ClassTypeToInstantiate OPEN ArgumentList CLOSE ClassBody
    {$$ = CN("UnqualifiedClassInstanceCreationExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4); AC($$,$5.num); AC($$,$6);}
;

ClassTypeToInstantiate
    : TypeName
    {$1 = $$;}
;

FieldAccess
    : Primary DOT Identifier
    {$$ = CN("FieldAccess"); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num);}
    | SUPER DOT Identifier
    {$$ = CN("FieldAccess"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
    | TypeName DOT SUPER DOT Identifier
    {$$ = CN("FieldAccess"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num);}
;

ArrayAccess
    : TypeName SQOPEN Expression SQCLOSE
    {$$ = CN("ArrayAccess"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4.num);}
    | PrimaryNoNewArray SQOPEN Expression SQCLOSE
    {$$ = CN("ArrayAccess"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4.num);}
;

MethodInvocation
    : Identifier OPEN CLOSE
     {$$ = CN("MethodInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num);}
    | Identifier OPEN ArgumentList CLOSE
      {$$ = CN("MethodInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3); AC($$,$4.num);}
    | TypeName DOT Identifier OPEN CLOSE
      {$$ = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num);}
    | TypeName DOT Identifier OPEN ArgumentList CLOSE
    {$$ = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5); AC($$,$6.num);}
    | Primary DOT Identifier OPEN CLOSE
     {$$ = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num);}
    | Primary DOT Identifier OPEN ArgumentList CLOSE
    {$$ = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5); AC($$,$6.num);}
    | SUPER DOT Identifier OPEN CLOSE
    {$$ = CN("MethodInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num);}
    | SUPER DOT Identifier OPEN ArgumentList CLOSE
    {$$ = CN("MethodInvocation"); $1.num = CN($1.sym); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $6.num = CN($6.sym); AC($$,$1.num); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5); AC($$,$6.num);}
    | TypeName DOT SUPER DOT Identifier OPEN CLOSE
    {$$ = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); $7.num = CN($7.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num); AC($$,$6.num); AC($$,$7.num);}
    | TypeName DOT SUPER DOT Identifier OPEN ArgumentList CLOSE
    {$$ = CN("MethodInvocation"); $2.num = CN($2.sym); $3.num = CN($3.sym); $4.num = CN($4.sym); $5.num = CN($5.sym); $6.num = CN($6.sym); $8.num = CN($8.sym); AC($$,$1); AC($$,$2.num); AC($$,$3.num); AC($$,$4.num); AC($$,$5.num); AC($$,$6.num); AC($$,$7); AC($$,$8.num);}
;

ArgumentList
    : Expression
    {$1 = $$;}
    | ArgumentList COMMA Expression
    {$$ = CN("ArgumentList"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

ArrayCreationExpression
    : NEW Type DimExprs
    {$$ = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$,$1.num); AC($$,$2); AC($$,$3);}
    | NEW Type DimExprs Dims
    {$$ = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$,$1.num); AC($$,$2); AC($$,$3);AC($$,$4);}
    | NEW TypeName DimExprs
    {$$ = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$,$1.num); AC($$,$2); AC($$,$3);}
    | NEW TypeName DimExprs Dims
    {$$ = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$,$1.num); AC($$,$2); AC($$,$3);AC($$,$4);}
    | NEW Type Dims ArrayInitializer
    {$$ = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$,$1.num); AC($$,$2); AC($$,$3);AC($$,$4);}
    | NEW TypeName Dims ArrayInitializer
    {$$ = CN("ArrayCreationExpression"); $1.num = CN($1.sym);  AC($$,$1.num); AC($$,$2); AC($$,$3);AC($$,$4);}
;

DimExprs
    : DimExpr
    {$1 = $$;}
    | DimExprs DimExpr
     {$$ = CN("DimExprs"); AC($$,$1); AC($$,$2);}
;

DimExpr
    : SQOPEN Expression SQCLOSE
    {$$ = CN("DimExpr"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num);}
;

Expression
    : AssignmentExpression
    {$1 = $$;}
;

AssignmentExpression
    : ConditionalExpression
    {$1 = $$;}
    | Assignment
    {$1 = $$;}
;

Assignment
    : LeftHandSide ASSIGN Expression
    {$$ = CN("Assignment"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
    | LeftHandSide EQUAL Expression
    {$$ = CN("Assignment"); $2.num = CN($2.sym); AC($$,$1); AC($$,$2.num); AC($$,$3);}
;

LeftHandSide
    : TypeName
    {$1 = $$;}
    | FieldAccess
    {$1 = $$;}
    | ArrayAccess
    {$1 = $$;}
;

ConditionalExpression
    : ConditionalOrExpression QUES Expression COLON ConditionalExpression
    {$$ = CN("ConditionalExpression"); $2.num = CN($2.sym); $4.num = CN($4.sym); AC($$,$1); AC($$,$2.num); AC($$,$3); AC($$,$4.num); ($$,$5);}
    | ConditionalOrExpression
    {$1 = $$;}
;

ConditionalOrExpression
    : ConditionalAndExpression
    {$1 = $$;}
    | ConditionalOrExpression OR ConditionalAndExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

ConditionalAndExpression
    : InclusiveOrExpression
    {$1 = $$;}
    | ConditionalAndExpression AND InclusiveOrExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

InclusiveOrExpression
    : ExclusiveOrExpression
    {$1 = $$;}
    | InclusiveOrExpression BITOR ExclusiveOrExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

ExclusiveOrExpression
    : AndExpression
    {$1 = $$;}
    | ExclusiveOrExpression BITCAP AndExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

AndExpression
    : EqualityExpression
    {$1 = $$;}
    | AndExpression BITAND EqualityExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

EqualityExpression
    : RelationalExpression
    {$1 = $$;}
    | EqualityExpression EQ RelationalExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | EqualityExpression NE RelationalExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

RelationalExpression
    : ShiftExpression
    {$1 = $$;}
    | RelationalExpression LT ShiftExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | RelationalExpression GT ShiftExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | RelationalExpression LQ ShiftExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | RelationalExpression GQ ShiftExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;


ShiftExpression
    : AdditiveExpression
    {$1 = $$;}
    | ShiftExpression LL AdditiveExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | ShiftExpression GG AdditiveExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | ShiftExpression GGG AdditiveExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

AdditiveExpression
    : MultiplicativeExpression
    {$1 = $$;}
    | AdditiveExpression PLUS MultiplicativeExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | AdditiveExpression MINUS MultiplicativeExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;


MultiplicativeExpression
    : UnaryExpression
    {$1 = $$;}
    | MultiplicativeExpression MULT UnaryExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | MultiplicativeExpression DIV UnaryExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
    | MultiplicativeExpression PERCENT UnaryExpression
    {$$ = CN($2.sym);$2.num = $$;AC($$,$1);AC($$,$3);}
;

UnaryExpression
    : PreIncrementExpression
    {$1 = $$;}
    | PreDecrementExpression
    {$1 = $$;}
    | PLUS UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$ = CN(new_ch); $1.num = $$; AC($$,$2);
    }
    | MINUS UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$ = CN(new_ch); $1.num = $$; AC($$,$2);
    }
    | UnaryExpressionNotPlusMinus
    {$1 = $$;}
;

PreIncrementExpression
    : INCRE UnaryExpression
    {
        const char* s = "(pre)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$ = CN(new_ch); $1.num = $$; AC($$,$2);
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
        $$ = CN(new_ch); $1.num = $$; AC($$,$2);
    }
;

UnaryExpressionNotPlusMinus
    : PostfixExpression
    {$1 = $$;}
    | NEG UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$ = CN(new_ch); $1.num = $$; AC($$,$2);
    }
    | NOT UnaryExpression
    {
        const char* s = "(unary)";;
        size_t new_len = strlen($1.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $1.sym);
        strcat(new_ch, s);
        $$ = CN(new_ch); $1.num = $$; AC($$,$2);
    }
    | CastExpression
    {$1 = $$;}
;

PostfixExpression
    : Primary
    {$1 = $$;}
    | TypeName
    {$1 = $$;}
    | PostIncrementExpression
    {$1 = $$;}
    | PostDecrementExpression
    {$1 = $$;}
;

PostIncrementExpression
    : PostfixExpression INCRE
    {
        const char* s = "(post)";;
        size_t new_len = strlen($2.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $2.sym);
        strcat(new_ch, s);
        $$ = CN(new_ch); $2.num = $$; AC($$,$1);}
;

PostDecrementExpression
    : PostfixExpression DECRE
    {
        const char* s = "(post)";
        size_t new_len = strlen($2.sym) + strlen(s);
        char* new_ch = (char*)malloc(new_len + 1);
        strcpy(new_ch, $2.sym);
        strcat(new_ch, s);
        $$ = CN(new_ch); $2.num = $$; AC($$,$1);}
;

CastExpression
    : OPEN Type CLOSE UnaryExpression
    {$$ = CN("CastExpression"); $1.num = CN($1.sym); $3.num = CN($3.sym); AC($$,$1.num); AC($$,$2); AC($$,$3.num); AC($$,$4);}
;



%%


void yyerror(char const *s){
	printf("Error : %s\n", s);
}

int CN(string lbl) {
	label[curNode] = lbl;
	vector<int> v;
	children[curNode] = v;
	// cout << "Node Created - " << lbl << endl;
	return curNode++;
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

    extern FILE *yyin;
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);
	build_graph(argv[2]);

    return 0;
}



