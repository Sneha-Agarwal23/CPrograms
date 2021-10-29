#include<stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)//row loop
    {
        for(j = n; j > i; j--)//column loop to print blank space
        {
            printf("\t");
        }
        for(k = 1; k <= j; k++)//column loop to print star
        {
            printf("\t*");//printing star
        }
        printf("\n");//changing the line
    }
    return 0;
}
