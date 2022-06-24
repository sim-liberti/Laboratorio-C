#include <stdio.h>

int potenzaRic(int b, int e){
    if (e == 0) return 1;
    else if (e == 1) return b;

    return b * potenzaRic(b, e-1);
}

int main(){
    int b, e;
    printf("Base: ");
    scanf("%d",&b);
    printf("Esponente: ");
    scanf("%d",&e);

    printf("Potenza: %d", potenzaRic(b, e));

    return 0;
}