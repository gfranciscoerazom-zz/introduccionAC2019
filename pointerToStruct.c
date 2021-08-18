#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PERSON {
    char name[100];
    int age;
};

void fillPersonData(struct PERSON *person, const char *name, int age)
{
    if (strlen(name) < 100) {
        strcpy(person->name, name);
    }

    (*person).age = age;
}

int main(int argc, const char *argv[])
{
    struct PERSON personMain;
    
    if(argc < 3) {
        printf("Indique nombre y edad por favor\n");
        return 1;
    }

    fillPersonData(&personMain, argv[1], atoi(argv[2]));

    printf("Name = %s, age = %d\n", personMain.name, personMain.age);
    
    return 0;
}