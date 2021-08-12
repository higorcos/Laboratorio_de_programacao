#include <stdio.h>

int main(void){
    char texto[40];
    int i;

    printf("Escreva um texto: ");
    fgets(texto,39,stdin);

    for(i = 0; texto[i] != '\0'; i++)
        if(texto[i] >= 97 && texto[i] <= 122)
            texto[i] -= 32;

    printf("\nResultado: %s\n", texto);

    return 0;
} 