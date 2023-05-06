#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = a * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("a * %d = %d\n", i + 1, mul[i]);
    }
    return 0;
}
 