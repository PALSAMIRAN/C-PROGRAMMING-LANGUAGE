#include<stdio.h>
#include<string.h>
int main(){
    char *st="This";
    char st2[30];
    strcpy(st2,st);
    printf("The st2 is %s",st2);
    return 0;
}