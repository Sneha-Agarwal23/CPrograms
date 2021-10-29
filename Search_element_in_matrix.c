#include<stdio.h>
int main()
{
    int a[10][10], i, j, m, n, s, x = 0;//x is flag
    printf("Enter the rows and columns of the matrix:\n");// inputing the no of rows and columns
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix:\n");//inputing the elements of matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" Original matrix\n");//printing original matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element to be searched\n");//scanning no to be searched
    scanf("%d", &s);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(s == a[i][j])//comparing searched element with each element of matrix
            {
                printf("Element found at position (%d,%d)", i+1, j+1);//if found the printed with position
                x++;//flag triggered by incrementing
            }
        }
    }
    if(x == 0)//else the flag remains same and response is given
    {
        printf("Element not found\n");
    }
    return 0;
}
