#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a, b\n");
    scanf("%d %d", &a, &b);
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Before swapping: a = %d, b = %d\n", *p1, *p2);
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping: a = %d, b = %d\n", *p1, *p2);
    return 0;

}
