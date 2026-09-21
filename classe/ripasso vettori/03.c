#include <stdio.h>
#include "array_lib.c"
#define DIM 10
int main (void){

    int vet [DIM];

    initArray(vet[], DIM);
    manualInputArray(vet[], DIM);
    printColArray(vet[], DIM);

    return 0;
}