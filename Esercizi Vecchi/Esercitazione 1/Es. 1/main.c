#include <stdio.h>
#include <stdlib.h>

// Scrivere un programma che confronti due numeri

int main(int argc, char *argv[]) {
	int x, y;
	
	// Inserimento x
	printf("Inserisci x: ");
	scanf("%d", &x);
	// Inserimento y
	printf("Inserisci y: ");
	scanf("%d", &y);
	
	if (x > y)
		printf("x > y");
	else if (x < y)
		printf("x < y");
	else
		printf("x = y");
	
	return 0;
}
