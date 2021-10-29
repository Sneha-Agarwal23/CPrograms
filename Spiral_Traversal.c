#include<stdio.h>
int main()
{
    int m, n, i, j, k = 0, l = 0, a[10][10];
    printf("Enter the rows and columns of the matrix:\n");      //inputing the no of rows and columns from user
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix:\n");      //inputing the matrix elements
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" Original matrix\n");       //printing the original matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Spiral Traversal\n");
    while(k < m && l < n)       //loop terminates when all the elements have been traversed
    {
        for(i = l; i < n; i++)      //loop to print the 1st row(column loop)
        {
            printf("%d\n", a[k][i]);
        }
        k++;        //incrementing the value of k
        for(i = k; i < m; i++)      //loop to print the last column(row loop)
        {
            printf("%d\n", a[i][n - 1]);
        }
        n--;        //decrementing the last row number
        if(k < m)       //condition to check if more rows are left to traverse
        {
            for(i = n - 1; i >= 0; --i)     //loop to print column from start except the first row elements which have already been traversed(row loop)
            {
                printf("%d\n", a[m - 1][i]);
            }
            m--;        //decrementing the last no of rows
        }
        if(l < n)
        {
            for(i = m - 1; i >= k; i--)     //loop to print the middle elements a(all that is left)(column loop)
            {
                printf("%d\n", a[i][l]);
            }
            l++;        //incrementing the value of l
        }
    }
    return 0;
}
