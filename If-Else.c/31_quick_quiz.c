#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks(0-100): ");
    scanf("%d", &marks);
    switch ( marks/10)
    {
    case  10:
    case 9:
        printf("Your grade is A");
        break;
    case 8:
        printf("Your grade is B");
        break;
    case  7:
        printf("Your grade is C");
        break;
    case 6:
        printf("Your grade is D");
        break;
     default :
        printf("Your grade is  F");
        break;
    }
    return 0;
}