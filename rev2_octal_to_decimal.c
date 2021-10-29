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

int main()
{
    long long n;
    printf("Enter a octal number: \n");
    scanf("%d", &n);
    printf("%10d in octal = %d in decimal", n, octalToDecimal(n));
    return 0;
}

