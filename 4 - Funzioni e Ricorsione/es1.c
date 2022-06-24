#include <stdio.h>


int calcolaPerfetto(int N){
    int somma = 0; 

    for (int i = 1; i < N; i++){
        if (N % i == 0)
            somma += i;
    }
    if (somma == N)
        return 1;
    
    return 0;
}

int main(){
    for (int i = 1; i <= 1000; i++){
        if (calcolaPerfetto(i))
            printf("%d\n", i);
    }

    return 0;
}