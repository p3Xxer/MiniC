%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>


    /* TYPE */
    #define INT 1
    #define CHAR 2
    #define FLOAT 3

    /* OPERATOR */
    #define PLUS 4
    #define MINUS 5
    #define MULT 6
    #define DIV 7
    #define MOD 8
    #define ASSIGN 9
    #define EQ 10
    #define NE 11
    #define GT 12
    #define LS 13
    #define GE 14
    #define LE 15
    #define LAND 16
    #define LOR 17
    #define NOT 49

    /* DELIMITER */
    #define SEMICOLON 18
    #define COMMA 19
    #define LPAREN 20
    #define RPAREN 21
    #define LBRACE 22
    #define RBRACE 23
    #define LBRACKET 24
    #define RBRACKET 25

    /* KEYWORD */
    #define IF 26
    #define ELSE 27
    #define WHILE 28
    #define FOR 29
    #define DO 30
    #define SWITCH 31
    #define CASE 32
    #define DEFAULT 33
    #define BREAK 34
    #define CONTINUE 35
    #define RETURN 36
    #define PRINTF 37
    #define VOID 38

    /* IDENTIFIER */
    #define ID 39

    /* CONSTANT */
    #define INT_CONST 40
    #define FLOAT_CONST 41
    #define CHAR_CONST 50
    #define SIGNED_CONST 51
    #define STRING_CONST 52

    /* OTHER */
    #define SLCOMMENT 43
    #define MLCOMMENT_S 44
    #define MLCOMMENT_E 45
    #define ERROR 46
    #define MAIN 47
    #define HEADER 48

    #define TYPE_SPEC 53

    #define ARR 54
    #define FUNC 55
    #define ARR2D 56
    #define DQ 57
    #define HASH 58


    /* GLOBAL VARIABLE */
    int line_no = 1;

    struct node{
        char lexeme[100];
        char  token[100];
        int line_no;
        struct node *next;
    };

    struct ll{
        struct node *head;
        struct node *tail;
        int count;
    };

    struct ll *main_list = NULL;
%}

alpha [a-zA-Z]
digit [0-9]
und [_]
space [ ]
tab [\t]
line [\n]
at [@]
char \'.\'
string \"(.^([%d]|[%f]|[%s]|[%c]))\"

%%
{space}* {}
{tab}* {}
{string} return STRING_CONST;
{char} return CHAR_CONST;
{line} {line_no++;} {}

break return BREAK;
case return CASE;
default return DEFAULT;
char return CHAR;
continue return CONTINUE;
else return ELSE;
float return FLOAT;
for return FOR;
if return IF;
int return INT;
return return RETURN;
switch return SWITCH;
void return VOID;
while return WHILE;

printf return PRINTF;

{alpha}({alpha}|{digit}|{und})* return ID;

[+-][0-9]{digit}*(\.{digit}+)? return SIGNED_CONST;

"//".* return SLCOMMENT;
"/*" return MLCOMMENT_S;
"*/" return MLCOMMENT_E;

">" return GT;
"<" return LS;
"<=" return LE;
">=" return GE;
"==" return EQ;
"!=" return NE;
"&&" return LAND;
"\|\|" return LOR;
"!" return NOT;
"=" return ASSIGN;
"+" return PLUS;
"-" return MINUS;
"*" return MULT;
"/" return DIV;
"%" return MOD;

";" return SEMICOLON;
"," return COMMA;

"#include"[ ]*"<stdio.h>" return HEADER;
"main"[ ]*\([ ]*\)[ ]* return MAIN;

{digit}+ return INT_CONST;
{digit}+\.{digit}+ return FLOAT_CONST;

"%d"|"%f"|"%s"|"%c" return TYPE_SPEC;
"\"" return DQ;
"(" return LPAREN;
")" return RPAREN;
"[" return LBRACKET;
"]" return RBRACKET;
"#" return HASH;

{alpha}({alpha}|{digit}|{und})*\[{digit}*\] return ARR;
{alpha}({alpha}|{digit}|{und})*\[{digit}*\]\[{digit}*\] return ARR2D;
{alpha}({alpha}|{digit}|{und})*\(({alpha}|{digit}|{und}|{space})*\) return FUNC;

%%

struct node *create_node(char *lexeme, char *token, int line_no){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    strcpy(temp->lexeme, lexeme);
    temp->line_no = line_no;
    strcpy(temp->token, token);
    temp->next = NULL;
    return temp;
}

void inserttoLL(char* lexeme, char* token, int line_no){
    struct node *temp = create_node(lexeme, token, line_no);
    if(main_list->head == NULL){
        main_list->head = temp;
        main_list->tail = temp;
    }
    else{
        main_list->tail->next = temp;
        main_list->tail = temp;
    }
    main_list->count++;
}

void dis(){
    struct node *temp = main_list->head;
    while(temp != NULL){
        printf("%s %s %d\n", temp->lexeme, temp->token, temp->line_no);
        temp = temp->next;
    }
}

int main(){
    main_list = (struct ll *)malloc(sizeof(struct ll));
    main_list->head = NULL;
    main_list->tail = NULL;
    main_list->count = 0;
    int scan, slcline = 0, mlcline = 0, dq = 0;
    yyin = fopen("input.txt", "r");
    scan = yylex();
    while(scan){
        if(scan>=26 && scan<=38 || scan==1 || scan ==2 || scan==3){
            inserttoLL("KEYWORD",yytext,line_no);
            break;
        }
        if(scan==39){
            inserttoLL("IDENTIFIER",yytext,line_no);
        }
        if((scan>=4 && scan<=17) || scan==49){
            inserttoLL("OPERATOR",yytext,line_no);
        }
    }
    dis();
    return 0;
}















