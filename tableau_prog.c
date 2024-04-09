#include <stdio.h>
int main()
{
    int i;
    int tableau[5];
    printf("veuillez saisir 5 nombres entiers:\n");
     for (i = 0; i < 5; i++)
    {
        printf("Nombre %d :\n", i + 1);
        scanf("%d", &tableau[i]);
    }
     printf("Les nombres que vous avez saisis sont :\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}

