// 1) Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
main()
{
	char c[50];
	int len=0,i;
	
	printf("\n\n\t Enter a string :");
	gets(c);
	
	for(i=0;c[i]!='\0';i++)
	{
		len++;
	}
	printf("\n\n\t Length of the string is : %d",len);
}
