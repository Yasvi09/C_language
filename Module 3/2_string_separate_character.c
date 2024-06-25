// 2) Write a program in C to separate individual characters from a string.

#include<stdio.h>
main()
{
	char str[50];
	int i;
	
	printf("\n\n\t Enter String :");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c\n",str[i]);
	}
}

