#include<stdio.h>

int main(){
    int a ;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    //one liner
    (a>5) ? printf("A is greater than 5") : printf("A is not greater than 5");

    return 0;
}