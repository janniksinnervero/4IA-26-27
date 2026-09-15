#include <stdio.h>
#define DIM 5

int main (void){
    int vett [DIM]={2, 9, 21, -9, 8};
    int num=0;
    int ind=0;
    for (int i=0; i<DIM; i++){
        if (i>1){
            if (vett [i]>vett[i-1]){
                num=vett[i];
                ind=i;
            }
        }
    }
    printf("Valore Max (Indice) --> %d (%d)", num, ind);
    return 0;
}