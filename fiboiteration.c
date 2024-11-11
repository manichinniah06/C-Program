#include <stdio.h>

int fibo(int N);

int main()
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Sum of Fibonacci Series : %d", fibo(N));
    return 0;
}

int fibo(int N)
{
    int f1 = 0, f2 = 1, f3 = 0, sum = 1;
    for (int i = 0; i < (N - 2); i++)
    {
        f3 = f1 + f2;
        sum = sum + f3;
        f1 = f2;
        f2 = f3;
    }
    return sum;
}
