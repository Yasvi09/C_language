/*

A
B C
D E F
G H I J
K L M N O

*/
#include<stdio.h>
main()
{
	int r, c;
	char n='A';
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf(" %c",n); //A
			n++; 
			c++;
		}
		printf("\n");
	
		r++;	
	}	
}
