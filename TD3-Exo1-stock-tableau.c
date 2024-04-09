#include<stdio.h>

int main()
{
    int tab[5],i;
    printf("Entrer cinq nomres entier\n\n");
    for(i=1; i<=5; i++)
    {
        printf("Entrer le nombre n%d\n",i);
        scanf("%d",&tab[i]);
    }
    for(i=1; i<=5; i++)
    {
        printf("le contenu de votre tableau est %d\n",tab[i]);
    }
}
