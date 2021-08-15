#include <stdio.h>

void duplicar(int *a)
{
    *a *= 2;
}

int main()
{
    int a = 5;
    printf("Antes de duplicar a es %d\n", a);

    duplicar(&a);
    printf("Despues de duplicar a es %d\n", a);

    return 0;
}