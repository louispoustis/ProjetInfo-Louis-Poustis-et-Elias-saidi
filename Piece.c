#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

typedef struct {
	int ligne;
	int colonne;
	int forme[4][4];
} Piece;

void cpy_tab2D(int copie_tab[4][4],int tab_a_copie[4][4]){
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            copie_tab[i][j]=tab_a_copie[i][j];
        }
    }
}

void creationPiece(Piece tabPiece[7]){
	int PieceI1[4][4]={{'@','@','@','@'},{' ',' ',' ',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
	cpy_tab2D(tabPiece[0][0].forme,PieceI1);
    tabPiece[0][0].colonne = 4;
    tabPiece[0][0].ligne = 1;

    int PieceI2[4][4]={{'@',' ',' ',' '},{'@',' ',' ',' '},{'@',' ',' ',' '},{'@',' ',' ',' '}};
    cpy_tab2D(tabPiece[0][1].forme,PieceI2);
    tabPiece[0][1].colonne = 1;
    tabPiece[0][1].ligne = 4;

    cpy_tab2D(tabPiece[0][2].forme,PieceI1);
    tabPiece[0][2].colonne = 4;
    tabPiece[0][2].ligne = 1;

    cpy_tab2D(tabPiece[0][3].forme, PieceI2);
    tabPiece[0][3].colonne = 1;
    tabPiece[0][3].ligne = 4;

    int PieceO[4][4]={{'@','@',' ',' '},{'@','@',' ',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    for (int i=0;i<4;i++){
        cpy_tab2D(tabPiece[1][i].forme, PieceO);
        tabPiece[1][i].colonne = 2;
        tabPiece[1][i].ligne = 2;
    }

    int PieceT1[4][4]={{'@','@','@',' '},{' ','@',' ',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[2][0].forme, PieceT1);
    tabPiece[2][0].colonne = 3;
    tabPiece[2][0].ligne = 2;

    int PieceT2[4][4]={{' ','@',' ',' '},{'@','@',' ',' '},{' ','@',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[2][1].forme, PieceT2);
    tabPiece[2][1].colonne = 2;
    tabPiece[2][1].ligne = 3;

    int PieceT3[4][4]={{' ','@',' ',' '},{'@','@','@',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[2][2].forme, PieceT3);
    tabPiece[2][2].colonne = 3;
    tabPiece[2][2].ligne = 2;

    int PieceT4[4][4]={{'@',' ',' ',' '},{'@','@',' ',' '},{'@',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[2][3].forme, PieceT4);
    tabPiece[2][3].colonne = 2;
    tabPiece[2][3].ligne = 3;

    int PieceL1[4][4]={{'@','@','@',' '},{'@',' ',' ',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[3][0].forme, PieceL1);
    tabPiece[3][0].colonne = 3;
    tabPiece[3][0].ligne = 2;

    int PieceL2[4][4]={{'@','@',' ',' '},{' ','@',' ',' '},{' ','@',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[3][1].forme, PieceL2);
    tabPiece[3][1].colonne = 2;
    tabPiece[3][1].ligne = 3;

    int PieceL3[4][4]={{' ',' ','@',' '},{'@','@','@',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[3][2].forme, PieceL3);
    tabPiece[3][2].colonne = 3;
    tabPiece[3][2].ligne = 2;

    int PieceL4[4][4]={{'@',' ',' ',' '},{'@',' ',' ',' '},{'@','@',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[3][1].forme, PieceL4);
    tabPiece[3][1].colonne = 2;
    tabPiece[3][1].ligne = 3;

    int PieceJ[4][4]={{'@','@','@',' '},{' ',' ','@',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[4][0].forme, PieceJ);
    tabPiece[4][0].colonne = 3;
    tabPiece[4][0].ligne = 2;

    int PieceJ2[4][4]={{' ','@',' ',' '},{' ','@',' ',' '},{'@','@',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[3][1].forme, PieceJ2);
    tabPiece[3][1].colonne = 2;
    tabPiece[3][1].ligne = 3;

    int PieceJ3[4][4]={{'@','@','@',' '},{'@',' ',' ',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[3][2].forme, PieceJ3);
    tabPiece[3][2].colonne = 3;
    tabPiece[3][2].ligne = 2;

    int PieceJ4[4][4]={{'@','@',' ',' '},{'@',' ',' ',' '},{'@',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[3][1].forme, PieceJ4);
    tabPiece[3][1].colonne = 2;
    tabPiece[3][1].ligne = 3;

    int PieceZ1[4][4]={{'@','@',' ',' '},{' ','@','@',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[5][0].forme, PieceZ1);
    tabPiece[5][0].colonne = 3;
    tabPiece[5][0].ligne = 2;

    cpy_tab2D(tabPiece[5][2].forme, PieceZ1);
    tabPiece[5][2].colonne = 3;
    tabPiece[5][2].ligne = 2;

    int PieceZ2[4][4]={{' ','@',' ',' '},{'@','@',' ',' '},{'@',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[5][1].forme, PieceZ2);
    tabPiece[5][1].colonne = 2;
    tabPiece[5][1].ligne = 3;

    cpy_tab2D(tabPiece[5][3].forme, PieceZ2);
    tabPiece[5][3].colonne = 2;
    tabPiece[5][3].ligne = 3;

    int PieceS1[4][4]={{' ','@','@',' '},{'@','@',' ',' '},{' ',' ',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[6][0].forme, PieceS1);
    tabPiece[6][0].colonne = 3;
    tabPiece[6][0].ligne = 2;

    int PieceS2[4][4]={{'@',' ',' ',' '},{'@','@',' ',' '},{' ','@',' ',' '},{' ',' ',' ',' '}};
    cpy_tab2D(tabPiece[6][1].forme, PieceS2);
    tabPiece[6][1].colonne = 2;
    tabPiece[6][1].ligne = 3;
}

int randompiece() {
    srand(time(NULL));
    for (int i = 0; i<Piece tabPiece[7]; i++){
        printf("%d\n", rand() 8% );
    }
}

Piece randompiece(Piece tabPiece[7]) {
	return tabPiece[rand()%7];
}

int placement (int grille[TAILLE][TAILLE],Piece tabpiece[7],int col){
	int i,j;
	Piece piece_hasard = randompiece(tabpiece);
	for(i=0;i< piece_hasard.ligne;i++){
		for(j=0;j<piece_hasard.colonne;j++){
			if(grille[i][j+col]=='@' && piece.hasard[i][j]=='@'){ // la pièce depasse la grille
				return 1;
			}
		}
	}

	int place = 0;
	int k = 0;
	while(place==0 && k<TAILLE-piece_hasard.ligne+1){
		for(i=0;i< piece_hasard.ligne;i++){
			for(j=0;j<piece_hasard.colonne;j++){
				if(grille[i+k][j+col]=='@' && piece.hasard[i][j]=='@'){
					place=1;
				}
			}
			k+=1;
		}

	}
	if (place==0){
		k-=1;
	}
	for(i=0;i< piece_hasard.ligne;i++){
		for(j=0;j<piece_hasard.colonne;j++){
			if (piece_hasard[i][j]=='@'){
				grille[i+k][j+col]='@'

			}
		}
	}
	return 0;
}

void echange_ligne(int grille[TAILLE][TAILLE],int ligne1, int ligne 2){
	int temp;
	for (int i=0,i<TAILLE,i++){
		temp=grille[ligne1][i];
		grille[ligne1][i]=grille[ligne2][i];
		grille[ligne2][i]=temp;
	}
}

void eliminer_ligne(int grille[TAILLE][TAILLE]){
	int i,j,k=0,s;
	for(i=0;i<TAILLE;i++){
		s=0;
		for(j=0;j<TAILLE;j++){
			if (grille[i][j]=='@'){
				s++;
			}
		}
		if (s==TAILLE){
			for(j=0;j<TAILLE;j++){
				grille[i][j]==' ';
				for (int p=i;p<0;p--){
					echange_ligne(grille,p, p-1);
				}
			}
		}
	}
}
