/* 19) Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
 Unit                                   Charge/unit
22. upto 350                            @1.20
24. 350 and above but less than 600     @1.50
26. 600 and above but less than 800     @1.80
28. 800 and above                       @2.00  */

#include<stdio.h>
main()
{
	int id;
	char name[50];
	float unit;
	
	printf("\n\n\t Enter your id :");
	scanf("%d",&id);
	
	printf("\n\n\t Enter your name :");
	scanf("%s",&name);
	
	printf("\n\n\t Enter the unit :");
	scanf("%f",&unit);
	
	if(unit<350)
	{
		printf("\n\n\t Total charge is : %.2f",unit*1.20);
	}
	else if(unit>=350 && unit<600 )
	{
		printf("\n\n\t Total charge is : %.2f",unit*1.50);
	}
	else if(unit>=600 && unit<800 )
	{
		printf("\n\n\t Total charge is : %.2f",unit*1.80);
	}
	else if(unit>=800 )
	{
		printf("\n\n\t Total charge is : %.2f",unit*2.00);
	}
	else
	{
		printf("\n\n\t Unit is not valid");
	}
}
