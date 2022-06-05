#define TAILLE 10

typedef struct {
	int ligne;
	int colonne;
	int forme[4][4];
} Piece;


void clear_scan();

void affiche(int tab[TAILLE][TAILLE]);

void affiche_piece(Piece piece);

void cpy_tab2D(int copie_tab[4][4],int tab_a_copie[4][4]);

void creationPiece(Piece tabPiece[7][4]);

int placement (int grille[TAILLE][TAILLE],Piece piece_hasard,int col);

void echange_ligne(int grille[TAILLE][TAILLE],int ligne1, int ligne2);

void eliminer_ligne(int grille[TAILLE][TAILLE]);
