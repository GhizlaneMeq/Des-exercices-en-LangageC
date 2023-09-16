#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c,delta,x1,x2;
    printf("Entrez les valeurs des: a, b, c \n");
    scanf("%f %f %f", &a, &b, &c);
    delta = (b * b) - (4 * a * c);

    if (delta == 0.0)
    {
        x1 = -b / (2 * a);
        printf("X  = %.2f \n", x1);
    }
    if (delta > 0.0)
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("les solutions  sont : x1 = %.2f et x2 = %.2f \n", x1, x2);
    }
    if (delta < 0.0)
        printf("l'equation n'a pas une solution");
    return 0;
}
