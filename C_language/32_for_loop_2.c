#include<stdio.h>
main()
{
	int r, c, n;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
