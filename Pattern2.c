#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");//taking no of lines from user
    scanf("%d", &n);
    for(i = n; i >= 1; i--)//rows loop
    {
        for(j = 1; j <= i; j++)//columns loop
        {
            printf("*\t");//printing star
        }
        printf("\n");//changing the line
    }
    return 0;
}
