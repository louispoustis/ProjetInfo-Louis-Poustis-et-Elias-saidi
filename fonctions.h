#define TAILLE 10

typedef struct {
	int ligne;
	int colonne;
	int forme[4][4];
} Piece;

void affiche(grilletetris **tab);

void cpy_tab2D(int copie_tab[4][4],int tab_a_copie[4][4]);

void creationPiece(Piece tabPiece[7]);

int randompiece();

Piece randompiece(Piece tabPiece[7]);

int placement (int grille[TAILLE][TAILLE],Piece tabpiece[7],int col);

void echange_ligne(int grille[TAILLE][TAILLE],int ligne1, int ligne 2);

void eliminer_ligne(int grille[TAILLE][TAILLE]);
