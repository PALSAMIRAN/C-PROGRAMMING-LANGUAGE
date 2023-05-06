#include<stdio.h>
#include<stdlib.h>

int maximum(int *arr,int end){
    int max = 0 ;
    for(int i =1;i<=end;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    return max;
}

void selectionsort(int *arr, int size){
    for(int i = size-1;i>0;i--){
        int temp=maximum(arr,i);
        if(i!=temp){
            int x = arr[temp];
            arr[temp]=arr[i];
            arr[i]=x;
        }
    }
}

void display(int *arr, int size){
    printf("\n[");
    for(int i=0;i<size-1;i++){
        printf("%d, ",arr[i]);
    }
    printf("%d]",arr[size-1]);
}

int main(){
    int arr[]={4,5,1,2,3};
    int size= sizeof (arr)/ sizeof(arr[0]);
    selectionsort(arr,size);
    display(arr,size); 
    
    return 0;
}