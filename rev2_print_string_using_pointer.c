#include<stdio.h>
#include<string.h>
int main()
{
    char st[10];
    printf("Enter the string\n");
    scanf("%s", st);
    char *ptr = st;
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
