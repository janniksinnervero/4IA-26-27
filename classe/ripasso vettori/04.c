#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "array_lib.c"
#define DIM 15

int main(void){

    int vet[DIM];
    int val=0;
    int src=0;
    int sost=0;
    int cnt=0;

    srand(time(NULL));

    for (int i=0; i<DIM; i++){
        vet[i]=rand() % 25 + 1;
    }

    stampaVettore(vet, DIM);

    trovaValoreMassimo(vet, DIM);

    printf("\nInserisci un numero da 1 a 25: ");
    scanf("%d", &val);

    contaValore(vet, DIM, val, cnt);
    printf("\nIl valore compare %d volte\n", cnt);

    cnt=0;

    printf("\nInserisci il valore da sostituire: ");
    scanf("%d", &src);

    printf("\nInserisci il valore con cui sostituire %d: ", src);
    scanf("%d", &sost); 
    
    ricercaSostituisci(vet, DIM, src, sost, cnt);
    printf("\n Il valore %d viene sostituito %d volte", src, cnt);

    return 0;
}