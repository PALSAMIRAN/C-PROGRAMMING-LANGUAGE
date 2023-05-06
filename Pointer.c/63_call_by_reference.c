// #include<stdio.h>
// void wrong_swap(int a,int b);
// int main(){
//     int x = 3, y = 4;
//     printf("The value of x and y before swap is %d and %d\n",x,y);
//     wrong_swap(x,y);
//     printf("The value of x and y after swap is %d and %d\n",x,y);
//     return 0;
// }
// void wrong_swap(int a,int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// THIS CODE WILL NOT WORK DUE TO CALL BY VALUE

#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    swap(&x, &y);
    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}