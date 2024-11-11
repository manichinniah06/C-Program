#include <stdio.h>

int main()
{
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12)
    {
        printf("Invalid month\n");
    }
    else
    {
        int days;
        switch (month)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0)
                days = 29; // Leap year
            else
                days = 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        }
        printf("Month %d has %d days.\n", month, days);
    }

    return 0;
}
