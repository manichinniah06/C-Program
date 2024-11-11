#include <stdio.h>

int factorial(int k);

int main()
{
    int k;
    printf("Enter the number: ");
    scanf("%d", &k);
    printf("Factorial:  %d", factorial(k));
    return 0;
}

int factorial(int k)
{
    int fact = 0;
    if (k == 0)
        return 1;
    else if (k == 1)
        return 1;
    else
        fact = k * factorial(k - 1);
    return fact;
}