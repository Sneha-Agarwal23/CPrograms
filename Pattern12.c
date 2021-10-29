#include<stdio.h>
int main()
{
    int n, i, j, x = 0;//x=0 as fibonacci terms start from 0
    printf("Enter the value of n\n");
    scanf("%d", &n);//taking no. of lines to print from user
    for(i = 1; i <= n; i++)//Rows loop|iska ek iteration pe row change hoga
    {
        for(j = 1; j <= i; j++)//columns loop| iska iteration main columns change hoga aur 1 row loop iteration main iske multiple iterations hota hai.
        {
            printf("%d\t", Fibonacci(x));  //printing fibonacci series terms
            x++;       //incrementing the fibonacci term
        }
        printf("\n");//going to next line
    }
    return 0;
}
int Fibonacci(int n)    //this function returns us the fibonacci values for the xth term
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}

