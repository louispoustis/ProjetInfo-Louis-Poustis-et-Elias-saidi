#include "fonctions.h"

void affiche(grilletetris **tab)
{
    int ligne, colonne;
    for(i=0; i<TAILLE; i++)
    {
        printf("%c ",65+i);
    }
    printf("\n");
    for(ligne=0; ligne<TAILLE; ligne++)
    {
        for(colonne=0; colonne<TAILLE; colonne++)
        {
            printf("|%d", tab[ligne][colonne]);
        }
        printf("\n");
    }
    printf("\n");
}
