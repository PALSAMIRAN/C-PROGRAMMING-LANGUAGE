#include <stdio.h>
//#include <string.h>

int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i = 0;

    printf("Enter the value of st1 is :\n");
    scanf("%s", st1);
    printf("Enter the value of st2 character by character is : \n");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i - 1] = '\0';//if we take st2[i] then it will show st1 &st2 are not equal due to st2's null character will include
    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);

   // printf("strcmp for these strings returns %d", strcmp(st1, st2));

    return 0;
}
//last printf only check that the strings are equal or not