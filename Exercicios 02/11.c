/* 
     gcc 11.c -o app
     ./app

Escreva uma função que retorne o produto dos números primos de 1 a N. Observação, pode usar a
função “ehPrimo” escrita acima
int produto_primos(int n) ;

*/

#include <stdio.h>

int fatorialPrimo(int n);

int main()
{
    int number;

    printf("\n");
    printf("Digite um número: ");
    scanf("%d", &number);
    fatorialPrimo(number);

    return 0;
}

int fatorialPrimo(int n)
{
    int fatorial = 1;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0 && i != 2)
        {
            

        }
        else if (i % 3 == 0 && i != 3)
        {
            

        }
        else if (i % 5 == 0 && i != 5)
        {
           

        }
        else
        {
            //printf("Primo\n");

            //fatorial = fatorial * i;
            fatorial = fatorial * i;

            
        }
    }
            printf("valor do faarial dos primos até esse número é %d\n", fatorial);

    return 0;
}