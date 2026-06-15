#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int temp;
    temp = a;
    int *p = &a;
    int *q = &b;
    *p = *q;
    *q = temp;
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}