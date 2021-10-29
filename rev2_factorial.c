#include<stdio.h>
int factorial(int n)
{
   int i, fact = 1;
   for(i = 1; i <= n; i++)
   {
        fact = fact * i;
   }
   return fact;
}
int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("The factorial is : %d", fact);
    return 0;
}
