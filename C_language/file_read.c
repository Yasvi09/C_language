// file read

#include<stdio.h>
main()
{
	FILE *p;
	int a;
	char str[50],str1[50],str2[50];
	
	p=fopen("abc.txt","r");
	
	if(p==NULL)
	{
		printf("\n\t File is not exist.");
	}
	else
	{
		printf("\n\t File is created.");
		fscanf(p,"%s %s %s %d",str,str1,str2,&a);
		printf("\n\t Name is %s %s %s %d",str,str1,str2,a);
	}
	fclose(p);
}
