#include <stdio.h>

int main()
{
    int n,i,j;
    printf(" Enter the value of n\n");// taking no of rows from user
    scanf("%d",&n);
    int sp = n/2;//initializing space variable with no of spaces in 1st row
    int st = 1 ;//initializing star variable with no of spaces in 1st row
    for(i = 1;i <= n; i++)//row loop
    {
        for(j = 1;j <= sp; j++)//loop to print spaces on left side of star
        {
            printf("\t");//right side spaces are automatically generated due to changing the line
        }
        for(j = 1;j <= st; j++)//loop to print star
        {
            printf("\t*");
        }
        if(i <= n/2)//incrementing the no of stars as required in the pattern until the row no. reaches half i.e the upper triangle part of diamond
        {
            sp--;//only concerned with left side spaces
            st += 2;
        }
        else//decrementing the no of stars in lower triangle part of the diamond
        {
            sp++;
            st -= 2;
        }
        printf("\n");//changing the line
    }
    return 0;
}
