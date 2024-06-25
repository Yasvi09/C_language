// 31) Convert kilometers into meters

#include<stdio.h>
main()
{
	double km,meter;
	
	printf("\n\n\t Enter distance in kilometer :");
	scanf("%lf",&km);
	
	meter=km*1000;
	printf("\n\n\t Distance in meter is : %lf",meter);
}
