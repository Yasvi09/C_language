// 23) C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main()
{
	int n,i,rem,reverse,temp;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	
	temp=n;
	reverse=0;
	
	for(;temp!=0;temp/=10)
	{
		rem=temp%10;
		reverse=reverse*10+rem;
	}
	
	printf("\n\n\t Original number is : %d",n);
	printf("\n\n\t Reverse number is : %d",reverse);
}
