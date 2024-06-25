//print array in pointer

#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50},*p,i;
	p=&a;
	
	for(i=0;i<5;i++)
	{
		printf("\n%d ",*p);
		//printf("\n%d ",p);
		//printf("\n%p ",*p);
		p++;
	}
}
