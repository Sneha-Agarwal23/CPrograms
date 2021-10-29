#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int i = 1;
    while(i <= n)
    {
        printf("The natural number: %d\n", i);
        sum = sum + i;
        i++;
    }
    printf("The sum of the numbers: %d\n", sum);
    return 0;
}
