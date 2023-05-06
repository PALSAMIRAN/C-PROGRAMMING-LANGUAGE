#include <stdio.h>

int main()
{
    int i =2;
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    while(i<number){
        i++;
    }
    
        if (number % i == 0)
        {
            printf("This is not a prime number");
        }
        else
        {
            printf("This is a prime number");
        }
    
    return 0;
}