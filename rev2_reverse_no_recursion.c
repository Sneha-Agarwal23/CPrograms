#include<stdio.h>
int s = 0, r;
int reverse(int n)
{
    if(n != 0)
    {
        r = n % 10;
        s = (s * 10) + r;
        reverse(n/10);
    }
    else
    {
        return s;
    }
    return s;
}
int main()
{
    int n, x;
    printf("Enter the number: \n");
    scanf("%d", &n);
    x = reverse(n);
    printf("The reverse number is %d", x);
    return 0;
}

