// Using for loop

/*#include<stdio.h>

int main(){
    int i,factorial=1,n=10;
    for(i=1;i<=n;i++){
        factorial *= i;

    }
    printf("The value of the factorial %d is %d",n,factorial);
    return 0;
}*/

// Using while loop

#include <stdio.h>

int main()
{
    int i = 1, n = 5, factorial = 1;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The value of the factorial is %d\n", factorial);
    return 0;
}