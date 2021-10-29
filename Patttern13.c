#include <stdio.h>

int main()
{
    int n;
    printf("Enter value of n\n");//taking no of rows from user
    scanf("%d",&n);
    int arr[n][n];// for not worrying about blank spaces
    for (int i = 0; i < n; i++)//rows loop
    {
        for (int j = 0; j <= i; j++)//columns loop
        {
            if (i == j || j == 0)//storing 1 at extreme ends(height and hypotenuse) of triangle as a shell as the pattern required
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];//maths formula of pascal
            }
            printf("%d ", arr[i][j]);//printing the array
        }
        printf("\n");//changing the line
    }
    return 0;
}
