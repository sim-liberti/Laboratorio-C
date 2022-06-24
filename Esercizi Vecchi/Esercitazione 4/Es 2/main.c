#include <stdio.h>
#include <stdlib.h>

/*
	Calculate the prime factors of a number
*/

int main(int argc, char *argv[]) {
	int n, i, j; // number, index i, index j
	printf("Numero: ");
	scanf("%d", &n);
	
	for (i = n; i > 1 ; i--){
		// A number is prime if it's not divisible by 2 and 3
		if ((i % 2 != 0) && (i % 3 != 0) && (n % i == 0))
			printf("%d\n", i);
	}
	
	return 0;
}






