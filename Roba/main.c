#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Libro{
    int ID;
    char nome[10];
    char autore[10];
    char posizione[2];

    struct Libro *next;
};

struct Prenotazione{
    struct Libro *libro;

    struct Prenotazione *next;
};

struct Libro *creaLibro(int ID, char nome[10], char autore[10], char posizione[2]){
    struct Libro *nuovoLibro = (struct Libro *)malloc(sizeof(struct Libro));

    if (nuovoLibro != NULL){
        nuovoLibro->ID = ID;
        strcpy(nuovoLibro->nome, nome);
        strcpy(nuovoLibro->autore, autore);
        strcpy(nuovoLibro->posizione, posizione);
        nuovoLibro->next = NULL;
    }

    return nuovoLibro;
}

struct Libro *aggiungiLibro(struct Libro *testa, int ID, char nome[10], char autore[10], char posizione[2]){
    struct Libro *nuovoLibro = creaLibro(ID, nome, autore, posizione);

    if (nuovoLibro != NULL)
        nuovoLibro -> next = testa;

    return nuovoLibro;
}

struct Libro *creaLibreria(int N){
    struct Libro *testa;
    int ID;
    char nome[10];
    char autore[10];
    char posizione[2];

    for (int i = 0; i < N; i++){
        printf("ID: ");
        scanf("%d", &ID);
        printf("Nome: ");
        scanf("%s", &nome);
        printf("Autore: ");
        scanf("%s", &autore);
        printf("Posizione: ");
        scanf("%s", &posizione);
        printf("\n");

        struct Libro *l = aggiungiLibro(testa, ID, nome, autore, posizione);
        if (l != NULL)
            testa = l;
    }

    return testa;
}

void stampaLibreria(struct Libro *testa){
    struct Libro *t = testa;

    while (t != NULL){
        printf("ID: %d\n", t->ID);
        printf("Nome: %s\n", t->nome);
        printf("Autore: %s\n", t->autore);
        printf("Posizione: %s\n", t->posizione);
        
        t = t->next;
    }
}

int main(){
    struct Libro *testa = NULL;
    int N = 1;

    testa = creaLibreria(N);
    stampaLibreria(testa);

    return 0;
}
