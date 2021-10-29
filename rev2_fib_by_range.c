#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the range\n");
    scanf("%d", &n);
    int t1 = 0, t2 = 1, nextTerm;
    printf("%d ,%d,", t1, t2);
    nextTerm = t1 + t2;
    while(nextTerm <= n)
    {
        printf("%d,", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
