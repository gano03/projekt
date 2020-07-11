CC:= g++
CFLAGS:= -c -Wall 
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

.PHONY: all clean

all: arkanoid

arkanoid: main.o 
	$(CC)  main.o -o arkanoid.x $(LDFLAGS) 

main.o: main.cpp 
	$(CC) -c main.cpp 

clean:
	$(RM) $(wildcard *.[ox])