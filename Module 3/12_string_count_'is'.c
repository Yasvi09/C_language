/* 12) Write a program in C to find the number of times a given word 'is' appears in
the given string. */

#include<stdio.h>
main()
{
	char str[50];
	int i,count=0;
	
	printf("\n\n\t Enter String :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='i' && str[i+1]=='s')
		{
			count++;
		}
	}
	printf("\n\n\t %d times 'is' word appear.",count);
}
