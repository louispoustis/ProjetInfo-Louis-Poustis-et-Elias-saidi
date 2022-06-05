all: game

Grille.o: Grille.c Grille.h
    gcc -c Gille.c -o Grille.o

Piece.o: Piece.c Piece.h
    gcc -c Piece.c -o Piece.o

main.o: main.c Grille.h Piece.h
    gcc -c main.c -o main.o

game: main.o Grille.o Piece.o
    gcc main.o Grille.o Piece.o -o game

