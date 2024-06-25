//reverse string

#include<stdio.h>
main()
{
	char str[50],rev_str[50];
	int len,i,j;
	
	printf("\n\n\t Enter String :");
	gets(str);
	
	printf("\n\n\t String is :");
	puts(str);
	
	len=strlen(str);
	
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		rev_str[j]=str[i];
	}
	printf("\n\n\t Reverse string is :");
	puts(rev_str);
}
