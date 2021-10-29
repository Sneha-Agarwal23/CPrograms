#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    int *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    if(*p1 >= *p2 && *p1 >= *p3)
    {
        printf("%d is the greatest", *p1);
    }
    else if(*p2 >= *p1 && *p2 >= *p3)
    {
        printf("%d is the greatest", *p2);
    }
    else
    {
        printf("%d is the greatest", *p3);
    }
    return 0;
}

