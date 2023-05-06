#include<stdio.h>

int main(){
    int a =3;
    printf("%d %d %d",a,++a,a++);
    return 0;
}
// here in gcc compiler printf statement checks the conditions from right to left that's why the oputput shows the sequence 5 5 3 but generlly we thought that the output should print 3 5 5
//NOTE:-it's an interview type question so the time of answering we must be questioned to the interviewer about the order of condition checking because its properly compiler dependent 
