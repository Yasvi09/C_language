/* 10) Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)  */

#include<stdio.h>
main()
{
	int n,first,last,sum;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	
	sum=first+last;
	
	printf("\n\n\t Sum of first and last digit is : %d",sum);
}
