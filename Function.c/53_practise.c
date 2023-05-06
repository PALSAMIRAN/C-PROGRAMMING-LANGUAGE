#include <stdio.h>
float force(float m);

int main()
{
    float m;
    printf("Enter the Kg value of m\n");
    scanf("%f", &m);
    printf("The value of the force in SI unit is is %.2f", force(m));
    return 0;
}
float force(float m)
{

    float g = 9.8;
    float result = m * g;
    return result;
}