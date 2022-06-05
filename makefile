all: game

grille.o: grille.c fonctions.h
	gcc -c grille.c -o grille.o

pieces.o: pieces.c fonctions.h
	gcc -c pieces.c -o pieces.o

main.o: main.c fonctions.h
	gcc -c main.c -o main.o

game: main.o grille.o pieces.o
	gcc main.o grille.o pieces.o -o game
