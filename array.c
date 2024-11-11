#include <stdio.h>

int main()
{
    int arr[5];
    int a, b, c, d, e;
    printf("Enter the data:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    arr[0] = a;
    arr[1] = b;
    arr[3] = c;
    arr[4] = d;
    arr[5] = e;
    int length = sizeof(a) / sizeof(a[0]);
}