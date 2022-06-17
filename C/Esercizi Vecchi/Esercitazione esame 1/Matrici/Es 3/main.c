#include <stdio.h>

#define ROWS 3
#define COLS 3  

/*
    Una matrice si dice quadrata se il numero di colonne coincide con il numero di righe. 
    Data una matrice quadrata A N×N, si definisce trasposta di A, 
    la matrice quadrata AT N×N definita come segue: AT[i][j] coincide con A[j][i] 
    per tutti 0≤ i,j ≤N-1 (matrice ottenuta scambiando le righe con le colonne). 
    Scrivere una funzione che data in input una matrice quadrata A di interi 
    converta A nella sua trasposta (senza utilizzare matrici di supporto). 
    Testare la funzione utilizzando le funzioni dell’esercizio 1 
    per l’inizializzazione di una  matrice e la stampa degli elementi di una matrice.​
*/

void insert_matrix(int mat[][COLS]){
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++){
            printf("Insert element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
}

void print_matrix(int mat[][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void transpose_matrix(int mat[][COLS]){
    int temp;
    for (int i = 0; i < ROWS; i++)
        for (int j = i + 1; j < COLS; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    
}

int main(int argc, char **argv){
    int mat[ROWS][COLS];
    
    insert_matrix(mat);
    transpose_matrix(mat);
    printf("\nTransposed matrix: \n");
    print_matrix(mat);
    
    return 0;
}