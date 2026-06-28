#include <stdio.h>
int main()
{
    unsigned char GPIO_IN = 4;
    unsigned char GPIO_OUT = 0;

    if (GPIO_IN & ( 1 << 2))
    {
        GPIO_OUT |= ( 1 << 4);
    }
    else 
    {
        GPIO_OUT &= ~( 1 << 4);
    }
    printf("GPIO_OUT = %u\n", GPIO_OUT);

    return 0;
}