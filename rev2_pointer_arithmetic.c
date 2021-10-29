#include<stdio.h>
int main()
{
    int a, b;
    int * p1, * p2;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    printf("Substraction b/w two pointer values : %d\n", *p1 - *p2);
    printf("Addition b/w two pointer values : %d\n", *p1 + *p2);
    printf("Multiplication b/w two pointer values : %d\n", *p1 * *p2);
    printf("Division b/w two pointer values : %d\n", *p1 / *p2);
    return 0;
}
