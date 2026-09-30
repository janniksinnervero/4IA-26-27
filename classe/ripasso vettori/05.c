#include <stdio.h>
#include "array_lib.c"
#define DIM 10

int main(void){
    int vet[DIM];
    int max=0;
    int min=0;

    printf("Inserisci valore minimo: ");
    scanf("%d", &min);

    printf("\nInserisci valore massimo: ");
    scanf("%d", &max);

    caricaVett(vet, DIM, min, max);
    stampaRiga(vet, DIM);
    printf("\nValore medio del vettore: %.2f", mediaVett(vet, DIM));

    return 0;
}