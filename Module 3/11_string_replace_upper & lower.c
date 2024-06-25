/* 11) Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa. */

#include<stdio.h>
main()
{
	int i;
	char str[50];
	
	printf("\n\n\t Enter String :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]-'A'+'a';
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-'a'+'A';
		}
	}
	printf("\n\n\t Modified sentance is : %s",str);
}
