/* 5) WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include<stdio.h>
main()
{
	int n1,n2,i,j,choice,temp1,temp2;
	int arr1[n1],arr2[n2];
	printf("\n\t Enter size of array 1:");
	scanf("%d",&n1);
	
	
	for(i=0;i<n1;i++)
	{
		printf("\n\t Input arr[%d] :",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\t Enter size of array 2 :");
	scanf("%d",&n2);

	
	for(i=0;i<n2;i++)
	{
		printf("\n\t Input arr[%d] :",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\n\t Enter 1 for ascending or 2 for descending order :");
	scanf("%d",&choice);
	
	//sorting of array 1
	
	switch(choice){
		case 1:
			for(i=0;i<n1;i++)
			{
				for(j=i+1;j<n1;j++)
				{
					if(arr1[i]>arr1[j]){
						temp1=arr1[i];
						arr1[i]=arr1[j];
						arr1[j]=temp1;
					}
				}
			}
			
			printf("\n\t Sorted Array 1 in ascending: ");
    		for (i =0; i<n1;i++) {
        		printf("\n\t arr[%d] : %d",i,arr1[i]);
    		}
			
			for(i=0;i<n2;i++)
			{
				for(j=i+1;j<n2;j++)
				{
					if(arr2[i]>arr2[j]){
						temp2=arr2[i];
						arr2[i]=arr2[j];
						arr2[j]=temp2;
					}
				}
			}
			printf("\n\t Sorted Array 2 in ascending: ");
    		for (i =0; i<n2;i++) {
        		printf("\n\t arr[%d] : %d",i,arr2[i]);
    		}
			break;
		case 2:
			for(i=0;i<n1;i++)
			{
				for(j=i+1;j<n1;j++)
				{
					if(arr1[i]<arr1[j]){
						temp1=arr1[i];
						arr1[i]=arr1[j];
						arr1[j]=temp1;
					}
				}
			}
			printf("\n\t Sorted Array 1 in descending: ");
    		for (i =0; i<n1;i++) {
        		printf("\n\t arr[%d] : %d",i,arr1[i]);
    		}
			
			for(i=0;i<n2;i++)
			{
				for(j=i+1;j<n2;j++)
				{
					if(arr2[i]<arr2[j]){
						temp2=arr2[i];
						arr2[i]=arr2[j];
						arr2[j]=temp2;
					}
				}
			}
			printf("\n\t Sorted Array 2 in descending: ");
    		for (i =0; i<n2;i++) {
        		printf("\n\t arr[%d] : %d",i,arr2[i]);
    		}
			break;
		default:
			printf("\n\t Invalid choice...");
	}
	
   
	
}
