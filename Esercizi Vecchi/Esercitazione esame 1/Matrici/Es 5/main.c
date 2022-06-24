#include <stdio.h>

/*
    Una matrice  quadrata A N×N, si definisce simmetrica se A [i][h] = A[h][i] 
    per tutti 0≤ i,h ≤N-1. Scrivere una funzione che data in input una matrice 
    quadrata A di interi testi se A è simmetrica o meno restituendo un intero 
    indicante l’esito del test. Testare la funzione utilizzando la funzione 
    dell’esercizio 1 per l’inizializzazione di una  matrice.
*/

void insert_matrix(int rows, int cols, int mat[][cols]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++){
            printf("Insert element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
}

void print_matrix(int rows, int cols, int mat[][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int check_simmetry(int rows, int cols, int mat[][cols]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (mat[i][j] != mat[j][i])
                return 0;

    return 1;
}

int main(int argc, char **argv){
    int rows = 3, cols = 3;
    int mat[rows][cols];
    
    insert_matrix(rows, cols, mat);
    printf("\nInserted matrix: \n");
    print_matrix(rows, cols, mat);

    if (check_simmetry(rows, cols, mat) == 0)
        printf("\nThe matrix is not simmeric.");
    else printf("\nThe matrix is simmeric. ");
}
