#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	Scrivere un programma che trasforma un binario in intero
	il numero binario è su n-bit e il valore di n da tastiera
	L'utente inserisce le cifre un bit alla volta da quello meno significativo cioè 2^0
	Il programma visualizzer� il numero decimale corrispondente
 */

int main(int argc, char *argv[]) {
	int ncifre, cifra;
	int indice = 0;
	int numero = 0;
	printf("Quante cifre binarie? ");
	scanf("%d", &ncifre);
	
	while (indice < ncifre){
		printf("Inserisci cifra %d: ", indice);
		scanf("%d", &cifra);
		if (cifra != 0){
			numero += pow(2, indice);
		}
		indice++;
	}
	printf("Numero decimale = %d", numero);
	
	return 0;
}
