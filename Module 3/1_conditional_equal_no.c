/* 1) Write a C program to accept two integers and check whether they are equal
or not */

#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("\n\n\t Enter first number :");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter second number :");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		printf("\n\n\t Numbers are equal....");
	}
	else
	{
		printf("\n\n\t Numbers are not equal..");
	}
	
}
