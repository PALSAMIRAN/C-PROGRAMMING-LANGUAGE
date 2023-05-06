/*#include<stdio.h>
//Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a,int b);//function prototype declaration
int main(){
    int c;
    c=sum(3,8);//function call
    printf("The value of c is %d\n",c);
    return 0;
}
int sum (int a,int b){
    int c;
    c = a + b;
    return c;
    }*/
#include <stdio.h>
int max_of_four(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        printf("%d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d", c);
    }
    else
    {
        printf("%d", d);
    }
    return 0;
}