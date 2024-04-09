#include <stdio.h>

// Fonction pour effectuer une recherche dichotomique dans un tableau d'entiers trié
int RechercheDig(int Tab[], int gauche, int droite, int cle) {
    while (gauche <= droite) {
        int mid = gauche + (droite - gauche) / 2;

        // Si la valeur est présente au milieu du tableau
        if (Tab[mid] == cle) {
            return mid;
        }

        // Si la valeur est plus petite, elle doit être dans la partie gauche du tableau
        if (Tab[mid] < cle) {
            gauche = mid + 1;
        }
        // Sinon, elle doit être dans la partie droite du tableau
        else {
            droite = mid - 1;
        }
    }
    // Si la valeur n'est pas trouvée, renvoyer -1
    return -1;
}

int main() {
    int Tab[] = {11, 12, 22, 25, 64};
    int n = sizeof(Tab) / sizeof(Tab[0]);
    int cle = 22;

    // Appel de la fonction de recherche dichotomique
    int index = RechercheDig(Tab, 0, n - 1, cle);

    // Affichage du résultat
    if (index != -1) {
        printf("La valeur %d est présente a l'index %d dans le tableau.\n", cle, index);
    } else {
        printf("La valeur %d n'est pas présente dans le tableau.\n", cle);
    }

    return 0;
}

