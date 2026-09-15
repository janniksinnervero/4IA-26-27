#include <stdio.h>
#define DIM 10

int pari_disp (int *pari, int *disp){

    int vett [DIM]={21, -9, 32, 9, 19, -41, 36, 1. -4, 6};

    for(int i=0; i<DIM; i++){
        if (vett[i]%2==0){
            (*pari)++;
        }

        else{
            (*disp)++;
        }
    }
}
 
int main(void){
    int pari=0;
    int disp=0;

    pari_disp(&pari, &disp);

    printf("Valori pari: %d\n", pari);
    printf("Valori dispari: %d\n", disp);

    return 0;
}