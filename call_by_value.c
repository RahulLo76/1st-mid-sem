#include <stdio.h>
int func(int x)
{
    x = 4;
    // printf("x = %d\n",x);

    return x;
}
int main()
{
    int a = 3;
    printf("a = %d\n", a);
   a = func(a);
    printf("a = %d\n", a);
    return 0;
}