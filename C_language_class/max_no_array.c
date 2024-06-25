// wap to find max number in array

#include<stdio.h>
main()
{
	int n,i,max,pos;
	int arr[n];
	
	
	printf("\n\n\t Enter length of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Input arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			pos=i;
		}
	}
	printf("\n\n\t Maximum number is arr[%d]: %d",pos,max);
	
}
