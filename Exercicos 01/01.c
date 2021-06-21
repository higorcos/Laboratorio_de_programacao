

#include <stdio.h>
int main()
{
    int horaI, minutoI, segundoI;
    int horaF, minutoF, segundoF;
    int duracao;

    scanf("%d/%d/%d", &horaI, &minutoI, &segundoI);
    scanf("%d", &duracao);

    int segundoTotal = horaI * 3600 +minutoI + 60+segundoI; //horas em segundos
    int segundoTotalF = segundoI + duracao;

    horaF = (segundoTotalF / 3600); 
    minutoF = (segundoTotalF % 3600)/60;
    segundoF = (segundoTotalF % 3600)%60;
       
    printf("%d/%d/%d\n", horaF,minutoF,segundoF );
  



    return 0;
}