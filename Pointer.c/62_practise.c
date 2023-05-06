#include<stdio.h>
void printadd(int a){
    printf("The address of variable a is %u\n",&a);
}
int main(){
    int i = 4;
    int *j=&i;
    printf("The address of i is %u\n",j);
    printadd(i);
    printf("The address of variable i is %u\n",&i);
    return 0;
}