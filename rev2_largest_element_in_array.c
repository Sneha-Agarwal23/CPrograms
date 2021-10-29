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
    int temp;
    for(i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Largest Element Of The Array Is: %d\n", arr[0]);
    return 0;
}
