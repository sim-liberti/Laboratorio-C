#include <stdio.h>

int main(int argc, char **argv){
    int x, y;
    printf("Inserisci numero: ");
    scanf("%d",&x);
    printf("Inserisci numero: ");
    scanf("%d",&y);

    x%y == 0 ? printf("x multiplo di y") : printf("non multipli");

    return 0;
}