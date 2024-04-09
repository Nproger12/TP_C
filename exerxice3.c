#include <stdio.h>

int sommeTableau(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        somme += tableau[i];
    }
    return somme;
}

int main() {
    int tableau[5];

    printf("Entrez 5 nombres entiers :\n");
    for (int i = 0; i < 5; ++i) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Les nombres que vous avez saisis sont :\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", tableau[i]);
    }

    int somme = sommeTableau(tableau, 5);
    printf("La somme des nombres est : %d\n", somme);

    return 0;
}
