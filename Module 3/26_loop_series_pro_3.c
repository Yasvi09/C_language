// 26) (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int i,j,n,sum=0,current_sum;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		current_sum=0;
		for(j=1;j<=i;j++)
		{
			current_sum+=j;
		}
		sum+=current_sum;
		
		if(i==1)
		{
			printf("(%d)",current_sum);
		}
		else
		{
			printf("+(%d)",current_sum);
		}
	}
	printf("\n\n\t Sum of the series is : %d",sum);
}
