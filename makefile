all: function.o main.o
	gcc -o program function.o main.o

function.o: function.c header.h
	gcc -c function.c

main.o: main.c header.h
	gcc -c main.c

run:
	./program

clean:
	rm *.o
	rm *~
