/*#include<stdio.h>

 int somme(int tab[])
{
    int x, i;

    for(i=0; i=x-1; i++)

}*/

#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int *tab, int taille) {
    int somme = 0;

    for (int i = 0; i < taille; i++) {
        somme += tab[i];
    }

    return somme;
}

int main() {
    int taille;
    printf("Entrez la taille du tableau :\n ");
    scanf("%d", &taille);

    // Allocation dynamique du tableau
    int *tab = (int *)malloc(taille * sizeof(int));

    if (tab == NULL) {
        printf("Erreur d'allocation mémoire.");
        return 1;
    }

    // Demander à l'utilisateur d'entrer les valeurs dans le tableau
    for (int i = 0; i < taille; i++) {
        printf("Entrez la valeur pour l'indice %d : ", i);
        scanf("%d", &tab[i]);
    }

    // Calcul de la somme des éléments du tableau
    int somme = sommeTableau(tab, taille);

    printf("La somme des éléments du tableau est : %d\n", somme);

    // Libération de la mémoire
    free(tab);

    return 0;
}
