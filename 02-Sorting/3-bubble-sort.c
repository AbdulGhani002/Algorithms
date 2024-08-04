#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int array[])
{
    for (int i = 1; i < 20; i++)
    {
        for (int j = 0; j < 20 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
};

int main()
{
    int *array = (int *)malloc(20 * sizeof(int));
    if (array == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 201;
    }
    bubble_sort(array);
    printf("Sorted array: \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}
