#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nbr;
    printf("entrer un nombre");
    scanf("%d", &nbr);

    for (int i = 2; i < nbr - 1; i++)
    {
        if (nbr % i != 0)
        {
            printf("%d est premier",nbr);
            break;
        }
        else
        {
            printf("%d est non  premier",nbr);
            break;
        }
    }

    return 0;
}
