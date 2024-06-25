/* 8) WAP to accept the height of a person in centimeters and categorize the
person according to their height. */

#include<stdio.h>
main()
{
	float height;
	
	printf("\n\n\t Enter height :");
	scanf("%f",&height);
	
	if(height<150)
	{
		printf("\n\n\t You are categories as short...");
	}
	else if(height>=150 && height<=170)
	{
		printf("\n\n\t You are categories as average...");
	}
	else if(height>170)
	{
		printf("\n\n\t You are categories as very tall...");
	}
	else
	{
		printf("\n\n\t Invalid height...");
	}
}
