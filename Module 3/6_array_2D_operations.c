// 6) WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int rsize,csize,rsize1,csize1;
	int r,c,k,arr[20][20],arr1[20][20],mul[20][20];
	
	printf("\n\n\t -----First matrix------");
	
	printf("\n\n\t Enter length for rows 1st matrix:");
	scanf("%d",&rsize);
	
	printf("\n\n\t Enter length for cols 1st matrix:");
	scanf("%d",&csize);
	
	for(r=0;r<rsize;r++){
		for(c=0;c<csize;c++){
			printf("\n\n\t Enter arr1[%d][%d] :",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	
	for(r=0;r<rsize;r++){
		for(c=0;c<csize;c++)
		{
			printf(" %d",arr[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\t -----Secpnd matrix------");
	
	printf("\n\n\t Enter length for rows 2nd matrix:");
	scanf("%d",&rsize1);
	
	printf("\n\n\t Enter length for cols 2nd matrix:");
	scanf("%d",&csize1);
	
	for(r=0;r<rsize1;r++){
		for(c=0;c<csize1;c++){
			printf("\n\n\t Enter arr1[%d][%d] :",r,c);
			scanf("%d",&arr1[r][c]);
		}
	}
	
	for(r=0;r<rsize1;r++){
		for(c=0;c<csize1;c++)
		{
			printf(" %d",arr1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\t -----------Addition of the matrix is----------\n\n");
	
	for(r=0;r<rsize1;r++){
		for(c=0;c<csize1;c++){
			printf(" %d",arr[r][c]+arr1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\t -----------Subtraction of the matrix is----------\n\n");
	
	for(r=0;r<rsize1;r++){
		for(c=0;c<csize1;c++){
			printf(" %d",arr[r][c]-arr1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\t -----------Multiplication of the matrix is----------\n\n");
	
	for(r=0;r<rsize1;r++){
		for(c=0;c<csize1;c++){
			mul[r][c]=0;
			for(k=0;k<csize1;k++){
				mul[r][c]+=arr[r][k]*arr1[k][c];
			}
		}
	}
	
	for(r=0;r<rsize1;r++){
		for(c=0;c<csize1;c++){
			printf(" %d",mul[r][c]);
		}
		printf("\n");
	}
}
