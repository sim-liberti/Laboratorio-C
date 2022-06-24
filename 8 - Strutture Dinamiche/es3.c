#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int n_righe = 0;
    int n_caratteri = 0;
    int n_alnum = 0;
    int n_parole = 0;

    do {
        gets(str);

        for (int i = 0; str[i] != '\0'; i++){
            if (isalnum(str[i])) n_alnum++;
            if (str[i] == ' ' && str[i+1] != ' ') n_parole++;
        }
        n_righe++;
        n_parole++;
        n_caratteri += strlen(str);
    } while(strcmp(str, "FINE") && n_righe < 1000);

    printf("Numero Righe: %d\n", n_righe);
    printf("Numero Parole: %d\n", n_parole);
    printf("Numero AlfaNumerici: %d\n", n_alnum);
    printf("Numero Caratteri: %d\n", n_caratteri);

    return 0;
}