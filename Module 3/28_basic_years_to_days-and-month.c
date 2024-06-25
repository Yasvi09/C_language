// 28) Convert years into days and months

#include <stdio.h>
main()
{
    int years, months, days;

    printf("\n\n\t Enter number of years: ");
    scanf("%d", &years);

    // Convert years to months (assuming 1 year = 12 months)
    months = years * 12;

    // Convert years to days (assuming 1 year = 365.25 days on average)
    days = years * 365.25;

    // Output the result
    printf("\n\n\t %d years is equal --> to %d months and %d days\n", years, months, days);
}


