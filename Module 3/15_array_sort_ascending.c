// 15) Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
main()
{
	int i,j;
	int arr[5],temp;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Input arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n\n\t -----Printed array in ascending------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t arr[%d] : %d ",i,arr[i]);
	}
}
