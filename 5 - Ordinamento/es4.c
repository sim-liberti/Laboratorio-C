#include <stdio.h>

void inizializzaArray(int A[], int N){
    for (int i = 0; i < N; i++){
        printf("Elemento %d: ", i);
        scanf("%d", &A[i]);
    }
}

int controllaOrdine(int A[], int N){
    for (int i = 0; i < N; i++)
        if (A[i] > A[i+1])
            return 0;

    return 1;
}

int isSubArraySorted(int v[], int n, int start){
	if(n<=start)
		return 1;
		
	int isSorted = isSubArraySorted(v, n-1, start);
	
	// se non è ordinato ho finito, quindi restituisco sempre 0 incodizionatamente portando la ricorsione a terminare con 0
	if(isSorted == 0)
		return 0;
	
	// se invece è ordinato, controllo se il precedente è maggiore del successivo
	// se così fosse, non sarebbe ordinato, quindi restituisco 0 e ritorno al caso precedente
	if(v[n-1] > v[n])
		return 0;
	
	// altrimenti restituisce 1 e va avanti per tutto il vettore
	return 1;
}

int main(){
    int N = 5;
    int A[N];

    inizializzaArray(A, N);
    if (controllaOrdine(A, N))
        printf("\nOrdinato\n");
    else printf("\nNon ordinato\n");

    int indice;
    printf("Indice di partenza: ");
    scanf("%d",&indice);

    if (isSubArraySorted(A, N, indice))
        printf("\nOrdinato\n");
    else printf("\nNon ordinato\n");


    return 0;
}
