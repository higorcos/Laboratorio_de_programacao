#ifndef CONTA_H
#define CONTA_H

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

#endif