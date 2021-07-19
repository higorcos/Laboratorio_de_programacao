/* 
        gcc olaMundo.c -o ola
     ./ola

Determine se um determinado ano lido é bissexto. Sendo que um ano é
bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível
por 100. Por exemplo: 1988, 1992, 1996 */

#include <stdio.h>
int main()
{
    int ano;

    printf("\n");
    printf("Digite um anos para saber se ele é bissexto ou não : ");
    scanf("%d", &ano);

// ano%4 ===>> resto da divisão
// ano/4  ==>> divisão normal

     if(ano%400 == 0 || ano%4 == 0){
         printf("Esse é bissexto");

     }else{
         printf("Esse ano não é bissexto");
     }
    printf("\n");


    return 0;
}