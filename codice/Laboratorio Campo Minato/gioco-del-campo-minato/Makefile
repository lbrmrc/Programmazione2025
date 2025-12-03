gioco: campo.o main.o
	gcc -g -o gioco campo.o main.o

campo.o: campo.c campo.h
	gcc -g -c campo.c

main.o: main.c campo.h
	gcc -g -c main.c