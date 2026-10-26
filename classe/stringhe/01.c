#include <stdio.h>
#include "strlib.c"
#define DIM 20
int main (void){
    char str[DIM];

    initStr(DIM, str);

    printf("Inserisci una parola: ");
    scanf("%s", str);

    printf("Stringa %s lunga: %d caratteri.\n", str, strLenght(DIM, str));
    return 0;
}