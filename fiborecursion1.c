#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Sum of fibonacci Series:  %d", fibonacci(n));
}

int fibonacci(int n)
{
    int sum = 1;
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        sum = sum + fibonacci(n - 1) + fibonacci(n - 2);
    return sum;
}