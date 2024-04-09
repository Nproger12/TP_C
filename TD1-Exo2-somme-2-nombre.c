#include<stdio.h>


int somme5(int a,int b)
{
    int S;
    S = a+b;
    return S;
}

int main()
{
    int A,B;
    printf("entrer deux nombres entiers \n\n");
    scanf("%d%d",&A,&B);
    printf("la somme de ces deux nombres entiers est \n %d",somme5(A,B));
    return 0;
}
