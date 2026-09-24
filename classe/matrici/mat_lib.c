#include <stdio.h>

void printMatrix(int _cols, int _rows, int _mat[_rows][_cols]){
    int cnt=0;
    
    for (int i=0; i<_rows; i++){
        for (int j=0; j<_cols; j++){
            printf("%2d ", _mat[i][j]);
        }
        printf("\n");
    }
}
