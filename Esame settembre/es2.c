#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dato N in input genera una matrice NxN
    e per ogni cella si diano 3 valori rgb
*/

#define N 3

struct Cella{
    int r;
    int g;
    int b;
};

void inizializzaImmagine(struct Cella immagine[][N]){
    int min = 0;
    int max = 255;

    for (int i = 0; i < N; i++){
        for ( int j = 0; j < N; j++){
            immagine[i][j].r = min + (rand() % (max - min +1));
            immagine[i][j].g = min + (rand() % (max - min +1));
            immagine[i][j].b = min + (rand() % (max - min +1));
        }
    }
}

void stampaImmagine(struct Cella immagine[][N]){
    for (int i = 0; i < N; i++){
        for ( int j = 0; j < N; j++){
            printf("(%d,%d,%d) ", immagine[i][j].r, immagine[i][j].g, immagine[i][j].b);
        }
        printf("\n");
    }
}

int main(){
    srand(time(NULL));
    struct Cella immagine[N][N];

    printf("Genero un'immagine %dx%d: \n", N, N);
    inizializzaImmagine(immagine);
    stampaImmagine(immagine);

    return 0;
}
