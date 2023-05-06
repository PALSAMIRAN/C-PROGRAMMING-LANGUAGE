#include <stdio.h>

int main()
{
    int s1, s2, s3;

    printf("Enter the percentage of s1\n");
    scanf("%d", &s1);
    printf("Enter the percentage of s2\n");
    scanf("%d", &s2);
    printf("Enter the percentage of s3\n");
    scanf("%d", &s3);
    int s = (s1 + s2 + s3) / 3;
    printf("Total percentage is %d\n",s);
    if (s1 >= 33 && s2 >= 33 && s3 >= 33 && s >= 40)
    {
        printf("The student is passed");
    }
    else
    {
        printf("The student is failed");
    }
    return 0;
}