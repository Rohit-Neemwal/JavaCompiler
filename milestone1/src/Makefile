CC=g++
LEX=lex
YACC=bison
CFLAGS=-c

all: myASTGenerator

myASTGenerator: parser.o lexer.o
	$(CC) parser.o lexer.o -o myASTGenerator

parser.o: parser.tab.c
	$(CC) $(CFLAGS) parser.tab.c -o parser.o

lexer.o: lex.yy.c
	$(CC) $(CFLAGS) lex.yy.c -o lexer.o

parser.tab.c: parser.y
	$(YACC) -d -t parser.y

lex.yy.c: lexer.l
	$(LEX) lexer.l

clean:
	rm -f myASTGenerator *.o lex.yy.c parser.tab.c parser.tab.h parser.h out.dot out.png
