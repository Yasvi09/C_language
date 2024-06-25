#include<stdio.h>
main()
{
	int number;
	printf("\n\n\t Enter a number : ");
	scanf("%d",&number);
	
	if(number==0)
	{
		printf("\n\n\t Number is zero.");
	}
	
	else if(number>0)
	{
		printf("\n\n\t Number is positive.");
	}
	
	else
	{
		printf("\n\n\t Number is negative.");
	}
	
}
