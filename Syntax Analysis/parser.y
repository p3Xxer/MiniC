%{
    #include "lex.yy.c"
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
%}

%left ASSIGN
%left LOR
%left LAND
%left EQ NE
%left LT LE GT GE
%left PLUS MINUS
%left MULT DIV MOD 
%left NOT
%token STRING_CONST INT_CONST FLOAT_CONST CHAR_CONST SIGNED_CONST
%token INT FLOAT CHAR 
%token IF ELSE WHILE FOR RETURN BREAK CONTINUE CASE DEFAULT SWITCH
%token VOID MAIN PRINTF
%token ID
%token SEMICOLON COMMA LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token HASH DQ
%token ARR ARR2D FUNC TYPE_SPEC
%start begin

%%

begin : Func_Decl begin | Func_Decl ;

Type : INT | FLOAT | CHAR | VOID ;

Func_Decl : Type ID LPAREN Para_List RPAREN LBRACE Stmt_List RBRACE 
            | Type ID LPAREN RPAREN LBRACE Stmt_List RBRACE ;

Para_List : Para COMMA Para_List | Para ;

Para : Type ID ;

Stmt_List : Stmt Stmt_List | Stmt | LBRACE Stmt_List RBRACE ;

Stmt : Decl | Control | Return | SEMICOLON | Print | Func_Call | Arr_Decl ;

Control : If | While | For ;

Return : RETURN ID SEMICOLON | RETURN CONST SEMICOLON | RETURN SEMICOLON;

Const : INT_CONST | FLOAT_CONST | CHAR_CONST | SIGNED_CONST ;

For : FOR LPAREN Decl Expr SEMICOLON Assign RPAREN LBRACE Stmt_List RBRACE;

While : WHILE LPAREN Expr RPAREN LBRACE Stmt_List RBRACE ;

Print : PRINTF LBRACE STRING_CONST RBRACE SEMICOLON 
    | PRINTF LPAREN STRING_CONST COMMA Var_List RPAREN SEMICOLON
    ;


Var_List : ID | ID COMMA Var_List 
|
;

Expr : ID 
    | Expr PLUS Expr 
    | Expr MINUS Expr 
    | Expr MULT Expr
    | Expr DIV Expr
    | Expr MOD Expr
    | Expr LAND Expr
    | Expr LOR Expr
    | Expr NE Expr
    | Expr EQ Expr
    | Expr LT Expr
    | Expr GT Expr
    | Expr LE Expr
    | Expr GE Expr
    | LPAREN Expr  RPAREN
    | Const
    ;

Assgn : ID ASSIGN Expr
    | ID 
    | ID ASSIGN Expr COMMA Assgn
	| ID COMMA Assgn
    ;

Decl : Type Assgn SEMICOLON
	| Assgn SEMICOLON
;


Func_Call : Type ID ASSIGN ID LPAREN Var_List RPAREN SEMICOLON
		| ID LPAREN Var_List RPAREN
		| ID ASSIGN ID LPAREN Var_List RPAREN SEMICOLON
        ;

Arr_Decl : Type ARR SEMICOLON
        | Type ARR ASSIGN LBRACE Const_List RBRACE SEMICOLON
		| Type ARR2D SEMICOLON
        | Type ARR2D ASSIGN LBRACE Const_List2 RBRACE SEMICOLON
        ;

Const_List : int_list | float_list | char_list
;

Const_List2 : LBRACE Const_List RBRACE | LBRACE Const_List RBRACE SEMICOLON Const_List2
;

int_list : INT_CONST COMMA int_list | INT_CONST | ID
;

float_list : FLOAT_CONST COMMA float_list | FLOAT_CONST | ID
;

char_list : CHAR_CONST COMMA char_list | CHAR_CONST | ID
;

%%


int main(int argc , char *argv[]){
    yyin = fopen(argv[1],"r");
    if(!yyparse()){
        printf("Parsing Successful\n");
    }
    else{
        printf("Parsing Failed\n");
    }
    ffclose(yyin);
}