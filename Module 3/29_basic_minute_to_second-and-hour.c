// 29) Convert minutes into seconds and hours

#include <stdio.h>
main() 
{
    int minutes;
    int hours, seconds;

    printf("\n\n\t Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;

    hours = minutes / 60;

    printf("%d minutes is equal to --> %d hours or %d seconds.\n", minutes, hours, seconds);

}

