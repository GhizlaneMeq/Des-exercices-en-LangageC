#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pnbr;
    float dnbr;
    printf(" entrer le premier nombre");
    scanf("%f", &pnbr);
    printf("entrer le deuxieme nembre");
    scanf("%f", &dnbr);
    if(pnbr == dnbr)
        printf("le triple de la somme:%f ",3*( pnbr + dnbr));
    else
    printf("la somme: %f",pnbr+dnbr);
    return 0;
}
