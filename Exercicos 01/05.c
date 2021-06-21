/* 
    gcc olaMundo.c -o ola
    ./ola

    Dado n, calcular a soma dos n primeiros números inteiros positivos
 */


#include <stdio.h>
int main()
{
    int number;

    printf("\n");
    printf("Escreva um número (positivo): ");
    scanf("%d", &number);

    int soma = (1+number)*number/2;

    printf("A soma de todos os número até %d é %d", number, soma);
    printf("\n");
    

    return 0;
}