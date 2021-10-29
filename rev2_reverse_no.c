#include<stdio.h>
int main()
{
    int r, n, s;
    printf("Enter the number: \n");
    scanf("%d", &n);
    while(n != 0)
    {
        r = n % 10;
        n = n / 10;
        s = (s * 10) + r;
    }
    printf("The reverse number is %d", s);
    return 0;
}
