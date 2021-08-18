

#include "banco.h"
#include "conta.h"
 
 Banco* criarBanco(){
    
    Banco* this = (Banco*)malloc(sizeof(Banco)); 
    int i = 20; // numero maximo de contas por banco criado
    this->contas[i];
    this->pos= 0;

    return this;
};

void addConta(Banco* banco, Conta* conta){
     //banco->pos = 0;
     if(conta == 0){
          printf ("Essa conta não existe\n");
     }else{
     banco->contas[banco->pos] = conta ; 
     banco->pos++;
     }
}
void imprimeContas(Banco* b){
     printf("\n");
     printf("Contas nesse banco:\n");
     printf("\n");
     for(int i =0; i < b->pos; i++){

     printf ("Conta: %d Valor: %.2f\n", b->contas[i]->codigo,b->contas[i]->saldo);
     }
};

int quantidadeConta(Banco* b){
     return b->pos;
};

Conta* buscaConta(Banco* b, int codigo){

     int value;
     

     for(int i =0; i < b->pos; i++){
      if(b->contas[i]->codigo == codigo){
         
          return criaConta(b->contas[i]->codigo,b->contas[i]->saldo);

     }else{
          
           return 0;
     };
     };

};



