all: prog

prog: *.o
	gcc main.o math.o -o main

*.o:
	gcc -c main.c math.c

clean:
	rm *.o main
