#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf("entrer un nombre \n");
    scanf("%d", &nbr);
    if( nbr % 2 ==0)
        printf("le nombre est pair");
    else
        printf("le nombre est impair");
    return 0;
}
