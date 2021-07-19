/* 
     gcc 01.c -o app
     ./app

 ;
*/

#include <stdio.h>


int main()
{
 /*  int vet[4];
  //ponteiro
  int *pVet = vet;
  
  char letra = 'e';
  int num = 98;
  float numF = 9.8;
  double numFF = 9.800;

  printf("\n%li  inicial \n", (long int)pVet);
  printf("%li \n", (long int)&vet[0]);
  printf("%li \n", (long int)&vet[1]);
  printf("%li \n", (long int)&vet[2]);
  printf("%li \n", (long int)&vet[3]);

  vet[0]= letra;
  vet[1]= num;
  vet[2]= numF;
  vet[3]= numFF;

  int x = (*vet)++;
  printf ("%d %d %d %d\n",vet[0],vet[1],vet[2],vet[3]);
   printf("\n");
   //printf ("%f\n",*(vet+1));
  printf("%li \n", (long int)&vet[0]);
  printf("%li \n", (long int)&vet[1]);
  printf("%li \n", (long int)&vet[2]);
  printf("%li \n", (long int)&vet[3]);



 

  printf("%li final \n \n",(long int) pVet);

 */
int iVar = 15;
int jVar,*pPont,*qPont;
pPont = &iVar;
jVar = 2 * (*pPont);
qPont = 2 + (pPont);

    return 0;
}
  