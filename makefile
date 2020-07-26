CC:= g++
CFLAGS:= -c -Wall 
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

.PHONY: all clean

all: gra.x

gra.x: main.o  move.o
	$(CC)  main.o  move.o -o gra.x $(LDFLAGS) 

main.o: main.cpp  move.h
	$(CC) -c main.cpp 

move.o: move.cpp
	$(CC) -c move.cpp 

clean:
	$(RM) $(wildcard *.[ox])