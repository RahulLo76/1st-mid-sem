#include <stdio.h>
int *gtr(int *, int *);
int *gtr(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a = 43, b = 42;
    *int (*ptr)(int*, int*) = *gtr;
    printf("The Greater Number between %d and %d is %d", a, b, *ptr(&a, &b));
    return 0;
}