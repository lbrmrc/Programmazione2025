pazienti: listaPazienti.o main.o
	gcc -g -o pazienti listaPazienti.o main.o

listaPazienti.o: listaPazienti.c listaPazienti.h
	gcc -g -c listaPazienti.c

main.o: main.c listaPazienti.h
	gcc -g -c main.c