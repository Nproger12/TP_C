#include<stdio.h>


int somme5(int a,int b,int c,int d,int e)
{
    int S;
    S = a+b+c+d+e;
    return S;
}

int main()
{
    int A,B,C,D,E;
    printf("entrer cinq nombre entier \n\n");
    scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
    printf("la somme de ces cinq nombres est \n %d",somme5(A,B,C,D,E));
    return 0;
}
