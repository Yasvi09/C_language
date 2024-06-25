#include<stdio.h>
main()
{
	int arr[3][3], r, c;
	
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\n\t Enter array[%d][%d] : ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",arr[r][c]);
		}
		printf("\n");
	}
}
