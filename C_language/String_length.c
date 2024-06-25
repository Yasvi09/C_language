// find length of string 

#include<stdio.h>
main()
{
	char c[50];
	int len=0,i;
	
	printf("\n\t Enter String :");
	gets(c);
	
	for(i=0;c[i]!='\0';i++)
	{
		len++;
	}
	printf("\n\n\t Length of the string is : %d",len);
}
