#include<stdio.h>
int main()
{
    int a[10][10], i, j, m, n;
    printf("Enter the rows and columns of the matrix:\n");// inputing the no of rows and columns
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix:\n");      //entering the elements of the matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" Original matrix\n");       //printing original matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf(" Waveform Traversal\n");
    for(j = 0; j < n; j++) // columns loop is taken first as the conditions apply on column numbers and rows get traversed regardless in the same order
    {
        if(j == 0 || j % 2 == 0)        //for 1st column and all even columns the rows will be traversed from top to bottom
        {
            for(i = 0; i < m; i++)
            {
                printf("\n%d", a[i][j]);
            }
        }
        else
        {
            for(i = m - 1; i >= 0; i--)     //for all odd columns the rows will be traversed from bottom to top so the loop is reversed
            {
                printf("\n%d", a[i][j]);
            }
        }
    }
    return 0;
}
