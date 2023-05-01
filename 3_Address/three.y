%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    extern FILE *yyin;
    
    int label = 0;
    int tempVariable = 0;

    char* genTempVariable(int x){
        char* temp = (char*)malloc(sizeof(char)*10);
        temp[0] = 'T';
        snprintf(temp, 10, "T%d", x);
        return temp;
    }

    int gencode(char* lhs, char* op, char* rhs){
        printf("T%d = %s %s %s\n", tempVariable, lhs, op, rhs);
        return tempVariable;
    }

    void assignment(char* lhs, char* rhs){
        //printf("in assign function");
        printf("%s = %s\n", lhs, rhs);
    }

%}

%union{
    char* lexeme;
}

%token IF ELSE WHILE FOR RETURN BREAK CONTINUE CASE DEFAULT SWITCH
%token MAIN PRINTF
%token COMMA RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token HASH DQ
%token ARR ARR2D ARR_E FUNC TYPE_SPEC FUNC_NAME
%token <lexeme> ID ASSIGN INT SEMICOLON FLOAT CHAR VOID 
%token <lexeme> LPAREN EQ NE LOR LAND GT LT GE LE PLUS MINUS DIV MUL MOD NOT INT_CONST FLOAT_CONST CHAR_CONST STRING_CONST SIGNED_CONST
%type <lexeme> Type Func_Decl Para_List Stmt_Lis DECL DECL_TAIL TERM CONST FACTOR EXPR 
%%

S: begin {printf("reaching here\n");}
    ;

begin: DECL 
    ;


Type : INT {$$ = $1;}
    | FLOAT {$$ = $1;}
    | CHAR {$$ = $1;}
    | VOID {$$ = $1;}
    ;

DECL : Type ID ASSIGN EXPR DECL_TAIL SEMICOLON {assignment($2, $4); $$ = $1;}
        |Type ID DECL_TAIL SEMICOLON {$$ = "";}
        ;

DECL_TAIL : COMMA ID DECL_TAIL
           | COMMA ID ASSIGN EXPR DECL_TAIL {assignment($2, $4);}
           |
           ;

EXPR : EXPR COMP_OP TERM
       |TERM
       ;

COMP_OP : LT | LE | GT | GE | LOR | LAND | NE | EQ
        ;

TERM : TERM PLUS FACTOR {
    int a = gencode($1, $2 , $3);
    char* tempVar = genTempVariable(a);
    $$ = tempVar;
    tempVariable++;
}
      |TERM MINUS FACTOR {
        int a = gencode($1, $2 , $3);
        char* tempVar = genTempVariable(a);
        $$ = tempVar;
        tempVariable++;
      }
      |TERM MUL FACTOR {
        int a = gencode($1, $2 , $3);
        char* tempVar = genTempVariable(a);
        $$ = tempVar;
        tempVariable++;
      }
      |TERM DIV FACTOR{
        int a = gencode($1, $2 , $3);
        char* tempVar = genTempVariable(a);
        $$ = tempVar;
        tempVariable++;
      }
      |FACTOR {$$ = $1;}
      ;
      
FACTOR : LPAREN EXPR RPAREN {$$ = $2;}
        |ID {$$ = $1;}
        |CONST {$$ = $1;}
        ;
       
CONST : INT_CONST {$$ = $1;}
      |FLOAT_CONST {$$ = $1;}
      |CHAR_CONST {$$ = $1;}
      |STRING_CONST {$$ = $1;}
      |SIGNED_CONST {$$ = $1;}
      ;
%%

int yyerror(char *s){
    printf("Error: %s\n", s);
    return 0;
}
int main(int argc , char *argv[]){
    //printf("hello");
    yyin = fopen(argv[1], "r");
    if(yyparse()==0){
        printf("success\n");
    }
}