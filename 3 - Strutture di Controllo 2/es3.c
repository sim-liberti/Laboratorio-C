#include <stdio.h>
#include <stdlib.h>

/*
	Check if a number in input is triangular
*/

int main(int argc, char *argv[]) {
	int n; // input number
	printf("N: ");
	scanf("%d", &n);
	int i; // Index for loop
	int sum = 0; // Value to hold the total sum of every N
	
	for (i = 0; (i < n)&&(sum != n); i++){  
		sum += i;
		// if sum == n I found a group of N numbers that give me the input number
		// hence the input number is triangular
		if (sum == n)
			printf("N massimo: %d", i);
	}
	if (sum != n)
		printf("%d non e' triangolare", n);
	
	return 0;
}
