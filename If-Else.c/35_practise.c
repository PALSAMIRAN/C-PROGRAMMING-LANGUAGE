#include <stdio.h>

int main()
{
    // 97-122 = a-z ASCII VALUES
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lowercase");
    }
    else
    {
        printf("The character is not lowercase");
    }
    return 0;
}