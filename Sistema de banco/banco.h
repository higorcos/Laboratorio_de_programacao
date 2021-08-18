#ifndef BANCO_H
#define BANCO_H

#include <stdio.h>
#include <stdlib.h>
#include "conta.h"


struct banco {
     Conta* contas[20];
     int pos; // usado para saber a quantidade de elementos
};
typedef struct banco Banco;

Banco* criarBanco () ;
void addConta (Banco* b, Conta* c) ;
Conta* buscaConta(Banco* b, int codigo) ;
int quantidadeConta(Banco* b) ;
void imprimeContas (Banco* b);


#endif