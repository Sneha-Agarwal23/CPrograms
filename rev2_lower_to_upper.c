#include<stdio.h>
#include<string.h>
int main()
{
    char st[10];
    int i = 0;
    printf("Enter the string: \n");
    scanf("%s", st);
    while(st[i] != '\0')
    {
        if(st[i] >= 97 && st[i] <= 122)
        {
            st[i] = st[i] - 32;
        }
        i++;
    }
    printf("String in upper case = %s", st);
    return 0;
}
