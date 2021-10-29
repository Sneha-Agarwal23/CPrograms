#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");//taking the no of rows from user
    scanf("%d", &n);
    for(i = 1; i <= n; i++)//row loop
    {
        for(j = 1; j <= 4; j++)//column loop
        {
            if(j == 1 || j == 4)//for straight lines in the 1st and last columns
            {
                printf("\t*");
            }
            else if( i == 1 || i == n )//for straight lines in the 1st and last rows
            {
                printf("\t*");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");//changing the line
    }
    return 0;
}
