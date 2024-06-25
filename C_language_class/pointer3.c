//print reverse in pointer

#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50},*p,i;
	p=&a[4];
	
	for(i=0;i<5;i++)
	{
		printf("%d ",*p);
		p--;
	}
}
