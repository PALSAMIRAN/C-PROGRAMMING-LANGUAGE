#include<stdio.h>

int main(){
    int sum =0;
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum = sum + i;
    }
    printf("The sum is %d\n",sum);

    return 0;
}