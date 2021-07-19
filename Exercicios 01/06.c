/* 
    gcc olaMundo.c -o ola
    ./ola

    Dados o número n de alunos de uma turma e suas notas da primeira prova,
determinar a maior e a menor nota obtidas por essa turma (Nota máxima =
100 e nota mínima = 0).
 */


#include <stdio.h>
int main()
{
    int alunos;
    int nota;
    int soma = 0;
    int maiorNota = 0;
    int menorNota = 100;
    int mediaNotas;

    printf("\n");
    printf("Informe o número de alunos: \n");

    scanf("%d", &alunos);
    

    for(int i = 1; i<=alunos; i++){
    printf("Dê uma nota para o aluno númeoro %d: ", i);
    scanf("%d",&nota);

    soma += nota;

    if(maiorNota < nota){
        maiorNota = nota;
    }
    if(menorNota > nota){
        menorNota = nota;
    }
    }
    mediaNotas= soma/alunos;

    printf("Media das notas %f\n", mediaNotas);
    printf("Maior nota %d\n", maiorNota);
    printf("Menor nota %d\n", menorNota);

    printf("\n");


    return 0;
}
