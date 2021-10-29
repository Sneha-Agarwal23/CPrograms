#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, i*n);
        sum += i * n;
    }
    printf("The sum of the table is %d", sum);
    return 0;

}
