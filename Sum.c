#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter a number:");
    scanf("%d", &num);
    sum = 0;
    int i = 1;
    while (i < num + 1)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of first %d numbers is :%d", num, sum);
    return 0;
}