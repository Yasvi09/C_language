// comparing string 

#include<stdio.h>
main()
{
	char str[50],str1[50];
	int len,len1,i,temp=0;
	
	printf("\n\t Enter String :");
	gets(str);
	len=strlen(str);
	
	printf("\n\t Enter String :");
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
		
		if(temp==1)
		{
			printf("\n\t String are matched");
		}
		else
		{
			printf("\n\t String are not matched");
		}
	}
	else
	{
		printf("\n\t String are not matched");
	}
	
}
