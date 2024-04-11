#include <stdio.h>
int main(){
    int tableau[5];
    int e;
printf("veuillez saisir 5 nombres entiers :\n");
    for (e=0; e < 5; e++) {
    printf ("nombre %d : ", e+1);
scanf("%d", &tableau[e]);
}
printf("\nles nombres saisis sont :\n");
for (e= 0; e <5; e++){
        printf("%d\n", tableau[e]);
}
    return 0;
}
