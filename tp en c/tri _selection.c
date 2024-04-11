#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i< n -  1; i++){
    min_idx = i;
    for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
    }
    swap(&arr[min_idx], &arr[i]);
  }
}

void printarray(int arr[], int size) {
     int i;
     for (i = 0; i < size; i++) {
            printf("%d\n", arr[i]);
}
printf("\n");
}

int main() {
    int arr[] ={64,20,14,44,99};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printf ("tableau avant le tri :\n");
    printarray(arr, n);

    selectionsort(arr, n);
    printf("tableau apres le tri en utilisant le tri par selection :\n");
    printarray(arr, n);

    return 0;
}
