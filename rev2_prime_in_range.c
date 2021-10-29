#include<stdio.h>
void prime(int n)
{
    int c = 0;
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            c++;
            break;
        }
    }
    if(c == 0)
    {
        printf("%d is a prime number\n", n);
    }
}
int main()
{
    int r;
    printf("Enter the range: \n");
    scanf("%d", &r);
    int i;
    for(i = 2; i <= r; i++)
    {
        prime(i);
    }
    return 0;
}
