// write a function that prints Namaste if user is indian &Bonjour if the user is French
#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("Enter I if nationality is indian and Enter F if nationality is french :");
    char ch;
    scanf("%c", &ch);
    if (ch == 'I')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("Bonjour\n");
}