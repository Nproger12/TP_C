#include <stdio.h>

// Fonction de tri par insertion
void Trie_insertion(int Tab[], int n) {
    int i, cle, j;

    // Parcours de tout le tableau à partir du deuxième élément
    for (i = 1; i < n; i++) {
        cle = Tab[i]; // Élément actuel à insérer dans la portion triée du tableau
        j = i - 1;

        // Déplacement des éléments du tableau trié qui sont plus grands que la clé vers la droite
        while (j >= 0 && Tab[j] > cle) {
            Tab[j + 1] = Tab[j];
            j = j - 1;
        }
    Tab[j + 1] = cle; // Insertion de la clé à la bonne position dans le tableau trié
    }
}

int main() {
    int Tab[] = {64, 25, 12, 22, 11};
    int n = sizeof(Tab) / sizeof(Tab[0]);

    printf("Tableau avant le tri: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n");

    // Appel de la fonction de tri par insertion
    Trie_insertion(Tab, n);

    printf("Tableau apres le tri: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", -Tab[i]);
    }
    printf("\n");

    return 0;
}

