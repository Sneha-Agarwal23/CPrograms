#include<stdio.h>
#include<math.h>
int octalToDecimal(long long n)
{
    int d = 0;
    int i = 1, r;
    while(n != 0)
    {
        r = n % 10;
        d = d + (r * i);
        n = n / 10;
        i = i * 8;
    }
    return d;
}
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
    long long n;
    printf("Enter a octal number: \n");
    scanf("%d", &n);
    int d = octalToDecimal(n);
    printf("%10d in octal = %10d in binary", n, decimalToBinary(d));
    return 0;
}


