#include <stdio.h>

// Fonction pour trier un tableau d'entiers en utilisant le tri par sélection
void Trie(int Tab[], int n) {
    // Parcours de tout le tableau
    for (int i = 0; i < n - 1; i++) {
        // Recherche de l'élément minimum dans le reste du tableau
        for (int j = i + 1; j < n; j++) {
            // Si l'élément actuel est plus petit que l'élément minimum trouvé jusqu'à présent
            if (Tab[j] < Tab[i]) {
                // Échange des valeurs
                int temp = Tab[i];
                Tab[i] = Tab[j];
                Tab[j] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau apres le tri: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n");
}

int main() {
    int Tab[] = {64, 25, 12, 22, 11};
    int n = sizeof(Tab) / sizeof(Tab[0]);

    printf("Tableau avant le tri: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n");

    // Appel de la fonction de tri par sélection
    Trie(Tab, n);

    return 0;
}
