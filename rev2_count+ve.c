#include<stdio.h>
int main()
{
    int arr[] = {2,-4,6,8,-1,-7,9,3};
    int count = 0;
    for( int i = 0; arr[i]; i++)
    {
        if(arr[i] > 0)
        {
            count++;
        }
    }
    printf("The no of positive integers : %d", count);
    return 0;
}
