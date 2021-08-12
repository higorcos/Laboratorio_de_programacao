#include <stdio.h>
#include <stdlib.h>
 
int main()
{
char nome[50];
int a, b, c = 0;
 
while (c == 0){
   a = 22;
printf("\tPROGRAMA: INVERSAO DE FRASE\n\n\n");
printf("Digite seu texto: \n\n");
 
gets(nome);
 
 
b=strlen(nome);
 
printf("%d\n", b );
 
int cont;
 
for (cont=0; cont<=b; cont++)
{
nome[cont]^= a;
a = a + 1;
}
nome[b] = '\0';
 
 
 
printf("\n\n Seu texto criptografado e:\n\n%s\n\n\n\t\t",nome);
 
getch();
//system("cls");
 
system("pause");
printf("Digite o valor da variavel 'c'(0 - para continuar e outro numero para sair)\n");
scanf("%d/n", &c);
fflush(stdin);
}
 
}
