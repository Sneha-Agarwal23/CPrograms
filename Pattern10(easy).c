#include <stdio.h>

int main()
{
    int n,i,j;
    printf(" Enter the value of n\n");//taking no of rows from user
    scanf("%d",&n);
    int sp = n/2;//initializing no of spaces in left half before star
    int st = 1 ;//initializing no of star
    for(i = 1;i <= n; i++)//row loop
    {
        for(j = 1;j <= sp; j++)//printing spaces in left side right side ignored
        {
            printf("\t");
        }
        for(j = 1;j <= st; j++)//loop to print stars(middle stars are ignored using the if condition)
        {

            if(j > 1 && j < st)//checking for middle portion between 1st and last star to print spaces in between two stars
            {
                printf("\t");
            }
            else
            {
                printf("\t*");
            }

        }
        if(i <= n/2)//incrementing the no of stars and decreasing the space as required in the pattern concept
        {
            sp--;
            st += 2;
        }
        else//decrementing the no of stars and increasing the space as required in the pattern concept
        {
            sp++;
            st -= 2;
        }
        printf("\n");//changing lines
    }
    return 0;
}
