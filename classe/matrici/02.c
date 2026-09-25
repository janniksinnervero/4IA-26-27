#include <stdio.h>
#include"mat_lib.c"

int main(void){

    int DIM=0;
    int mat[DIM][DIM];

    printf("Seleziona la dimensione della matrice: ");
    scanf("%d", &DIM);

    identityMatrix(DIM, mat);

    return 0;
}