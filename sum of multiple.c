#include <stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter the upper limit: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 != 0 && i % 5 != 0)
            continue;
        sum += i;
    }
    printf("Total sum: %d\n", sum);
    return 0;
}
