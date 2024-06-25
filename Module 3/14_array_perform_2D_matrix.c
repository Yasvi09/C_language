// 14) Perform 2D matrix array

#include<stdio.h>
main()
{
	int arr[20][20],r,c,arr1[20][20];
	int rsize,csize,rsize1,csize1;
	
	 printf("\n\n\t ----------First matrix----------");
	 
	 printf("\n\n\t Enter length for rows 1st matrix:");
	 scanf("%d",&rsize);
	 
	 printf("\n\n\t Enter length for cols 1st matrix:");
	 scanf("%d",&csize);
	 
	 
	 for(r=0;r<rsize;r++)
	 {
	 	for(c=0;c<csize;c++)
	 	{
	 		printf("\n\n\t Enter array1[%d][%d] :",r,c);
	 		scanf("%d",&arr[r][c]);
		 }
	 }
	 
	 for(r=0;r<rsize;r++)
	 {
	 	for(c=0;c<csize;c++)
	 	{
	 		printf(" %d ",arr[r][c]);
		 }
		printf("\n");
	 }
	 
	 printf("\n\n\t ----------Second matrix----------");
	 
	 printf("\n\n\t Enter length for rows for 2nd matrix:");
	 scanf("%d",&rsize1);
	 
	 printf("\n\n\t Enter length for cols 2nd matrix:");
	 scanf("%d",&csize1);
	 
	 for(r=0;r<rsize1;r++)
	 {
	 	for(c=0;c<csize1;c++)
	 	{
	 		printf("\n\n\t Enter array2[%d][%d] :",r,c);
	 		scanf("%d",&arr1[r][c]);
		 }
	 }
	 
	 for(r=0;r<rsize1;r++)
	 {
	 	for(c=0;c<csize1;c++)
	 	{
	 		printf(" %d ",arr1[r][c]);
		 }
		printf("\n");
	 }
	 
	 printf("\n\n\t ----------Addition of the matrix is-----------\n\n");
	 
	 for(r=0;r<rsize1;r++)
	 {
	 	for(c=0;c<csize1;c++)
	 	{
	 		printf(" %d ",arr[r][c]+arr1[r][c]);
		 }
		printf("\n");
	 }
	 
	 printf("\n\n\t ----------Subtraction of the matrix is-----------\n\n");
	 
	 for(r=0;r<rsize1;r++)
	 {
	 	for(c=0;c<csize1;c++)
	 	{
	 		printf(" %d ",arr[r][c]-arr1[r][c]);
		 }
		printf("\n");
	 }
	 
	 printf("\n\n\t ----------Addition of the matrix is-----------\n\n");
	 
	 for(r=0;r<rsize1;r++)
	 {
	 	for(c=0;c<csize1;c++)
	 	{
	 		printf(" %d ",arr[r][c]+arr1[r][c]);
		 }
		printf("\n");
	 }
	 
	 printf("\n\n\t ----------Subtraction of the matrix is-----------\n\n");
	 
	 for(r=0;r<rsize1;r++)
	 {
	 	for(c=0;c<csize1;c++)
	 	{
	 		printf(" %d ",arr[r][c]-arr1[r][c]);
		 }
		printf("\n");
	 }
	 
}


