#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = arr[0];
    int *j = arr;

    printf("%d\n", i);
    printf("%p\n", &i);
    printf("%d\n", *j);
    printf("%p\n", *j);
    return 0;
}
