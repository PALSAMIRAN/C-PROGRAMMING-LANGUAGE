#include<stdio.h>

struct employee {
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter the value for code of e1: ");
    scanf("%d",&e1.code);
    printf("Enter the value for salary of e1: ");
    scanf("%d",&e1.salary);
    printf("Enter the value for name of e1: ");
    scanf("%d",e1.name);
    
    printf("Enter the value for code of e2: ");
    scanf("%d",&e2.code);
    printf("Enter the value for salary of e2: ");
    scanf("%d",&e2.salary);
    printf("Enter the value for name of e2: ");
    scanf("%d",e2.name);

    printf("Enter the value for code of e3: ");
    scanf("%d",&e3.code);
    printf("Enter the value for salary of e3: ");
    scanf("%d",&e3.salary);
    printf("Enter the value for name of e3: ");
    scanf("%d",e3.name);
    return 0;
}