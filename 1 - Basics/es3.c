#include <stdio.h>

int main(int argc, char **argv){
    int x, y, z;
    printf("Inserisci x: ");
    scanf("%d",&x);
    printf("Inserisci y: ");
    scanf("%d",&y);
    printf("Inserisci z: ");
    scanf("%d",&z);

    printf("Media: %d\n", (x+y+z)/3);

    return 0;
}