#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");//taking the no of rows from user
    scanf("%d", &n);
    for(i = 1; i <= 7; i++)//row loop
    {
        for(j = 1; j <= n; j++)//column loop
        {
            if(j == 1 || j == n)//for straight lines in the 1st and last columns
            {
                printf("*  ");
            }
            else if( i == 1 || i == 7 || i == 7/2 + 1 )//for straight lines in the 1st and last rows
            {
                printf("*  ");
            }
            else
            {
                printf("     ");
            }
        }
        printf("\n");//changing the line
    }
    return 0;
}
