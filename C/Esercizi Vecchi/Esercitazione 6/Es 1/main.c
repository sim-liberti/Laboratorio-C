#include <stdio.h>
#include <stdlib.h>

/*
	Scrivere un programma che chieda a uno studente
	il numero di esami fatti e i voti ottenuti in ciascun esame.
	Usando un array, calcolare la media dei dati voti, e stampi di nuovo
	il numero di esami fatti e i voti ottenuti.
*/

int main(int argc, char *argv[]) {
	int n_esami;
	printf("Quanti esami hai fatto? ");
	scanf("%d", &n_esami);
	int lista_voti[n_esami];
	int somma_voti = 0;
	int i;
	for (i = 0; i < n_esami; i++){
		printf("Voto esame %d: ", i+1);
		scanf("%d", &lista_voti[i]);
		somma_voti += lista_voti[i]; 
	}
	printf("\nla somma e': %d", somma_voti);
	printf("\nEsami dati %d: ", n_esami);
	for (i = 0; i < n_esami; i++){
		printf("\nVoto %d: %d", i+1, lista_voti[i]);
	}
	printf("\nMedia voti: %d", somma_voti/n_esami);
	
	return 0;
}
