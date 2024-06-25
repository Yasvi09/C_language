/*  3)  WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */

#include<stdio.h>
main()
{
	int number[10],i;
	int oddsum,evensum,oddcount,evencount=0;
	
	printf("\n\n\t -----Enter 10 numbers-----");
	
	for(i=0;i<10;i++)
	{
		printf("\n\t Number %d is :",i+1);
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(number[i]%2==0)
		{
			evencount++;
			evensum+=number[i];
		}
		else
		{
			oddcount++;
			oddsum+=number[i];
		}
	}
	
	printf("\n\n\t Number of even number is : %d",evencount);
	printf("\n\n\t Number of odd number is : %d",oddcount);
	printf("\n\n\t Sum of even number is : %d",evensum);
	printf("\n\n\t Sum of odd number is : %d",oddsum);
	
	
}
