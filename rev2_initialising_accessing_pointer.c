#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    int * ptr;
    ptr = &a;
    printf("The value of a = %d\n", *ptr);
    printf("The address of a = %u\n", ptr);
    return 0;

}
