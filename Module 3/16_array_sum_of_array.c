// 16) Accept 5 numbers from user and perform sum of array 

#include<stdio.h>
main()
{
	int i,n[5],sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum+=n[i];
	}
	printf("\n\n\t Sum of the number : %d ",sum);
}
