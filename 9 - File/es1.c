#include <stdio.h>
#include <stdlib.h>

int main(){
    int K;
    FILE *file_parole = fopen("parole.txt", "r");

    if (file_parole == NULL){
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }
    else printf("File aperto.\n");

    printf("Inserisci K: ");
    scanf("%d", &K);

    char c;
    while ((c = fgetc(file_parole)) != EOF){
        printf("%c", c);
    }
    fclose(file_parole);

    return 0;
}
