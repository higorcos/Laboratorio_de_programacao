/* 
     gcc 01.c -o app
     ./app

     Escreva uma função que retorne se um dado dois valores ela retorna a média aritmética .
float media(float a, float b ) ;
*/

#include <stdio.h>
float Media(float a,float b);


int main()
{
    float number1,number2;
    printf("\n");

    printf("Digite um número: ");
    scanf("%f", &number1);
    printf("Digite outro número: ");
    scanf("%f", &number2);

    printf("A média entre os dois números é %.2f ", Media(number1,number2));
    printf("\n");
  
    

    return 0;
}


    float Media(float a,float b){
      return (a + b )/ 2;
    }
