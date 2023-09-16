#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nbr[4];
    int max = 0;
    int res = 0;

    for (int i = 1; i <= sizeof(nbr[4]); i++)
    {
        scanf("%d", &nbr[i]);
        //la somme
        if (nbr[i] < 100)
        {
            if (nbr[i] % 10 == 0)
            {
                res = res + nbr[i];
            }
            else
            {
                printf("le nombre est n'est pas un doubleur de 10");
            }
        }
        else
        {
            printf("le nombre est > 100");
            break;
        }
        // le max
        if (nbr[i] >= max)
        {
            max = nbr[i];
        }
        else
        {
            max = max;
        }
    }

    printf("la somme est %d\n", res);
    printf("le max est %d", max);

    return 0;
}
