%{
#include <stdio.h>
#include <stdlib.h>
#include"symbol_info.h"

#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);

extern FILE *yyin;
ofstream outlog;

int lines;

// declare any other variables or functions needed here

%}

%token IF ELSE 
%token ID CONST_INT CONST_FLOAT
%type <info> type_specifier program unit func_definition parameter_list compound_statement
%type <info> var_declaration declaration_list statements statement expression_statement
%type <info> variable expression logic_expression rel_expression simple_expression
%type <info> term unary_expression factor argument_list arguments

%%

start : program
	{
		outlog << "At line no: " << lines << " start : program "<< end1 << endl;
	}
	;

program : program unit
	{
		outlog << "At line no: " << lines << " program : program unit " << endl << endl;
		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
		
		$$ = new symbol_info($1->getname() + "\n" + $2->getname(),"program");
	}
	| unit
	{
		outlog << "At line no: " << lines << " unit : var_declaration " << endl << endl;
		outlog << $1->getname() << " " << $2->getname() << "()\n" << $5->getname() << endl << endl;
		
		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "unit");	
	}
	;

func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement
		{	
		outlog << "At line no: " << lines << " func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement " << endl << endl;
		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
		
		$$ = new symbol_info($1->getname() + "\n"+$2->getname(),"func_def");
		}
		| type_specifier ID LPAREN RPAREN compound_statement
		{
			
			outlog<<"At line no: " << lines << " func_definition : type_specifier ID LPAREN RPAREN compound_statement " << endl << endl;
			outlog << $1->getname() << " " << $2->getname() << "()\n" << $5->getname() << endl << endl;
			
			$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "func_def");	
		}
 		;

parameter_list : parameter_list COMMA type_specifier ID
		{
    		outlog << "At line no: " << lines << " parameter_list : parameter_list COMMA type_specifier ID " << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "parameter_list");
		}
		| parameter_list COMMA
		{
    		outlog << "At line no: " << lines << " parameter_list : parameter_list COMMA " << endl << endl;
    		outlog << $1->getname() << " " + $2->getname() << "()\n" + $5->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "parameter_list");
		}
		| type_specifier ID
		{
    		outlog << "At line no: " << lines << " parameter_list : type_specifier ID " << endl << endl;
    		outlog << $1->getname() << " " + $2->getname() + "()\n" + $5->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "parameter_list");
		}
		| type_specifier
		{
    		outlog << "At line no: " << lines << " parameter_list : type_specifier " << endl << endl;
    		outlog << $1->getname() << " " + $2->getname() + "()\n" + $5->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "parameter_list");
		}
		;

compound_statement: LCURL statements RCURL
		{
    		outlog << "At line no: " << lines << " compound_statement: LCURL statements RCURL" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "compound_statement");
		}
		| LCURL RCURL
		{
    		outlog << "At line no: " << lines << " compound_statement: LCURL RCURL" << endl << endl;
    		outlog << $1->getname() << " " << $2->getname() << "()\n" << $5->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "compound_statement");
		}
		;


compound_statement: LCURL statements RCURL
		{
    		outlog << "At line no: " << lines << " compound_statement: LCURL statements RCURL" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "compound_statement");
		}
		| LCURL RCURL
		{
    		outlog << "At line no: " << lines << " compound_statement: LCURL RCURL" << endl << endl;
    		outlog << $1->getname() << " " << $2->getname() << "()\n" << $5->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "compound_statement");
		}
		;

		var_declaration: type_specifier declaration_list SEMICOLON
		{
    		outlog << "At line no: " << lines << " var_declaration: type_specifier declaration_list SEMICOLON" << endl << endl;
		}
		;

		type_specifier: INT
		{
    		outlog << "At line no: " << lines << " type_specifier: INT" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "type_specifier");
		}
		| FLOAT
		{
    		outlog << "At line no: " << lines << " type_specifier: FLOAT" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "type_specifier");
		}
		| VOID
		{
    		outlog << "At line no: " << lines << " type_specifier: VOID" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "type_specifier");
		}
		;

		declaration_list: declaration_list COMMA ID
		{
    		outlog << "At line no: " << lines << " declaration_list: declaration_list COMMA ID" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "declaration_list");
		}
		| declaration_list COMMA ID LTHIRD CONST_INT RTHIRD
		{
    		outlog << "At line no: " << lines << " declaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "declaration_list");
		}
		| ID
		{
    		outlog << "At line no: " << lines << " declaration_list: ID" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "declaration_list");
		}
		| ID LTHIRD CONST_INT RTHIRD
		{
    		outlog << "At line no: " << lines << " declaration_list: ID LTHIRD CONST_INT RTHIRD" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "declaration_list");
		}
		;

		statements: statement
		{
    		outlog << "At line no: " << lines << " statements: statement" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "stmnt");
		}
		| statements statement
		{
    		outlog << "At line no: " << lines << " statements: statements statement" << endl << endl;
    		outlog << $1->getname() << " " << $2->getname() << "()\n" << $5->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "stmnt");
		}
		;

		statement: var_declaration
		{
    		outlog << "At line no: " << lines << " statements: var_declaration" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "stmnt");
		}
		| expression_statement
		{
    		outlog << "At line no: " << lines << " statements: expression_statement" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "stmnt");
		}
		| compound_statement
		{
    		outlog << "At line no: " << lines << " statements: compound_statement" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "stmnt");
		}
		| FOR LPAREN expression_statement expression_statement expression RPAREN
		{
    		outlog << "At line no: " << lines << " statements: FOR LPAREN expression_statement expression_statement expression RPAREN" << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;
    
    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "stmnt");
		}

			   
statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement
		{
    		outlog << "At line no: " << lines << " statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement " << endl << endl;
    		outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
    
    		$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "stmnt");
		}
		| IF LPAREN expression RPAREN statement
		{
    		outlog << "At line no: " << lines << " statement : IF LPAREN expression RPAREN statement " << endl << endl;
    		outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
    
    		$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "stmnt");
		}
		| IF LPAREN expression RPAREN statement ELSE statement
		{
    		outlog << "At line no: " << lines << " statement : IF LPAREN expression RPAREN statement ELSE statement " << endl << endl;
    		outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
    
    		$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "stmnt");
		}
		| WHILE LPAREN expression RPAREN statement
		{
    		outlog << "At line no: " << lines << " statement : WHILE LPAREN expression RPAREN statement " << endl << endl;
    		outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
    
    		$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "stmnt");
		}
		| PRINTLN LPAREN ID RPAREN SEMICOLON
		{
    		outlog << "At line no: " << lines << " statement : PRINTLN LPAREN ID RPAREN SEMICOLON " << endl << endl;
    		outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
    
    		$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "stmnt");
		}
		| RETURN expression 
		{
    		outlog << "At line no: " << lines << " statement : RETURN expression " << endl << endl;
    		outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
    
    		$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "stmnt");
		}
		;

expression_statement : SEMICOLON
	  {
	    	outlog << "At line no: expression_statement : SEMICOLON " << endl << endl;
			outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
			
			$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(),"expression_stmnt");
	  }
	| expression 
	  {
	    	outlog << "At line no: expression_statement : expression " << endl << endl;
			outlog << "for(" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;
			
			$$ = new symbol_info("for(" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(),"expression_stmnt");
	  }
	;

variable: ID
		{
    		outlog << "At line no: " << lines << " variable: ID " << endl << endl;
    		outlog << $1->getname() + "\n" + $2->getname() << endl << endl;

    		$$ = new symbol_info($1->getname() + "\n" + $2->getname(), "variable");
		}
		| ID LTHIRD expression RTHIRD
		{
    		outlog << "At line no: " << lines << " variable: ID LTHIRD expression RTHIRD " << endl << endl;
    		outlog << $1->getname() << " " << $2->getname() << "()\n" << $5->getname() << endl << endl;

    		$$ = new symbol_info($1->getname() + " " + $2->getname() + "()\n" + $5->getname(), "variable");
		}
		;

expression: logic_expression
		{
    		outlog << "At line no: expression: logic_expression " << endl << endl;
    		outlog << "for (" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;

    		$$ = new symbol_info("for (" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "expression");
		}
		| variable ASSIGNOP logic_expression
		{
    		outlog << "At line no: expression: variable ASSIGNOP logic_expression " << endl << endl;
    		outlog << "for (" << $3->getname() << $4->getname() << $5->getname() << ")\n" << $7->getname() << endl << endl;

    		$$ = new symbol_info("for (" + $3->getname() + $4->getname() + $5->getname() + ")\n" + $7->getname(), "expression");
		}
		;

logic_expression : rel_expression
		{
    		outlog << "At line " << lines << ": logic_expression : rel_expression" << endl << endl;
    		// Add more actions here
		}
		| rel_expression LOGICOP rel_expression
		{
    		outlog << "At line " << lines << ": logic_expression : rel_expression LOGICOP rel_expression" << endl << endl;
    		// Add more actions here
		}
		;

		rel_expression : simple_expression
		{
    		outlog << "At line " << lines << ": rel_expression : simple_expression" << endl << endl;
    		// Add more actions here
		}
		| simple_expression RELOP simple_expression
		{
    		outlog << "At line " << lines << ": rel_expression : simple_expression RELOP simple_expression" << endl << endl;
    		// Add more actions here
		}
		;


simple_expression : term
		{
    		outlog << "At line " << lines << ": simple_expression : term" << endl << endl;
		}
		| simple_expression ADDOP term
		{
    		outlog << "At line " << lines << ": simple_expression : simple_expression ADDOP term" << endl << endl;
		}
		;

		term : unary_expression
		{
    		outlog << "At line " << lines << ": term : unary_expression" << endl << endl;
		}
		| term MULOP unary_expression
		{
    		outlog << "At line " << lines << ": term : term MULOP unary_expression" << endl << endl;
		}
		;

unary_expression : ADDOP
		{
    		outlog << "At line " << lines << ": unary_expression : ADDOP" << endl << endl;
		}
		| NOT unary_expression
		{
    		outlog << "At line " << lines << ": unary_expression : NOT unary_expression" << endl << endl;
		}
		| factor
		{
    		outlog << "At line " << lines << ": unary_expression : factor" << endl << endl;
		}
		;

factor : variable
		{
    		outlog << "At line " << lines << ": factor : variable" << endl << endl;
		}
		| ID LPAREN argument_list RPAREN
		{
    		outlog << "At line " << lines << ": factor : ID LPAREN argument_list RPAREN" << endl << endl;
		}
		| LPAREN expression RPAREN
		{
    		outlog << "At line " << lines << ": factor : LPAREN expression RPAREN" << endl << endl;
		}
		| CONST_INT
		{
    		outlog << "At line " << lines << ": factor : CONST_INT" << endl << endl;
		}
		| CONST_FLOAT
		{
    		outlog << "At line " << lines << ": factor : CONST_FLOAT" << endl << endl;
		}
		| variable INCOP
		{
    		outlog << "At line " << lines << ": factor : variable INCOP" << endl << endl;
		}
		| variable DECOP
		{
    		outlog << "At line " << lines << ": factor : variable DECOP" << endl << endl;
		}
		;

argument_list : arguments
		{
    		outlog << "At line " << lines << ": argument_list : arguments" << endl << endl;
		}
		|
		{
    		outlog << "At line " << lines << ": argument_list :" << endl << endl;
		}
		;

		arguments : arguments COMMA logic_expression
		{
    		outlog << "At line " << lines << ": arguments : arguments COMMA logic_expression" << endl << endl;
		}
		| logic_expression
		{
    		outlog << "At line " << lines << ": arguments : logic_expression" << endl << endl;
		}
		;

%%

int main(int argc, char *argv[])
{
	if(argc != 2) 
    {
		// check if filename given
        cout<< "Please input file name" <<endl;
        return 0;
    }

	yyin = fopen(argv[1], "r");
	outlog.open("my_log.txt", ios::trunc);
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<<endl;
		return 0;
	}
    
	yyparse();
	
	outlog << "Total lines: " << lines <<endl;	
	//print number of lines
	
	outlog.close(); // close the log file
	fclose(yyin);  // close the input file
	
	return 0;
}