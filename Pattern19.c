
#include <stdio.h>
int main()
{
    int n,i,j;
    printf(" Enter the value of n\n");//taking no of rows from user
    scanf("%d",&n);
    for(i = 1;i <= n; i++)//row loop
    {
        for(j = 1;j <= n; j++)//column loop
        {
            if( i == 1)//condition for first row only
            {
                if( j == n || j <= n/2 + 1)//conditions for printing stars in swastik pattern here last and until middle columns will be printed rest blank gap
                {
                    printf("\t*");
                }
                else
                {
                    printf("\t");
                }
            }
            else if( i <= n/2)//condition for second until middle rows
            {
                if( j == n || j == n/2 + 1)//here last and only middle column will be printed rest gap
                {
                    printf("\t*");
                }
                else
                {
                    printf("\t");
                }
            }
            else if( i == n/2 + 1)//condition for middle row
            {
                printf("\t*");//all columns will be printed
            }
            else if( i < n)//condition from middle until last row
            {
                if( j == 1 || j == n/2 + 1)//here 1st and only middle columns will be printed rest gap
                {
                    printf("\t*");
                }
                else
                {
                    printf("\t");
                }
            }
            else//condition for last row
            {
                if( j == 1 || j >= n/2 + 1)//here 1st column and from middle till last will be printed rest gap
                {
                    printf("\t*");
                }
                else
                {
                    printf("\t");
                }
            }

        }

        printf("\n");// changing the line
    }
    return 0;
}
