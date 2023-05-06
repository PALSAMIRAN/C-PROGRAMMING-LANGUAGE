#include <stdio.h>
void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 7;
    j = 3;
    sumAndavg(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %.2f\n", avg);
    return 0;
}