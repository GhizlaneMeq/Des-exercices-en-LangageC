#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1;
    int x2;
    int y1;
    int y2;
    int distance;
    printf("enter  x1 \n");
    scanf("%d",&x1);

    printf("entrez l x2\n");
    scanf("%d", &x2);

    printf("entrez y1\n");
    scanf("%d", &y1);

    printf("entrez y2\n");
    scanf("%d", &y2);


    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf(" distance entre les points est: %f\n", distance);

}
