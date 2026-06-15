#include <stdio.h>
int main()
{
    int a = 50;
    int b = 100;
    int *p = &a;
    *p = *p + 50;
    printf("First Variable = %d\n", a);
    p = &b;
    *p = *p - 25;
    printf("Second Variable = %d", b);
    return 0;
}