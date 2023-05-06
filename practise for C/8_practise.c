//Calculate simple interest

#include<stdio.h>

int main(){
    float principle , years, rate;
    printf("Enter the value of principle\n");
    scanf("%f",&principle);
        printf("Enter the value of years\n");
    scanf("%f",&years);
        printf("Enter the value of rates\n");
    scanf("%f",&rate);

    printf("The value of simple interest is %f\n",(principle * years * rate)/100);


    return 0;
}