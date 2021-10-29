#include<stdio.h>
int main()
{
    char st[] = "Pizza";
    char ch;
    int c = 0;
    printf("Enter the character\n");
    scanf("%c", &ch);
    for( int i = 0; i < strlen(st); i++)
    {
        if(st[i] == ch)
        {
            printf("The character %c is present", ch);
            c++;
            break;
        }
    }
    if(c == 0)
    {
        printf("The character %c is not present", ch);
    }
    return 0;
}
