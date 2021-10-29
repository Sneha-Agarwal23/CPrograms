#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");//taking no of rows from user
    scanf("%d", &n);
    for(i = 1; i <= n; i++)//row loop
    {
        for(j = 1; j <= n; j++)//1st half column loop
        {
            if(j <= i)//condition for printing the number in 1st half
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        for(j = n - 1; j >= 1; j--)//second half column loop initialized with one less so that middle value doesn't get printed twice
        {
            if(j <= i)//condition for printing the number in 2nd half but in reverse order as j loop is reversed
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n"); //changing lines
    }
    return 0;
}
