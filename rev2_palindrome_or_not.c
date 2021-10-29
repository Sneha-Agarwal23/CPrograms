#include<stdio.h>
int main()
{
    int m, n, r, s;
    printf("Enter the number: \n");
    scanf("%d", &n);
    m = n;
    while(n != 0)
    {
        r = n % 10;
        n = n / 10;
        s = (s * 10) + r;
    }
    if( m == s)
    {
        printf("%d is a palindrome no\n", s);
    }
    else
    {
        printf("%d is not a palindrome no\n", m);
    }
    return 0;
}
