#include <stdio.h>
struct rectangle
{
    int length;
    int breath;
};
int area(struct rectangle r1)
{
    return r1.length * r1.breath;
}
int main()
{
    struct rectangle r = {10, 5};
    printf("% d", area(r));
}