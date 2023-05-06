#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    if (age >= 90 && age < 18)
    {
        printf("YOU CAN'T DRIVE\n");
    }
    else
    {
        printf("YOU CAN DRIVE\n");
    }
    return 0;
}