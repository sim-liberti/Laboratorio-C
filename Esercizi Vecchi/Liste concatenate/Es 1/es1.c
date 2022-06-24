#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dati;
    struct Nodo *next;
};

struct Nodo * creaNodo(int dati){
    struct Nodo * nuovoNodo = (struct Nodo *) malloc(sizeof(struct Nodo));
    if (nuovoNodo != NULL){
        nuovoNodo -> dati = dati;
        nuovoNodo -> next = NULL;
    }
    return nuovoNodo;
}

struct Nodo * inserisciInTesta(struct Nodo * nodo, int dati){
    struct Nodo *nuovoNodo = creaNodo(dati);
    if (nuovoNodo != NULL){
        nuovoNodo -> next = nodo;
    }
    return nuovoNodo;
}

struct Nodo * creaLista(int N){
    int valore;
    struct Nodo *testa = NULL;
    
    for (int i = 0; i < N; i++){
        printf("Inserisci il valore del nodo %d: ", i+1);
        scanf("%d", &valore);

        struct Nodo *n = inserisciInTesta(testa, valore);
        if (n != NULL)
            testa = n;
    }
    return testa;
}

struct Nodo * eliminaElementi(struct Nodo *testa, int k){
    struct Nodo *s, *r;
    if (testa == NULL) return NULL;
    if (testa != NULL) {
        if(testa->next!=NULL) {
            s=testa;
            while(s->next!=NULL) {
                if(s->next->dati < k) {
                    r=s->next;
                    s->next=s->next->next;
                    free(r);
                    return testa;
                }
                else
                    s=s->next;
            }
        }
    }
    if(testa->dati<k) {
        r=testa;
        testa=testa->next;
        free(r);
        return testa;
    }
    return NULL;
}

void stampaLista(struct Nodo * nodo){
    while(nodo != NULL){
        printf("Valore del nodo = %d\n", nodo->dati);
        nodo = nodo->next;
    }
}

int main(int argc, char **argv){
    int k, N;
    struct Nodo *testa;
    
    printf("Inserisci un numero di Nodi: ");
    scanf("%d", &N);
    
    testa = creaLista(N);
    printf("\nLista creata: \n");
    stampaLista(testa);

    printf("Inserisci un valore minimo: ");
    scanf("%d", &k);
    while (testa != NULL){
        testa = eliminaElementi(testa, k);
    }
    
    printf("\nLista senza i valori <= %d: \n", k);
    stampaLista(testa);
}
