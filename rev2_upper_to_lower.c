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
        if(st[i] >= 65 && st[i] <= 90)
        {
            st[i] = st[i] + 32;
        }
        i++;
    }
    printf("String in lower case = %s", st);
    return 0;
}

