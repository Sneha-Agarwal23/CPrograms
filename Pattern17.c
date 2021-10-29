#include <stdio.h>

int main()
{
    int n,i,j;
    printf(" Enter the value of n\n");// taking the no of rows of rows from user
    scanf("%d",&n);
    int sp = n/2;//initializing the no of spaces on left side of star
    int st = 1 ;//initializing no of stars
    for(i = 1;i <= n; i++)//rows loop
    {
        for(j = 1;j <= sp; j++)//loop for printing space
        {
            if( i == n/2 + 1)//no space will be printed in middle row as it is special in the pattern
            {
                printf("\t*");
            }
            else
            {
                printf("\t");
            }
        }
        for(j = 1; j <= st; j++)//printing stars
        {
            printf("\t*");
        }
        if(i <= n/2 )//incrementing the no of stars until half no of row as required in the pattern
        {
            st++;
        }
        else//decrementing no of stars in second half as required
        {
            st--;
        }
        printf("\n");//changing the line
    }

    return 0;
}
