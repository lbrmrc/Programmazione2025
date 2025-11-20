frazioni: frazione.o main.o
	gcc -g -o frazioni frazione.o main.o

frazione.o: frazione.c frazione.h
	gcc -g -c frazione.c

main.o: main.c frazione.h
	gcc -g -c main.c
