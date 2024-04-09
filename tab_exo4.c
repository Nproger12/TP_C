#include <stdio.h>

void Tri(int Tab[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {
            if (Tab[j] < Tab[i]) {
                int temp = Tab[i];
                Tab[i] = Tab[j];
                Tab[j] = temp;
            }
        }
    }

    printf("Tableau apres le tri: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n");
}

int main() {
    int Tab[] = {64, 25, 12, 22, 11};
    int n = sizeof(Tab) / sizeof(Tab[0]);

    printf("Tableau avant le tri: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n");

       Tri(Tab, n);

    return 0;
}
