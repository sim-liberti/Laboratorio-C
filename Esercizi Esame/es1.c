#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona {
    int ID;
    char nome[30];

    struct Persona *next;
};

struct Persona * creaPersona(int ID, char nome[30]){
    struct Persona *nuovaPersona = (struct Persona *) malloc(sizeof(struct Persona));

    if (nuovaPersona != NULL){
        nuovaPersona->ID = ID;
        strcpy(nuovaPersona->nome, nome);
        nuovaPersona->next = NULL;
    }

    return nuovaPersona;
}

struct Persona * aggiungiPersona(struct Persona *testa, int ID, char nome[30]){
    struct Persona * nuovaPersona = creaPersona(ID, nome);

    if (nuovaPersona != NULL){
        nuovaPersona->next = testa;
    }

    return nuovaPersona;
}

struct Persona * creaLista(int N){
    struct Persona *testa = NULL;
    int ID;
    char nome[30];

    for (int i = 0; i < N; i++){
        printf("ID: ");
        scanf("%d", &ID);
        printf("Nome: ");
        scanf("%s", nome);

        struct Persona *p = aggiungiPersona(testa, ID, nome);
        if (p != NULL)
            testa = p;
    }

    return testa;
}

char * cercaPersona(struct Persona *testa, int ID){
    if (testa == NULL) return "ID non esistente.";

    if (testa->ID == ID)
        return testa->nome;
    
    return cercaPersona(testa->next, ID);
}

void stampaLista(struct Persona *testa){
    while(testa != NULL){
        printf("ID: %d\n", testa->ID);
        printf("Nome: %s\n", testa->nome);
        testa = testa->next;
    }
}

int main(){
    struct Persona *testa = NULL;
    int N = 3;
    int ID = 2;
    
    testa = creaLista(N);
    printf("\n");
    printf("Lista creata: \n");
    stampaLista(testa);
    printf("\n");
    printf("Cerco la persona con ID: %d\n", ID);
    printf("%s", cercaPersona(testa, ID));

    return 0;
}
