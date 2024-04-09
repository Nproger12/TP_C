#include<stdio.h>
#include<math.h>


int puissance(int x,int n)
{
    int P;
    P = pow(x,n);
    return P;
}

int main()
{
    int X,N;
    printf("Entrer un nombre, puis sa puissance \n\n");
    scanf("%d%d",&X,&N);
    printf("%d a la puissance %d est %d \n",X,N,puissance(X,N));
    return 0;
}
