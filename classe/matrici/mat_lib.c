#include <stdio.h>
#include <stdbool.h>

void printMatrix(int _cols, int _rows, int _mat[_rows][_cols]){
    int cnt=0;
    
    for (int i=0; i<_rows; i++){
        for (int j=0; j<_cols; j++){
            printf("%2d ", _mat[i][j]);
        }
        printf("\n");
    }
}

void identityMatrix(int l, int m[l][l]){
    int val=0;
    int zero=0;

    printf("\nInserisci un numero intero da stampare sulla diagonale principale: ");
    scanf("%d", &val);
    printf("\n");

    for (int i=0; i<l; i++){
        for (int j=0; j<l; j++){
            if(j==i){
                printf("%2d", val);
            }
            else{
               printf("%2d", zero); 
            } 
        }
        printf("\n");
    }
}

bool symmetricalMatrix(int l, int _mat[l][l]){
    int _false=0;
    
    for (int i=0; i<l; i++){
        for (int j=0; j<l; j++){
            if(_mat[i][j] != _mat[j][i]){
                _false=1;
            }
        }
    }
    if (_false==0){
        return true;
    }
    else{
        return false;
    }
}
