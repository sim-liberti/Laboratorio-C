#include <stdio.h>

void inizializzaMatrice(int A[], int N){
    for (int i = 0; i < N; i++){
        printf("Voto %d: ", i+1);
        scanf("%d", &A[i]);
    }
}

int calcolaMedia(int A[], int N){
    int somma = 0;

    for (int i = 0; i < N; i++)
        somma += A[i];

    return somma/N;
}

void stampaLista(int A[], int N){
    for (int i = 0; i < N; i++)
        printf("Voto %d: %d\n", i+1, A[i]);
}

int main(){
    int N;
    printf("Quanti esami? ");
    scanf("%d",&N);
    int A[N];
    printf("Inserisci i voti: \n");
    inizializzaMatrice(A, N);

    printf("\nNumero di esami: %d\n", N);
    stampaLista(A, N);
    printf("\nMedia: %d\n", calcolaMedia(A, N));

    return 0;
}