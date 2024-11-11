#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i < 5; i++)
    {
        printf("Outer:%d\n", i);
        int j;
        for (j = 1; j < 5; j++)
        {
            printf(" Inner:%d\n", j);
        }
    }
}