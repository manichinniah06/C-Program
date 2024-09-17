#include <stdio.h>
int main()
{
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
        max = num1;

    else
        max = num2;

    printf("Maximum among all two numbers = %d", max);

    return 0;
}
