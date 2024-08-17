# Makefile to compile program

CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.o dynamic_array.o
    $(CC) $(CFLAGS) -o main main.o dynamic_array.o

main.o: main.c dynamic_array.h
    $(CC) $(CFLAGS) -c main.c

dynamic_array.o: dynamic_array.c dynamic_array.h
    $(CC) $(CFLAGS) -c dynamic_array.c

clean:
    rm -f *.o main
