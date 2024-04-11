#include <stdio.h>

#define TAILLE_TABLEAU 5

int rechercheSequentielle(int tab[], int taille, int valeurRecherchee) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeurRecherchee) {
            return i; // Retourne l'index de la valeur recherch�e si elle est pr�sente
        }
    }
    return -1; // Retourne -1 si la valeur recherch�e n'est pas trouv�e
}

int main() {
    int tab[TAILLE_TABLEAU];
    int valeurRecherchee;

    // Demande � l'utilisateur de saisir les valeurs dans le tableau
    printf("Veuillez entrer %d entiers dans le tableau :\n", TAILLE_TABLEAU);
    for (int i = 0; i < TAILLE_TABLEAU; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Entrez la valeur que vous souhaitez rechercher : ");
    scanf("%d", &valeurRecherchee);

    int index = rechercheSequentielle(tab, TAILLE_TABLEAU, valeurRecherchee);

    if (index != -1) {
        printf("La valeur recherch�e se trouve a l'index %d dans le tableau.\n", index);
    } else {
        printf("La valeur recherch�e n'a pas ete trouvee dans le tableau.\n");
    }

    return 0;
}

