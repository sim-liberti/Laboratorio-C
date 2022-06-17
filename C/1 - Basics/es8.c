#include <stdio.h>

int main(int argc, char **argv){
    int x;
	
	printf("Inserisci x: ");
	scanf("%d", &x);
	
	printf("%d", (x - (x/100)*100)/10);
	printf("\n%d", (x - (x/10)*10));

    return 0;
}