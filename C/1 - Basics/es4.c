#include <stdio.h>

int main(int argc, char **argv){
    int x;
    printf("Inserisci x:");
    scanf("%d",&x);

    x%2 == 0 ? printf("x pari\n") : printf("x dispari\n");

    return 0;
}