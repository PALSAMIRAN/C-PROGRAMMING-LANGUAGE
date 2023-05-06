 #include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Dsjdlfu!jt!b!hbnf";
    decrypt(c);
    printf("Decrypted message is :%s", c);
    return 0;
}