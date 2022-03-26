%{
#include "head/tree.h"
#include "lex.yy.c"

extern unsigned synError;

pNode root;

void yyerror(const char* msg);

%}

%define parse.error verbose
//%define parse.error detailed
//%define parse.error custom


/* declared types */
%union{
	pNode node;
}

/* declared tokens */
%token <node> STRUCT
%token <node> RETURN
%token <node> IF
%token <node> ELSE
%token <node> WHILE
%token <node> TYPE
%token <node> PLUS MINUS STAR DIV
%token <node> AND OR NOT
%token <node> ASSIGNOP RELOP
%token <node> SEMI
%token <node> COMMA
%token <node> DOT
%token <node> LP RP LB RB LC RC
%token <node> INT
%token <node> FLOAT
%token <node> ID

/* declared non-terminals */
// High-level Definitions
%type <node> Program ExtDefList ExtDef ExtDecList
// Specifiers
%type <node> Specifier StructSpecifier OptTag Tag
// Declarators
%type <node> VarDec FunDec VarList ParamDec
// Statements
%type <node> CompSt StmtList Stmt
// Local Definitions
%type <node> DefList Def Dec DecList
// Expressions
%type <node> Exp Args

/* priority and associativity */
%right	ASSIGNOP	// =
%left	OR	// ||
%left	AND	// &&
%left	RELOP	// > < >= <= == !=
%left	PLUS MINUS	// + -
%left	STAR DIV	// * /
%right	NOT	// !
%left	DOT	// .
%left	LB RB	// [ ]
%left	LP RP	// ( )
// else dangling problem
%nonassoc	LOWER_THAN_ELSE
%nonassoc	ELSE

/*
$$ = newNode(@$.first_line, NOT_A_TOKEN, "", );
$$ = NULL;
*/
%%
/* High-level Definitions */
Program:	ExtDefList	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Program", 1, $1);
					root = $$;
				}
	;

ExtDefList:	ExtDef ExtDefList{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ExtDefList", 2, $1, $2);
				}
	|	/* empty */	{
					$$ = NULL;
				}
	;
	
ExtDef:		Specifier ExtDecList SEMI{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ExtDef", 3, $1, $2, $3);				
				}
	|	Specifier SEMI	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ExtDef", 2, $1, $2);
				}
	|	Specifier FunDec CompSt{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ExtDef", 3, $1, $2, $3);
				}
	|	error SEMI	{
					synError = TRUE;
				}
	;

ExtDecList:	VarDec		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ExtDecList", 1, $1);
				}
	|	VarDec COMMA ExtDecList{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ExtDecList", 3, $1, $2, $3);
				}
	;





/* Specifiers */
Specifier:	TYPE		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Specifier", 1, $1);
				}
	|	StructSpecifier	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Specifier", 1, $1);
				}
	;

StructSpecifier:STRUCT OptTag LC DefList RC{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "StructSpecifier", 5, $1, $2, $3, $4, $5);
				}
	|	STRUCT Tag	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "StructSpecifier", 2, $1, $2);
				}
	;

OptTag:		ID		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "OptTag", 1, $1);
				}
	|	/* empty */	{
					$$ = NULL;
				}
	;

Tag:		ID		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Tag", 1, $1);
				}
	;





/* Declarators */
VarDec:		ID		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "VarDec", 1, $1);
				}
	|	VarDec LB INT RB{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "VarDec", 4, $1, $2, $3, $4);
				}
	|	error RB	{
					synError = TRUE;
				}
	;

FunDec:		ID LP VarList RP{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "FunDec", 4, $1, $2, $3, $4);
				}
	|	ID LP RP	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "FunDec", 3, $1, $2, $3);
				}
	|	error RP	{
					synError = TRUE;
				}
	;

VarList:	ParamDec COMMA VarList{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "VarList", 3, $1, $2, $3);
				}
	|	ParamDec	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "VarList", 1, $1);
				}
	;

ParamDec:	Specifier VarDec{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ParamDec", 2, $1, $2);
				}
	;





/* Statements */
CompSt:		LC DefList StmtList RC{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "ComSt", 4, $1, $2, $3, $4);
				}
	|	error RC	{
					synError = TRUE;
				}
	;

StmtList:	Stmt StmtList	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "StmtList", 2, $1, $2);
				}
	|	/* empty */	{
					$$ = NULL;
				}
	;

Stmt:		Exp SEMI	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Stmt", 2, $1, $2);
				}
	|	CompSt		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Stmt", 1, $1);
				}
	|	RETURN Exp SEMI	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Stmt", 3, $1, $2, $3);
				}
	|	IF LP Exp RP Stmt{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Stmt", 5, $1, $2, $3, $4, $5);
				}
	|	IF LP Exp RP Stmt ELSE Stmt{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Stmt", 7, $1, $2, $3, $4, $5, $6, $7);
				}
	|	WHILE LP Exp RP Stmt{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Stmt", 5, $1, $2, $3, $4, $5);
				}
	|	error SEMI	{
					synError = TRUE;
				}
	;





/* Local Definitions */
DefList:	Def DefList	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "DefList", 2, $1, $2);
				}
	|	/* empty */	{
					$$ = NULL;
				}
	;

Def:		Specifier DecList SEMI{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Def", 3, $1, $2, $3);
				}
	;

DecList:	Dec		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "DecList", 1, $1);
				}
	|	Dec COMMA DecList{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "DecList", 3, $1, $2, $3);
				}
	;

Dec:		VarDec		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Dec", 1, $1);
				}
	|	VarDec ASSIGNOP Exp{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Dec", 3, $1, $2, $3);
				}
	;





/* Expressions */
Exp:		Exp ASSIGNOP Exp{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp AND Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp OR Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp RELOP Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp PLUS Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp MINUS Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp STAR Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp DIV Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	LP Exp RP	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	MINUS Exp	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 2, $1, $2);
				}
	|	NOT Exp		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 2, $1, $2);
				}
	|	ID LP Args RP	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 4, $1, $2, $3, $4);
				}
	|	ID LP RP	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	Exp LB Exp RB	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 4, $1, $2, $3, $4);
				}
	|	Exp DOT ID	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 3, $1, $2, $3);
				}
	|	ID		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 1, $1);
				}
	|	INT		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 1, $1);
				}
	|	FLOAT		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Exp", 1, $1);
				}
	;

Args:		Exp COMMA Args	{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Args", 3, $1, $2, $3);
				}
	|	Exp		{
					$$ = newNode(@$.first_line, NOT_A_TOKEN, "Args", 1, $1);
				}
	;

%%

void yyerror(const char* msg){
	fprintf(stderr, "Error type B at line %d: %s.\n", yylineno, msg);
}

