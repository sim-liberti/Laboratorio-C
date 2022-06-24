#include <stdio.h>
#include <stdlib.h>

// Programma per compiere le 4 operazioni tra due numeri reali inseriti da tastiera

int main(int argc, char *argv[]) {
	float x, y;
	
	scanf("%f", &x);
	scanf("%f", &y);
	
	printf("x + y = %f\n", x+y);
	printf("x - y = %f\n", x-y);
	printf("x * y = %f\n", x*y);
	printf("x / y = %f\n", x/y);
	
	return 0;
}
