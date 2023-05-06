#include<stdio.h>

int main(){
    int mul = 1;
    int n;
    printf("enter factorial \n");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        mul=mul*i;
    }
     printf("The factorial of %d is %d\n ",n,mul);
    return 0;
}