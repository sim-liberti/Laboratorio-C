/*
    Inserisci testa, coda e calcola la somma
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vettore{
    int v;
    int u;

    struct Vettore *next;
};

struct Vettore * creaVettore(int v, int u){
    struct Vettore *nuovoVettore = (struct Vettore *)malloc(sizeof(struct Vettore));

    if (nuovoVettore != NULL){
        nuovoVettore->v = v;
        nuovoVettore->u = u;
        nuovoVettore->next = NULL;
    }

    return nuovoVettore;
}

struct Vettore * inserisciInTesta(struct Vettore *testa, int v, int u){
    struct Vettore *nuovoVettore = creaVettore(v, u);

    if (nuovoVettore != NULL)
        nuovoVettore->next = testa;

    return nuovoVettore;
}

struct Vettore * creaLista(){
    int v, u;
    struct Vettore *testa = NULL;

    do {
        printf("V: ");
        scanf("%d", &v);
        printf("U: ");
        scanf("%d", &u);
        printf("\n");
        if (v != -1 && u != -1){
            struct Vettore *vett = inserisciInTesta(testa, v, u);
            if (vett != NULL)
                testa = vett;
        }
    } while (v != -1 && u != -1);

    return testa;
}

void calcolaSomma(struct Vettore *testa){
    int somma_v = 0;
    int somma_u = 0;

    while (testa != NULL){
        somma_v += testa->v;
        somma_u += testa->u;
        testa = testa->next;
    }

    printf("Somma v: %d\n", somma_v);
    printf("Somma u: %d\n", somma_u);
}

void stampaLista(struct Vettore *testa){
    while(testa != NULL){
        printf("V: %d, U: %d\n", testa->v, testa->u);
        testa = testa->next;
    }
}

int main(){
    struct Vettore *testa = NULL;
    testa = creaLista();

    printf("Lista Inserita: \n");
    stampaLista(testa);
    calcolaSomma(testa);
    
    return 0;
}
