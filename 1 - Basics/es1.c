#include <stdio.h>

int main(int argc, char **argv){
    int x, y;
    printf("Inserisci numero: ");
    scanf("%d",&x);
    printf("Inserisci numero: ");
    scanf("%d",&y);

    printf("x > y\n") ? x > y : printf("x < y\n");

    return 0;
}
