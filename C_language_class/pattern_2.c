/*
A
B B
C C C
D D D D
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
			c++;
		}
		printf("\n");
		r++;
		n++;
		
		
	}
}


