#include "lib.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initRandMatVet(int _mat[5][5], int _vet[5], int _estMag, int _estMin){
    srand(time(NULL));

    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            _mat[i][j]=_estMin+rand()%_estMag;
        }
    }
    
    for(int i=0; i<5; i++){
        _vet[i]=_estMin+rand()%_estMag;
    }
}

void printMat(int _mat[5][5]){
    printf("MATRICE:\n");
    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%2d |", _mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printVet(int _vet[5]){
    printf("VETTORE:\n");
    for(int i=0; i<5; i++){
        printf("%2d |", _vet[i]);
    }
    printf("\n");
}

int mediaMagRow(int _mat[5][5], int _rowMagg){
    int i=0;
    int j=0;
    int sum=0;
    int media[5];

    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            sum+=_mat[i][j];
        }
        media[i]=sum/5;
        sum=0;
        printf("MEDIA RIGA %d: %d\n", i+1, media[i]);
    }

    _rowMagg=media[0];

    for(i=0; i<5; i++){
        if(media[i]>_rowMagg){
            _rowMagg=i;
        }
    }

    return _rowMagg;
}

int colMinVet(int _mat[5][5], int _vet[5], int _colMin){
    int sumVet=0;
    int sumCol=0;
    

    for(int i=0; i<5; i++){
        sumVet+=_vet[i];
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            sumCol+=_mat[j][i];
        }
    
        if(sumCol<sumVet){
            _colMin++;
        }
    }

    return _colMin;
}

int switchMat(int _mat[5][5], int _r1, int _c1, int _r2, int _c2){
    int tmp=0;

    if(_mat[_r1][_c1]>_mat[_r2][_c2]){
        tmp=_mat[_r1][_c1];
        _mat[_r1][_c1]=_mat[_r2][_c2];
        _mat[_r2][_c2]=tmp;

        return 1;
    }

    return 0;
}