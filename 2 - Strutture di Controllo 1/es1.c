#include <stdio.h>
#include <stdlib.h>

/*
	Scrivere un programma che, dato un intero, stampi 
	le sue cifre decimali e il numero complessivo di cifre.
*/

int main(int argc, char *argv[]) {
	int numero, cifra, divisore;
	int count = 0;
	printf("Inserisci x: ");
	scanf("%d", &numero);

	int numero2 = 0;
	
	printf("Cifre: \n");
	while (numero){
		printf("%d: %d\n", count+1, numero-((numero/10)*10));
		numero /= 10;
		count++;
    }
	printf("%d",numero2);
    printf("Numero totale di cifre: %d", count);
	
	return 0;
}
