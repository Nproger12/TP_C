#include<stdio.h>

int facto(int a)
{
    int i,F=1;
    for(i=1; i<=a; i++)
    {
        F = F*i;
    }
    return F;
}

int main()
{
    int x;
    do
    {
        printf("Entrer un nombre entier positif\n\n");
        scanf("%d",&x);
    }while(x<0);
    printf("Le factorielle de %d est \n %d",x,facto(x));
}
