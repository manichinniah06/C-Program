#include <stdio.h>
int evenodd(int x);
int x;

void main()
{
    printf("%d is even", evenodd(4));
    printf("%d is odd", evenodd(5));
}
int evenodd(int x)
{
    if (x % 2 == 0)
        return 4;
    else
        return 5;
}