// 27) Convert days into months

#include <stdio.h>
main() 
{
    int days, months;
    
    printf("\n\n\t Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;

    printf("\n\n\t %d days is approximately equal to %d months .", days, months);
    
}

