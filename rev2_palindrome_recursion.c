#include<stdio.h>
int r, s = 0;
int palindrome(int n)
{
    if(n != 0)
    {
        r = n % 10;
        s = (s * 10) + r;
        palindrome(n/10);
    }
    else
    {
        return s;
    }
    return s;
}
int main()
{
     int n, m;
     printf("Enter the number: \n");
     scanf("%d", &n);
     m = palindrome(n);
     if( m == n)
     {
         printf("%d is a palindrome no\n", n);
     }
     else
     {
         printf("%d is not a palindrome no\n", n);
     }
     return 0;
}
