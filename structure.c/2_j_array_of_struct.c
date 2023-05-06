#include<stdio.h>

struct student{
    int roll;
    char name[20];
    float marks;
    };
    int main(){
        struct student s[3];
        int i;
        for( i=0;i<3;i++){
            printf("Enter the details of %d ",i+1);
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
        for(int i=0;i<3;i++);
    printf("\nThe roll is  %d\n name is  %s\n mark is %f\n",s[i].roll,s[i].name,s[i].marks);
    }
    }