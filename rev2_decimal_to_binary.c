#include<stdio.h>
#include<math.h>
long long decimalToBinary(int n)
{
    long long b = 0;
    int r, i = 1;
    while(n != 0)
    {
        r = n % 2;
        n = n / 2;
        b = b + (i * r);
        i = i * 10;
    }
    return b;
}

int main()
{
    int n;
    printf("Enter a decimal number: \n");
    scanf("%d", &n);
    printf("%d in decimal = %10d in binary", n, decimalToBinary(n));
    return 0;
}
