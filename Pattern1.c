#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n\n");
    scanf("%d", &n);//taking no. of lines to print from user
    for(i = 1; i <= n; i++)//Rows loop|iska ek iteration pe row change hoga
    {
        for(j = 1; j <= i; j++)//columns loop| iska iteration main columns change hoga aur 1 row loop iteration main iske multiple iterations hota hai.
        {
            printf("*\t");//printing star
        }
        printf("\n");//going to next line
    }
    return 0;
}
