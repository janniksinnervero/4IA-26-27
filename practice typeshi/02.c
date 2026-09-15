//NON TERMINATO
//Inserisci N numeri in un vettore e verifica se ci sono elementi ripetuti.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){

    int DIM=0;
    int max=100;
    int min=1;
    int tmp=0;
    int cnt=0;
    int _cnt=0;

    srand(time(NULL));

    printf("Seleziona dimensione vettore: ");
    scanf("%d", &DIM);

    int vet [DIM];

    for(int i=0; i<DIM; i++){
        vet[i] = (rand() % (max - min + 1)) + min;
        tmp=vet[i];
        if(i>1){
            cnt++;
            for (int j=cnt; j<0; j--){
                if (vet[i-1]==vet[i]){
                    printf("%d ", vet[i]);
                    _cnt=1;
                }
            }
        }
    }
    if(_cnt=0){
        printf("NESSUN NUMERO RIPETUTO");
    }
}