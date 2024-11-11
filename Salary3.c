#include <stdio.h>
int main()
{
    int salary, tax1, tax2, tax3, tax4;
    printf("Enter Your Salary:");
    scanf("%d", &salary);
    tax1 = 0.05 * salary;
    tax2 = 0.05 * 500000 + 0.1 * (salary - 500000);
    tax3 = 0.05 * 500000 + 0.1 * 500000 + 0.2 * (salary - 1000000);
    tax4 = 0.05 * 500000 + 0.1 * 500000 + 0.2 * 1000000 + 0.3 * (salary - 2000000);
    if (salary <= 500000)
        printf("Your tax is :%d", tax1);
    else if (salary > 500000 && salary <= 1000000)
        printf("Your tax is :%d", tax2);
    else if (salary > 1000000 && salary <= 2000000)
        printf("Your tax is :%d", tax3);
    else if (salary > 2000000)
        printf("Your tax is :%d", tax4);
}