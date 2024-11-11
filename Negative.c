#include <stdio.h>
void main()
{
    int num;
    printf("enter any number:");
    scanf("%d", &num);
    if (num < 0)
        printf("%d is a negative number", num);
    else if (num > 0)
        printf("%d is a positive number", num);
    if (num > 0 && num % 2 == 0)
        printf("%d is an even number", num);
    else if (num > 0 && num % 2 != 0)
        printf("%d is an odd number", num);
}