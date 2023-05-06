//FIBONACCI SEQUENCE :- 0,1,1,2,3,5,8,13,21,34.........(THE THIRD NUMBER IN THIS SEQUENCE IS THE SUM OF TWO CONSEQUTIVE NUMBERS BEFORE IT)
//HINT : - fib(n) = fib(n-1)+fib(n-2)
#include<stdio.h>
int fib(int n);

int main(){
    int a = 1;
    printf("The fibonacci sequence of %d is %d",a,fib(a));
    return 0;
}
int fib(int n){
     if ( n<=1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}