#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int m, n, p, q, i, j, k, sum = 0;
    printf("Enter the rows and columns of first matrix:\n"); //scanning the no of rows and columns of 1st matrix
    scanf("%d%d", &m, &n);
    printf("Enter the rows and columns of second matrix:\n");//scanning the no of rows and columns of 2nd matrix
    scanf("%d%d", &p, &q);
    if(n != p)      //condition to check if matrix multiplication is possible or not
    {
        printf("Matrix Multiplication not possible");
    }
    else
    {
        printf("Enter the elements of the first matrix\n");// entering elements of 1st matrix
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of the 2nd matrix\n");// entering elements of 2nd matrix
        for(i = 0; i < p; i++)
        {
            for(j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(i = 0; i < m; i++)// calculating the product matrix loop 1 upto m
        {
            for(j = 0; j < q; j++)      //loop 2 for upto q
            {
                for(k = 0; k < p; k++)      //loop 3 upto n or p (both same value)
                {
                    sum = sum + (a[i][k] * b[k][j]);        //calculation formula( 1st matrix row * 2nd matrix column )
                }
                mul[i][j] = sum;        //storing the resultant value in matrix
                sum = 0;            // reseting the value of sum for the next fresh iteration
            }
        }
        printf("Matrix Multiplication:\n");     //printing the resultant matrix
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < q; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
