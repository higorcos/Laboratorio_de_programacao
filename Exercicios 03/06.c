/* 
     gcc 01.c -o app
     ./app

 
*/

#include <stdio.h>

 
int main(){

    char Primeiro[10];
    char Ultimo[10];

    printf("Escreva o seu primeiro nome :");
    fgets(Primeiro,10,stdin);
    printf("Escreva o seu primeiro ultimo nome :");
    fgets(Ultimo,10,stdin);
    

   printf("%s,%s", Ultimo,Primeiro);

      
   return 0;
}
   