// 5) Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
main()
{
	char str[40],str1[40];
	int i,len,len1,temp=0;
	
	printf("\n\n\t Enter first string :");
	gets(str);
	len=strlen(str);
	
	printf("\n\n\t Enter second string :");
	gets(str1);
	len1=strlen(str1);
	
	if(len==len1)
	{
		for(i=0;i<len;i++)
		{
			if(str[i]==str1[i])
			{
				temp=1;
			}
			else
			{
				temp=0;
				break;
			}
		}
		if(temp==1){
			printf("\n\n\t String are matched");
		}
		else{
			printf("\n\n\t String are not matched");
		}
	}
	else
	{
		printf("\n\n\t String are not matched");
	}
}
