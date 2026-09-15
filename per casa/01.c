#include <stdio.h>
#define DIM 10

int pari_disp (int vett, int *p, int *d, int i){
    for(i=0; i<DIM; i++){
        if (vett[i]%2==0){
            *p++;
        }

        else{
            *d++;
        }
    }
}
 
int main(void){
    int pari=0;
    int disp=0;
    int i=0;
    int vet [DIM]={21, -9, 32, 9, 19, -41, 36, 1. -4, 6};

    pari_disp(int vet, &pari, &disp, i);

    printf("Valori pari: %d\n", pari);
    printf("Valori dispari: %d\n", disp);

    return 0;
}