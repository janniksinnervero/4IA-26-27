/**
 * Inizializza una matrice 5x5 ed un vettore di 5 elementi con valori random
 * @param int Riferimento alla matrice.
 * @param int Riferimento al vettore.
 * @param int Estremo minore.
 * @param int Estremo maggiore.
 */
void initRandMatVet(int _mat[5][5], int _vet[5], int _estMag, int _estMin);

/**
 * Stampa la matrice della funzione precedente.
 * @param int Riferimento alla matrice.
 */
void printMat(int _mat[5][5]);

/**
 * Stampa il vettore della funzione precedente.
 * @param int Riferimento al vettore.
 */
void printVet(int _vet[5]);

/**
 * Calcola e stampa per ogni riga della matrice il valore medio e restituisce l'indice di riga col valore più alto.
 * @param int Riferimento alla matrice.
 */
int mediaMagRow(int _mat[5][5], int _rowMagg);

/**
 * Restituisce quante colonne della matrice hanno una somma di valori inferiori a quella del vettore.
 * @param int Riferimento alla matrice.
 * @param int Riferimento al vettore.
 * @param int Colonne con somma minore di quella della matrice.
 */
int colMinVet(int _mat[5][5], int _vet[5], int _colMin);

/**
 * Ritorna 0 o 1 e scambia il valore di due celle della matrice se la prima è maggiore della seconda.
 * @param int Riferimento alla matrice.
 * @param int Riga cella 1.
 * @param int Colonna cella 1.
 * @param int Riga cella 2.
 * @param int Colonna cella 2.
 */
int switchMat(int _mat[5][5], int _r1, int _c1, int _r2, int _c2);






