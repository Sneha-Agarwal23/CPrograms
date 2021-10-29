#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], m, n, x, y, i, j;
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
    for(i = 0, y = m - 1; i < m; i++, y--)      //double loop taken i,j controls 1st matrix and x,y controls 2nd matrix
    {
        for(j = 0, x = 0; j < n; j++, x++)      //i,x-row number  j.y- column number
        {
            b[x][y] = a[i][j];      //(0,0) is rotated to(0,m-1)        (0,1) rt to (1,m-1) and thereafter same
        }
    }
    printf("Rotated Matrix\n");     //printing the rotated matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
