//file write

#include<stdio.h>
main()
{
	FILE *p;
	char str[50];
	
	p=fopen("abc.txt","w");
	printf("\n\t Enter name :");
	gets(str);
	
	if(p==NULL)
	{
		printf("\n\t File is not exist.");
	}
	else
	{
		printf("\n\t File is created.");
		fprintf(p,"%s",str);
	}
	fclose(p);
}
