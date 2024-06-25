// concate string

#include<stdio.h>
main()
{
	char str[50],str1[50],mrg_str[50];
	int len,len1,i,j;
	
	printf("\n\t Enter String :");
	gets(str);
//	printf("\n\t String is :");
//	puts(str);
	len=strlen(str);
	
	printf("\n\t Enter String :");
	gets(str1);
//	printf("\n\t String is :");
//	puts(str1);
	len1=strlen(str1);
	
	for(i=0;i<len;i++)
	{
		mrg_str[i]=str[i];
	}
	
	for(i=0,j=len;i<len1;i++,j++)
	{
		mrg_str[j]=str1[i];
	}
	
	printf("\n\t Merge string is :");
	puts(mrg_str);
}
