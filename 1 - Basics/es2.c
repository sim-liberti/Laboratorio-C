#include <stdio.h>

int main(int argc, char **argv){
    float x, y;
    printf("Inserisci x: ");
    scanf("%d",&x);
    printf("Inserisci y: ");
    scanf("%d",&y);

    printf("Somma: %d Sottrazione: %d\nMoltiplicazione: %d Divisione:%d\n", x+y, x-y, x*y, x/y);

    return 0;
}