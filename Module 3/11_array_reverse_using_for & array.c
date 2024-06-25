// 11)WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include<stdio.h>
main()
{
	int n[5];
	int i;
	
	printf("\n\n\t ---Enter 5 numbers---");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Number %d :",i+1);
		scanf("%d",&n[i]);
	}
	
	printf("\n\n\t -----Number in reverse order-----\n\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",n[i]);
	}
}
