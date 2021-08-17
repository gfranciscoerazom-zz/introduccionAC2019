#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Mauro";
    char *otherName = "Juan";
    printf("Los nombres son %s\n", strcmp(str, otherName) == 0 ? "iguales" : "distintos");
    return 0;
}