#include<stdio.h>
#include<string.h>
int main()
{
    int i, j;
    char st[10];
    printf("Enter the string: \n");
    scanf("%s", st);
    char temp;
    int n = strlen(st);
    for(i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(st[i] > st[j])
            {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
    printf("Sorted string is: %s\n", st);
    return 0;
}
