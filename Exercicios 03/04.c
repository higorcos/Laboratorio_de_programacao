/* 
     gcc 01.c -o app
     ./app

QUARTA QUESTÂO
 
*/

#include <stdio.h>

 char joinString( char string[], int length , char string2[], int length2, char resultString[]);

int main(){

char string[40]; 
char string2[40]; 
int length = sizeof(string);
int length2 = sizeof(string2);
    printf("Digite um texto: ");
    scanf("%s", string);
    //fgets(string,40,stdin);
   
    printf("Digite outro texto: ");
    scanf("%s", string2);
    //fgets(string2,40,stdin);
    //printf("%s", string);
    //printf("  %s", string2);


char resultString[80];

joinString(string, length , string2, length2, resultString);

// vai mostrar string
printf("\n");
printf("concatenado \n");
for(int i=0;i<80; i++){
    printf("%c", resultString[i]);
} 

    printf("\n");  
   return 0;
}
  char joinString( char string[], int length , char string2[], int length2, char resultString[]){

    for(int i = 0; i < length; i++){
        resultString[i] = string[i];
        //printf("%c", resultString[i]);
    }
        for(int j = 0; j < length2; j++){
        resultString[length + j] = string2[j];
        //printf("%c", resultString[i]);
    }
   

  }