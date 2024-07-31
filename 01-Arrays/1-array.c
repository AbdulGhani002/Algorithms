#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 5;
    int r = a;
    a++;
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    printf("%d", r);
    return 0;
}