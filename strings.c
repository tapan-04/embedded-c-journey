#include <stdio.h>
int main()
{
    char name[] = "Hyderabad";
    for (int i=0; i<9; i++)
    {
        printf("%c\n", name[i]);
    }
    printf("%s", name);
    return 0;
}
