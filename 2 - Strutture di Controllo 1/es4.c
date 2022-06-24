#include <stdio.h>
#include <stdlib.h>

/*
	Scrivere un programma che calcoli la potenza di 
	un numero per un esponente.
*/

int main(int argc, char *argv[]) {
	int numero, esponente, indice;
	int risultato = 1;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	printf("Inserisci l'esponente: ");
	scanf("%d", &esponente);
	
	indice = esponente;
	while(indice > 0){
		risultato *= numero;
		indice--;
	}
	
	printf("%d^%d = %d", numero, esponente, risultato);
	
	return 0;
}
