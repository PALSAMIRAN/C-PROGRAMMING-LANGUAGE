/*#include<stdio.h>

int main(){
    //char *ptr = "Cricket Ground";
   char ptr[] = "Cricket Ground";
    ptr = "Football Ground";
    printf("%s",ptr);
    return 0;
}
*/
// ==> it will give error because here ptr is printed by array which cannot be initialize further

#include<stdio.h>

int main(){
    char *ptr = "Cricket Ground";
   //char ptr[] = "Cricket Ground";
    ptr = "Football Ground";
    printf("%s",ptr);
    return 0;
}

// ==> It will be compiled and reinitialized 