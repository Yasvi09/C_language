// MultiDimentional array

#include<stdio.h>
main()
{
	int k,r,c,arr[3][2][2];
	//[arr no][row size][col size]
	
	for(k=0;k<3;k++)
	{
		printf("\n\n\t Matrix [%d] ",k+1);
		
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				printf("\n\n\t arr[%d][%d][%d] : ",k,r,c);
				scanf("%d",&arr[k][r][c]);
			}
		}
	}
	
	for(k=0;k<3;k++)
	{
		printf("\n\n\t Matrix [%d] \n\n",k+1);
		
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				printf(" %d",arr[k][r][c]);
			}
			printf("\n");
		}
	}
}
