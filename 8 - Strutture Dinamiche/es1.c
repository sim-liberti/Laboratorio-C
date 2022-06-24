#include <stdio.h>
#include <stdlib.h>

int ** inizializzaMatrice(int ** mat, int R, int C){
    mat = (int **)malloc(R*sizeof(int *));
    for (int i = 0; i < R; i++)
        mat[i] = (int *)malloc(C*sizeof(int));

    return mat;
}

void inserisciElementi(int ** mat, int R, int C){
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++){
            printf("Inserisci elemento %d,%d: ", i, j);
            scanf("%d", &mat[i][j]);
        } 
}

void stampaMatrice(int ** mat, int R, int C){
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++) 
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main(){
    int R = 3;
    int C = 3;
    int **mat;

    mat = inizializzaMatrice(mat, R, C);
    inserisciElementi(mat, R, C);
    stampaMatrice(mat, R, C);

    return 0;
}