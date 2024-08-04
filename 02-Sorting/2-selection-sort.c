#include <stdio.h>
#include <stdlib.h>

void selection_sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[smallest]) {
                smallest = j;
            }
        }
        if (smallest != i) {
            int temp = array[i];
            array[i] = array[smallest];
            array[smallest] = temp;
        }
    }
}

int main() {
    int size = 20;
    int *array = (int *) malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 101; 
    }
    selection_sort(array, size);
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}
