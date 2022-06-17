#include <stdio.h>

/*
    Scrivere una funzione che prenda in input due matrici aventi le stesse dimensioni
    (e, cioè, lo stesso numero di righe e colonne) e copi il contenuto della prima matrice 
    nella seconda. Testare la funzione utilizzando le funzioni dell’esercizio 1 per 
    l’inizializzazione della  prima matrice e la stampa degli elementi 
    della seconda matrice. 
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

void copy_matrix(int rows, int cols, int mat1[][cols], int mat2[][cols]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat2[i][j] = mat1[i][j];
}

int main(int argc, char **argv){
    int rows, cols;
    printf("Insert matrix dimensions: ");
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Cols: ");
    scanf("%d", &cols);
    int mat1[rows][cols];
    int mat2[rows][cols];

    insert_matrix(rows, cols, mat1);
    copy_matrix(rows, cols, mat1, mat2);
    printf("\nMatrix 2 (copied): \n");
    print_matrix(rows, cols, mat2);
}
