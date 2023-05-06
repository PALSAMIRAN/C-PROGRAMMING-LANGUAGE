// Q.) print the pattern

// 1
// 22
// 333
// 4444
// 55555

// ANS:-

#include<stdio.h>

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        printf("\n");
        for(j=1;j<=i;j++)
        printf("%d",i);
    }
    return 0;
}