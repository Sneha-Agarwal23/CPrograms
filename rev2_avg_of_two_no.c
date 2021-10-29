#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the values of a and b\n");
    scanf("%d %d", &a, &b);
    int avg = (a + b) / 2;
    printf("The average of two elements: %d", avg);
    return 0;
}
