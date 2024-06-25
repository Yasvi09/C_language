#include<stdio.h>
main()
{
	int arr[20][20], r, c;
	int rsize, csize;
	printf("\n\n\t How many rows required for Matrix : ");
	scanf("%d",&rsize);
	printf("\n\n\t How many cols required for Matrix : ");
	scanf("%d",&csize);
	for(r=0;r<rsize;r++)
	{
		for(c=0;c<csize;c++)
		{
			printf("\n\n\t Enter array[%d][%d] : ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	for(r=0;r<rsize;r++)
	{
		for(c=0;c<csize;c++)
		{
			printf(" %d",arr[r][c]);
		}
		printf("\n");
	}
}
