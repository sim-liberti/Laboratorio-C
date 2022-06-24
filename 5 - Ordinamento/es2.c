#include <stdio.h>

void inserisciCaratteri(char A[], int N){
    for (int i = 0; i < N; i++){
        printf("Carattere %d: ", i);
        scanf(" %c", &A[i]);
    }
}

int calcolaOccorrenza(char A[], int N, char c){
    int occorrenza = 0;

    for (int i = 0; i < N; i++)
        if (A[i] == c)
            occorrenza++;

    return occorrenza;
}

int main(){
    int N;
    printf("N: ");
    scanf("%d",&N);
    char A[N];
    char cerca;
    inserisciCaratteri(A, N);
    printf("\nCarattere da cercare: ");
    scanf(" %c", &cerca);

    printf("\nOccorrenze: %d", calcolaOccorrenza(A, N, cerca));

    return 0;
}