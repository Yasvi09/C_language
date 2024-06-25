#include<stdio.h>
main()
{
	int m1[3][3], m2[3][3], r, c;


	printf("\n\n\n\t ----------- Matrix-1 -------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter array[%d][%d] : ",r,c);
			scanf("%d",&m1[r][c]);
		}
	}
	
	printf("\n\n\n\t ----------- Matrix-2 -------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter array[%d][%d] : ",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
	
	printf("\n\n\n\t ----------- Matrix-1 -------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\t ----------- Matrix-2 -------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m2[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\t ----------- Addition of two Matrices -------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m1[r][c]+m2[r][c]);  
		}
		printf("\n");
	}
}
