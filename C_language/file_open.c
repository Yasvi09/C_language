// file create,open

#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("abc.txt","w");
	if(p==NULL)
	{
		printf("\n\t File is not exist.");
	}
	else
	{
		printf("\n\t File is created.");
	}
}
