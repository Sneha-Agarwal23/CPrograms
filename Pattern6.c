#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");//taking the no of rows from user
    scanf("%d", &n);
    for(i = 0; i < n; i++)//used array pattern of looping as we had to calculate the no of stars for each row using loop variable  upper half of the rows until mid
    {
        for(j = 0; j < n; j++)//loop for 1st half of columns
        {
            if(j < n-i)//condition for printing stars in the first half of the pattern
            {
                printf("\t*");
            }
            else
            {
                printf("\t");
            }
        }
        for(j = 0; j < n; j++)//loop for 2nd half of columns
        {
            if(j < i)//condition to print spaces in second half of pattern
            {
                printf("\t");
            }
            else
            {
                printf("\t*");
            }
        }
        printf("\n");//changing lines
    }
    for(i = 1; i <= n; i++)//loop for lower half of patternstarting from 1 to ignore the middle row as taking 0 will print it twice
    {
        for(j = 0; j < n; j++)//1st half column loop starting from zero as no of columns to be printed is unchanged
        {
            if(j < i)//condition to print spaces in 1st half of pattern
            {
                printf("\t*");
            }
            else
            {
                printf("\t");
            }
        }
        for(j = 0; j < n; j++)//loop for 2nd half of columns
        {
            if(j < n-i)//condition for printing stars in the 2nd half of the pattern
            {
                printf("\t");
            }
            else
            {
                printf("\t*");
            }
        }
        printf("\n");//changing the lines
    }

    return 0;
}
