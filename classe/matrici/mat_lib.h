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
