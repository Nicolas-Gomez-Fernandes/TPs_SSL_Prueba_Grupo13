CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c2x

all: programa

programa: main.o tabla.o conversion.o
    $(CC) $(CFLAGS) main.o tabla.o conversion.o -o programa

main.o: main.c tabla.h
    $(CC) $(CFLAGS) main.c -o main.o

tabla.o: tabla.c tabla.h conversion.h
    $(CC) $(CFLAGS) tabla.c -o tabla.o

conversion.o: conversion.c conversion.h
    $(CC) $(CFLAGS) conversion.c -o conversion.o

clean:
    rm main.o tabla.o conversion.o programa
    


















