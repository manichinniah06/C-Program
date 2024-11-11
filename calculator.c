#include <stdio.h>

void sum();
void subraction();
void multiplication();
void division();
float x, y;

void main()
{
    printf("Enter x and y:");
    scanf("%f%f", &x, &y);
    sum();
    subraction();
    multiplication();
    division();
}
void sum()
{
    float result = x + y;
    printf("Sum :%f\n", result);
}
void subraction()
{
    float result = x - y;
    printf("Subration :%f\n", result);
}
void multiplication()
{
    float result = x * y;
    printf("Multiplication :%f\n", result);
}
void division()
{
    float result = x / y;
    printf("Division :%f\n", result);
}