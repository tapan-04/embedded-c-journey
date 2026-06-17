#include <stdio.h>

struct student
{
    int age;
};

int main()
{
    struct student students[3];
    
    students[0].age = 18;
    students[1].age = 19;
    students[2].age = 20;
    
    printf("%d\n", students[0].age);
    printf("%d\n", students[1].age);
    printf("%d\n", students[2].age);
    
    return 0;
}