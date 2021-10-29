#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    char s3[100];
    int i = 0, j = 0;
    printf("First string: %s\n", s1);
    printf("Second string: %s\n", s2);
    while(s1[i] != '\0')
    {
        s3[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i] != '\0')
    {
        s3[j] = s2[i];
        i++;
        j++;
    }
    s3[j] = '\0';
    printf("The concatenated string is: %s\n", s3);
    return 0;
}
