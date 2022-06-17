#include <stdio.h>
#include <stdlib.h>
/*
	Scrivere un programma che dato in input un intero 
    calcoli e stampi tutti i suoi divisori.
    Si ricorda che un intero d è un divisore di un 
    intero n se esiste un intero k quale n = d * k
*/
int main(int argc, char *argv[]) {
	int numero;
	int divisore = 1;
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	printf("Divisori: \n");
	while(divisore < numero){
		if (numero % divisore == 0){
			printf("%d\n", divisore);
		}
		divisore++;
	}
	
	return 0;
}
