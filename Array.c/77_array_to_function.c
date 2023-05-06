#include<stdio.h>

// void printArray(int *ptr,int n){
//     for(int i = 0 ;i<n;i++){
//         printf("The value of the element  %d in %d\n",i+1,*(ptr+i));
//     }
// }

// same code here also

void printArray(int ptr[],int n){
    for(int i = 0 ;i<n;i++){
        printf("The value of the element  %d is %d\n",i+1,ptr[i]);
    }
    ptr[2] = 5555;//This value will be changes in arr array of main as well
}
int main(){
    int arr[]= {1,2,12,1234,134,567,77,45};
    printArray(arr,8);
    printf("%d",arr[2]);
    return 0;
}