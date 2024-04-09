#include <stdio.h>
#define N 300


int sommeT(int Tab[N], int n);
int main() {
    int Tab[N],R,j,n;
    printf("Enter la taille du tableau\n");
    scanf("%d",&n);
    //initialisation du tableau
     for(j=0; j<n; j++)
     {
         printf("Enter l'element numero %d du tableau\n",j);
         scanf("%d",&Tab[j]);
     }
      n = sizeof(Tab) / sizeof(Tab[0]);//calcule de la    taille du tableaus


    // Appel de la fonction pour calculer la somme
    R = sommeT(Tab, n);

    // Affichage du résultat
    printf("La somme des elements du tableau est : %d\n", R);

    return 0;
}

// Fonction pour calculer la somme des éléments d'un tableau d'entiers
int sommeT(int Tab[], int n) {
    int S = 0; // Variable pour stocker la somme

    // Parcours du tableau et addition des éléments
    for (int i = 0; i < n; i++) {
        S += Tab[i];
    }

    // Renvoi de la somme calculée
    return S;
}
