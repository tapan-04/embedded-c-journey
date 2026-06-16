#include <stdio.h>
int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    for (int i=0; i<5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d\n", arr[i]);
        }
    }
}