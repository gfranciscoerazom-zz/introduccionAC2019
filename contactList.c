#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char NAME[100];
typedef char EMAIL[100];

typedef struct
{
    NAME name;
    EMAIL email;
} CONTACT;

int main(int argc, const char *argv[])
{
    CONTACT *list = NULL;

    char buffer[100];
    int goOn, listSize;

    do {
        printf("Ingrese el nombre del nuevo contacto (0 para salir)\n");
        scanf("%99s", buffer);
        if(strcmp("0", buffer) != 0){
            if(!list) {
                list = malloc(sizeof(CONTACT));
            }
            else {
                list = realloc(list, sizeof(CONTACT) * (listSize + 1));
            }

            strcpy(list[listSize].name, buffer);
            printf("Ingrese el e-mail de %s\n", buffer);
            scanf("%99s", buffer);
            strcpy(list[listSize].email, buffer);
            goOn = 1;
            listSize++;
        }
        else
            goOn = 0;
    } while (goOn);

    printf("\nEsta es tu lista de contactos\n");
    printf("Nombre\t\tEmail\n");
    for(int i = 0; i < listSize; i++)
        printf("%s\t\t%s\n", list[i].name, list[i].email);

    return 0;
}
