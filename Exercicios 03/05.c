/* 
     gcc 01.c -o app
     ./app

QUARTA QUESTÂO
 
*/

#include <stdio.h>

 int joinString( int Valores[], int length, int resultPrimos[],int contador);
int nPrimo(int n);

int main(){

int valores[10]; 
int resultPrimos[10];

    for(int i = 0; i <10;i++){

    printf("Digite um número: ");
    scanf("%d", (valores+i));
    }
    //fgets(valores,10,stdin);
    

 int contador = 0;
joinString(valores, 10 , resultPrimos, contador);


printf("\n");


    printf("\n");  
   return 0;
}
   int joinString( int Valores[], int length, int resultPrimos[], int contador){
      
      
    int resul[10]; 
    for(int i = 0; i < length; i++){
        //se for primo entra no array novo 
        int value = Valores[i];
        if(nPrimo(value) == 0 ){        
        resultPrimos[i] = Valores[i];
        resul[i] = Valores[i];
        printf("%d ",value);

        contador++;
        }
    }
        
        printf("Os números primos são \n");
        //printf("%ls",resul);
         for(int h=0;h< contador ; h++){
        printf("%d,",  resultPrimos[h]);
        
}
  }

  int nPrimo(int n){
       if(n %2 == 0 && n != 2){
    //printf("Não é número primo\n");
    
    return  1;

    }else if(n % 3 == 0 && n != 3){
    //printf("Não é número primo\n");
    return  1;

    }else if(n %5 == 0 && n != 5 ){
    //printf("Não é número primo\n");
    return  1;
    }else{
    //printf("É número primo\n");
    return 0;
    }
}