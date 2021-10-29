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
    int min1 = arr[0], min2 = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] < min1)
        {
            min1 = arr[i];
        }
    }
    for(i = 1; i < n; i++)
    {
        if(arr[i] < min2 && arr[i] > min1)
        {
            min2 = arr[i];
        }

    }

    printf("Smallest element of the array is: %d\n", min1);
    printf("Second smallest element of the array is: %d\n", min2);

    return 0;
}

