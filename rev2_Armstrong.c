#include<stdio.h>
int main()
{
    int m, n, r, s = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    m = n;
    while(n != 0)
    {
        r = n % 10;
        n = n / 10;
        s = s + (r * r * r);
    }
    if(m == s)
    {
        printf("%d is an armstrong number", s);
    }
    else
    {
        printf("%d is not an armstrong number", s);
    }
    return 0;
}
