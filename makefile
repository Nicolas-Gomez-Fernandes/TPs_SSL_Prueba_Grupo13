all: programa

#Esta regla compila el programa principal 
programa: main.o tabla.o conversion.o
	gcc -o programa main.o tabla.o conversion.o

main.o: main.c tabla.h 
	gcc -c main.c

tabla.o: tabla.c tabla.h conversion.h
	gcc -c tabla.o

conversion.o: conversion.c conversion.h
	gcc -c conversion.o

clean: 
	rm main.o tabla.o conversion.o programa

run: programa
	./programa





















