#include<stdio.h>
float temp(float t);
int main(){
    float temp;
    float t;
    printf("Enter the value of temperature in celcius\n");
    scanf("%f",&temp);
    printf("The temperature in Farhenheit is %f",t =(9*temp +160)/5);
    return 0;
}
float temp(float t){
    float result;
    result = (9*t + 160)/5;
    return result;
}