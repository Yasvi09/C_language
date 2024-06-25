// wap to print odd & even values from the array.


#include<stdio.h>
main()
{
	int n,i;
	int arr[n];
	
	printf("\n\n\t Enter length of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Input arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\t Even numbers are :");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("\n\n\t arr[%d] : %d ",i,arr[i]);
		}
		
	}
	
	printf("\n\n\t Odd numbers are :");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("\n\n\t arr[%d] : %d ",i,arr[i]);
		}
		
	}


}
