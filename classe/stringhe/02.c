#include <stdio.h>
#include "strlib.c"
#define DIM 20

int main(){
    char word[DIM];

    printf("Scrivi una parola: ");
    scanf("%s", &word);

    printf("\n");
    printf("Parola al contrario: ");
    reversePrint(word);

    return 0;
}