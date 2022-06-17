#include <stdio.h>
#include <stdlib.h>

/*
	Scrivere un programma che inserisca in un array n caratteri
	e richieda un carattere C e calcoli e stampi 
	quante volte è presente nell'array
*/

int main(int argc, char *argv[]) {
	int size, i;
	int counter = 0;
	char C;
	printf("Quanti caratteri? ");
	scanf("%d", &size);
	char N[size];
	for (i = 0; i < size; i++){
		printf("Inserisci carattere %d: ", i);
		scanf(" %c", &N[i]);
	}
	
	printf("Carattere da cercare: ");
	scanf(" %c", &C);
	for (i = 0; i < size; i++){
		if (C == N[i])
			counter++;
	}
	printf("\nNumero di occorrenze trovate: %d", counter);

	
	return 0;
}
