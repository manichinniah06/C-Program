#include <stdio.h>
#include <math.h>
void main()
{
    int x, n, sum = 0;
    printf("Enter x and n:");
    scanf("%d%d", &x, &n);
    int i = 0;
    while (i <= n)
    {
        sum = sum + pow(-1, i) * pow(x, i);
        i++;
    }
    printf("Sum=%d", sum);
}