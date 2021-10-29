#include<stdio.h>
#include<math.h>
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
    int n;
    printf("Enter a decimal number: \n");
    scanf("%d", &n);
    printf("%d in decimal = %10d in octal", n, decimalToOctal(n));
    return 0;
}

