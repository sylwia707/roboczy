CC=g++ -Wall -std=c++11 -g

all: main.o  funkcja.o
	$(CC) main.o -g  fukcja.o -o test
main.o: main.cpp header1.h header2.h
	$(CC) main.cpp -c -g -o main.o
funkcja.o: funkcja.cpp header1.h header2.h
	$(CC) funkcja.cpp -c -g -o fukcja.o
clean:
	rm -f *.o test
