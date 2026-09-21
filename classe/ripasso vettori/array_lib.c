#include <stdio.h>

void initArray(int _v[], int _dim){
  int i;
  for(i=0; i<_dim; i++){
    _v[i] = 0;
  }
}


void manualInputArray(int _v[], int _dim){
  int i;
  char junk;

  for(i=0; i<_dim; i++){
    printf("Inserisci il [%d] valore: ", i+1);
    scanf("%d", &_v[i]);
    junk = getchar();
  }
}


void printColArray(int _v[], int _dim){
  for(int i=0; i<_dim; i++){
    printf("[%d]= %d", i, _v[i]);
    printf("\n");
  }
}