#include <stdio.h>

int main()
{
    int n,i,j;
    printf(" Enter the value of n\n");//taking the no of rows as input
    scanf("%d",&n);
    int sp = n/2;//calculating the no of spaces on left side
    int st = 1 ;//this program is morphed from diamond so star liye the
    int v = 1;//variable to control the incrementation/decrement row wise
    for(i = 1;i <= n; i++)//row loop
    {
        for(j = 1;j <= sp; j++)//printing spaces on left side (right side spaces ignored)
        {
            printf("\t");
        }
        int c = v;//variable to control the incrementation/decrement column wise
        for(j = 1;j <= st; j++)
        {
            printf("\t%d",c);
            if(j <= st/2)//half tak value increase ho rha hai pattern main
            {
                c++;
            }
            else//uske baad decrease
            {
                c--;
            }

        }
        if(i <= n/2)//decrementing the spaces and changing the value as required
        {
            sp--;
            st += 2;
            v++;
        }
        else//lower half incrementing spaces and decreasing value
        {
            sp++;
            st -= 2;
            v--;
        }
        printf("\n");//changing the line
    }
}
