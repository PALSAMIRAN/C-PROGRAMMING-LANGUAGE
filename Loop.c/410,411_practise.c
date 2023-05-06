// Disclaimer:This is not the best method to solve this problem
// A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.

// Using for loops

/*#include <stdio.h>

int main()
{
    int i, n = 2, prime = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 )
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}*/

// Using while loops

/*#include <stdio.h>

int main()
{
    int i = 2, n = 25, prime = 1;
    while (i < n,i++)
    {

        if (n % i == 0)
        {
            prime = 0;

            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}*/

// Using do while loop

#include <stdio.h>

int main()
{
    int i = 2, n = 25, prime = 1;
    do
    {
        if (n % i == 0)
        {
            prime = 0;

            break;
        }
    } while (i < n, i++);
    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }

    return 0;
}