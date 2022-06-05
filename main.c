#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

int main()
{
    srand(time(NULL));
    int grille[10][10]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
    Piece tab_pieces[7][4];
    creationPiece(tab_pieces);
    int orient;
    char colonne;
    int fin=0;
    int hasard;
    printf("Bienvenue dans Tetris !");
    while(fin==0){
        affiche(grille);
        hasard=rand()%7;
        for (int i=0;i<4;i++){
        	printf("%d:\n",i);
        	affiche_piece(tab_pieces[hasard][i]);
        	printf("\n");
        }
        do{
			printf("Entrez l'orientation de la pièce :\n");
			scanf("%d",&orient);
			clear_scan();
		}while(orient<0 || orient>3);
		do{
		    printf("Entrez la colonne: (ce sera la partie gauche de la pièce qui sera sur cette colonne)\n");
		    scanf("%c",&colonne);
		    clear_scan();
        }while (colonne<'A' || colonne>'J'- tab_pieces[hasard][orient].colonne+1);
        fin=placement(grille,tab_pieces[hasard][orient],colonne-'A');     
        eliminer_ligne(grille);
    }
    printf("Fin du jeu\n");
    return 0;
}
