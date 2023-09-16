#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[25], prenom[45], sexe[10];
    int age;
    long nbt;

    printf("entrer votre nom:\n ");
    scanf("%s", &nom);

    printf("entrer votre prenom:\n ");
    scanf(" %[^\n]", &prenom);


    printf("entrer votre age:\n ");
    scanf("%d", &age);

    printf("entrer votre sexe:\n ");
    scanf("%s", &sexe);

    printf("entrer votre numero de telephone:\n");
    scanf("%ld", &nbt);

    printf("votre nom est: %s\n",nom);
    printf("votre prenom est: %s\n",prenom);
    printf("votre age est: %d\n",age);
    printf("votre sexe est: %s\n",sexe);
    printf("votre numero du telephone est:%ld\n ",nbt);

    return 0;
}
