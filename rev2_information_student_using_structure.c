#include<stdio.h>
struct student
{
    char name[50];
    int roll;
}s[10];

int main()
{
    int i;
    printf("Enter the information of student:\n");
    for(i = 0; i < 2; ++i )
    {
        printf("Enter the name:\n");
        scanf("%s", s[i].name);
        printf("Enter the roll:\n");
        scanf("%d", &s[i].roll);
    }
    printf("Displaying Information:\n");
    for(i = 0; i < 2; i++)
    {
        printf("\nThe name is:");
        printf("%s", s[i].name);
        printf("\nThe roll:");
        printf("%d", s[i].roll);
    }
    return 0;
}
