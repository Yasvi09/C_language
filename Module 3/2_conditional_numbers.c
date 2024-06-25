/* 2)  Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 */

#include<stdio.h>
main()
{
	int m,n;
	
	printf("\n\n\t Enter any number :");
	scanf("%d",&m);
	
	if(m>0)
	{
		printf("\n\n\t Number : n=%d",1);
	}
	else if(m<0)
	{
		printf("\n\n\t Number : n=%d",-1);
	}
	else if(m=0)
	{
		printf("\n\n\t Number : n=%d",0);
	}
	else
	{
		printf("\n\n\t Enter valid number...");
	}
}
