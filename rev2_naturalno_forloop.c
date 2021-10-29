#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("The natural numbers are %d \n", i+1);
    }
    return 0;
}
