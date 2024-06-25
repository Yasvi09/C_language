// wap to make sum of array element.

#include<stdio.h>
main()
{
	int n,i;
	int sum=0;
	int arr[n];
	
	printf("\n\n\t Enter length of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Input arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		printf("\n\n\t arr[%d] : %d",i,arr[i]);
		
	}
	printf("\n\n\t Sum of array element is : %d",sum);
}
