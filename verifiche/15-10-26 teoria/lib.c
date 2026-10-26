#include <stdio.h>
#include <stdbool.h>


void pitagoraM(int dim, int mat[dim][dim]) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            mat[i][j] = (i + 1) * (j + 1);
        }
    }
}

void prodPariDispariV(int dim, int v[],
                      int* prodPari, int* prodDisp) {
    *prodPari = 1;
    *prodDisp = 1;

    for (int i = 0; i < dim; i++) {
        if (v[i] == 0)
            continue;

        if (v[i] % 2 == 0)
            *prodPari *= v[i];
        else
            *prodDisp *= v[i];
    }
}

bool vCorniceM(int dim, int mat[dim][dim], int v) {
    for (int i = 0; i < dim; i++) {
        if (mat[0][i] != v ||
            mat[dim - 1][i] != v ||
            mat[i][0] != v ||
            mat[i][dim - 1] != v) {
            return false;
        }
    }

    return true;
}

bool lastNumM(int r, int c, int mat[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c - 1; j++) {
            if (mat[i][j] >= mat[i][c - 1]) {
                return false;
            }
        }
    }

    return true;
}