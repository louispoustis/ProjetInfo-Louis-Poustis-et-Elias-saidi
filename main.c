#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

int main()
{
    srand(time(NULL));
    int grille[10][10]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
    Piece tab_pieces[7][4];
    creationPiece(Piece tabPiece){
    int orient, colonne;
    int fin=0
    while(fin==0){
        affiche(grille);
        Piece piece_hasard[4]=tab_pieces[rand()%7];
        printf("Entrez l'orientation:/n"); 
        scanf("%d",&orient);
        printf("Entrez la colonne:/n");
        scanf("%c",&colonne);
        fin=placement(grille,piece_hasard[orient],colonne){        
        eliminer_ligne(grille){   
    }
    printf("Fin du jeu\n");
    return 0;
}
