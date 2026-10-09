#include <stdio.h>
#include "mat_lib.c"
int main(void){

    int row=5;
    int col=5;
    int mat[row][col]={
        {9, 2, 11, 29, 21},
        {7, 24, 19, 10, 12},
        {1, 3, 9 ,21, 2},
        {20, 13, 8, 29, 2},
        {12, 38, 8, 22, 37}
    };

    printf("Righe: ");
    scanf("%d", &row);

    printf("Colonne: ");
    scanf("%d", &col);

    

    stampaAndSumRow(row, col, mat);

    return 0;

}