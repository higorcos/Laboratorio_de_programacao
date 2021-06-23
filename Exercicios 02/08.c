/* 
     gcc 00.c -o app
     ./app

*/

#include <stdio.h>
int fatorial(int n);
int main()
{
    int number;

    printf("\n");
    printf("Digite um número: ");
    scanf("%d", &number);

    fatorial(number);

    return 0;
}
int fatorial(int n){
    int fatorial = 1;

    for(int i= 1;i<=n; i++){
        fatorial = fatorial * i;
    }
    printf("O fatorial de %d! é %d ", n,fatorial);

    return 0;
}
