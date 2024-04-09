#include<stdio.h>
#include<math.h>

void premier(int a)
{
    int i,P;
   if (a == 2)
        {
            printf("1\n");
        }
    else if (a < 2 || a % 2 == 0)
        {
            printf("0\n");
        }
    P = sqrt(a) + 1;
    for (i=2; i<=P; i=i+2)
        {
            if (a % i == 0)
           {
                printf("0\n");
                break;
           }
        else
           {
               printf("1\n");
               break;
           }
        }

}

int main()
{
    int n;
    do
    {
        printf("Entrer un nombre entier positif\n\n");
        scanf("%d",&n);
    }while(n<0);
    premier(n);
}
