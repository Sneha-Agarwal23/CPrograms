#include<stdio.h>
int main()
{
    char st[10];
    printf("Enter the string: \n");
    scanf("%s", st);
    char *ptr = st;
    int i = 0, v = 0, c = 0;
    while(st[i] != '\0')
    {
        if(*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
           v++;
        }
        else
        {
           c++;
        }
        i++;
        ptr++;
    }
    printf("No of vowels : %d\n", v);
    printf("No of consonants: %d\n", c);
    return 0;
}
