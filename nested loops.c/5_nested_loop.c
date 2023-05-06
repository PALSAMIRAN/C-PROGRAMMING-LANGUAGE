// Q.)  print the following pattern

// 0
// 12
// 345
// 6789

// ANS:-

#include <stdio.h>

int main()
{
    int i, j, count = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
            printf("%d", count++);
    }
    return 0;
}