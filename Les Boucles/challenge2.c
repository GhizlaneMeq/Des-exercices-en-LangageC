#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nbrL, i, j,k;
    printf("entrer le nombre de lignes");
     scanf("%d", &nbrL);
    for (i = 1; i <= nbrL; i++)
    {
        for (j = 1; j <= nbrL - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i * 2 - 1; k++)
        {
            printf("*");
        }
        printf(" \n");
    }

    return 0;
}

