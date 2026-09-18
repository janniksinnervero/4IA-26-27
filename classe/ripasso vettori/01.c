#include <stdio.h>
#define DIM 10
int main (void){

    int vet [DIM];

    for (int i=0; i<DIM; i++){
        printf("Inserisci valore I%d: ", i+1);
        scanf("%d", &vet[i]);
    }

    for(int j=0; j<DIM; j++){
        printf("Indice %d = %d \n", j+1, vet[j]);
    }
    return 0;
}


