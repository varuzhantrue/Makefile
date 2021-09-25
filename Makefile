CC=g++
CFLAGS= -c -Wall

all: hehe

hehe: main.o a.o b.o
	$(CC) main.o a.o b.o -o hehe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

a.o: a.cpp
	$(CC) $(CFLAGS) a.cpp

b.o: b.cpp
	$(CC) $(CFLAGS) b.cpp

clean:
	rm -rf *o hehe
