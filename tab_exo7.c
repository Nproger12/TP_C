#include <stdio.h>

int RechercheDich(int Tab[], int gauche, int droite, int cle) {
    while (gauche <= droite) {
        int mid = gauche + (droite - gauche) / 2;

        if (Tab[mid] == cle) {
            return mid;
        }

        if (Tab[mid] < cle) {
            gauche = mid + 1;
        }

        else {
            droite = mid - 1;
        }
    }
    return -1;
}

int main() {
    int Tab[] = {45, 9, 15, 12, 38};
    int n = sizeof(Tab) / sizeof(Tab[0]);
    int cle = 15;

    int index = RechercheDich(Tab, 0, n - 1, cle);

    if (index != -1) {
        printf("La valeur %d est présente a l'index %d dans le tableau.\n", cle, index);
    } else {
        printf("La valeur %d n'est pas présente dans le tableau.\n", cle);
    }

    return 0;
}
