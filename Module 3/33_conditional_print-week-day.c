// 33)  WAP to input the week number and print week day.

#include<stdio.h>
main()
{
	int n;
	
	printf("\n\n\t Enter any week number(1-7):");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\n\n\t Monday");
	}
	else if(n==2)
	{
		printf("\n\n\t Tuesday");
	}
	else if(n==3)
	{
		printf("\n\n\t Wednesday");
	}
	else if(n==4)
	{
		printf("\n\n\t Thursday");
	}
	else if(n==5)
	{
		printf("\n\n\t Friday");
	}
	else if(n==6)
	{
		printf("\n\n\t Saturday");
	}
	else if(n==7)
	{
		printf("\n\n\t Sunday");
	}
	else
	{
		printf("\n\n\t Please enter valid week number...");
	}
}
