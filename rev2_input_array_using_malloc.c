#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i;
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    int *ptr = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Elements of array are: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;

}
