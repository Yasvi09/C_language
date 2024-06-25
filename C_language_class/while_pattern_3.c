/*
A
B C
D E F
G H I J
*/

#include<stdio.h>
main()
{
	int r,c;
	r=1;
	char n;
	n='A';
	while(r<=4)
	{   
		
		c=1;
		while(c<=r)
		{
			printf("%c ",n);
			n++;
			c++;
		}
		printf("\n");
		r++;
		
		
		
	}
}


