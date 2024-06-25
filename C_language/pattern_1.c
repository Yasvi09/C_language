/*
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>
main()
{
	int r,c,n;
	r=1;
	n=1;
	while(r<=4)
	{
		c=1;
		while(c<=r)
		{
			printf("%d ",n);
			n++;
			c++;
		}
		printf("\n");
		r++;
		
	}
}


