#include <stdio.h>
#include <stdlib.h>

// Controllare che un numero sia multiplo di un altro

int main(int argc, char *argv[]) {
	int x, y;
	
	printf("Inserisci x: ");
	scanf("%d", &x);
	printf("Inserisci y: ");
	scanf("%d", &y);
	
	if (x % y == 0)
		printf("x è multiplo di y");
	else if (y % x == 0)
		printf("y è multiplo di x");
	else
		printf("Non sono multipli");
	
	return 0;
}
