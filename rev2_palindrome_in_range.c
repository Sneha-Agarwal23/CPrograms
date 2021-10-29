#include<stdio.h>
int main()
{
    int m, n, r, s, i;
    printf("Enter the range: \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        m = i, s = 0;
        while(m != 0)
        {
            r = m % 10;
            m = m / 10;
            s = (s * 10) + r;
        }
        if( i == s)
        {
            printf("%d is a palindrome no\n", i);
        }
    }
    return 0;
}
