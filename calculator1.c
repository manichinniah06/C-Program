#include <stdio.h>

int sum(int x, int y);
int subraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main()
{
    int x, y;
    printf("Enter the value of x and y:");
    scanf("%d%d", &x, &y);
    printf("Sum :%d\n", sum(x, y));
    printf("Sub :%d\n", subraction(x, y));
    printf("Multiplication :%d\n", multiplication(x, y));
    printf("Division :%d\n", division(x, y));
}
int sum(int x, int y)
{
    int result = x + y;
    return result;
}
int subraction(int x, int y)
{
    int result = x - y;
    return result;
}
int multiplication(int x, int y)
{
    int result = x * y;
    return result;
}
int division(int x, int y)
{
    int result = x / y;
    return result;
}
