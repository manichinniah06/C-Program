#include <stdio.h>
int main()
{
    int i = 1;
    float number, sum = 0;
    while (i <= 10)
    {
        printf("Enter n%d: ", i);
        scanf("%f", &number);
        if (number < 0.0)
        {
            break;
        }
        sum += number;
        i++;
    }
    printf("Sum = %.2f", sum);

    return 0;
}