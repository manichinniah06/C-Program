#include <stdio.h>
int main()
{
    float basic, gross, da, hra;
    printf("enter the basic salary of an employee:");
    scanf("%f", &basic);
    if (basic <= 10000)
    {
        da = basic * (0.8);
        hra = basic * (0.2);
    }
    else if (basic <= 20000)
    {
        da = basic * (0.9);
        hra = basic * (0.25);
    }
    else if (basic > 20000)
    {
        da = basic * (0.95);
        hra = basic * (0.3);
    }
    gross = basic + da + hra;
    printf("Total gross=%.2f", gross);
}