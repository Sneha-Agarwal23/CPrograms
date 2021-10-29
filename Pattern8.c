#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");// taking no of rows as input from user
    scanf("%d", &n);
    for(i = 1; i <= n; i++)//row loop
    {
        for(j = 1; j <= n; j++)//column loop
        {
            if((i + j) == (n + 1))//condition for secondary diagonal
            {
                printf("\t*");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");//changing lines
    }
    return 0;
}
