// 7) Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int marks;
	
	printf("\n\n\t Enter marks :");
	scanf("%d",&marks);
	
	if(marks>=70)
	{
		printf("\n\n\t Congratulations you are pass...");
	}
	else
	{
		printf("\n\n\t You are fail...");
	}
}

