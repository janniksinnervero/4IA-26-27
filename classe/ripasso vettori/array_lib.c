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
    printf("\nInserisci il [%d] valore: ", i+1);
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

void stampaVettore(int _v[], int _dim){
  for(int i=0; i<_dim; i++){
    printf("| I%d: %d |", i+1, _v[i]);
  }
}

void trovaValoreMassimo(int _v[], int _dim){
  int max=0;
  int cella_max=0;
  
  for (int i=0; i<_dim; i++){
    if(_v[i]>max){
      max=_v[i];
      cella_max=i;
    }
  }

  printf("\nValore massimo: %d (I%d)", max, cella_max);
}

int contaValore(int _v[], int _dim, int _val, int _cnt){

  for(int i=0; i<_dim; i++){
    if(_v[i]==_val){
      _cnt++;
    }
  }

  return _cnt;
}

int ricercaSostituisci(int _v[], int _dim, int _src, int _sost, int _cnt){

  for(int i=0; i>_dim; i++){
    if(_v[i]==_src){
      _v[i]=_sost;
      _cnt++;
    }
  }

  stampaVettore(_v, _dim);

  return _cnt;
}
