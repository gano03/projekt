CC:= g++
CFLAGS:= -c -Wall 
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

.PHONY: all clean

all: arkanoid.x

arkanoid.x: main.o objects.o move.o
	$(CC)  main.o objects.o move.o -o arkanoid.x $(LDFLAGS) 

main.o: main.cpp objects.h move.h
	$(CC) -c main.cpp 

objects.o: objects.cpp objects.h
	$(CC) -c objects.cpp 

move.o: move.cpp
	$(CC) -c move.cpp 

clean:
	$(RM) $(wildcard *.[ox])