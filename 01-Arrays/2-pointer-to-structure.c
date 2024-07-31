#include <stdio.h>
#include <stdlib.h>

struct matrix{
    int row;
    int col;
};

int main()
{
    struct matrix *m1;
    m1= (struct matrix *)malloc(sizeof(struct matrix));
    m1->row = 3;
    m1->col = 3;
    printf("Row: %d\n", m1->row);
    printf("Col: %d\n", m1->col);
    return 0;
}