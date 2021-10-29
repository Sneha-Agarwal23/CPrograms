#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");//taking no of rows from user
    scanf("%d", &n);
    for(i = 1; i <= n; i++)//row loop
    {
        for(j = 1; j <= n; j++)//column loop
        {
            if(i == j)//condition for primary diagonal
            {
                printf("\t*");//printing star
            }
            else
            {
                printf("\t");//printing space
            }
        }
        printf("\n");//changing line
    }
    return 0;
}
