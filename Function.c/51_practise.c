// WRITTEN BY ME

// #include <stdio.h>
// int avg(int a, int b, int c)
// {
//     float average;
//     average = (float)(a + b + c) / 3;
//     return average;
// }
// int main()
// {
//     int a, b, c;
//     printf("The value of a is %d\n");
//     scanf("%d", &a);
//     printf("The value of b is %d\n");
//     scanf("%d", &b);
//     printf("The value of c is %d\n");
//     scanf("%d", &c);
//     float average = avg(a, b, c);
//     printf("The average is %f\n", average);
//     return 0;
// }

// HARRY'S ANSWER

#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("The value of the average is %f", average(a, b, c));
    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result =(float) (a + b + c) / 3;
    return result;
}