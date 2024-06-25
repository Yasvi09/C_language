// 22) C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main()
{
	int i,n,rem,reverse=0;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	
	for(i=0;n!=0;n/=10)
	{
		rem=n%10;
		reverse=reverse*10+rem;
	}
	printf("\n\n\t Reverese number is : %d ",reverse);
}

