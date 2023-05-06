// FOR int  VARIABLE (4 BYTE)

// #include<stdio.h>

// int main(){
//     int i =34;
//     int *ptr = &i;
//     printf("The value of ptr is %u\n",ptr);
//    // ptr++ == ptr + 1 ;here 1 adding means not (the value of pointer + 1) it means (the value of pointer + byte)(here in my laptop int stores 4 byte)and also if we replace 1 by 2 then result will come(value of the pointer + 2*byte (here 2*4 =8) )
//     ptr++;
//     ptr++;
//     //ptr-- == ptr = ptr - 1;
//     printf("The value of ptr is %u\n",ptr);

//     return 0;
// }

// FOR char variable

// #include<stdio.h>

// int main(){
//     char c =34;
//     char *ptr = &c;
//     printf("The value of ptr is %u\n",ptr);
//     ptr = ptr +1;
//     printf("The value of ptr is %u\n",ptr);
//     //here we can see that output is incremented by 1 only because char variable takes 1 byte of storage
//     return 0;
// }

// FOR float variable

#include <stdio.h>

int main()
{
    float i = 1.5;
    float *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);

    return 0;
}
//in float variable output is incremented by 4  as because it takes 4 bytes memory;