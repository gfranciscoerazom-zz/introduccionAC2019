#include <stdio.h>

int main()
{
    int number = 109;
    int *pointToNumber = &number;

    printf("%p, %d", pointToNumber, *pointToNumber);
}