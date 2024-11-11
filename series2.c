#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, sum = 0;
    printf("Enter the value of x and n:");
    scanf("%d%d", &x, &n);
    int i = 0;
    while (i <= n)
    {
        sum = sum + pow(-1, n) * pow(x, n);
        i++;
    }
    printf("Sum=%d", sum);
    return 0;
}