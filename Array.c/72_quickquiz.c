///NOT COMPLETED 

#include <stdio.h>
int display(int number_1, int number_2)
{
    int marks[number_1][number_2];
    for (int i = 0; i < number_1; i++)
    {
        for (int j = 0; j < number_2; j++)
        {
            printf("The marks of sutdent %d in subject %d is :%d\n", i + 1, j + 1,marks[i][j]);
        }
    }
}
int main()
{
    int a;
    printf("Enter the student %d\n");
    scanf("%d", &a);
    int b;
    printf("Enter the subject %d\n");
    scanf("%d", &b);
    int i, j;
    int marks[i][j];

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("Enter the marks of student %d in subject %d is :\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    display(a, b);
         return 0; 
}