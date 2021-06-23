/* 
     gcc 10.c -o app
     ./app

     Escreva uma função que retorne se um dado número é primo.
int ehPrimo(int n) ;
*/

#include <stdio.h>

int nPrimo(int n);

int main()
{
    int number;

    printf("\n");
    printf("Digite um número: ");
    scanf("%d", &number);
    nPrimo(number);
 


    return 0;
}
int nPrimo(int n){
       if(n %2 == 0 && n != 2){
    printf("Não é número primo\n");
    

    }else if(n % 3 == 0 && n != 3){
    printf("Não é número primo\n");

    }else if(n %5 == 0 && n != 5 ){
    printf("Não é número primo\n");

    }else{
    printf("É número primo\n");

    }
}