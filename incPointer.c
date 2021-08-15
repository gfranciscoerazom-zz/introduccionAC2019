#include <stdio.h>

int main()
{
    int number = 5;
    int *pointerNumber = &number;
    char c = 'A';
    char *pointerCharacter = &c;

    printf("Antes\npointerNumber = %p\npointerCharacter = %p", pointerNumber, pointerCharacter);
    pointerNumber++;
    pointerCharacter++;

    printf("\nDespues\npointerNumber = %p\npointerCharacter = %p", pointerNumber, pointerCharacter);

    return 0;
}