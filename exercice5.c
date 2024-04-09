#include <stdio.h>

void triInsertion(int tableau[], int taille) {
    for (int i = 1; i < taille; ++i) {
        int elementCourant = tableau[i];
        int j = i - 1;
        while (j >= 0 && tableau[j] > elementCourant) {
            tableau[j + 1] = tableau[j];
            j--;
        }
        tableau[j + 1] = elementCourant;
    }
}

int main() {
    int tableau[5];


    printf("Entrez 5 nombres entiers :\n");
    for (int i = 0; i < 5; ++i) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    printf("Les nombres avant le tri sont :\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", tableau[i]);
    }


    triInsertion(tableau, 5);


    printf("Les nombres après le tri sont :\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
