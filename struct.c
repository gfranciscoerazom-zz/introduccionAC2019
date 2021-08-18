#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person {
    char name[100];
    int age;
};

int main(int argc, const char *argv[])
{
    struct person personMain;
    
    if(argc < 3) {
        printf("Indique nombre y edad por favor\n");
        return 1;
    }

    if (strlen(argv[1]) < 100) {
        strcpy(personMain.name, argv[1]);
    }

    personMain.age = atoi(argv[2]);

    printf("Name = %s, age = %d\n", personMain.name, personMain.age);
    
}