#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dati;
    struct Nodo *next;
};

struct Nodo * createNodo(int dati){
    struct Nodo * nuovoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    if (nuovoNodo != NULL){
        nuovoNodo -> dati = dati;
        nuovoNodo -> next = NULL;
    }
    return nuovoNodo;
}

struct Nodo * inserisciInTesta(struct Nodo * nodo, int dati){
    struct Nodo *nuovoNodo = createNodo(dati);
    if (nuovoNodo != NULL){
        nuovoNodo -> next = nodo;
    }
    return nuovoNodo;
}

void stampaLista(struct Nodo * nodo){
    while(nodo != NULL){
        printf("Valore del nodo = %d\n", nodo->dati);
        nodo = nodo->next;
    }
}

int main(int argc, char **argv){
    struct Nodo *testa = NULL;
    struct Nodo *p1 = inserisciInTesta(testa, 10);
    if (p1 != NULL)
        testa = p1;
        
    struct Nodo *p2 = inserisciInTesta(testa, 11);
    if (p2 != NULL)
        testa = p2;
    
    struct Nodo *p3 = inserisciInTesta(testa, 12);
    if (p3 != NULL)
        testa = p3;

    stampaLista(testa);

    return 0;
}
