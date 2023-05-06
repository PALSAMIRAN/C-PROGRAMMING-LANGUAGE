// i++ --->phele print fir increment
// ++i ---->pehele increment fir print

#include <stdio.h>

int main()
{
    // int i = 5;
    // printf("The value after i++ is %d\n",++i);
    // printf("The value of i is %d\n",i);
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    i++;
    ++i;
    printf("The value of i is %d\n", i);
    i += 10;//--->increments by 10
    printf("The value of i is %d\n", i);
    return 0;
}