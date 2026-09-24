#include <stdio.h>
#include "mat_lib.c"
#define DIM 3

int main (void){
    int mat[DIM][DIM]={
        {7,2,5},
        {2,21,9},
        {2,11,4}
    };

    printMatrix(DIM, DIM, mat);

    return 0;
}