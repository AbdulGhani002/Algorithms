#include <stdio.h>
#include<stdlib.h>

void insertion_sort(int array[]) {
    for (int i = 1; i < 20; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main() {
    int *array = (int *) malloc(20 * sizeof(int));
    if (array == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    for (int i = 0; i < 20; i++) {
        array[i] = rand();
    }

    insertion_sort(array);

    printf("Sorted array: \n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    free(array);

    return 0;
}
