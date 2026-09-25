#include <stdio.h>
#include"mat_lib.c"

int main(void){
    int DIM=3;
    int mat[3][3]={
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    bool res = symmetricalMatrix(DIM, mat);

    if(res==true){
        printf("La matrice è simmetrica");
    }
    else{
        printf("La matrice non è simmetrica");
    }

    return 0;
}