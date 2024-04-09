#include <stdio.h>

int rechercheSequentielle(int tableau[], int taille, int valeur) {
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] == valeur) {
            return i;
        }
    }
    return -1; // Renvoie -1 si la valeur n'est pas trouv�e
}

int main() {
    int tableau[5];


    printf("Entrez 5 nombres entiers :\n");
    for (int i = 0; i < 5; ++i) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    int valeur;
    printf("Entrez la valeur � rechercher : ");
    scanf("%d", &valeur);


    int index = rechercheSequentielle(tableau, 5, valeur);


    if (index != -1) {
        printf("La valeur %d a �t� trouv�e � l'indice %d dans le tableau.\n", valeur, index);
    } else {
        printf("La valeur %d n'a pas �t� trouv�e dans le tableau.\n", valeur);
    }

    return 0;
}
