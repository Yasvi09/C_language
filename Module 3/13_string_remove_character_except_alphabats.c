// 13) Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
main()
{
	char str[50];
	int i;
	
	printf("\n\n\t Enter String :");
	gets(str);
	
	printf("\n\n\t New String is :");
	
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='A'&& str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
			printf("%c",str[i]);
		}
		else
		{
			continue;
		}
	}
	
}
