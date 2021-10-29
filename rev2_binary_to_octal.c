#include<stdio.h>
#include<math.h>
int binaryToDecimal(long long n)
{
    int d = 0;
    int i = 1, r;
    while(n != 0)
    {
        r = n % 10;
        d = d + (r * i);
        n = n / 10;
        i = i * 2;
    }
    return d;
}
long long decimalToOctal(int n)
{
    long long o = 0;
    int r, i = 1;
    while(n != 0)
    {
        r = n % 8;
        n = n / 8;
        o = o + (i * r);
        i = i * 10;
    }
    return o;
}
int main()
{
    long long n;
    printf("Enter a binary number: \n");
    scanf("%d", &n);
    int d = binaryToDecimal(n);
    printf("%10d in binary = %10d in octal", n, decimalToOctal(d));
    return 0;
}

