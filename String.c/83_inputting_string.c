#include<stdio.h>

int main(){
    char st[30];
    printf("Enter your name : ");
    scanf("%s",st);
    printf("Your name is %s",st);
    return 0;
}
//WE CAN PRINT A SINGLE WORD USING "SCANF"FUNCTION. 
//TO PRINT A MULTI WORD STRING WE NEED TO USE "GETS"FUNCTION.
//WE USE "PUTS" FUNCTION TO PRINT THE STRING AND PLACE THE CURSOR IN NEXT LINE.
//gets(st),puts(st).