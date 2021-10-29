#include<stdio.h>
int main()
{
    int arr[] = {2,5,7,9,5};
    int l = sizeof(arr) / sizeof(arr[0]);
    printf("The no of elements in the array is : %d", l);
    return 0;
}
