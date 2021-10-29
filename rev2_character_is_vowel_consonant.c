#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The entered character %c is a vowel", ch);
    }
    else
    {
        printf("The entered character %c is a consonant", ch);
    }
    return 0;
}
