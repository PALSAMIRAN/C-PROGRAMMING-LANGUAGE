#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("YOU CAN'T DRIVE\n");
   }
    else
    {
        printf("YOU CAN DRIVE\n");
    } 

    if(age == 50){
        printf("Half Century\n");
    }
    return 0;
}




