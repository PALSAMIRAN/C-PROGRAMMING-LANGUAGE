// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the value of a :");
//     scanf("%d",&a);
//     int mul[10];
//     for (int i = 0; i < 10; i++)
//     {
//         mul[i] = a * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("a * %d = %d\n", i + 1, mul[i]);
//     }
//     return 0;
// }
 #include <stdio.h>
int main()
{
    // declaring table
    int table[10][10];


    int sum = 0;
    // loop
    for(int i = 0; i < 10; i++){
        printf("%d table starting \n\n",i + 1);
        for(int j = 0; j < 10; j++){
             // using addition instead of multiply for better performance
            sum += (i + 1);
            //
            table[i][j] = sum;
            // printing table
            printf("%d x %d = %d \n",i + 1,j + 1,table[i][j]);
        }
        sum = 0;
        printf("\n");
    }

}