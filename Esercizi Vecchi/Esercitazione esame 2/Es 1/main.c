#include <stdio.h>
#include <stdlib.h>

/*
    Scrivere un programma che attraverso 3 funzioni distinte
    aaplica:
    - crezione di una matrice dinamica non contigua
    - riempire con valori dell'utente
    - la stampi a video
*/

int ** create_matrix(int N_R, int N_C){
    int **arr = (int **) malloc(N_R * sizeof(int *));

    for (int i = 0; i < N_R; i++)
        arr[i] = (int *) malloc(N_C * sizeof(int));

    return arr;
}

void insert_matrix(int **mat, int N_R, int N_C){
    for (int i = 0; i < N_R; i++)
        for (int j = 0; j < N_C; j++){
            printf("Inserisci elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
}

void print_matrix(int **mat, int N_R, int N_C){
    for (int i = 0; i < N_R; i++){
        for (int j = 0; j < N_C; j++)
            printf("%d", mat[i][j]);
        printf("\n");
    }
}

int main(int argc, char **argv){
    int N_R, N_C;
    int **arr;
    printf("Row number: ");
    scanf("%d", &N_R);
    printf("Col number: ");
    scanf("%d", &N_C);

    arr = create_matrix(N_R, N_C);
    insert_matrix(arr, N_R, N_C);
    print_matrix(arr, N_R, N_C);

    return 0;
}
