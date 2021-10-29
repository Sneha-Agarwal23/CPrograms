#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");//Taking no of rows from user
    scanf("%d", &n);
    for(i = 1; i <= n; i++)//row loop
    {
        for(j = 1; j <= n; j++)//column loop
        {
            if(i == j)//primary diagonal condition
            {
                printf("\t*");
            }
            else if((i + j) == (n + 1))//secondary diagonal codition
            {
                printf("\t*");
            }
            else//printing spaces
            {
                printf("\t");
            }
        }
        printf("\n");//changing lines
    }
    return 0;
}
