%{

    #include <stdio.h>
    #include <string.h> 
    int scan, slcline=0, mlc=0, mlcline=0, dq=0, dqline=0;

%}

alpha [a-zA-Z]
digit [0-9]
und [_]
space [ ]
tab [\t]
line [\n]
at [@]
char \'.\'
string \".*\"

%%
{space}* {}
{tab}* {}
{string} {if(mlc==0){return STRING_CONST;}}
{char} {if(mlc==0){return CHAR_CONST;}}
{line} {line_no++;}
<<EOF>> {if(mlc==1){
    //should yacc throw error here?
    printf("Unmatched Comment");}else{exit(0);}}

int {if(mlc==0){return INT;}}
float {if(mlc==0){return FLOAT;}}
char {if(mlc==0){return CHAR;}}

break {if(mlc==0){return BREAK;}}
case {if(mlc==0){return CASE;}}
default {if(mlc==0){return DEFAULT;}}
continue {if(mlc==0){return CONTINUE;}}
else {if(mlc==0){return ELSE;}}
for {if(mlc==0){return FOR;}}
if {if(mlc==0){return IF;}}
return {if(mlc==0){return RETURN;}}
switch {if(mlc==0){return SWITCH;}}
void {if(mlc==0){return VOID;}}
while {if(mlc==0){return WHILE;}}

printf {if(mlc==0);return PRINTF;}

{alpha}({alpha}|{digit}|{und})* {if(mlc==0){return ID;}}

[+-][0-9]{digit}*(\.{digit}+)? {if(mlc==0){return SIGNED_CONST;}}

\/\/.* ;
"/*" {if(mlc==0){mlcline=line_no;mlc=1;}}
"*/" {if(mlc==0){
    //should yacc throw error here?
    printf("Unmatched Comment");}
    else{
        mlc=0;
    }
}


">" {if(mlc==0){return GT;}}
"<" {if(mlc==0){return LT;}}
">=" {if(mlc==0){return GE;}}
"<=" {if(mlc==0){return LE;}}
"==" {if(mlc==0){return EQ;}}
"!=" {if(mlc==0){return NE;}}
"&&" {if(mlc==0){return LAND;}}
"\|\|" {if(mlc==0){return LOR;}}
"!" {if(mlc==0){return NOT;}}
"=" {if(mlc==0){return ASSIGN;}}
"+" {if(mlc==0){return PLUS;}}
"-" {if(mlc==0){return MINUS;}}
"*" {if(mlc==0){return MUL;}}
"/" {if(mlc==0){return DIV;}}
"%" {if(mlc==0){return MOD;}}


";" {if(mlc==0){return SEMICOLON;}}
"," {if(mlc==0){return COMMA;}}
"(" {if(mlc==0){return LPAREN;}}
")" {if(mlc==0){return RPAREN;}}
"{" {if(mlc==0){return LBRACE;}}
"}" {if(mlc==0){return RBRACE;}}
"[" {if(mlc==0){return LBRACKET;}}
"]" {if(mlc==0){return RBRACKET;}}
"#" {if(mlc==0){return HASH;}}
"\"" {if(mlc==0){return DQ;}}

"main"[ ]*\([ ]*\)[ ]* {if(mlc==0){return MAIN;}}

"%d"|"%f"|"%s"|"%c" {if(mlc==0){return TYPE_SPEC;}}

{digit}+ {if(mlc==0){return INT_CONST;}}
{digit}+\.{digit}+ {if(mlc==0){return FLOAT_CONST;}}


{alpha}({alpha}|{digit}|{und})*\[{digit}*\] {if(mlc==0){return ARR;}}
{alpha}({alpha}|{digit}|{und})*\[{digit}*\]\[{digit}*\] {if(mlc==0){return ARR2D;}}
{alpha}({alpha}|{digit}|{und})*\(({alpha}|{digit}|{und}|{space})*\) {if(mlc==0){return FUNC;}}

%%

yywrap()
{
    return(1);
}