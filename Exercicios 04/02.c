/* 
     gcc 00.c -o app
     ./app

     struct 
*/
#include <stdio.h>

struct Ponto {
  int x, y;
};

typedef struct Ponto Ponto;

void le_coordenada (Ponto* p) {
  printf ("Digite a coordenada x:");
  scanf("%d", &p->x);/* &(*p).x */

  printf ("Digite a coordenada y:");
  scanf("%d", &p->y);

}

int main(void) {

  Ponto p;
  le_coordenada (&p);
  printf ("(%d, %d)\n", p.x,p.y);
	return 0;
}
