// 4) Write a program in C to count the total number of words in a string.

#include<stdio.h>
main()
{
	char str[50],i;
	int word_count=0;
	
	printf("\n\n\t Enter String :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '){
			word_count++;
		}
		
	}
	printf("%d",word_count+1);
	
}

