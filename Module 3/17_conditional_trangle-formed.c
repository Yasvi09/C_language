/* 17) Write a C program to check whether a triangle can be formed with the given
values for the angles */

#include<stdio.h>
main()
{
	int angle1,angle2,angle3,sum;
	
	printf("\n\n\t Enter value of angle 1 :");
	scanf("%d",&angle1);
	
	printf("\n\n\t Enter value of angle 2 :");
	scanf("%d",&angle2);
	
	printf("\n\n\t Enter value of angle 3 :");
	scanf("%d",&angle3);
	
	sum=angle1+angle2+angle3;
	
	if(sum==180)
	{
		printf("\n\n\t The angle forms a triangle");
	}
	else
	{
		printf("\n\n\t The angle do not forms a triangle");
	}
}

