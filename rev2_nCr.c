#include<stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n , r;
    float c;
    printf("Enter the value of n and r\n");
    scanf("%d %d", &n, &r);
    c = factorial(n)/ (factorial(r) * factorial(n - r));
    printf("The value of nCr is %f", c);
    return 0;

}
