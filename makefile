CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c2x

all: programa

programa: main.o tabla.o conversion.o
    $(CC) $(CFLAGS) -o tabla main.o tabla.o conversion.o

main.o: main.c tabla.h
    $(CC) $(CFLAGS) -c main.c

tabla.o: tabla.c tabla.h conversion.h
    $(CC) $(CFLAGS) -c tabla.c

conversion.o: conversion.c conversion.h
    $(CC) $(CFLAGS) -c conversion.c

clean:
    rm main.o tabla.o conversion.o programa
    


















