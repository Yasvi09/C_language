// 15) Calculate sum of 10 numbers using of while loop

#include<stdio.h>
main()
{
	int n,sum=0,i;
	
	printf("\n\n\t Enter 10 number :");
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t Number %d is :",i);
		scanf("%d",&n);
		sum=sum+i;
	}
	printf("\n\n\t Sum is : %d",sum);
}
