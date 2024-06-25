// 3) Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
main()
{
	char str[50];
	int len,i,j;

	printf("\n\t Enter String :");
	gets(str);
	
	len=strlen(str);
	
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		printf("%c\n",str[i]);
	}
	
}
