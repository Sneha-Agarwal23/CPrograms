#include<stdio.h>
int main()
{
    int a, b, q, r;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a % b;
    printf("The quotient and remainder are: %d, %d", q, r);
    return 0;
}
