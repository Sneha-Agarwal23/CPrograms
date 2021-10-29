#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the length of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original Array: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of the array elements is : %d\n", sum);
    return 0;
}

