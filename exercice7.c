#include <stdio.h>

int rechercheDichotomique(int tableau[], int debut, int fin, int valeur) {
    if (fin >= debut) {
        int milieu = debut + (fin - debut) / 2;
        if (tableau[milieu] == valeur) {
            return milieu;
        }
        if (tableau[milieu] > valeur) {
            return rechercheDichotomique(tableau, debut, milieu - 1, valeur);
        }
        return rechercheDichotomique(tableau, milieu + 1, fin, valeur);
    }
    return -1;
}

int main() {
    int tableau[5];


    printf("Entrez 5 nombres entiers triés :\n");
    for (int i = 0; i < 5; ++i) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    int valeur;
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &valeur);


    int index = rechercheDichotomique(tableau, 0, 4, valeur);


    if (index != -1) {
        printf("La valeur %d a été trouvée à l'indice %d dans le tableau.\n", valeur, index);
    } else {
        printf("La valeur %d n'a pas été trouvée dans le tableau.\n", valeur);
    }

    return 0;
}
