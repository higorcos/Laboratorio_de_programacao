/*  gcc olaMundo.c -o ola
    ./ola
*/

#include <stdio.h>
int main()
{
    int a = 1;
    float b = 10.0 / 3.0;
    char c;
    c = 'p';

    printf("Número inteiro%d\n", a);
    printf("Número decimal%f\n", b);
    printf("Texto %c\n", c);


    return 0;
}