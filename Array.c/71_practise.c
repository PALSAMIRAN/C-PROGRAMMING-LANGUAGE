#include<stdio.h>

int main(){
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf("This point the same location");
    }
    else{
        printf("This do not point the same location");

    }
    return 0;
}