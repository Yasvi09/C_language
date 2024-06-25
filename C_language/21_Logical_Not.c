#include<stdio.h>
main()
{
	int number;
	
	printf("\n\n\t Enter number : ");
	scanf("%d",&number);
	
	if(!(number%2==0))
		printf("\n\n\t Odd number...");
	else
		printf("\n\n\t Even number...");
}
