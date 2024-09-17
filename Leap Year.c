#include <stdio.h>

int main()
{
    int year;
    printf("Enter number of days in that year: ");
    scanf("%d", &year);
    if (year == 366)
    {
        printf("This is a Leap Year", year);
    }
    else
    {
        printf("This is not Leap Year", year);
    }
}
