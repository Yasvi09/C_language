/* 6) Write a program in C to count the total number of alphabets, digits and special
characters in a string. */

#include<stdio.h>
main()
{
	char str[50];
	int w=0,d=0,s=0,len,i;
	
	printf("\n\n\t Enter string :");
	gets(str);
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
		{
			w++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}
		else
		{
			s++;
		}
	}
	printf("\n\n\t Total number of alphabats is : %d",w);
	printf("\n\n\t Total number of digit is : %d",d);
	printf("\n\n\t Total number of special character is : %d",s);
}

