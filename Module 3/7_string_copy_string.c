// 7) Write a program in C to copy one string to another string.

#include<stdio.h>
main()
{
	char str[50],str1[50],str2[50];
	int i;
	
	printf("\n\n\t Enter any string :");
	gets(str);
	
	printf("\n\n\t Original string is : %s",str);
	strcpy(str,"name");
	printf("\n\n\t Copy string is : %s",str);
	
	printf("\n\n\t ----------Not using inbuilt function----------");
	
	printf("\n\n\t Enter any string :");
	gets(str1);
	
	printf("\n\n\t Original string is : %s",str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	
	printf("\n\n\t Copy string is : %s",str2);
}
