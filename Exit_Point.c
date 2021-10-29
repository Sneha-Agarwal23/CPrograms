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
    printf("\nInput the matrix \n");             //entering the elements of the matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Matrix is \n");           //printing original matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int dir = 0;      //0 for east, 1 for south, 2 for west, 3 for north
    while(arr[i][j])
    {
        dir = (dir + arr[i][j] % 4);        //the value of dir changes only upon encountering 1 as 1 % 4 = 1 and 0 % 4 = 0
        if(dir == 0)    //east
        {
            j++;        //column number increses
        }
        else if(dir == 1)       //south
        {
            i++;            //row number increases
        }
        else if(dir == 2)       //west
        {
            j--;                //column number decreases
        }
        else if(dir == 3)       //north
        {
            i--;                //row no. decreses
        }
        if(i < 0)               //adjusting the value of row no for suitable printing
        {
            i++;
            break;
        }
        else if(j < 0)          //adjusting the value of column no for suitable printing
        {
            j++;
            break;
        }
        else if(i == m)         //adjusting the value of row no for suitable printing
        {
            i--;
            break;
        }
        else if(j == n)         //adjusting the value of column no for suitable printing
        {
            j--;
            break;
        }
    }
    printf("Exit Point is (%d,%d)", ++i, --j);
    return 0;
}
