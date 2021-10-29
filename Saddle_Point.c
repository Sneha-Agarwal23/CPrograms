#include<stdio.h>
int main()
{
    int n,m;
    printf("\nInput the number of rows : ");// inputing the no of rows and columns
    scanf("%d",&m);
    printf("\nInput the number of columns : ");
    scanf("%d",&n);
    int arr[m][n];
    int i,j;
    printf("\nInput the matrix \n");        //entering the elements of the matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Matrix is \n");       //printing original matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int s, l, p, f = 0;         //s- smallest l- largest p- position f- flag
    for(i = 0; i < m; i++)
    {
        p = 0;
        s = arr[i][0];      //initializing s with 1st value of each row
        for(j = 0; j < n; j++)      //finding smallest in each row
        {
            if(arr[i][j] < s)
            {
                s = arr[i][j];      //smallest element is stored in s
                p = j;          //storing the column no of smallest of each row in p
            }
        }
        l = 0;
        for(j = 0; j < n; j++)      //finding the largest element in p th column
        {
            if(arr[j][p] > l)
            {
                l = arr[j][p];      //storing it in l
            }
        }
        if(s == l)      //if s and l are the same elements then it is the saddle point
        {
            printf("Saddle point is %d\n", s);
            f++;        //flag is triggered by incrementing
        }
    }
    if(f == 0)// if no saddle point is found(flag not triggered then response is given)
    {
        printf("No saddle point found\n");
    }
    return 0;
}
