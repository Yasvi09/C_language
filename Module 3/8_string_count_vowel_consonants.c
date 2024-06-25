// 8)Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
main()
{
	char str[40];
	int i,c=0,v=0;
	
	printf("\n\n\t Enter string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
		str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			v++;
		}
		else
		{
			c++;
		}
	}
	printf("\n\n\t Vowel is : %d",v);
	printf("\n\n\t Consonants is : %d",c);
}

