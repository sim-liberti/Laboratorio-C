#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prendiVoto(char *line, int array_voti[], int contatore_voti){
    char *token = strtok(line, ":");
    token = strtok(NULL, ":");
    int voto = atoi(token);
    
    array_voti[contatore_voti] = voto;
}

void calcolaMedia(int array_voti[], int n_studenti){
    int somma = 0;
    int n_promossi = 0;
    for (int i = 0; i < n_studenti; i++)
        if (array_voti[i] >= 18){
            somma += array_voti[i];
            n_promossi++;
        }    
    
    printf("Il voto medio dei promossi e\': %d", somma/n_promossi);
}

void prendiMatricola(char *line, char array_matricole[], int contatore_matricole){
    char *token = strtok(line, ":");
    
    array_matricole[contatore_matricole] = *token;
}

int calcolaValidity(char array_matricole[], int n_studenti, char matricola){
    for (int i = 0; i < n_studenti; i++)
        if (strcmp(array_matricole[i], matricola) == 0);
    return 1;
}

void inserisciVoto(FILE *file_handle, char array_matricole[], int n_studenti){
    char nuovaMatricola[30];
    int nuovoVoto;
    do {
        printf("Inserisci nuova matricola: ");
        scanf("%s",&nuovaMatricola);
    } while(calcolaValidity(array_matricole, n_studenti, nuovaMatricola) == 0);
    
    printf("Inserisci voto: ");
    scanf("%d", &nuovoVoto);
    
    fprintf(file_handle, "%s:%d", nuovaMatricola, nuovoVoto);
    
    printf("Voto inserito con successo.\n");
}

int main(){
    FILE *file_handle = fopen("./registro.txt", "r+");

    if (file_handle == NULL){
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }
    else printf("Registro aperto.\n");

    char f_line[100]; // first_line
    fscanf(file_handle, "%[^\n]", f_line); // Leggo solo la prima riga
    int n_studenti = atoi(f_line); // Prima riga = numero studenti
    int voti[n_studenti];
    char matricole[n_studenti];

    char line[100];
    size_t len = 0;
    int contatore_voti = 0;
    int contatore_matricole = 0;

    fgets(f_line, 100, file_handle); // Salto la prima linea per il calcolo dei voti
    while (fgets(line, sizeof(line), file_handle)){
        prendiVoto(line, voti, contatore_voti);
        contatore_voti++;
        prendiMatricola(line, matricole, contatore_matricole);
        contatore_matricole++;
    }

    char scelta[30];
    do {
        printf("\nScegli un'opzione (media, voto, esci): ");
        scanf("%s", &scelta);
        
        if (strcmp(scelta, "media") == 0)
            calcolaMedia(voti, n_studenti);
        if (strcmp(scelta, "voti"))
            inserisciVoto(file_handle, matricole, n_studenti);
    } while(strcmp(scelta, "esci") != 0);

    printf("\nRegistro chiuso");

    return 0;
}