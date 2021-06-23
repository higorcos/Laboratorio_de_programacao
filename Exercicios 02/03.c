/* 
     gcc 03.c -o app
     ./app

    Escreva uma função que dado dois números retorne o maior.
    int maior(int x, int y) ;

*/

#include <stdio.h>

int maiorque(int a,int b);
int main()
{
    int number1,number2;
    printf("\n");

    printf("Digite um número: ");
    scanf("%d", &number1);
    printf("Digite outro número: ");
    scanf("%d", &number2);

    printf("Entre eles o maior número é %d ", maiorque(number1,number2));
    printf("\n");


    return 0;
}

int maiorque(int a,int b){
    int value;
    if(a > b){
        value = a;
    }else if (b > a){
        value = b;
    }else{
        value = 000;
    }
    return value;
}