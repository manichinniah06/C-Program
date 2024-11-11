include<stdio.h>

    int a, k;

int main()
{
    int a, k;
    printf("Enter the base and power");
    scanf("%d %d,&a,&k");
    printf("Ans:%d", factpower(a, k));
    return 0;
}

int factpower(int a, k)
{
    int a, k, power;
    if (k == 0)
        return 1;
    else
        power = a * factpower(a, k - 1);
    return power;
}
