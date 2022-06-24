#include <stdio.h>
#include <stdlib.h>

/*
	Inserisci n da tastiera e scrivi
	le prime n cifre di fibonacci
*/

int main(int argc, char *argv[]) {
	int n_serie, terzo;
	int primo = 1; 
	int secondo = 1;
	printf("Inserisci numero: ");
	scanf("%d", &n_serie);

	printf("Serie: \n");
	int i;
	for (i = 0; i <= n_serie; i++){
		if (i == 0 || i == 1) 
			printf("1,\n");
		else {
			terzo = primo + secondo;
			primo = secondo;
			secondo = terzo;
			printf("%d,\n", terzo);
		}
	}


	return 0;
}
