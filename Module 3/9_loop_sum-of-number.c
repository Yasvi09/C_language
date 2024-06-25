// 9)  Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
main()
{
	int n,rem,sum=0;
	
	printf("\n\n\t Enter number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n\n\t Sum of number is : %d",sum);
}




