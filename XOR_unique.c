#include <stdio.h>

int findUnique(int arr[], int n)
{
    int result = 0;

    for(int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }

    return result;
}

int main()
{
    int arr[] = {2,3,2,4,4};
    int n = 5;

    printf("Unique element: %d", findUnique(arr,n));

    return 0;
}