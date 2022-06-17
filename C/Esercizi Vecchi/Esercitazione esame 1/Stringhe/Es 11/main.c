#include <stdio.h>

/*
    Scrivere una funzione che prenda in input una stringa e ritorni come parametri 
    di output (parametri definiti come puntatori) il carattere che occorre il 
    maggior numero di volte nella stringa ed il suo numero di occorrenze. Se vi 
    sono più caratteri che occorrono il maggior numero di volte,  scegliere il 
    primo che occorre nella stringa data. Testare la funzione nel main inizializzando
    una stringa da tastiera con gets. 
*/

void calculate_most_frequent(char *string, char *most_frequent, int *frequency){
    int frequency_array[256] = {0};
    int i = 0, max = -1, counter = 0;
    
    while(string[i] != '\0'){
        frequency_array[string[i]]++;
        if (max < frequency_array[string[i]]){
            max = frequency_array[string[i]];
            counter++;
            *most_frequent = string[i];
        }
        i++;
        *frequency = counter;
    }
}

int main(int argc, char **argv){
    char str[30];
    gets(str);

    char most_frequent;
    int frequency = 0;

    calculate_most_frequent(str, &most_frequent, &frequency);
    printf("%c, %d", most_frequent, frequency);

    return 0;
}
