#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Si scriva un programma che consenta di inserire una serie di N coppie
    costituite da un ID numerico e da una stringa contenente un nome di persona.
    Siano tali coppie salvate in una lista puntata e si scriva, quindi, una funziona ricorsiva 
    che, dato l'id, restituisca il nome corrispondente. Nel caso in cui l'ID
    non esista, venga restituito un messaggio di errore.
*/

struct Persona{
    int ID;
    char nome[30];

    struct Persona *next;
};

struct Persona * creaPersona(int ID, char nome[30]){
    struct Persona * nuovaPersona = (struct Persona *) malloc(sizeof(struct Persona));
    if (nuovaPersona != NULL){
        nuovaPersona -> ID   = ID;
        strcpy(nuovaPersona -> nome, nome);
        nuovaPersona -> next = NULL;
    }  
    return nuovaPersona;
}

struct Persona * inserisci(struct Persona *testa, int ID, char nome[30]){
    struct Persona * nuovaPersona = creaPersona(ID, nome);
    if (nuovaPersona != NULL)
        nuovaPersona -> next = testa;

    return nuovaPersona;
}

struct Persona * creaLista(int N){
    int ID;
    char nome[30];
    struct Persona *testa = NULL;

    for (int i = 0; i < N; i++){
        printf("Persona %d:\n", i+1);
        printf("Inserisci ID: ");
        scanf("%d", &ID);
        printf("Inserisci nome: ");
        scanf(" %s", &nome);

        struct Persona *n = inserisci(testa, ID, nome);
        if (n != NULL)
            testa = n;
    }
    return testa;
}

void stampaLista(struct Persona * testa){
    while(testa != NULL){
        printf("ID: %d\n", testa->ID);
        printf("Nome: %s\n\n", testa->nome);
        testa = testa->next;
    }
}

char * ricercaNome(struct Persona * testa, int ID){
    while (testa != NULL && testa -> ID != ID){
        testa = testa -> next;
    }
    if (testa != NULL) return testa->nome;
    
    return "Non trovato";
}

int main(){
    int N, chiave;
    struct Persona *testa;
    printf("Inserisci numero di persone: ");
    scanf("%d",&N);

    testa = creaLista(N);
    printf("\nLista creata: \n===============\n");
    stampaLista(testa);

    printf("Inserisci ID da cercare: ");
    scanf("%d", &chiave);
    printf("%s", ricercaNome(testa, chiave));

    return 0;
}