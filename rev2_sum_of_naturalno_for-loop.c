#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("The natural number: %d\n", i);
        sum = sum + i;
    }
    printf("The sum of the numbers are: %d\n", sum);
    return 0;

}
