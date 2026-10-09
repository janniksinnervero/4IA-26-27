/** Stampa i valori all' interno di una matrice.
 * @param int* Numero colonne matrice.
 * @param int Numero righe matrice.
 * @param int Matrice.
 */
void printMatrix(int _cols, int _rows, int _mat[_rows][_cols]);

/** Inizializza una matrice tranne la diagonale principale
 * @param int* Dimensione matrice (quadrata).
 * @param int Matrice.
 */
void identityMatrix(int l, int _mat[l][l]);

/** Verifica se la matrice è simmetrica o meno
 * @param int* Dimensione matrice (quadrata).
 * @param int Matrice.
 */
bool symmetricalMatrix(int l, int _mat[l][l]);

/** Carica una matrice con valori random compresi tra 1 e 25
 * @param int* Numero righe matrice.
 * @param int* Numero colonne matrice.
 * @param int Matrice.
 */
void caricaMat(int _rows, int _cols,  int _mat[_rows][_cols]);

/** Verifica se una matrice è disposta a scacchiera
 * @param int* Dimensione matrice (quadrata).
 * @param int Matrice.
 * @param int Primo valore.
 * @param int Secondo valore.
 */
void scacchieraMat(int _dim, int _mat[_dim][_dim], int val1, int val2);

/** Calcola il valor medio della matrice.
 * @param int* Numero righe matrice. 
 * @param int* Numero colonne matrice.
 * @param int Matrice.
 * @param int Media.
 */
int mediaMat(int _rows, int _cols, int _mat[_rows][_cols], int _m);

/** Stampa matrice con somma di ogni riga.
 * @param int* Numero righe matrice. 
 * @param int* Numero colonne matrice.
 * @param int Matrice.
 */
void stampaAndSumRow(int _rows, int _cols, int _mat[_rows][_cols]);

/** Somma dei triangoli della matrice.
 * @param int* Dimensione matrice (quadrata). 
 * @param int Matrice.
 */
void sumTriangoli(int _dim, int _mat[_dim][_dim]);






