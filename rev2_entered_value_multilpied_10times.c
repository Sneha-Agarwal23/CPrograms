#include<stdio.h>
int main()
{
    int * ptr;
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    ptr = &a;
    printf("10 times valued number is %d", *ptr *10);
    return 0;

}
