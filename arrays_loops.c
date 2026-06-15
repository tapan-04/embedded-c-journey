#include <stdio.h>

int main()
{
    /* Print Array Elements */

    int arr1[5] = {10, 20, 30, 40, 50};

    printf("Array Elements:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr1[i]);
    }

    printf("\n");

    /* Add 5 To Every Element */

    int arr2[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++)
    {
        arr2[i] = arr2[i] + 5;
    }

    printf("After Adding 5:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }

    printf("\n");

    /* Sum Of Array */

    int arr3[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr3[i];
    }

    printf("Sum = %d\n\n", sum);

    /* Largest Element */

    int arr4[5] = {12, 45, 7, 89, 23};
    int largest = arr4[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr4[i] > largest)
        {
            largest = arr4[i];
        }
    }

    printf("Largest = %d\n\n", largest);

    /* Smallest Element */

    int smallest = arr4[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr4[i] < smallest)
        {
            smallest = arr4[i];
        }
    }

    printf("Smallest = %d\n", smallest);

    return 0;
}