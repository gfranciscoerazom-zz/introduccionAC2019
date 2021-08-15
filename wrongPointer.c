#include <stdio.h>

int main()
{
    int *pi;
    int a = 5;
    int b = 1;

    pi = &a;
    printf("Antes a = %d, &a = %p, b = %d, &b = %p, pi = %p\n", a, &a, b, &b, pi);
    pi++;
    *pi = 10;
    printf("Despues a = %d, &a = %p, b = %d, &b = %p, pi = %p\n", a, &a, b, &b, pi);

    return 0;
}