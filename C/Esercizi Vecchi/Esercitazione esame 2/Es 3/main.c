#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
    Scrivere un programma che acquisisca un testo libero, 
    composto da max 1000 righe. Utilizzare la funzione gets 
    per l'acquisiszione. L'inserimento termina quano l'utente
    inserirà una riga uguale a FINE. Al termine vanno stampate:
    - Il numero totale di righe
    - Il numero totale di caratteri
    - Il numero totale di caratteri alfanumerici
    - Il numero totale di parole
*/

int main(int argc, char **argv){
    char str[30];
    int r_n = 0, j = 0;
    int char_len = 0;
    int alpha_char_len = 0;
    int word_len = 0;
    printf("Insert a text (max 1000 rows): \n");
    
    do{
        gets(str);

        for (int i = 0; str[i] != '\0'; i++){
            if (isalnum(str[i]) != 0)
                alpha_char_len++;
            if (str[i] == ' ' && str[i+1] != ' ')
                word_len++;
        }
        word_len++;
        char_len += strlen(str);
        r_n++;
            
    } while(strcmp(str, "FINE") != 0);

    printf("\nNumber of rows: %d", r_n);
    printf("\nNumber of characters: %d", char_len);
    printf("\nNumber of alphanumeric characters: %d", alpha_char_len);
    printf("\nNumber of words: %d", word_len);

    return 0;
}
