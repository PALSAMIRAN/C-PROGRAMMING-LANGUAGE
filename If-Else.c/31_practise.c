#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}
// it should print "I am not 11" but it prints "I am 11"because here in between if statement "=="is not used ..... "=" is used.