#include<stdio.h>
#include<string.h>
int main()
{
    char s[10], rev[10];
    printf("Enter the string: \n");
    scanf("%s", s);
    int l = strlen(s);
    for(int i = 0, j = l-1; i < l; i++, j--)
    {
        rev[i] = s[j];
    }
    printf("Reverse String: %s", rev);
    return 0;
}
