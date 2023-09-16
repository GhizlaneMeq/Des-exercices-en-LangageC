#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    int cent;
    int dix;
    int unite;
    int resultat;
    printf("entrer  un nombre entier à trois chiffres");
    scanf("%d", &nbr);
    cent = nbr / 100;
    dix = (nbr / 10)%10;
    unite=nbr%10;
    resultat=(unite*100)+(dix*10)+cent;
    printf("%d",resultat);
    return 0;
}




