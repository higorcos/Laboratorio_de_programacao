

#include "conta.h"



Conta* criaConta(int codigo, double saldo){
    Conta* this = (Conta*)malloc(sizeof(Conta)); 
    this->codigo = codigo;
    this->saldo = saldo;

    return this;
}

void imprimeConta(Conta* conta){
     if(conta == 0){
          printf ("Essa conta não existe\n");
     }else{
     printf ("conta: %d valor:%g\n", conta->codigo, conta->saldo);
     }
};

void deposito(Conta* conta, double valor){
     if(conta == 0){
          printf ("Essa conta não existe\n");
     }else{
     conta->saldo = conta->saldo + valor;

     };
};

void saque (Conta* conta , double valor){
     if(conta == 0){
          printf ("Essa conta não existe\n");
     }else{
     conta->saldo = conta->saldo - valor;
     }
}


