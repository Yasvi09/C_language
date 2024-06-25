/* 21) Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable */

#include<stdio.h>
main()
{
	int n1,n2,temp,a,b;
	
	printf("\n\n\t Enter first number :");
	scanf("%d",&n1);
	printf("\n\n\t Enter second number :");
	scanf("%d",&n2);
	
	printf("\n\n\t -----Using third variable-----");
	
	printf("\n\n\t Before swapping : n1=%d , n2=%d",n1,n2); 
	
	temp=n1;
	n1=n2;
	n2=temp;
	
	printf("\n\n\t After swapping : n1=%d , n2=%d",n1,n2);
	
	
	printf("\n\n\t -----Without Using third variable-----");
	
	printf("\n\n\t Enter first number :");
	scanf("%d",&a);
	printf("\n\n\t Enter second number :");
	scanf("%d",&b);
	
	printf("\n\n\t Before swapping : a=%d , b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n\t After swapping : a=%d , b=%d",a,b);
	
}
