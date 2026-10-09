#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void printMatrix(int _cols, int _rows, int _mat[_rows][_cols]){
    int cnt=0;
    
    for (int i=0; i<_rows; i++){
        for (int j=0; j<_cols; j++){
            printf("%2d |", _mat[i][j]);
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

void caricaMat(int _rows, int _cols,  int _mat[_rows][_cols]){
    srand(time(NULL));

    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            _mat[i][j]=1+rand()%25;
        }
    }
}

bool scacchieraMat(int _dim, int _mat[_dim][_dim], int val1, int val2){
    for(int i=0; i<_dim; i++){
        for(int j=0; j<_dim; j++){
            if(j>0){
                if(_mat[i][j]==_mat[i][j-1]){
                    return false;
                }
            }
            if(i>0 && j==0){
                if(_mat[i][j]==_mat[i-1][j]){
                    return false;
                }
            }
        }
    }
    
    return true;
}

int mediaMat(int _rows, int _cols, int _mat[_rows][_cols], int _m){
    int sum=0;
    int div=0;

    div=_rows*_cols;

    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            sum+=_mat[i][j];
        }
    }
    _m=sum/div;

    return _m;
}

void stampaAndSumRow(int _rows, int _cols, int _mat[_rows][_cols]){
    int vet[_rows];

    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            printf("%2d|", _mat[i][j]); 
            vet[i]+=_mat[i][j];
        }
        printf("\n");
    }
    for(int i=0; i<_rows; i++){
        printf("SOMMA RIGA %d: %d\n", (i+1), vet[i]);
    }
}

int arrayRowMatrix(int _rows, int _cols, int _mat[_rows][_cols], int _vet[_cols], int trueFalse){
    int vet2[_cols];
    int valMat=0;
    int valVet=0;
    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            vet2[j]=_mat[i][j];

        }
        for (int j=0; j<_cols; j++){
            if(vet2[j]!=_vet[j]){
                trueFalse=1;
            }

        }
    }
    return trueFalse;
}
