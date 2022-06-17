#include <stdio.h>
#include <stdlib.h>

// Controlla se un numero è pari o dispari

int main(int argc, char *argv[]) {
	int x;
	
	printf("Inserisci un numero: ");
	scanf("%d", &x);

	if (x % 2 == 0)
		printf("Numero pari");
	else
		printf("Numero dispari");
	
	return 0;
}
