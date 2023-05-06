//Calculte the volume of a cylinder using C program usimg hardcoded inputs


#include<stdio.h>

int main(){
     int radius ;
     int height;
     float pi = 3.14;
     printf("Enter the value of radius\n");
     scanf("%d",&radius);
     printf("Enter the value of height\n");
     scanf("%d",&height);
     printf("Voulume of the cylinder is %f\n",pi*radius*radius*height);
    return 0;
}