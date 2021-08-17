#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i < argc; i++) {
        printf("Argumento %d = %s\n", i, argv[i]);
    }
    return 0;
}
