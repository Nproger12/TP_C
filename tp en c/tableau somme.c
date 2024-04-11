#   include <stdio.h>

int sommetableau(int tableau[], int taille) {
int somme =0;
for (int i = 0; i < taille; i++)
{
        somme += tableau[i];
    }
    return somme;
}
int main(){
    int tableau[] = {1, 2, 3, 4, 5};
    int taille =sizeof(tableau)/sizeof(tableau[0]);
    int resultat =
    sommetableau(tableau, taille);
    printf("la somme des elements du tableau est : %d\n", resultat);

        return 0;
}
