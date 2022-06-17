/* Dato un array di N interi, scrivere una funzione ricorsiva che restituisca
il valore massimo tra i valori pari presenti nell' array
se non ci sono valori pari restitiusca zero */

#include <stdio.h>
#include <stdlib.h>

int recursive_pari(int vett[], int N, int max);

int main(int argc, char *argv[]) {
	int N, i;
	int max = 0;
	
	printf("Di quanti elementi e' composto il vettore?");
	scanf("%d", &N);
	
	int vett[N];
	
	for(i=0;i<N;i++){
		printf("Dammi il numero %d del vettore:",i);
		scanf("%d",&vett[i]);
	}	
	printf("%d", calcolo_massimo(vett, N, N-1, max));
	return 0;
}

int calcolo_massimo(int vett[], int N, int dim, int max){
	// Caso base   
    if (N == 1)
    	if ((vett[0] % 2 == 0))
    		max = vett[0];
	// Caso generale
	else
		if ((vett[dim] % 2 == 0) && (vett[dim] > max))
			max = 
                      
    return max;
}





