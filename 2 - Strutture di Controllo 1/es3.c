#include <stdio.h>
#include <stdlib.h>

/*
	Scrivere un programma che, dato in input un intero positivo, 
	calcoli e stampi il fattoriale.
*/

int main(int argc, char *argv[]) {
	int numero;
	int fattoriale = 1;
	printf("Inserisci numero: ");
	scanf("%d", &numero);
	
	if (numero == 1) printf("Fattoriale = 1");
	else{
		while (numero > 0){
			fattoriale *= numero; 
			numero--;
		}
			printf("Il fattoriale vale: %d\n", fattoriale);
	}
		
	return 0;
}
