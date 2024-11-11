#include <stdio.h>

int sum(int k);
int main()
{
    int k;
    printf("Enter the value k:");
    scanf("%d", &k);
    int result = sum(k);
    printf("Result:%d", result);
    return 0;
}
int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}