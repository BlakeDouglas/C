Authors: Blake Douglas and Naim Shaqqou
To compile: make
To run: ./a.out[filename][flags]

Another way to compile: gcc driver.c vm.c lex.c parser.c

These programs reads in a program written in modified PL/0 and generates code for the Virtual Machine through
a token table, lexeme list, symbol table, error handling, and parsing.

The PL/0 Grammar is:
program ::= block "." . 
block ::= const-declaration  var-declaration  procedure-declaration statement.
const-declaration ::= ["const" ident ":=" number {"," ident ":=" number} ";"].
var-declaration  ::= [ "var "ident {"," ident} “;"].
procedure-declaration ::= { "procedure" ident ";" block ";" }.
statement   ::= [ ident ":=" expression
| "call" ident  
      | "do" statement { ";" statement } "od" 
      | "when" condition "do" statement ["elsedo" statement]
| "while" condition "do" statement
| "read" ident
| "write" expression
      | ε ] .  
condition ::= "odd" expression 
  | expression  rel-op  expression.  
rel-op ::= "="|“!="|"<"|"<="|">"|">=“.
expression ::= [ "+"|"-"] term { ("+"|"-") term}.
term ::= factor {("*"|"/"|”%”) factor}. 
factor ::= ident | number | "(" expression ")“.
number ::= digit {digit}.
ident ::= letter {letter | digit}.
digit ;;= "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9“.
letter ::= "a" | "b" | ... | "y" | "z" | "A" | "B" | ... | "Y" | "Z".
 
Based on Wirth’s definition for EBNF we have the following rule:
[ ] means an optional item.
{ } means repeat 0 or more times.
Terminal symbols are enclosed in quote marks.
A period is used to indicate the end of the definition of a syntactic class.
