// write a program to find greatest number among three.

#include<stdio.h>
main()
{
	int number1,number2,number3;
	
	printf("\n\n\t Enter number1 :");
	scanf("%d",&number1);
	printf("\n\n\t Enter number2 :");
	scanf("%d",&number2);
	printf("\n\n\t Enter number3 :");
	scanf("%d",&number3);
	
	if(number1>number2)
	{
		if(number1>number3)
		{
			printf("\n\n\t %d the greater number .",number1);
		}
		else
		{
			printf("\n\n\t %d the greater number .",number3);
		}
	}
	else
	{
		if(number2>number3)
		{
			printf("\n\n\t %d the greater number .",number2);
		}
		else
		{
			printf("\n\n\t %d the greater number .",number3);
		}
	}
}
