#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int numero, divisore;
	int somma = 0;
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	while (numero){
		somma += numero-((numero/10)*10);
		numero /= 10;
    }
    printf("Somma = %d", somma);
	
	return 0;
}


