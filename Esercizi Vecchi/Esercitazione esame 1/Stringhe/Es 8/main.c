#include <stdio.h>
#include <ctype.h>

/*
    Scrivere una funzione che prenda in input una stringa e converta le lettere 
    nella data stringa in lettere maiuscole (utilizzando la funzione toupper in string.h). 
    Testare la funzione nel main inizializzando una stringa da tastiera con gets 
    e stampando la stringa finale. 
*/

void convert_to_uppercase(char *string){
    int i = 0;
    while (string[i] != '\0'){
        string[i] = toupper(string[i]);
        i++;
    }
}

int main(int argc, char **argv){
    char str[30];

    gets(str);
    convert_to_uppercase(str);
    puts(str);
    
    return 0;
}
