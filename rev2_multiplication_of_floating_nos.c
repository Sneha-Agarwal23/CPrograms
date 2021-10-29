#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter two floating point numbers: \n");
    scanf("%f %f", &a, &b);
    printf("Multiplication of two floating numbers is : %f\n", a * b);
    int c, d;
    printf("Enter two integers: \n");
    scanf("%d %d", &c, &d);
    printf("Multiplication of two integer numbers is : %d\n", c * d);
    printf("Multiplication of one integer and float number is : %f\n", b * d);
    return 0;
}
