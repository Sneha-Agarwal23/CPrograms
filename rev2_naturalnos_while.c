#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    i = 0;
    while(i < n)
    {
        printf("The natural numbers are %d \n", i+1);
        i++;
    }
    return 0;
}
