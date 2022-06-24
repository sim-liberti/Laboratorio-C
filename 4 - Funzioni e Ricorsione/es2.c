#include <stdio.h>

int mcd(int N1, int N2){
    while (N1 != N2){
        if (N1 > N2)
            N1 -= N2;
        else
            N2 -= N1;
    }
    return N1;
}

int main(){
    int N1, N2;
    printf("N1: ");
    scanf("%d",&N1);
    printf("N2: ");
    scanf("%d",&N2);

    printf("MCD: %d", mcd(N1, N2));

    return 0;
}