#include <stdio.h>

int main()
{
    int n,i,j;
    printf(" Enter the value of n\n");//taking no of rows from user
    scanf("%d",&n);
    int sp = 0;//damroo wala pattern se morphed program
    int st = n ;//initializing the no of stars
    for(i = 1;i <= n; i++)//row loop
    {
        for(j = 1;j <= sp; j++)//printing spaces on left side of stars right side is ignored
        {
            printf("\t");
        }
        for(j = 1; j <= st; j++)// printing stars
        {
            if(i > 1 && i <= n/2 && j > 1 && j < st)//condition to remove stars in the middle in the first half of the rows as required in the pattern
            {
                printf("\t");
            }
            else
            {
                printf("\t*");
            }
        }
        if(i <= n/2)//incrementing the no of spaces until the middle row
        {
            sp++;
            st -= 2;
        }
        else// decrementing thereafter the middle row
        {
            sp--;
            st += 2;
        }
        printf("\n");// changing the line
    }
    return 0;
}
