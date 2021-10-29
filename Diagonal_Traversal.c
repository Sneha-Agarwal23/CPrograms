#include<stdio.h>
int main()
{
    int n,m;
    printf("\nInput the number of rows : ");// inputing the no of rows and columns
    scanf("%d",&m);
    printf("\nInput the number of columns : "); //n==m should be compulsory as the pattern should be for a square matrix
    scanf("%d",&n);
    int arr[m][n];
    int i,j;
    printf("\nInput the matrix \n");        //inputing the elements of the matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix is \n");             //printing original matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal Traversal\n");
    int g = 0;                          //variable to store the gap between i and j in each iteration as required in pattern question
    for(g = 0; g < m; g++)          //gap increases gradually
    {
        for(i = 0, j = g; j < n; i++, j++)      //double loop so that i and j increase together
        {
            printf("\n%d ",arr[i][j]);
        }
    }
    return 0;
}
