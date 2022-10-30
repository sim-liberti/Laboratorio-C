#include <stdio.h>
#include <stdlib.h>

/* 
    Programma che dato un intero N, generi una lista puntata
    contenente N interi generarti casualmente, stampandoli a video
    Si scriva una funzione ricorsiva che data in input una lista e un 
    intero X che restituisce la posizione nella quale si trova
    l'intero dato in input
*/

struct Nodo{
    int pos;
    int n;

    struct Nodo *next;
};

struct Nodo * creaNodo(int n, int pos){
    struct Nodo * nuovoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));

    if (nuovoNodo != NULL){
        nuovoNodo -> pos = pos;
        nuovoNodo -> n = n;
        nuovoNodo -> next = NULL;
    }

    return nuovoNodo;
}

struct Nodo * inserisciNodo(struct Nodo *testa, int n, int pos){
    struct Nodo * nuovoNodo = creaNodo(n, pos);

    if (nuovoNodo != NULL)
        nuovoNodo -> next = testa;

    return nuovoNodo;
}

struct Nodo * creaLista(int N){
    struct Nodo *testa = NULL;
    int n;
    int pos = 0;

    for (int i = 0; i < N; i++){
        n = rand();

        struct Nodo *p = inserisciNodo(testa, n, pos);
        if (p != NULL)
            testa = p;
        pos++;
    }

    return testa;
}

int cercaElemento(struct Nodo *testa, int X){
    if (testa == NULL) return -1;

    if (testa->n == X) return testa->pos;

    return cercaElemento(testa->next, X);
}

void stampaLista(struct Nodo *testa){
    struct Nodo *t = testa;

    while (t != NULL){
        printf("%d: %d\n", t->pos, t->n);
        t = t->next;
    }
}

int main(){
    struct Nodo *testa = NULL;
    int N;
    printf("N: ");
    scanf("%d", &N);
    testa = creaLista(N);
    printf("\n");
    stampaLista(testa);

    int X;
    printf("\nCerca elemento: ");
    scanf("%d", &X);
    if (cercaElemento(testa, X) == -1) 
        printf("\nElemento non trovato");
    else 
        printf("\nElemento trovato in posizione: %d", cercaElemento(testa, X));

    return 0;
}
