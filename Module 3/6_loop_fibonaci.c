// 6) WAP to print Fibonacci series up to given numbers

#include<stdio.h>
main()
{
	int n, a, b, c, i;
	
	printf("\n\n\t Enter a number to print fibonacci series : ");
	scanf("%d",&n);
	
	a=0;
	b=1;
	printf("\n\n\t %d %d", a, b);
	
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		
		i++;
	}
}
