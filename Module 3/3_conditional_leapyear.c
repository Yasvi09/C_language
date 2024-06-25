// 3) WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year;
	
	printf("\n\n\t Enter any year :");
	scanf("%d",&year);
	
	if((year%4==0)&&((year%400==0)||(year%100!=0)))
	{
		printf("\n\n\t %d is a leap year...",year);
	}
	else
	{
		printf("\n\n\t %d is not a leap year...",year);
	}
}
