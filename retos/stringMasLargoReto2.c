#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    long int longerSize = strlen(argv[1]);
    long int analizeSize;
    int position;

    for(int i = 1; i < argc; i++) {
        analizeSize = strlen(argv[i]);
        if(longerSize < analizeSize) {
            position = i;
            longerSize = analizeSize;
        }
    }
    printf("El texto más largo es: %s con %ld", argv[position], longerSize);
    return 0;
}
