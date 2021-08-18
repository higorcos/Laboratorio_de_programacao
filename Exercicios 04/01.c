/* 
     gcc 00.c -o app
     ./app

     struct 
*/

#include <stdio.h>

struct aluno {
     char name[40];
     double notas[3];
     int matricula;                           
};
typedef struct aluno Aluno;

int main() {
 
 Aluno a2 = {"higor",{7.5,3.2,8.0}, 2020098023};
     printf("%d - %s", a2.matricula,a2.name);
}
