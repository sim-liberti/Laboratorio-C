#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Scrivere un programma che dato un intero in input
	testi se questo è palindromo e stampi un messaggio opportuno
*/

int main(int argc, char *argv[]) {
	int numero;
	int inverso = 0;
	printf("Inserisci un numero: ");
	scanf("%d", &numero);
	int i;
	int temp = numero;
	for (i = log10(numero)+1; i > 0; i--){
		inverso *= 10;
		inverso += temp % 10;
		temp /= 10;
	}
	
	if (numero == inverso) 
		printf("Numero palindromo.");
	else 
		printf("Numero non palindromo");
	
	return 0;
}
