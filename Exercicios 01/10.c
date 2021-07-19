#include <stdio.h>

int main () {
 int i, j;
 for (i =-10, j=11; i < j ; i++, j--) { //enquanto o i tá almentando o j tá diminuindo 
 int w = (j-i);
 int v = (21 - w)/2;
 int k ;
 for (k =0; k < v; k++) {
/* 

 v e k(loop) quantidade de "" (espaços) 
 ele coloca os espaços apenas no começo da linha por isso ele divide por dois,
 o outro lado é não é necessario colocar pois a quebra de linha cria o espaço depois dos *.
 */
 printf ("");
  

 }
// w e k(loop) quantidade de *  = a soma entre i e j  (j-i)===> ex 11-(-10)= 21
 for (k =0; k < w; k++) {
 printf ("*");
 }
 printf ("\n");
 }
}