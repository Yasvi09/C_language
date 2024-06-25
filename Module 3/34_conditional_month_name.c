// 34)  Accept month number and display month name

#include<stdio.h>
main()
{
	int month_number;
	
	printf("\n\n\t Enter any number for month(1-12) :");
	scanf("%d",&month_number);
	
		if(month_number == 1) 
		{
            printf("\n\n\t January");
        } 
		else if (month_number == 2) 
		{
            printf("\n\n\t February");
        } 
		else if (month_number == 3) 
		{
            printf("\n\n\t March");
        } 
		else if (month_number == 4) 
		{
            printf("\n\n\t April");
        } 
		else if (month_number == 5) {
            printf("\n\n\t May");
        } 
		else if (month_number == 6) 
		{
            printf("\n\n\t June");
        }
		else if (month_number == 7) 
		{
            printf("\n\n\t July");
        } 
		else if (month_number == 8) 
		{
            printf("\n\n\t August");
        } 
		else if (month_number == 9) 
		{
            printf("\n\n\t September");
        } 
		else if (month_number == 10) 
		{
            printf("\n\n\t October");
        } 
		else if (month_number == 11) 
		{
            printf("\n\n\t November");
        } 
		else if (month_number == 12) 
		{
            printf("\n\n\t December");
        }
        else
        {
        	printf("\n\n\t Please enter valid number between 1 to 7...");
		}
}
