#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int binary_search(int *array, int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (array[mid] == key) {
            return mid;
        } else if (array[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;  
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

    int key = array[rand() % size];
    printf("Key: %d\n", key);

    insertion_sort(array, size);
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int index = binary_search(array, size, key);
    if (index != -1) {
        printf("Index at which number is present: %d\n", index);
    } else {
        printf("Key not found in the array.\n");
    }

    free(array);
    return 0;
}
