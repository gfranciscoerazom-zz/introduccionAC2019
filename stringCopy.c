#include <stdio.h>
#include <string.h>

int main()
{
    char *src = "Mauro";
    char dest[20] = "No veras esto nunca";

    strcpy(dest, src);
    printf("dst = %s\n", dest);
    return 0;
}