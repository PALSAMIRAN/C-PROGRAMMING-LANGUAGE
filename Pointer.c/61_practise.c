#include<stdio.h>

int main(){
    int a=7;
    int *b =&a;
    printf("The address of the variable is %u\n",b);
      printf("The value of the variable is %d\n",*b);
    return 0;
}