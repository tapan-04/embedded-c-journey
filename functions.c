#include <stdio.h>

void add(int a, int b)
{
    printf("%d\n", a + b);
}

int main()
{
    add(10, 20);
    add(5, 7);

    return 0;
}