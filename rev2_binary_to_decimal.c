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

int main()
{
    long long n;
    printf("Enter a binary number: \n");
    scanf("%d", &n);
    printf("%10d in binary = %d in decimal", n, binaryToDecimal(n));
    return 0;
}
