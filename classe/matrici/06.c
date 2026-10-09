#include <stdio.h>
#include "mat_lib.c"
#include "array_lib.c"
int main(void){
    int rows=0;
    int cols=0;
    int min=0;
    int max=0;
    int trueFalse=0;

    rows=3;
    cols=3;
    min=1;
    max=25;

    int mat[rows][cols];
    int vett[cols];

    caricaMat(rows, cols, mat);
    caricaVett(vett, cols, min, max);

    printMatrix(cols, rows, mat);
    stampaVettore(vett, cols);

    arrayRowMatrix(rows, cols, mat, vett, trueFalse);

    if(trueFalse==1){
        printf("\nIl vettore non corrispone ad alcuna riga della matrice");
    }

    else{
        printf("\nIl valore corrisponde ad almeno una riga della matrice");
    }

    return 0;
}
