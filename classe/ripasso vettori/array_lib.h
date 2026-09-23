/** Azzera tutte le celle di un array.
 * @param int* Riferimento al vettore da inizializzare
 * @param int Dimensione dell'Array.
 */
void initArray(int _v[], int _dim);

// prototipo - lib.h
/** Assegna ad ogni cella di un array un valore richiesto in input.
 * @param int* Riferimento al vettore da acquisire.
 * @param int Dimensione dell'Array.
 */
void manualInputArray(int _v[], int _dim);

// prototipo - lib.h
/** Stampa i valori dell'array in colonna con indice di cella.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 */
void printColArray(int _v[], int _dim);

// prototipo - lib.h
/** Stampa i valori dell'array con indice di cella.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 */
void stampaVettore(int _v[], int _dim);

// prototipo - lib.h
/** Stampa il valore massimo dell'array con indice di cella.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 */
void trovaValoreMassimo(int _v[], int _dim);

// prototipo - lib.h
/** Restituisce quante volte appare un valore scelto dall' utente al main.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 * @param int Valore scelto dall' utente.
 */
int contaValore(int _v[], int _dim, int _val, int _cnt);

// prototipo - lib.h
/** Restituisce quante volte sostituisce un valore scelto dall' utente con un altro al main.
 * @param int* Riferimento al vettore da riempire.
 * @param int Dimensione dell'Array.
 * @param int Valore da sostituire scelto dall'utente.
 * @param int Valore con cui sostituire src scelto dall'utente.
 */
int ricercaSostituisci(int _v[], int _dim, int _src, int _sost, int _cnt);


