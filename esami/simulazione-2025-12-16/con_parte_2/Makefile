medie: listaStudenti.o main.o
	gcc -g -o medie listaStudenti.o main.o

listaStudenti.o: listaStudenti.c listaStudenti.h
	gcc -g -c listaStudenti.c

main.o: main.c listaStudenti.h
	gcc -g -c main.c