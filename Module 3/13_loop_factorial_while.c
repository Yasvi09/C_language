// 13) calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int i,n,fact=1;
	
	printf("\n\n\t Enter a number to print factorial :");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n\n\t %d",fact);
	
}
