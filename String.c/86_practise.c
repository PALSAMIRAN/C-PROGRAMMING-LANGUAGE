#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Cricket is a game";
    encrypt(c);
    printf("Encrypted message is :%s", c);
    return 0;
}