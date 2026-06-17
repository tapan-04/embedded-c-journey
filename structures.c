#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int age;
};

int main()
{
    struct student s1;
    
    strcpy(s1.name, "Hyderabad");
    s1.age = 20;
    
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    
    return 0;
}