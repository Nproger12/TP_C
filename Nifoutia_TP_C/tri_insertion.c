#include<stdio.h>


void tri_insertion(int tableau[], int taille) {
    for (int i = 1; i < taille; i++) {
        int elem_courant = tableau[i];
        int j = i - 1;

        while (j >= 0 && tableau[j] > elem_courant) {
            tableau[j + 1] = tableau[j];
            j--;
        }
        tableau[j + 1] = elem_courant;
    }
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];
    printf("Entrez les valeurs du tableau :\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }

    tri_insertion(tableau, taille);

    printf("Le Tableau trie est :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}

/*int tri(int tab[], int n)
{
    for (int i = 1; i<n; i++)
    {
        int x = tab[i];
        int j = i-1;

        while (j >= 0 && tab[j] > x)
        {
            tab[j+1] = tab[j];
            j = j-1;
        }
        tab[j+1] = x;
    }

 /*   int n=5;

    for(int i=2; i=n; i++)
    {
        int j=i;
        while ((j>1) && (tab[j]<=tab[j-1]));
        int x = tab[j-1];
        tab[j-1] = tab[j];
        tab[j] = x;
        j=j-1;
    }*/


/*int main()
{
    int tab[] = {5, 3, 4, 1, 2};
    int n = sizeof (tab) / sizeof(tab[0]);
    int i;

    printf("Le tableau avant le tri :\n\n");
    for(i = 0; i<n; i++)
    {
        printf("%d\n", tab[i]);
    }

    tri(tab, n);

    printf("\n\nLe tableau apres le tri :\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", tab[i]);
    }
        printf("\n");
    return 0;
}*/
