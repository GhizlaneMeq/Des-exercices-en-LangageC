#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rayon;
    float circonference;
    printf("entrer le rayon du cercle \n");
    scanf("%f", &rayon);
    circonference = 2 * rayon * 3.14;
    printf("la circonference du rayon est: %f",circonference);
    return 0;
}
