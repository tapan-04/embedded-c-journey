#include <stdio.h>
int multiply(int a, int b)
{
return a * b;
}
int largest(int a, int b)
{
if (a > b)
{
return a;
}
else
{
return b;
}
}
int main()
{
printf("Multiply = %d\n", multiply(12, 5));
printf("Largest = %d\n", largest(50, 30));
return 0;
}
