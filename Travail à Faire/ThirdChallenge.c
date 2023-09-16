#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c;
    
    printf("entrer la valeur du a \n");
    scanf("%d", &a);
    printf("entrer la valeur du b \n");
    scanf("%d", &b);
    printf(" a+b= %d\n",a+b);
    printf(" a-b= %d\n",a-b);
    printf(" a*b= %d\n",a*b);
    printf(" a*b= %d\n",a/b);
    if ( b==0 )
        printf("l'operation ne peut pas etre realise");
    else
        printf(" a%%b= %d\n",a%b);
    return 0;
}


