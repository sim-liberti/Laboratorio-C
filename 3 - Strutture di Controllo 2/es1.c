#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
	Calculate the cube of a number
	only using sums
*/
int main(int argc, char *argv[]) {
	int n;
	printf("Inserisci numero: ");
	scanf("%d", &n);
	int i;
	int pow = 0;

	for (i = 0; i < n*n; i++){
		pow += n;
	}
	printf("Potenza: %d", pow);
	
	return 0;
}
