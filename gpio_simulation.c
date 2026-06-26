#include <stdio.h>

int main()
{
    unsigned char GPIO_DIR = 0;
    unsigned char GPIO_OUT = 0;

    GPIO_DIR |= (1 << 4);

    GPIO_OUT |= (1 << 4);
    printf("led on = %u \n", GPIO_OUT);

    GPIO_OUT &= ~(1 << 4);
    printf("led off = %u \n", GPIO_OUT);

    GPIO_OUT ^= (1 << 4);
    printf("led toggel = %u \n", GPIO_OUT);

    return 0; 
}