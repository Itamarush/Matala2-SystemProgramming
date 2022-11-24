main.o: main.c my_mat.h
	gcc -c main.c my_mat.h

my_mat.o: my_mat.c
	gcc -c my_mat.c

connections: main.o my_mat.o
	gcc -o connections main.o my_mat.o

all: connections

.PHONY: clean all

clean:
	rm -f *.o *.out connections *.gch