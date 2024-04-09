#include <stdio.h>

int RechercheSeq(int Tab[], int x, int cle) {

    for (int i = 0; i < x; i++) {

        if (Tab[i] == cle) {
            return i;
        }
    }

    return -1;
}

int main() {
    int Tab[] = {64, 25, 12, 22, 11};
    int x = sizeof(Tab) / sizeof(Tab[0]);
    int cle = 22;


    int index = RechercheSeq(Tab, x, cle);


    if (index != -1) {
        printf("La valeur %d est présente as l'index %d dans le tableau.\n", cle, index);
    } else {
        printf("La valeur %d n'est pas présente dans le tableau.\n", cle);
    }

    return 0;
}

