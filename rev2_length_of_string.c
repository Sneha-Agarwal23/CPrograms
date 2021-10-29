#include<stdio.h>
int main()
{
    char st[10];
    int count = 0;
    printf("Enter the string\n");
    gets(st);
    while(st[count] != '\0')
    {
        count++;
    }
    printf("Length of the string = %d", count);
    return 0;

}
