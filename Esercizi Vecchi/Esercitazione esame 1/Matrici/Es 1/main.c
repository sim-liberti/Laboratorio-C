#include <stdio.h>

/*
    Scrivere una funzione per l’inizializzazione di una matrice di interi, 
    un’altra funzione per la stampa a video degli elementi di una matrice di interi, 
    ed una funzione per la ricerca di un elemento all’interno di una matrice 
    che restituisca un’indicazione dell’esito della ricerca (elemento trovato o meno). 
    Testare le tre funzioni nel main.
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

int get_element(int rows, int cols, int mat[][cols], int to_search){ 
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (mat[i][j] == to_search)
                return 1;
    return 0; 
}

int main(int argc, char **argv){
    int rows, cols;
    printf("Matrix dimensions: \n");
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);
    int mat[rows][cols];
    
    insert_matrix(rows, cols, mat);
    printf("\nInserted matrix: \n");
    print_matrix(rows, cols, mat);

    int to_search;
    printf("Insert element to search: \n");
    scanf("%d", &to_search);

    if (get_element(rows, cols, mat, to_search) == 0)
        printf("Element not found. ");
    else printf("Element found. ");

    return 0;
}
