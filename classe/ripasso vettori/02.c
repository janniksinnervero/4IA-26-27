#include <stdio.h>
#define DIM 5
int main (void){

    int vet [DIM];
    int val=0;
    int media=0;
    int cnt=0;
    int cnt2=0;
    int i=0;
    int alt=0;
    

    for(i=0; i<DIM; i++){
        printf("Inserisci altezza in cm (I%d): ", i+1);
        scanf("%d", &vet[i]);
        val=val+vet[i];
    } 

    media=val/DIM;
    

    int valmin=vet[0];

    for(i=0; i<DIM; i++){
        if(vet[i]<valmin);
        valmin=vet[i];
    }

    printf("\nInserisci un altezza: ");
    scanf("%d", &alt);

    for(i=0; i<DIM; i++){
        if(alt==vet[i]){
            cnt++;
        }
    }

    for(i=0; i<DIM; i++){
        if(vet[i]<media){
            cnt2++;
        }
    }

    printf("\nL' altezza minima nel vettore è: %d", valmin);
    printf("\nIl valore medio è: %d", media);
    printf("\nL' altezza %d è presente %d volte nel vettore", alt, cnt);
    printf("\n%d valori sono sotto la media", cnt2);

    return 0;
}