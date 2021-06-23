/* 
     gcc 04.c -o app
     ./app

    Escreva uma função que dado dois números retorne o menor.
    int menor(int x, int y) ;

*/

#include <stdio.h>

int menorQue(int a,int b);
int main()
{
    int number1,number2;
    printf("\n");

    printf("Digite um número: ");
    scanf("%d", &number1);
    printf("Digite outro número: ");
    scanf("%d", &number2);

    printf("Entre eles o nenor número é %d ", menorQue(number1,number2));
    printf("\n");


    return 0;
}

int menorQue(int a,int b){
    int value;
    if(a > b){
        value = b;
    }else if (b > a){
        value = a;
    }else{
        value = 000;
    }
    return value;
}