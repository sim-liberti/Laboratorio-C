#include <stdio.h>
#include <stdlib.h>

/*
	Potenza di un numero reale
*/

int main(int argc, char *argv[]) {
	float numero;
	int esponente, indice;
	float risultato = 1;
	
	printf("Inserisci il numero: ");
	scanf("%f", &numero);
	printf("Inserisci l'esponente: ");
	scanf("%d", &esponente);
	
	indice = esponente;
	while(indice > 0){
		risultato *= numero;
		indice--;
	}
	
	printf("%f^%d = %f", numero, esponente, risultato);
	
	return 0;
}
