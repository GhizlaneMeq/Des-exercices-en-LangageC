#include <stdio.h>
#include <stdlib.h>y

int main()
{
    char caracter;
    printf("entrer un caractere \n");
    scanf("%c", &caracter);
    switch(caracter){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("le caractere %c est une voyelle",caracter);
        break;


    default: printf("le caractere %c n'est pas une voyelle",caracter);
    }

    return 0;
}
