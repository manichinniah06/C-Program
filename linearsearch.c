#include <stdio.h>

int search(int arr[], int N, int num)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == num)
            return i;
    return -1;
}

int main()
{
    int arr[] = {25, 50, 75, 100, 98, 97, 77, 66, 55, 44};
    int num;
    printf("Enter any number:\n");
    scanf("%d", &num);
    int N = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, N, num);
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