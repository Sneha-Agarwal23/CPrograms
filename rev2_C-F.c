#include<stdio.h>
int main()
{
    int c;
    float f;
    printf("Enter the temperature in celsius\n");
    scanf("%d", &c);
    f = (c * 9/5) + 32;
    printf("The temperature in Fahrenheit is %f", f);
    return 0;
}
