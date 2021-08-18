/* 
     gcc 00.c -o app
     ./app
      
*/

#include <stdio.h>
#include <stdlib.h>

#include "conta.h"
#include "banco.h"

int main() {
     
printf ("%ld\n", sizeof(Banco));
Banco *b = criarBanco();
addConta(b,criaConta(123,200));
addConta(b,criaConta(456,800));
imprimeContas(b);
 Conta* c1 = buscaConta(b,123);
deposito(c1, 500);
imprimeConta(c1);
Conta* c2 = buscaConta(b,123);
deposito(c2, 500);
imprimeConta(c2);
imprimeContas(b);



 return 0;
};
