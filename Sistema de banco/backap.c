/* 
     gcc 00.c -o app
     ./app
     
     Saque

     - valor fixo de conta e saldo(user)
     - informar valor de saque
     - verificar se tem valor disponível para saque
     - subtrair valor da conta 
*/

#include <stdio.h>
#include <stdlib.h>

struct conta {
     int codigo;
     double saldo;
};
typedef struct conta Conta;

void imprimeConta(Conta* conta);
void deposito (Conta* conta, double valor ) ;
void saque (Conta* , double ) ;
Conta* criaConta(int codigo, double saldo);

int main() {
     
     Conta c1;
     c1.codigo = 97254;
     c1.saldo = 3.93;

     Conta* c2 = (Conta*)malloc(sizeof(Conta));
     c2->codigo = 34682;
     c2->saldo = 30.55;

     Conta* c3 = criaConta(591421,200.10);
     
     imprimeConta(c3);

     //imprimeConta(&c2);
     //deposito(&c2,2.3);
     //imprimeConta(&c2);

 return 0;
};
Conta* criaConta(int codigo, double saldo){
    Conta* this = (Conta*)malloc(sizeof(Conta)); 
    this->codigo = codigo;
    this->saldo = saldo;
}

void imprimeConta(Conta* conta){
     printf ("conta: %d valor:%g\n", conta->codigo, conta->saldo);
};

void deposito(Conta* conta, double valor){
     conta->saldo = conta->saldo + valor;
};

