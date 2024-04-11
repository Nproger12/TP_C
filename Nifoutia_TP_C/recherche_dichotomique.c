#include <stdio.h>

// Fonction de recherche dichotomique
int rechercheDichotomique(int tab[], int taille, int valeur) {
    int debut = 0;
    int fin = taille - 1;
    while (debut <= fin) {
        int milieu = debut + (fin - debut) / 2;
        if (tab[milieu] == valeur) {
            return milieu; // La valeur a été trouvée, on renvoie son index
        } else if (tab[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }
    return -1; // La valeur n'a pas été trouvée, on renvoie -1
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tab[taille];

    // Demander à l'utilisateur d'entrer les valeurs dans le tableau
    printf("Entrez les elements du tableau : \n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }

    int valeurRecherchee;
    printf("Entrez la valeur a rechercher dans le tableau : ");
    scanf("%d", &valeurRecherchee);

    // Faire la recherche dichotomique
    int resultat = rechercheDichotomique(tab, taille, valeurRecherchee);

    if (resultat != -1) {
        printf("La valeur %d a ete trouvee a l'index %d ! \n", valeurRecherchee, resultat);
    } else {
        printf("La valeur %d n'a pas ete trouvee dans le tableau. \n", valeurRecherchee);
    }

    return 0;
}

