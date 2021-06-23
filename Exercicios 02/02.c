/* 
     gcc 02.c -o app
     ./app

     Escreva uma função que dado um numero retorne o dobro deste numero.
float dobro (float a ) ;
*/

#include <stdio.h>
float dobro(float a);

int main()
{
    float number1;
    printf("\n");

    printf("Digite um número: ");
    scanf("%f", &number1);
    
    printf("O dobro desse número é %.2f ", dobro(number1));
    printf("\n");


    return 0;
}
float dobro(float a){
    return a*2;
}