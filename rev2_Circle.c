#include<stdio.h>
int main()
{
    int r;
    float Area, C;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    Area = 3.14 * r * r;
    C = 2 * 3.14 * r;
    printf("Area of the circle is %f\n", Area);
    printf("Circumference of the circle is %f\n", C);
    return 0;
}
