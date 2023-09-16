#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0 ;
    int num ;
    printf("entrer un nombre \n");
    scanf("%d", &num);
    do
    {
        n = (n*10) + (num%10) ;
        num = num/10;
    }while(num!=0);
    printf("%d",n);
    return 0;
}
