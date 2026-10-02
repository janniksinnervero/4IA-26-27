#include <stdio.h>
#include "mat_lib.c"

#define DIM 10
#define COLS 5
#define ROWS 5

int main (void){
    int mat [ROWS][COLS];

    caricaMat(ROWS, COLS, mat);
    printMatrix(ROWS, COLS, mat);

    return 0;
}