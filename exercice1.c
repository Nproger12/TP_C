#include <stdio.h>

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

    return 0;
}
