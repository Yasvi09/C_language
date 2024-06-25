// 13)WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include<stdio.h>
main()
{
	int n[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			printf("\n\n\t %d is even number...",n[i]);
		}
		else
		{
			printf("\n\n\t %d is odd number...",n[i]);
		}
	}
}
