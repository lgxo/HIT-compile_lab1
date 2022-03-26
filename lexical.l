%{
#include "syntax.tab.h"
#include "head/tree.h"
#include "head/errorA.h"

extern unsigned lexError;

/* Maintenance of location information */
int yycolumn = 1;
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;	yylloc.first_column = yycolumn;yylloc.last_column = yycolumn + yyleng - 1;yycolumn += yyleng;

%}

/* definitions */
%option yylineno

STRUCT  struct
RETURN  return
IF      if
ELSE    else
WHILE   while
TYPE    int|float

PLUS    \+
MINUS   -
STAR    \*
DIV     \/

AND     &&
OR      \|\|
NOT     !

ASSIGNOP    =
RELOP   >|<|>=|<=|==|!=

SEMI    ;
COMMA   ,
DOT     \.

LP      \(
RP      \)
LB      \[
RB      \]
LC      \{
RC      \}

/*int: hex | octal | decimal*/
INT     0[Xx]([0-9a-z]+|[0-9A-Z]+)|0[0-7]+|[1-9][0-9]*|0
/*float: decimal | Scientific notation*/
FLOAT	(([1-9][0-9]*|0)?\.[0-9]+|([1-9][0-9]*|0)\.)([Ee]([\+-][0-9]+)?)?
ID      [_a-zA-Z][_a-zA-Z0-9]{0,30}

/*
yylval.node = newTokenNode(yylineno, TOKEN_, "", yytext);
*/
%%
[\n\r]	{
		/* Maintenance of location information */
		yycolumn = 1;
	}





{STRUCT}	{
			yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "STRUCT", yytext);
			return STRUCT;
		}
{RETURN}	{
			yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "RETURN", yytext);
			return RETURN;
		}
{IF}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "IF", yytext);
		return IF;
	}
{ELSE}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "ELSE", yytext);
		return ELSE;
	}
{WHILE}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "WHILE", yytext);
		return WHILE;
	}
{TYPE}	{
		yylval.node = newTokenNode(yylineno, TOKEN_TYPE, "TYPE", yytext);
		return TYPE;
	}





{PLUS}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "PLUS", yytext);
		return PLUS;
	}
{MINUS}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "MINUS", yytext);
		return MINUS;
	}
{STAR}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "STAR", yytext);
		return STAR;
	}
{DIV}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "DIV", yytext);
		return DIV;
	}





{AND}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "AND", yytext);
		return AND;
	}
{OR}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "OR", yytext);
		return OR;
	}
{NOT}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "NOT", yytext);
		return NOT;
	}





{ASSIGNOP}	{
			yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "ASSIGNOP", yytext);
			return ASSIGNOP;
		}
{RELOP}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "RELOP", yytext);
		return RELOP;
	}





{SEMI}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "SEMI", yytext);
		return SEMI;
	}
{COMMA}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "COMMA", yytext);
		return COMMA;
	}
{DOT}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "DOT", yytext);
		return DOT;
	}





{LP}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "LP", yytext);
		return LP;
	}
{RP}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "RP", yytext);
		return RP;
	}
{LB}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "LB", yytext);
		return LB;
	}
{RB}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "RB", yytext);
		return RB;
	}
{LC}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "LC", yytext);
		return LC;
	}
{RC}	{
		yylval.node = newTokenNode(yylineno, TOKEN_OTHER, "RC", yytext);
		return RC;
	}





{INT}	{ 	/*if integer out of range*/
		long val = strtol(yytext, NULL, 0);
		if(val > 0xFFFFFFFF){
			lexError = TRUE;
			printErrorA(yylineno, Illegal_int, yytext);
		}
		else{
			yylval.node = newTokenNode(yylineno, TOKEN_INT, "INT", yytext);
			return INT;
		}
	}
{FLOAT}	{ 	/*incorrect format*/
		char* q = yytext + strlen(yytext) - 1;
		if(*yytext == '.' || *q == '.' || *q == 'e' || *q == 'E'){
			lexError = TRUE;
			printErrorA(yylineno, Illegal_floating, yytext);
		}
		/*浮点数的正确表示范围实现*/
		/*correct*/
		else{
			yylval.node = newTokenNode(yylineno, TOKEN_FLOAT, "FLOAT", yytext);
			return FLOAT;
		}
	}
{ID}	{
		yylval.node = newTokenNode(yylineno, TOKEN_ID, "ID", yytext);
		return ID;
	}





"/*"[^"*/"]*"*/"	{ /* comment */ }			
"//"	{	/* comment */
		char c = input();
		while (c != '\n') c = input();
	}





[ \t]	{/* nop */}
.	{
		lexError = TRUE;
		printErrorA(yylineno, Mysterious, yytext);
	}

%%
/*
int main(int argc, char** argv){
	YY_BUFFER_STATE bp;
	FILE* f;
	if (argc > 1){
		if (!(f = fopen(argv[1], "r"))){
			perror(argv[1]);
			return 1;
		}
	}
	bp = yy_create_buffer(f, YY_BUF_SIZE);
	yy_switch_to_buffer(bp);
	yylex();
	yy_delete_buffer(bp);
	//printf("flag: %d", flag);
	return 0;
}*/
