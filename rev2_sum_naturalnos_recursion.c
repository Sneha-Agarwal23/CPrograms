#include<stdio.h>
int sumNatural(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    else
    {
        return n + sumNatural(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The sum of the natural nos is %d", sumNatural(n));
    return 0;
}
