#include <stdio.h>

void triSelection(int tableau[], int taille) {
    for (int i = 0; i < taille - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < taille; ++j) {
            if (tableau[j] < tableau[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = tableau[i];
            tableau[i] = tableau[minIndex];
            tableau[minIndex] = temp;
        }
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


    triSelection(tableau, 5);


    printf("Les nombres après le tri sont :\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
