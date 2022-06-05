#include <stdio.h>
#include "fonctions.h"

void affiche(int tab[TAILLE][TAILLE])
{
    int ligne, colonne;
    for(int i=0; i<TAILLE; i++)
    {
        printf(" %c",65+i);
    }
    printf("\n");
    for(ligne=0; ligne<TAILLE; ligne++)
    {
        for(colonne=0; colonne<TAILLE; colonne++)
        {
            printf("|%c", tab[ligne][colonne]);
        }
        printf("|\n");
    }
    printf("\n");
}
