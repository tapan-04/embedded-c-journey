#include <stdio.h>
int main()
{
    unsigned char GPIO_IN = 0;

    printf("Enter 0 or 4 to toggle the LED on or off: ");
    scanf("%hhu", &GPIO_IN);

    if (GPIO_IN & ( 1 << 2))
    {
        printf("Button pressed, LED on\n");
    }
    else 
    {
        printf("Button not pressed, LED off\n");
    }
    return 0;
}