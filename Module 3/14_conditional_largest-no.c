// 14) WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int number1,number2,number3;
	
	printf("\n\n\t Enter first number :");
	scanf("%d",&number1);
	
	printf("\n\n\t Enter second number :");
	scanf("%d",&number2);
	
	printf("\n\n\t Enter third number :");
	scanf("%d",&number3);
	
	if(number1>number2)
	{
		if(number1>number3)
		{
			printf("\n\n\t %d the maximum number .",number1);
		}
		else
		{
			printf("\n\n\t %d the maximum number .",number3);
		}
	}
	else
	{
		if(number2>number3)
		{
			printf("\n\n\t %d the maximum number .",number2);
		}
		else
		{
			printf("\n\n\t %d the maximum number .",number3);
		}
	}
}
