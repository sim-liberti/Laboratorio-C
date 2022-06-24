#include <stdio.h>
#include <stdlib.h>

// Scrivere in ordine crescente 3 numeri

int main(int argc, char *argv[]) {
	int x, y, z;
	int min, mid, max;
	
	printf("Inserisci x: ");
	scanf("%d", &x);
	printf("Inserisci y: ");
	scanf("%d", &y);
	printf("Inserisci z: ");
	scanf("%d", &z);
	
	if (x > y && x > z){
		max = x;
		if (y > z){
			mid = y;
			min = z;
		}
		else {
			mid = z;
			min = y;
		}
	}
	else if (y > x && y > z){
		max = y;
		if (x > z){
			mid = x;
			min = z;
		}
		else {
			mid = z;
			min = x;
		}
	}
	else if (z > x && z > y){
		max = z;
		if (x > y){
			mid = x;
			min = y;
		}
		else {
			mid = y;
			min = x;
		}
	}
	
	printf("I numero in ordine sono %d %d %d", min, mid, max);
	
	return 0;
}










