/*  
    gcc olaMundo.c -o ola
    ./ola

    Ler um número inteiro e imprimir a soma do sucessor de seu triplo com o 
    antecessor de seu dobro
*/

#include <stdio.h>
int main()
{
    int number;

    printf("\n");
    printf("Escreva um número: ");
    scanf("%d", &number);


    int sucessorTriplo = (number*3)+1;
    int antecessorDobro = (number*2)-1;
    int soma = sucessorTriplo + antecessorDobro;



    printf("Sucessor de seu triplo: %d\n", sucessorTriplo);
    printf("Antecessor de seu dobro: %d\n", antecessorDobro);
    printf("Soma dos dois: %d\n", soma);
    printf("\n");

    



    return 0;
}