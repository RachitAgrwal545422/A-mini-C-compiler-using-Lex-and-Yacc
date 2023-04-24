lex lexer.l;
yacc -d -v parser.y;
gcc -ll -w y.tab.c;
./a.out<input3.c;

