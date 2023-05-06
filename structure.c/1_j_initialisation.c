#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1 = {1, "SAMIRAN", 100};
    struct student s2;
    printf("Enter details for s2\n ");
    scanf("%d %s %f", &s2.rollno, &s2.name, &s2.marks);

    printf("Info for student 1");
    printf("\n%d %s %f", s1.rollno, s1.name, s1.marks);
    printf("\nInfo for student 2");
    printf("\n%d %s %f", s2.rollno, s2.name, s2.marks);
}