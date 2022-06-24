#include <stdio.h>

/*
    Stampa di figure geometriche con asterischi
*/

void stampaQuadrato(int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            printf("*");
        printf("\n");
    }
}

void stampaLatiQuadrato(int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == 0 || i == N-1) printf("*");
            else if (j == 0 || j == N-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
void stampaTriangolo(int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
void stampaQuadratoStrano(int N){
    char s = '*';
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%c", s);
            if (i == j){
                s = '+';
            }
        }
        s = '*';
        printf("\n");
    }
}

int main(){
    int N;
    printf("Inserisci N: ");
    scanf("%d",&N);

    stampaQuadratoStrano(N);

    return 0;
}