#include <stdio.h>

int sum(int k);
int main()
{
    int k;
    printf("Enter the value k: ");
    scanf("%d", &k);
    int result = sum(k);
    printf("Result: %d\n", result);
    return 0;
}

int sum(int k)
{
    int result = 0;
    for (int i = 0; i <= k; i++)
    {
        result = i + result;
    }
    return result;
}
