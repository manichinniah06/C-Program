#include <stdio.h>

int binarysearch(int arr[], int low, int high, int num)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num)
        {
            return 1;
        }
        else
        {
            if (num <= arr[mid])
            {
                return binarysearch(arr, low, mid - 1, num);
            }
            else
            {
                return binarysearch(arr, mid + 1, high, num);
            }
        }
    }
    else
        return -1;
}

int main()
{
    int arr[] = {25, 50, 75, 100, 98, 97, 77, 66, 55, 44};
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    int N = sizeof(arr) / sizeof(arr[0]);
    int result = binarysearch(arr, 0, N - 1, num);
    if (result == -1)
    {
        printf("The Element is not present in the array");
    }
    else
    {
        printf("The Element is present in the array");
    }
    return 0;
}