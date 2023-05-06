//Convert farenhite temperature to celcius

#include<stdio.h>

int main(){
    int F;
    printf("Enter the value of F\n");
    scanf("%f",&F);
    printf("The temperature in celcius is %f\n",((F-32)*5)/9);

    return 0;
}