// 3rd question :subtraction of one pointer from another

// #include<stdio.h>

// int main(){
//     int i = 4;
//     int x;
//     int *ptr1,*ptr2;
//     ptr1 = &i;
//     ptr2 = &i;
//     printf("The value of the ptr1 is %d\n",ptr1);
//     ptr2 = ptr2 +5;
//     printf("The value of the ptr2 is %d\n",ptr2);
//     x = ptr2 - ptr1;
//     printf("The subtracted value of the pointers is %d\n",x);
//     return 0;
// }

//4th question : comparison of two pointer variables

#include<stdio.h>

int main(){
    int *ptr1,*ptr2;
    ptr2 = (int *)200;
    ptr1 = (int *)300;
    if (ptr1>ptr2){
        printf("ptr1 is greater than ptr2");
    }
    else if(ptr1<ptr2){
        printf("ptr2 is greater than ptr1");
    } 
    else{
        printf("ptr1 and ptr2 both are equal");
    }
    return 0;
}