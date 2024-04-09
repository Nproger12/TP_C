#include <stdio.h>

// Fonction pour effectuer une recherche dichotomique dans un tableau d'entiers tri�
int RechercheDig(int Tab[], int gauche, int droite, int cle) {
    while (gauche <= droite) {
        int mid = gauche + (droite - gauche) / 2;

        // Si la valeur est pr�sente au milieu du tableau
        if (Tab[mid] == cle) {
            return mid;
        }

        // Si la valeur est plus petite, elle doit �tre dans la partie gauche du tableau
        if (Tab[mid] < cle) {
            gauche = mid + 1;
        }
        // Sinon, elle doit �tre dans la partie droite du tableau
        else {
            droite = mid - 1;
        }
    }
    // Si la valeur n'est pas trouv�e, renvoyer -1
    return -1;
}

int main() {
    int Tab[] = {11, 12, 22, 25, 64};
    int n = sizeof(Tab) / sizeof(Tab[0]);
    int cle = 22;

    // Appel de la fonction de recherche dichotomique
    int index = RechercheDig(Tab, 0, n - 1, cle);

    // Affichage du r�sultat
    if (index != -1) {
        printf("La valeur %d est pr�sente a l'index %d dans le tableau.\n", cle, index);
    } else {
        printf("La valeur %d n'est pas pr�sente dans le tableau.\n", cle);
    }

    return 0;
}

