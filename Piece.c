typedef struct {
int ligne;
int colonne;
int forme[4][4];
} Piece;

void creationPiece(Piece tabPiece[7]);
    {
    int PieceI[4][4]={{'@','@','@','@',};{' ',' ',' ',' ',};{' ',' ',' ',' ',};{' ',' ',' ',' ',}};
    tabPiece[0].forme = PieceI;
    tabPiece[0].colonne = 4;
    tabPiece[0].ligne = 1;

    int PieceO[4][4]={{' ','@','@',' ',};{' ','@','@',' ',};{' ',' ',' ',' ',};{' ',' ',' ',' ',}};
    tabPiece[1].forme = PieceO;
    tabPiece[1].colonne = 2;
    tabPiece[1].ligne = 2;

    int PieceT[4][4]={{'@','@','@',' ',};{' ','@',' ',' ',};{' ',' ',' ',' ',};{' ',' ',' ',' ',}};
    tabPiece[2].forme = PieceT;
    tabPiece[2].colonne = 3;
    tabPiece[2].ligne = 2;

    int PieceL[4][4]={{'@','@','@',' ',};{'@',' ',' ',' ',};{' ',' ',' ',' ',};{' ',' ',' ',' ',}};
    tabPiece[3].forme = PieceL;
    tabPiece[3].colonne = 3;
    tabPiece[3].ligne = 2;

    int PieceJ[4][4]={{' ','@','@','@',};{' ',' ',' ','@',};{' ',' ',' ',' ',};{' ',' ',' ',' ',}};
    tabPiece[4].forme = PieceJ;
    tabPiece[4].colonne = 3;
    tabPiece[4].ligne = 2;


    int PieceZ[4][4]={{'@','@',' ',' ',};{' ','@','@',' ',};{' ',' ',' ',' ',};{' ',' ',' ',' ',}};
    tabPiece[5].forme = PieceZ;
    tabPiece[5].colonne = 2;
    tabPiece[5].ligne = 2;

    int PieceS[4][4]={{' ',' ','@','@',};{' ','@','@',' ',};{' ',' ',' ',' ',};{' ',' ',' ',' ',}};
    tabPiece[6].forme = PieceS;
    tabPiece[6].colonne = 2;
    tabPiece[6].ligne = 2;
    }
int randompiece() {
    srand(time(NULL));
    for (int i = 0; i<Piece tabPiece[7]; i++){
        printf("%d\n", rand() 8% );
    }
}

int CheckPosition(Piece tabPiece[7]){
    int i, j;
    for(i = 0; i < Piece tabPiece[7]; i++) {
        for(j = 0; j < Piece tabPiece[7] ;j++){
            if((randompiece.colonne+j < 0 || randompiece.colonne+j >= colonne || randompiece.ligne+i >= ligne)){
                if(forme[i][j])
                    return FALSE;
            }
            else if(grilletetris[randompiece.ligne+i][randompiece.colonne+j] && forme[i][j])
                return FALSE;
        }
    }
    return TRUE;
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
			(grille[i][j]==' ');
				for (int p=i;p<0;p--){
					echange_ligne(grille,p, p-1);
				}
			}
		}
	}
