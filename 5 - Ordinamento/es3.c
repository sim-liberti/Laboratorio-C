#include <stdio.h>

void inizializzaArray(int A[], int N){
    for (int i = 0; i < N; i++){
        printf("Elemento %d: ", i);
        scanf("%d", &A[i]);
    }
}

int maxPari(int A[], int N, int max){
    for (int i = 0; i < N; i++){
        if (A[i] % 2 == 0)
            if (A[i] > max)
                return maxPari(A, N, A[i]);
    }

    return max;
}

int main(){
    int N = 5;
    int max = 0; 
    int A[N];

    inizializzaArray(A, N);
    printf("\nMassimo fra i pari: %d\n", maxPari(A, N, max));

    return 0;
}