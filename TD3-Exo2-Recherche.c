#include<stdio.h>
#include<stdbool.h>
#define M 25

int recherche(int Tab[N],int p)
{
    int i=1;
    bool trouve=false;
    while((i!= p)&&(i<=N))
    {
        i = i+1;
    }
    trouve=true;
    if(trouve)
    {
        printf("vrai");
    }
    else
    {
        printf("faux");
    }
    return 0;
}

int main()
{
    int P ,j,N,Tab[N];
    printf("Entrer la taille du tableau");
    scanf("%d",&N);
    for(j=0; j<=N; j++)
    {
        printf("Entrer un nombre\n");
        scanf("%d",&Tab[j]);
    }
    printf("Entrer le nombre a chercher\n");
    scanf("%d",&P);
    printf("%d",recherche(Tab[N],P));
}
