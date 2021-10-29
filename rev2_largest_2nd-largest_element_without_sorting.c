#include<stdio.h>
int main()
{
    int n, i;
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
    }
    int max1 = arr[0], max2 = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max1)
        {
            max1 = arr[i];
        }
    }
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }

    }

    printf("Largest element of the array is: %d\n", max1);
    printf("Second largest element of the array is: %d\n", max2);

    return 0;
}
