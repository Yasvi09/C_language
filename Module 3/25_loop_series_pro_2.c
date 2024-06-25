// 25) (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("(%d*%d)",i,i);
		sum+=i*i;
		if(i!=n)
		{
			printf("+");
		}
	}
	printf("\n\n\t Sum is : %d",sum);
}
