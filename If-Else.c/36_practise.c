#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter the value of A\n");
    scanf("%d", &a);
    printf("Enter the value of B\n");
    scanf("%d", &b);
    printf("Enter the value of C\n");
    scanf("%d", &c);
    printf("Enter the value of D\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest number is A ");
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is B");
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest number is C");
    }
    else
    {
        printf("The greatest number is D");
    }

    return 0;
}