#include <stdio.h>
#include <stdlib.h>


void fibonacciIter(int N){
    int primo, secondo, terzo;
    primo = 1;
    secondo = 1;

    for (int i = 2; i < N; i++){
        terzo = primo + secondo;
        primo = secondo;
        secondo = terzo;
        printf("%d\n", terzo);
    }

}

int main(){
    int N;
    printf("N: ");
    scanf("%d", &N);

    fibonacciIter(N);

    return 0;
}