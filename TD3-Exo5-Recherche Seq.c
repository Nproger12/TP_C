#include <stdio.h>

// Fonction pour effectuer une recherche séquentielle dans un tableau d'entiers
int RechercheSeq(int Tab[], int n, int cle) {
    // Parcours du tableau
    for (int i = 0; i < n; i++) {
        // Si la valeur est trouvée, renvoyer son index
        if (Tab[i] == cle) {
            return i;
        }
    }
    // Si la valeur n'est pas trouvée, renvoyer -1
    return -1;
}

int main() {
    int Tab[] = {64, 25, 12, 22, 11};
    int n = sizeof(Tab) / sizeof(Tab[0]);
    int cle = 22;

    // Appel de la fonction de recherche séquentielle
    int index = RechercheSeq(Tab, n, cle);

    // Affichage du résultat
    if (index != -1) {
        printf("La valeur %d est présente as l'index %d dans le tableau.\n", cle, index);
    } else {
        printf("La valeur %d n'est pas présente dans le tableau.\n", cle);
    }

    return 0;
}

