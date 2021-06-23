/* 
     gcc 06.c -o app
     ./app

     Escreva uma função que retorne se um dado número é par (verdadeiro ou falso).
    int ehPar(int n) ;
*/

#include <stdio.h>
int par(int number1);

int main()
{
    int number;
    printf("\n");

    printf("Digite um número: ");
    scanf("%d", &number);
 
    par(number);
   
 


    return 0;
}
int par(int number){
    if(number %2 == 0 ){
    printf("É um número par");
    printf("\n");


    }else{
    printf("Não é um número par");
    printf("\n");

    }
    return 0;
}
