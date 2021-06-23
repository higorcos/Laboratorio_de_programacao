/* 
     gcc 05.c -o app
     ./app

     Escreva uma função que dado três números retorne o maior.
int maior(int a, int b, int c) 
*/
#include <stdio.h>

int maiorque(int a,int b, int c);
int main()
{
    int number1,number2,number3;
    printf("\n");

    printf("Digite um número: ");
    scanf("%d", &number1);
    printf("Digite outro número: ");
    scanf("%d", &number2);
    printf("mais um por favor: ");
    scanf("%d", &number3);

    printf("Entre eles o maior número é %d ", maiorque(number1,number2,number3));
    printf("\n");


    return 0;
}

int maiorque(int a,int b, int c){
    int value;
    if(a > b){
        if(a > c){
        value = a;
        }else{
         value = c;
        }
    }else if (b > a){
        if(b > c){
        value = b;
        }else{
         value = c;
        }
    }else{
        value = 000;
    }
    return value;
}