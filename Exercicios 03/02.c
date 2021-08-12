/* 
     gcc 01.c -o app
     ./app

 ;
*/

#include <stdio.h>

int main()
{
char string[6] = {'b','r','a','s','i','l'};
int i;
for(i=0;i<6; i++){
    printf("%c", string[i]);
} 
    printf("\n");
   return 0;
}
  