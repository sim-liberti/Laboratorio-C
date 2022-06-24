#include <stdio.h>

/*
    Controllare se un numero è primo
*/

int main(){
    int N;
    int conta = 0;
    int divisore = 1;
    printf("Inserisci N: ");
    scanf("%d",&N);

    while (conta < 3 && divisore <= N/2){
        if (N % divisore == 0)
            conta++;
        divisore++;
    }
    if (conta == 1)
        printf("Primo");
    else
        printf("Non Primo");

    return 0;
}
