// multiplication of array 

#include<stdio.h>
main()
{
	int arr[20][20],r,c,arr1[20][20],k,mul[2][2];
	
	printf("\n\n\t ----------First matrix----------");
	 
	 for(r=0;r<2;r++)
	 {
	 	for(c=0;c<2;c++)
	 	{
	 		printf("\n\n\t Enter array1[%d][%d] :",r,c);
	 		scanf("%d",&arr[r][c]);
		 }
	 }
	 
	 for(r=0;r<2;r++)
	 {
	 	for(c=0;c<2;c++)
	 	{
	 		printf(" %d ",arr[r][c]);
		 }
		printf("\n");
	 }
	 
	 printf("\n\n\t ----------Second matrix----------");
	 
	 
	 for(r=0;r<2;r++)
	 {
	 	for(c=0;c<2;c++)
	 	{
	 		printf("\n\n\t Enter array2[%d][%d] :",r,c);
	 		scanf("%d",&arr1[r][c]);
		 }
	 }
	 
	 for(r=0;r<2;r++)
	 {
	 	for(c=0;c<2;c++)
	 	{
	 		printf(" %d ",arr1[r][c]);
		 }
		printf("\n");
	 }
	 
	 printf("\n\n\t ----------Multiplication of the matrix is----------\n\n");
	 
	 for(r=0;r<2;r++)
	 {
	 	for(c=0;c<2;c++)
	 	{
	 		mul[r][c]=0;
	 		for(k=0;k<2;k++)
	 		{
	 			mul[r][c]+=arr[r][k]*arr1[k][c];
			}
		}
	 	
	}
	for(r=0;r<2;r++)
	 {
	 	for(c=0;c<2;c++)
	 	{
	 		printf(" %d ",mul[r][c]);
		 }
		printf("\n");
	 }
}
