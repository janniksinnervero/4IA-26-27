#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

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

void caricaVett(int _v[], int _dim, int _min, int _max){

  srand(time(NULL));

  for (int i=0; i<_dim; i++){
    _v[i]=_min+rand()%(_max-_min+1);
  }
}

void stampaRiga(int _v[], int _dim){
  for(int i=0; i<_dim; i++){
    printf("|%2d|", _v[i]);
  }
}

float mediaVett(int _v[], int _dim){
  int sum=0;
  float tot=0;

  for(int i=0; i<_dim; i++){
    sum=sum+_v[i];
  }

  tot=sum/_dim;

  return tot;
}

int getValoreAt(int _v[], int _dim, int _index){
  if(_index>=0 && _index<_dim){
    return _v[_index];
  }
  else{
    return -1;
  }
}
 bool subVett(int _v[], int _dim, int _index1, int _index2){
  if(_index1>_dim || _index1<0 || _index1>_index2 || _index2>_dim || _index2<0 || _index1==_index2){
    printf("Qualcosa è andato storto.");
    return false;
  }

  else{
    for (int i=_index1; i<=_index2; i++){
      printf(" I%d: %d |", i, _v[i]);
    }

    return true;
  }
}

void creaCodice(int _v[], int _dim){

  srand(time(NULL));

  for (int i=0; i<_dim; i++){
    _v[i]=0+rand()% (9-0+1);
  }
}

void richiediCodice(int _v[], int _dim, int _v2[]){
  for (int i=0; i<_dim; i++){
    printf("Inserisci cifra da 0 a 9\n");
    scanf("%d", &_v2[i]);
    while(_v2[i]<0 || _v2[i]>9){
      printf("Cifra non valida, riprova\n");
      scanf("%d", &_v2[i]);
    }
  }
}

void verificaStampaCodice(int _v[], int _dim, int _v2[], int _cnt){
  int falso=0;

  for (int i=0; i<_dim; i++){
    if (_v[i]==_v2[i]){
      printf("%d ", _v[i]);
    }
    else{
      printf("? ");
      falso=1;
    }

    if(falso==1){
      _cnt++;
      richiediCodice(int _v[], int _dim, int _v2[]);
      verificaStampaCodice(int _v[], int _dim, int _v2[], int _cnt);
    }

    else{
      for(int i=0; i<_dim; i++){
        printf("%d ", _v[i]);
      }
      printf("\nNumero tentativi: %d", _cnt);
    }
  }
}

void FibonacciV(int dim, int v[]) {
	v[0] = 0; v[1] = 1;
	for (int i = 2; i < dim; i++)
		v[i] = v[i - 2] + v[i - 1];
}



