#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 4;
    // int b = 8.5;// Not recommended because 8.5 is not an integer

    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 4;
    printf(" The value of a is %d \n", a);
    printf(" The value of b is %f \n", b);
    printf(" The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", a - d);
    printf("sum of a and d is %d", e);
    return 0;
}