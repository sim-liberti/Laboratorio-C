#include <stdio.h>
#include <stdlib.h>

// Scrivere un programma che calcoli la media di età fra 3 persone

int main(int argc, char *argv[]) {
	int e1, e2, e3; // Variabili età
	
	printf("Inserisci età prima persona: ");
	scanf("%d", &e1);
	printf("Inserisci età seconda persona: ");
	scanf("%d", &e2);
	printf("Inserisci età terza persona: ");
	scanf("%d", &e3);	
	
	printf("\nEta media: %d", (e1+e2+e3)/3);
	
	return 0;
}
