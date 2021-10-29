#include <stdio.h>
int main()
{
    int n,m;
    printf("\nInput the number of rows : ");         //inputing the no of rows from user
    scanf("%d",&m);
    printf("\nInput the number of columns : ");      //inputing the no of columns from user
    scanf("%d",&n);
    int arr[m][n];
    int i,j;
    printf("\nInput the matrix \n");        //inputing the matrix elements
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Matrix is \n");       //printing the original matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nSpiral Matrix : ");
    int k = 0, l = 0;
    while(k < m && l < n)           //loop terminates when all the elements have been traversed
    {
        for(i = k; i < m; ++i)      //loop to print the 1st column(row loop)
        {
            printf("%d ",arr[i][l]);
        }
        l++;        //incrementing the value of l
        for(i = l; i < n; i++)      //loop to print the last row(column loop)
        {
            printf("%d ",arr[m - 1][i]);
        }
        m--;        //decrementing the total no of rows
        if(k < m)       //condition to check if more rows are left to traverse
        {
            for(i = m - 1; i >= k; --i)     //loop to print row from start except the first column elements which have already been traversed(column loop)
            {
                printf("%d ",arr[i][n -1]);
            }
            n--;        //decrementing the no of columns
        }
        if(l < n)
        {
            for(i = n - 1; i >= l; i--)         //loop to print the middle elements a(all that is left)(row loop)
            {
                printf("%d ",arr[k][i]);
            }
            k++;        //incrementing the value of k
        }
    }
    return 0;
}
