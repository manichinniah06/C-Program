#include <stdio.h>
void main()
{
    int age, salary, increment1, increment2, increment3, newsalary1, newsalary2, newsalary3;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your salary:");
    scanf("%d", &salary);
    increment1 = (5 * salary) / 100;
    increment2 = (10 * salary) / 100;
    increment3 = (3 * salary) / 100;
    newsalary1 = increment1 + salary;
    newsalary2 = increment2 + salary;
    newsalary3 = increment3 + salary;
    if (age >= 50 && salary >= 60000)
        printf("Your increment is %d and new salary is %d", increment1, newsalary1);
    if (age >= 50 && salary < 60000)
        printf("Your increment is %d and new salary is %d", increment2, newsalary2);
    if (age < 50)
        printf("Your increment is %d and new salary is %d", increment3, newsalary3);
}