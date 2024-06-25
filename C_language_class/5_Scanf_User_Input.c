	//Area of Circle : Pi*R*R
#include<stdio.h>
main()
{
	float pi=3.14, area;
	int r;
	
	printf("\n\n\t INput any number for radious : ");
	scanf("%d",&r);
	
	area=pi*(r*r);
	
	printf("\n\n\t pi = %.2f",pi);
	printf("\n\n\t radious = %d",r);
	printf("\n\n\t Area of Circle : %.3f",area);
		
}
