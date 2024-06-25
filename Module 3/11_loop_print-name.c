// 11) Accept 5 names from user at run time.
 
#include<stdio.h>
main()
{
	char name[5][56];
	int i;
	
	printf("\n\n\t -----Enter 5 name -------");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Name %d is :",i+1);
		scanf("%s",&name[i]);
	}
	
	printf("\n\n\t Name is :");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t %s",name[i]);
	}
	
}
