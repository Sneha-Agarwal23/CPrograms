#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = 0;
    do
    {
        printf("The natural numbers are : %d\n", i + 1);
        i++;
    }while(i < n);
    return 0;
}
