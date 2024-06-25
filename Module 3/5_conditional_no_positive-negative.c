// 5) Check Number Is Positive or Negative

#include<stdio.h>
main()
{
	int n;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n\n\t Number is positive...");
	}
	else if(n<0)
	{
		printf("\n\n\t Number is negative...");
	}
	else
	{
		printf("\n\n\t Number is zero...");
	}
}
