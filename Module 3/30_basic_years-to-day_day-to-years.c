// 30) WAP to convert years into days and days into years

#include <stdio.h>
main() 
{
    int choice;
    float years, days;

    printf("\n\n\t Choose an option:");
    printf("\n\n\t 1. Convert years to days");
    printf("\n\n\t 2. Convert days to years");
    printf("\n\n\t Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        printf("\n\n\t Enter the number of years: ");
        scanf("%f", &years);

        days = years * 365.25;

        printf("\n\n\t %f years is equal to --> %f days.", years, days);
        
    } 
	else if (choice == 2) 
	{
        printf("\n\n\t Enter the number of days: ");
        scanf("%f", &days);

        years = days / 365.25;

        printf("\n\n\t %f days is equal to --> %f years.", days, years);
    } 
	else 
	{
        printf("----Enter valid choice----");
    }

}


