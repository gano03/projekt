CC:= g++
CFLAGS:= -c -Wall 
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

.PHONY: all clean

all: arkanoid.x

arkanoid.x: main.o objects.o
	$(CC)  main.o objects.o -o arkanoid.x $(LDFLAGS) 

main.o: main.cpp 
	$(CC) -c main.cpp

objects.o: objects.cpp
	$(CC) -c objects.cpp 

clean:
	$(RM) $(wildcard *.[ox])