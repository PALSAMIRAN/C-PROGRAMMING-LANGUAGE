//Using for loop


/*#include<stdio.h>

int main(){
    int i ,sum=0,n=10;
    for(i=0;i<=n;i++){
        sum += i;
    }
    printf("The value of sum(1to10)is %d",sum);
    return 0;
}*/



//Using while loop

/*#include<stdio.h>

int main(){
    int i=0, sum=0,n=10;
    while(i<=n){
        sum += i;
        i++;
    }
      printf("The value of sum(1to10)is %d",sum);
    return 0;
}*/


//Using do while loop

#include<stdio.h>

int main(){
    int i =0,sum=0,n=10;
    do{
        sum += i;
        i++;
    }while(i<=10);
    printf("The value of sum(1to10)is %d",sum);
    return 0;
}