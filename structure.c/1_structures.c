#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    int a = 34;
    struct employee e1;
    e1.code = 100;
    e1.salary=34.45;
    strcpy(e1.name,"Samiran");

    printf("%d\n %f\n %s\n",e1.code,e1.salary,e1.name);
    return 0;
}