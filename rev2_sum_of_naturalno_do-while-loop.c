#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int i = 1;
    do{
        printf("The natural no: %d\n", i);
        sum = sum + i;
        i++;
    }while(i <= n);
    printf("The sum of the numbers: %d\n", sum);
    return 0;
}
