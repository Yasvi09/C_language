//Factorial : 5! : 5*4*3*2*1 =120

#include<stdio.h>
main()
{
	int i, n, m=1;
	
	printf("\n\n\t Enter a number to print factorial : ");
	scanf("%d",&n);
	
	
	i=1;
	while(i<=n)
	{
		m=m*i;
		//printf("\n\n\t %d",m);
		i++;
	}
	printf("\n\n\t %d",m);	
}
