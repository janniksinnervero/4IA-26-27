#include <stdio.h>
#include "array_lib.c"
#define DIM 10

int main(void){
    int vet[DIM];
    int max=0;
    int min=0;
    int v=0;

    printf("Inserisci valore minimo: ");
    scanf("%d", &min);

    printf("\nInserisci valore massimo: ");
    scanf("%d", &max);

    printf("Seleziona l'indice della cella da visualizzare");
    scanf("%d", &v);

    caricaVett(vet, DIM, min, max);
    stampaRiga(vet, DIM);
    printf("\nValore medio del vettore: %.2f", mediaVett(vet, DIM));


    return 0;
}