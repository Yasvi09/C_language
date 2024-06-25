// 2) WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
main()
{
	int number[5],i;
	
	printf("\n\n\t --------Enter 5 numbers--------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Number %d is : ",i+1);
		scanf("%d",&number[i]);
	}
	
	printf("\n\n\t The number is :");
	for(i=0;i<5;i++) 
	{
		printf("\n\n\t %d",number[i]);
	}
}
