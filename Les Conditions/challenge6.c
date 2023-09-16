#include <stdio.h>
#include <stdlib.h>

int main()

{
    int nbr;
    printf("entre  num");
    scanf(" %d", &nbr);
    if (nbr > 0)
    {
        printf("positif");
    }
    else if (nbr < 0)
    {
        printf("negative");
    }
    else
    {
        printf("le nombre est egal a zero.");
    }



    return 0;
}
