#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_lib.c"
#define DIM 5

int main (void){
    int vet1[DIM];
    int vet2[DIM];
    int cnt=0;

    creaCodice(vet1, DIM);
    richiediCodice(vet1, DIM, vet2);
    verificaStampaCodice(vet1, DIM, vet2, cnt);

    return 0;
}