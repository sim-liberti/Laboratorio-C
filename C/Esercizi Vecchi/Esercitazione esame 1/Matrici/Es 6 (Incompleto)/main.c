#include <stdio.h>

/*
    Scrivere una funzione che prenda in input una matrice di float 
    ed utilizzando una funzione ricorsiva che implementi l’algoritmo Merge Sort 
    ordini per valori crescenti gli elementi di ciascuna riga della matrice 
    (senza utilizzare matrici di supporto). Testare la funzione utilizzando le funzioni 
    dell’esercizio 1 per l’inizializzazione di una  matrice 
    e la stampa degli elementi di una matrice. 
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

void merge(int a[], int p, int q, int r){
    int i, j, k=0, b[3];
    i = p;
    j = q+1;

    while (i<=q && j<=r) {
        if (a[i]<a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= q) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= r) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (k=p; k<=r; k++)
        a[k] = b[k-p];
}

void merge_sort(int a[], int p, int r){
    int q;
    if (p < r) {
        q = (p+r)/2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
    }
}

int main(int argc, char **argv){
    int rows = 3, cols = 3;
    int mat[rows][cols];
    
    insert_matrix(rows, cols, mat);
    printf("\nInserted matrix: \n");
    print_matrix(rows, cols, mat);
    
    return 0;
}
