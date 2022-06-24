#include <stdio.h>

/*
    Scrivere una funzione che prenda in input una stringa e restituisca la 
    lunghezza della stringa (e cioè il numero di caratteri prima del carattere 
    di terminazione ‘\0’).  La funzione non deve utilizzare funzioni di libreria. 
    Testare la funzione nel main tramite la funzione di libreria gets 
    per l’inserimento di una stringa da tastiera.
*/

int count_string(char string[]){
    int i = 0;
    int counter = 0;

    while(string[i] != '\0'){
        counter++;
        if (string[i] != '\0')
            i++;
    }

    return counter;
}

int main(int argc, char **argv){
    char string[30];

    gets(string);
    
    printf("The string has %d characters.", count_string(string));

    return 0;
}
