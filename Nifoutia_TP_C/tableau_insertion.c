/*#include<stdio.h>

int main()
{
    int i;
    int t[5];

    for (i=0; i<5; i++)
    {
        printf("Entrez vos nombre %d :\n", i+1);
        scanf("%d", &t[i]);


        printf(t[i]);
    }
}*/
#include <stdio.h>

int main() {
    int nombres[5];

    printf("Veuillez saisir 5 nombres entiers :\n");

    // Saisie des nombres et stockage dans le tableau
    for (int i = 0; i < 5; i++) {
        printf("Nombre %d : ", i+1);
        scanf("%d", &nombres[i]);
    }

    // Affichage des nombres saisis
    printf("\nLes nombres saisis sont :");
    for (int i = 0; i < 5; i++) {
        printf(" %d", nombres[i]);
    }
    printf("\n");

    return 0;
}
