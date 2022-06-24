#include <stdio.h>
#include <ctype.h>

/*
    Scrivere una funzione che prenda in input una stringa e restituisca 
    il numero di parole contenute nella stringa dove una parola contiene solo 
    lettere e cifre decimali.  Utilizzare la funzione isalnum, 
    il cui prototipo è in ctype.h, per testare se un carattere è o una lettera o 
    una cifra decimale.  Testare la funzione nel main inizializzando una stringa 
    da tastiera con gets. 
*/

int count_words(char *string){
    int counter = 0;
    int i = 0;
    while(string[i] != '\0'){
        if (isalnum(string[i]) == 0)
            return -1;
        else{
            if (string[i] == ' ')
                counter++;
            i++;
        }
    }
    return counter+1;
}

int main(int argc, char **argv){
    char str[30];
    gets(str);
    if (count_words(str) == -1)
        printf("\nInvalid string inserted. ");
    else
        printf("The string has %d words.", count_words(str));

    return 0;
}
