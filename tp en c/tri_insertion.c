#include <stdio.h>
int tri(int tab[], int n) {
    int i, j, x;
    for (i = 1; i < n; i++) {
        x = tab[i];
        j = i - 1;

        while (j >= 0 && tab [j] > x) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = x;
    }
}

int main() {
    int tab[] = {12, 15, 16, 3, 5};
    int n = sizeof (tab) /sizeof(tab[0]);
    int i;

    printf("tableau avant le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", tab[i]);
}

tri(tab, n);

printf("\n\ntableau apres le tri : \n");
for (i = 0; i < n; i++) {
    printf("%d\n", tab[i]);
}
    return 0;
}
