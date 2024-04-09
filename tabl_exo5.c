#include<stdio.h>
void tri_insertion(int tableau[], int taille) {
    int i, j, element_a_inserer;

    for (i = 1; i < taille; i++) {
        element_a_inserer = tableau[i];
        j = i - 1;

        while (j >= 0 && tableau[j] > element_a_inserer) {
            tableau[j + 1] = tableau[j];
            j--;
        }

        tableau[j + 1] = element_a_inserer;
    }
}

int main() {
    int tableau[] = {9, 5, 7, 3, 1, 8, 6, 2, 4};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    tri_insertion(tableau, taille);

    printf("Tableau trié : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
