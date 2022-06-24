#include <stdio.h>

/*
    Scrivere una funzione che prenda in input una matrice A di float 
    ed un array (monodimensionale) di float la cui lunghezza coincida con il 
    numero di righe di A. Per ogni indice di riga i, la funzione deve aggiornare 
    l’elemento di indice i dell’array con la somma degli elementi della riga i-esima di A.  
    Testare la funzione utilizzando la funzione dell’esercizio 1 
    per l’inizializzazione di una matrice ed una funzione per la 
    stampa degli elementi di un array monodimensionale.​
*/

void insert_matrix(int rows, int cols, float mat[][cols]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++){
            printf("Insert element [%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
}

void insert_array(int size, float array[]){
    for (int i = 0; i < size; i++){
        printf("Inser element %d: ", i);
        scanf("%f", &array[i]);
    }
}

void print_matrix(int rows, int cols, float mat[][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            printf("%f ", mat[i][j]);
        printf("\n");
    }
}

void print_array(int size, float array[]){
    for (int i = 0; i < size; i++)
        printf("%f ", array[i]);
}

void sub_element(int rows, int cols, float mat[][cols], float array[]){
    float row_sum = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            row_sum += mat[i][j];
        }
        array[i] = row_sum;
        row_sum = 0;
    }
}

int main(int argc, char **argv){
    int rows = 3, cols = 3;
    float array[rows];
    float mat[rows][cols];

    insert_array(rows, array);
    insert_matrix(rows, cols, mat);
    printf("\nInserted Array: \n");
    print_array(rows, array);
    printf("\nInserted Matrix: \n");
    print_matrix(rows, cols, mat);

    sub_element(rows, cols, mat, array);
    printf("\nModified Array: \n");
    print_array(rows, array);
}
