#include<stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter the value of n\n");
    scanf("%d", &n);//taking no of lines from user
    for(i = 1; i <= n; i++)//rows loop
    {
        for(j = 1; j < i; j++)//column blank space loop
        {
            printf("\t");// total no of columns(fixed) = blanks + stars
        }
        for(k = n; k >= i; k--)//column star loop
        {
            printf("\t*");//printing star
        }
        printf("\n");//changing line
    }
    return 0;
}
