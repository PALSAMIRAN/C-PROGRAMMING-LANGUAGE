#include <stdio.h>

int main()
{
    int i, *ptr = &i;
    printf("The value of i is %d\n");
    scanf("%d",&i);

    *ptr = (10 * i);
    printf("The answer is %d", *ptr);
    return 0;
}
 