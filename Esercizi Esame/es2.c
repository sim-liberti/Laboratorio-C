#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Studente {
    char nome[30];
    char cognome[30];
    int matricola;
    char laureato[3];

    struct Studente *next;
};

struct Studente *creaStudente(char nome[30], char cognome[30], int matricola, char laureato[3]){
    struct Studente *nuovoStudente = (struct Studente *)malloc(sizeof(struct Studente));
    if (nuovoStudente != NULL){
        strcpy(nuovoStudente->nome, nome);
        strcpy(nuovoStudente->cognome, cognome);
        nuovoStudente->matricola = matricola;
        strcpy(nuovoStudente->laureato, laureato); 
    }
    return nuovoStudente;
}

struct Studente *inserisci(struct Studente *testa, char nome[30], char cognome[30], int matricola, char laureato[3]){
    struct Studente *nuovoStudente = creaStudente(nome, cognome, matricola, laureato);
    if (nuovoStudente != NULL)
        nuovoStudente->next = testa;
    return nuovoStudente;
}

struct Studente * creaLista(){
    char nome[30];
    char cognome[30];
    int matricola;
    char laureato[3];
    struct Studente *testa = NULL;

    do {
        printf("Nome (inserisci 'fine' per terminare): ");
        scanf(" %s", &nome);
        if (strcmp(nome, "fine") == 0)
            break;
        printf("Cognome: ");
        scanf(" %s", &cognome);
        printf("Matricola: ");
        scanf(" %d", &matricola);
        printf("Laureato? ");
        scanf(" %s", &laureato);
        struct Studente *n = inserisci(testa, nome, cognome, matricola, laureato);
        if (n != NULL)
            testa = n;
    } while(strcmp(nome, "fine") != 0);

    return testa;
}

char * controllaLaurea(struct Studente *testa, int daCercare){
    while (testa != NULL && testa->matricola == daCercare)
        testa = testa->next;    
    
    if (strcmp(testa->laureato, "si") == 0)
        return "Studente laureato";
    else return "Non laureato";
    
    return "Non trovato";
}

int main(){
    struct Studente *testa = NULL;
    testa = creaLista();

    int daCercare;
    printf("\n\nInserisci matricola da cercare: ");
    scanf("%d", &daCercare);
    printf("\n%s", controllaLaurea(testa, daCercare));
    return 0;
}