#include <stdio.h>
#include <stdbool.h>
#include "array_lib.c"
#define DIM 10

int main(void){
    int vet[DIM]={2, 19, 31, 10, 33, -4, 11, 62, 49, 1};
    int index1=0;
    int index2=0;

    printf("Seleziona il primo indice: ");
    scanf("%d", &index1);

    printf("\nSeleziona il secondo indice: ");
    scanf("%d", &index2);

    bool truefalse=subVett(vet, DIM, index1, index2);
}