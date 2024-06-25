/*
1
0 0 
1 1 1
0 0 0 0 
1 1 1 1 1

*/
#include<stdio.h>
main()
{
	int r, c;

	r=1;
	while(r<=5)
	{
	
		c=1;
		while(c<=r)
		{
			if(!(r%2==0))
				printf("1 ");
			else
				printf("0 ");
			c++;
		}
		printf("\n");
		r++;	
	}	
}
