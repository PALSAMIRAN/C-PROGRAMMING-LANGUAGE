#include <stdio.h>

int main()
{
    int i, sum = 0, n = (8 * 10);
    for (i = 0; i <= n; i = i + 8)
    {
        sum += i;
    }
    printf("The value of the sum  is %d ", sum);
    return 0;
}