#include <stdio.h>
#include <stdbool.h>
#include "lib.c"

/* Le define vanno dopo l'include della libreria */
#define dim 10
#define c 5
#define r 5

int main(void) {
    int prodPari = 1;
    int prodDispari = 1;

    int mat[dim][dim];
    int v[dim] = {1, 2, 3, 4, 5, 6, 0, 0, 7, 8};

    int matCornice[dim][dim] = {
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {5, 1, 2, 3, 4, 5, 6, 7, 8, 5},
        {5, 2, 3, 4, 5, 6, 7, 8, 9, 5},
        {5, 3, 4, 5, 6, 7, 8, 9, 1, 5},
        {5, 4, 5, 6, 7, 8, 9, 1, 2, 5},
        {5, 5, 6, 7, 8, 9, 1, 2, 3, 5},
        {5, 6, 7, 8, 9, 1, 2, 3, 4, 5},
        {5, 7, 8, 9, 1, 2, 3, 4, 5, 5},
        {5, 8, 9, 1, 2, 3, 4, 5, 6, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}
    };

    int matLast[r][c] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {5, 6, 7, 8, 9}
    };

    bool risultato;

    /* 1. Test di pitagoraM */
    printf("1. FUNZIONE pitagoraM\n");

    pitagoraM(dim, mat);

    printf("Matrice delle tabelline:\n");
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    /* 2. Test di prodPariDispariV */
    printf("\n2. FUNZIONE prodPariDispariV\n");

    printf("Vettore: ");
    for (int i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    prodPariDispariV(dim, v, &prodPari, &prodDispari);

    printf("Prodotto degli elementi pari (esclusi gli 0): %d\n",
           prodPari);
    printf("Prodotto degli elementi dispari (esclusi gli 0): %d\n",
           prodDispari);

    /* 3. Test di vCorniceM */
    printf("\n3. FUNZIONE vCorniceM\n");

    printf("Matrice con cornice di valore 5:\n");
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            printf("%3d", matCornice[i][j]);
        }
        printf("\n");
    }

    risultato = vCorniceM(dim, matCornice, 5);

    if (risultato) {
        printf("Tutti gli elementi della cornice sono uguali a 5.\n");
    } else {
        printf("Non tutti gli elementi della cornice sono uguali a 5.\n");
    }

    /* 4. Test di lastNumM */
    printf("\n4. FUNZIONE lastNumM\n");

    printf("Matrice da controllare:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%3d", matLast[i][j]);
        }
        printf("\n");
    }

    risultato = lastNumM(r, c, matLast);

    if (risultato) {
        printf("L'ultimo elemento di ogni riga e' maggiore "
               "di tutti gli altri elementi della riga.\n");
    } else {
        printf("La condizione sull'ultimo elemento di ogni riga "
               "non e' rispettata.\n");
    }

    return 0;
}