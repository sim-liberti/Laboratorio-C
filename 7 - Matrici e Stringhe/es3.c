#include <stdio.h>
#include <stdlib.h>

// Inizializzazione Contigua
int ** inizializzaMatriceCT(int ** mat, int R, int C){
    mat = (int **)malloc(R*sizeof(int *));
    mat[0] = (int *)malloc (R*C*sizeof(int));
    for (int i = 0; i < R; i++)
        mat[i] = mat[0] + i*C;

    return mat;
}

// Inizializzazione Non Contigua
int ** inizializzaMatriceNCT(int ** mat, int R, int C){
    mat = (int **) malloc(R*sizeof(int*));
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

void convertiTrasposta(int ** mat, int R, int C){
    int temp;
    for (int i = 0; i < R; i++)
        for (int j = i+1; j < C; j++){
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
}

int main(){
    int R = 3;
    int C = 3;
    int **mat;

    mat = inizializzaMatriceNCT(mat, R, C);
    inserisciElementi(mat, R, C);

    printf("Matrice iniziale: \n");
    stampaMatrice(mat, R, C);
    
    convertiTrasposta(mat, R, C);
    printf("\nMatrice trasposta: \n");
    stampaMatrice(mat, R, C);

    return 0;
}