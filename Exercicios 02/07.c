/* 
     gcc 07.c -o app
     ./app

     Escreva uma função que retorne a somatoria de 1 até um dado numero. Exemplo somatorio (4) é
igual a 1 + 2 + 3 + 4 = 10.
int somatorio (int n) ;
*/

#include <stdio.h>
int somatorio(int n);
int main()
{

    int number;

    printf("\n");
    printf("Escreva um número: ");
    scanf("%d", &number);

    somatorio(number);

    return 0;
}

int somatorio(int n){
     int soma = (1+n)*n/2;

    printf("A soma de todos os número até %d é %d", n, soma);
    printf("\n");

    return 0;
}
