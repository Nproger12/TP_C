#include <stdio.h>

int sommeTableau(int tableau[], int taille) {
    int S = 0;
    for (int i = 0; i < taille; i++) {
        S += tableau[i];
    }
    return S;
}

int main()
 {
    int tableau[] = {23, 2, 5, 11, 9};
   int taille = sizeof(tableau) / sizeof(tableau[0]);

    int resultat = sommeTableau(tableau, taille);
   printf("La somme des elements du tableau est : %d\n", resultat);

    return 0;
}

