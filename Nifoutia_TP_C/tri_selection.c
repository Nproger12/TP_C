#include <stdio.h>

#include <stdio.h>

// Fonction pour l'échange de deux valeurs
void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

// Fonction pour le tri par sélection
void tri_selection(int tab[], int n) {
    int i, j, min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        swap(&tab[min], &tab[i]);
    }
}

int main() {
    int n, i;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Taille invalide.\n");
        return 1;
    }

    int tab[n];

    printf("Entrez les valeurs du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    tri_selection(tab, n);

    printf("Le tableau trie est :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

/*int tri(int tab[], int n)
{
    int j;
    for(int i=1; i<n-1; i++)
    {
        int x=i;
        for(j=i+1; j<n; j++)
        {
            if (tab[j]<tab[x])
            {
                x=j;
            }
        }
        x=tab[i];
        tab[i]=tab[j];
        tab[j]= x;
    }
  /*  int n=5;

    for(int i=1; i=n-1; i++)
    {
        for(int j=i+1; j=n; j++)
        {
            if (tab[j]<=tab[i])
            {
                int x=tab[i];
                tab[i]=tab[j];
                tab[j]= x;
            }
            else
            {
                return -1;
            }
        }
        return 0;
    }

     printf("\n Le resultat du tri est : ");
    for ( i = 1; i < 5; i++) {
        printf("%d", tab[i]);
    }*/


/*int main() {
    int tab[5];
    int n = sizeof (tab) / sizeof(tab[0]);
    int i;
    printf("Veuillez saisir 5 nombres entiers :\n");

    // Saisie des nombres et stockage dans le tableau
    for ( i = 0; i < n; i++) {
        printf("Nombre %d : ", i+1);
        scanf("%d", &tab[i]);
    }

    // Affichage des nombres saisis
    printf("\nLes nombres saisis sont :");
    for ( i = 0; i < n; i++) {
        printf("%d", tab[i]);
    }
    printf("\n");

    tri(tab, n);

    printf("\n\nLe tableau apres le tri :\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", tab[i]);
    }


    return 0;
}*/
