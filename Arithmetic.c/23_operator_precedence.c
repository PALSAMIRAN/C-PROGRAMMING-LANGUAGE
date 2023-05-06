#include<stdio.h>

int main(){
    int x= 6;
    int y= 10;
    printf("The value of 3*x - 4*y is %d\n",3*x - 4*y );
    printf("The value of 5 * x / 3 * y is %d\n",5 * x / 3 * y);
    //5 * x / 3 * y = 30/30 will give wrong answer
    //30/3*10 = 10*10 = 100 right way 
    
    return 0;
}