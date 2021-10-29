#include<stdio.h>
int main()
{
    int a;
    float Area;
    printf("Enter the side of the triangle\n");
    scanf("%d", &a);
    Area = sqrt(3) * (a * a) / 4;
    printf("The Area of the Traingle is %f", Area);
    return 0;
}
