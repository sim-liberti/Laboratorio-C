#include <stdio.h>

/*
    Scrivere una funzione che prenda in input una stringa e converta la stringa 
    nella sua inversa (e, cioè la stringa originaria letta da destra verso sinistra) 
    senza utilizzare array di supporto. Testare la funzione nel main 
    inizializzando una stringa da tastiera con gets e stampando la stringa finale. 
*/

int get_length(char *string){
    int i = 0;
    int len = 0;

    while(string[i] != '\0'){
        len++;
        if (string[i] != '\0')
            i++;
    }

    return len;
}

void invert_string(char *string){
    int len = get_length(string)-1;
    int temp;
    for (int i = 0; i < len; i++){
        temp = string[i];
        string[i] = string[len];
        string[len] = temp;
        len--;
    }
}

int main(int argc, char **argv){
    char str[30];
    gets(str);

    invert_string(str);

    puts(str);
    return 0;
}
