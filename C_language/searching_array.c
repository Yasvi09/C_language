// wap to print odd & even values from the array.

#include<stdio.h>
main()
{
	int n,i,n1,status=0;
	int arr[n];
	
	printf("\n\n\t Enter length of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Input arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\t Enter the number you want to search :");
	scanf("%d",&n1);
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==n1)
		{
			status=1;
		}

	}
	
	if(status==1){
		printf("\n\n\t Element found...");
	}
	else{
		printf("\n\n\t Element not found...");
	}
	
}
