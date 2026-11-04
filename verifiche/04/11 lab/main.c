#include "lib.c"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int mat[5][5];
    int vet[5];

    int estMin=5;
    int estMag=50;

    int rowMagg=0;

    int colMin=0;

    int r1, c1, r2, c2=0;
    int cambio=0;

    printf("SELEZIONA GLI INDICI DELLA MATRICE PER L'ULTIMA FUNZIONE (switch)\n");

    printf("RIGA PRIMA CELLA: ");
    scanf("%d", &r1);
    printf("COLONNA PRIMA CELLA: ");
    scanf("%d", &c1);

    printf("RIGA SECONDA CELLA: ");
    scanf("%d", &r2);
    printf("COLONNA SECONDA CELLA: ");
    scanf("%d", &c2);


    initRandMatVet(mat, vet, estMag, estMin);

    printMat(mat);

    printVet(vet);

    rowMagg=mediaMagRow(mat, rowMagg);
    printf("\nINDICE DELLA RIGA CON MEDIA MAGGIORE: %d\n", rowMagg);

    colMin=colMinVet(mat, vet, colMin);
    printf("\nNUMERO DI COLONNE CON MEDIA INFERIORE ALLA SOMMA DEL VETTORE: %d\n", colMin);

    cambio=switchMat(mat, r1, c1, r2, c2);
    if(cambio=1){
        printf("\nSCAMBIO EFFETTUATO");
    }

    else{
        printf("\nSCAMBIO NON EFFETUATO");
    }

    return 0;
}