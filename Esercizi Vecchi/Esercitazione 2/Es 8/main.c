#include <stdio.h>
#include <stdlib.h>

/* 
    Scrivere un programma per calcolare il valore massimo 
    e minimo di un insieme di n numeri inseriti da tastiera.
    Deve leggere il valore di N e una sequenza di n numeri interi.
    Stampare max e min.
 */

int main(int argc, char *argv[]) {
	int N, n; // Insieme N -> n appartiene a N
    printf("Quanti numeri: ");
    scanf("%d", &N);
    int max = 0;
    int min = 0;

    for (int i = 1; i <= N; i++){
        printf("Inserisci numero %d: ", i);
        scanf("%d", &n);
        if (i == 1) max = min = n;
        else{
            if (n > max) max = n;
            else if (n < min) min = n;
        }
    }
    printf("Max: %d, Min: %d", max, min);
	
	return 0;
}
