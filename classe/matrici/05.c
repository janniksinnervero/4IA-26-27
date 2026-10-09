#include <stdio.h>
#include "mat_lib.c"
int main(void){

    int row=0;
    int col=0;
    int mat[row][col];

    caricaMat(row, col, mat);

    stampaAndSumRow(row, col, mat);

    return 0;

}