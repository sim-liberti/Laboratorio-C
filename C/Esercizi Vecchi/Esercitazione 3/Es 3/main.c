#include <stdio.h>
#include <stdlib.h>

/*
	
*/

int main(int argc, char *argv[]) {
    int N;
    printf("Inserisci N: ");
    scanf("%d", &N);
	int i, j;
    // Quadrato
    printf("Quadrato:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("*");
        }
        printf("\n");
    }
    // Perimetro
    printf("\n\nSolo perimetro:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i == 0 || i == N-1){
                printf("*");
            }
            else{
                if (j == 0 || j == N-1)
                    printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
	// Triangolo isoscele
	printf("\n\nTriangolo isoscele:\n");
	for (i = 1; i <= N; i++){
		for (j = 0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
